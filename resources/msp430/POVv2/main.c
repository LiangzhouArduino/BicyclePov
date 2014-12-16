#include  <msp430g2452.h>
#include "u2dl2rC.h"
#include "string.h"
char strDisplay[]="A B C D ";//要显示的内容
char charBuffer[32];
char strLength;
void main(void)
{
	WDTCTL = WDTPW + WDTHOLD;                 // Stop WDT
	strLength=strlen(strDisplay);
	if (CALBC1_8MHZ ==0xFF || CALDCO_8MHZ == 0xFF)                                     
	{  
		while(1);							// If calibration constants erased
		//do not load, trap CPU!!
	} 
	BCSCTL1 = CALBC1_8MHZ;                    // Set range
	DCOCTL = CALDCO_8MHZ;                     // Set DCO step + modulation */
	P1SEL=0;
	P2SEL=0;
	P1DIR |= 0xff;                            // P1 output
	P2DIR |= 0xff;
	P1OUT=0XFF;
	P2OUT=0XFF;
	CCTL0 = CCIE;                             // CCR0 interrupt enabled
	CCR0 = 1500;		//修改该值以调整周期
	TACTL = TASSEL_2 + MC_1;                  // SMCLK, upmode
	_BIS_SR(LPM1_bits + GIE);                 // Enter LPM1 w/ interrupt
}

// Timer A0 interrupt service routine
#pragma vector=TIMER0_A0_VECTOR
__interrupt void Timer_A (void)
{
	static unsigned i=0;							//迭代变量
	if((i&0x001F)==0){								//if(i%32==0)
		printChar(charBuffer,strDisplay[i>>5]);
	}
	P2OUT=charBuffer[(i++)&0x001F];
	P1OUT=charBuffer[(i++)&0x001F];
	if(i==(strLength<<5))i=0;						//if(i==strLength*32)
}