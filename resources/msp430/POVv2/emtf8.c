//emtf8.c file define all chars information.

typedef unsigned int WORD;


void encoding_00(char*Screen_ptr) 		//°¢
{

	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x7f;
	*Screen_ptr++=0xff;
	*Screen_ptr++=0x40;
	*Screen_ptr++=0x10;
	*Screen_ptr++=0x44;
	*Screen_ptr++=0x08;
	*Screen_ptr++=0x5b;
	*Screen_ptr++=0x10;
	*Screen_ptr++=0x60;
	*Screen_ptr++=0xe0;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x4f;
	*Screen_ptr++=0xf0;
	
	*Screen_ptr++=0x48;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x48;
	*Screen_ptr++=0x20;
	*Screen_ptr++=0x4f;
	*Screen_ptr++=0xf2;
	*Screen_ptr++=0x40;
	*Screen_ptr++=0x01;
	*Screen_ptr++=0x7f;
	*Screen_ptr++=0xfe;
	*Screen_ptr++=0x40;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x40;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;
	
};

void encoding_01(char*Screen_ptr) 		//ÃÖ
{

	*Screen_ptr++=0x40;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x47;
	*Screen_ptr++=0xc2;
	*Screen_ptr++=0x44;
	*Screen_ptr++=0x41;
	*Screen_ptr++=0x44;
	*Screen_ptr++=0x42;
	*Screen_ptr++=0x7c;
	*Screen_ptr++=0x7c;
	*Screen_ptr++=0x02;
	*Screen_ptr++=0x08;
	*Screen_ptr++=0x04;
	*Screen_ptr++=0x30;
	*Screen_ptr++=0x18;
	*Screen_ptr++=0xc0;

	*Screen_ptr++=0xf0;
	*Screen_ptr++=0x02;
	*Screen_ptr++=0x10;
	*Screen_ptr++=0x01;
	*Screen_ptr++=0x13;
	*Screen_ptr++=0xfe;
	*Screen_ptr++=0x10;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x10;
	*Screen_ptr++=0x80;
	*Screen_ptr++=0x14;
	*Screen_ptr++=0x60;
	*Screen_ptr++=0x18;
	*Screen_ptr++=0x18;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;
	
};

void encoding_02(char*Screen_ptr) 		//ÍÓ
{

	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x7f;
	*Screen_ptr++=0xff;
	*Screen_ptr++=0x40;
	*Screen_ptr++=0x10;
	*Screen_ptr++=0x44;
	*Screen_ptr++=0x08;
	*Screen_ptr++=0x5b;
	*Screen_ptr++=0x10;
	*Screen_ptr++=0x60;
	*Screen_ptr++=0xe0;
	*Screen_ptr++=0x04;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x1b;
	*Screen_ptr++=0xfc;

	*Screen_ptr++=0x10;
	*Screen_ptr++=0x22;
	*Screen_ptr++=0x90;
	*Screen_ptr++=0x22;
	*Screen_ptr++=0x70;
	*Screen_ptr++=0x42;
	*Screen_ptr++=0x10;
	*Screen_ptr++=0x82;
	*Screen_ptr++=0x11;
	*Screen_ptr++=0x02;
	*Screen_ptr++=0x14;
	*Screen_ptr++=0x1e;
	*Screen_ptr++=0x18;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x00;
	
};

void encoding_03(char*Screen_ptr) 		//·ð
{

	*Screen_ptr++=0x01;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x06;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x1f;
	*Screen_ptr++=0xff;
	*Screen_ptr++=0xe0;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x10;
	*Screen_ptr++=0xc1;
	*Screen_ptr++=0x13;
	*Screen_ptr++=0x42;
	*Screen_ptr++=0x12;
	*Screen_ptr++=0x4c;
	*Screen_ptr++=0xff;
	*Screen_ptr++=0xf0;

	*Screen_ptr++=0x12;
	*Screen_ptr++=0x40;
	*Screen_ptr++=0x12;
	*Screen_ptr++=0x40;
	*Screen_ptr++=0xff;
	*Screen_ptr++=0xff;
	*Screen_ptr++=0x12;
	*Screen_ptr++=0x40;
	*Screen_ptr++=0x12;
	*Screen_ptr++=0x48;
	*Screen_ptr++=0x1e;
	*Screen_ptr++=0x44;
	*Screen_ptr++=0x00;
	*Screen_ptr++=0x78;
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

