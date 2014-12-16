//zkmy.c file define all chars information.

typedef unsigned int WORD;
void encoding_00(char*Screen_ptr) 		//ец
{

	*Screen_ptr++=0x00;
	*Screen_ptr++=0x08;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x08;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x09;
	*Screen_ptr++=0x2f;
	*Screen_ptr++=0xfa;
	*Screen_ptr++=0x2a;
	*Screen_ptr++=0xac;
	*Screen_ptr++=0x2a;
	*Screen_ptr++=0xa8;
	*Screen_ptr++=0x2a;
	*Screen_ptr++=0xa8;
	*Screen_ptr++=0xfa;
	*Screen_ptr++=0xa8;

	*Screen_ptr++=0x2a;
	*Screen_ptr++=0xa8;
	*Screen_ptr++=0x2a;
	*Screen_ptr++=0xa8;
	*Screen_ptr++=0x2a;
	*Screen_ptr++=0xac;
	*Screen_ptr++=0x2f;
	*Screen_ptr++=0xfa;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x09;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x08;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x08;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;

};

void encoding_01(char*Screen_ptr) 		//Пе
{

	*Screen_ptr++=0x08;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x30;
	*Screen_ptr++=0x02;
	*Screen_ptr++=0x22;
	*Screen_ptr++=0x02;
	*Screen_ptr++=0x24;
	*Screen_ptr++=0x82;
	*Screen_ptr++=0x28;
	*Screen_ptr++=0x82;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x82;
	*Screen_ptr++=0xa0;
	*Screen_ptr++=0x82;
	*Screen_ptr++=0x60;
	*Screen_ptr++=0xfe;

	*Screen_ptr++=0x20;
	*Screen_ptr++=0x82;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x82;
	*Screen_ptr++=0x28;
	*Screen_ptr++=0x82;
	*Screen_ptr++=0x24;
	*Screen_ptr++=0x82;
	*Screen_ptr++=0x22;
	*Screen_ptr++=0x02;
	*Screen_ptr++=0x28;
	*Screen_ptr++=0x02;
	*Screen_ptr++=0x30;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;

};

void encoding_02(char*Screen_ptr) 		//Ую
{

	*Screen_ptr++=0x08;
	*Screen_ptr++=0x02;
	*Screen_ptr++=0x08;
	*Screen_ptr++=0x44;
	*Screen_ptr++=0x0f;
	*Screen_ptr++=0xa8;
	*Screen_ptr++=0xf8;
	*Screen_ptr++=0x10;
	*Screen_ptr++=0x08;
	*Screen_ptr++=0x68;
	*Screen_ptr++=0x0f;
	*Screen_ptr++=0x84;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x81;
	*Screen_ptr++=0x03;
	*Screen_ptr++=0x01;

	*Screen_ptr++=0x1c;
	*Screen_ptr++=0x02;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x02;
	*Screen_ptr++=0xff;
	*Screen_ptr++=0xe4;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x08;
	*Screen_ptr++=0x10;
	*Screen_ptr++=0x30;
	*Screen_ptr++=0x08;
	*Screen_ptr++=0xc0;
	*Screen_ptr++=0x06;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;

};

void encoding_03(char*Screen_ptr) 		//га
{

	*Screen_ptr++=0x20;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x40;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x80;
	*Screen_ptr++=0x21;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x27;
	*Screen_ptr++=0xff;
	*Screen_ptr++=0x3c;
	*Screen_ptr++=0x90;
	*Screen_ptr++=0xe4;
	*Screen_ptr++=0x90;
	*Screen_ptr++=0x24;
	*Screen_ptr++=0x90;

	*Screen_ptr++=0x24;
	*Screen_ptr++=0x90;
	*Screen_ptr++=0x24;
	*Screen_ptr++=0x92;
	*Screen_ptr++=0x24;
	*Screen_ptr++=0x91;
	*Screen_ptr++=0x27;
	*Screen_ptr++=0xfe;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;

};
void printChar(char*Screen_ptr,char c){
	switch(c){
		
		case 'A':encoding_00(Screen_ptr);break;
		case 'B':encoding_01(Screen_ptr);break;
		case 'C':encoding_02(Screen_ptr);break;
		case 'D':encoding_03(Screen_ptr);break;
		default :for(int i=0;i<32;i++)Screen_ptr[i]=0;
	}
}


