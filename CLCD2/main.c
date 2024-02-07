#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"DIO_interface.h"
#include"CLCD_interface.h"
#include<util/delay.h>
#include"PORT_interface.h"

void main (void)
{

	PORT_voidInit();
	CLCD_voidIntialization();

	char Hello[]={"Hello"};
	char statement1[]={"I'm"};
	char statement2[]={"Rokba"};
	char play[]={"I can play "};
	char football[]={"football"};
	char dance[]={"I can dance "};
	char roadblock[]={"jump roadblocks"};
	char kill[]={"Don't Kill me"};
	char RIP[]={"RIP Rokba"};


	u8 Local_u8Iterator ;
	u8 Local_u8Iterator1;
	u8 Local_u8Iterator2;
	u8 Local_u8Iterator3;


	u8 Pattern[8]={0b00001110,  // Rokba
			0b00001110,
			0b00000100,
			0b00011111,
			0b00000100,
			0b00011111,
			0b00010001};

	u8 Pattern2[8]=   {0b00001110,  // Rokba play football & Run by Lift leg
			0b00001110,
			0b00000101,
			0b00011111,
			0b00000100,
			0b00011111,
			0b00010000};

	u8 Pattern3[8]=   {0b00000000,   // Ball At rokba's foot
			0b00000000,
			0b00000000,
			0b00000000,
			0b00011000,
			0b00011000,
			0b00000000};

	u8 Pattern4[8]=   {0b00000000,   // Ball At sky
			0b00000000,
			0b00011000,
			0b00011000,
			0b00000000,
			0b00000000,
			0b00000000};

	u8 Pattern5[8]=   {0b00001110,   // dance right
			0b00001110,
			0b00010101,
			0b00001110,
			0b00000110,
			0b00001111,
			0b00001001};

	u8 Pattern6[8]=   {0b00001110,   // dance left
			0b00001110,
			0b00010101,
			0b00001110,
			0b00001100,
			0b00011110,
			0b00010010};

	u8 Pattern7[8]=   {0b00001110,  // Rokba Run by right leg
			0b00001110,
			0b00000101,
			0b00011111,
			0b00000100,
			0b00011111,
			0b00000001};

	u8 Pattern8[8]=   {0b00000000,  // roadblock
			0b00000000,
			0b00001110,
			0b00001110,
			0b00001110,
			0b00011111,
			0b00011111};

	u8 Pattern9[8]=   {0b00011111,  // pistol
			0b00011111,
			0b00011010,
			0b00011010,
			0b00011000,
			0b00011000,
			0b00011000};

	u8 Pattern10[8]=   {0b00000000,  // bullet
			0b00000000,
			0b00000011,
			0b00011111,
			0b00000011,
			0b00000000,
			0b00000000};

	u8 Pattern11[8]={0b00011111,  // Rokba is killed
			0b00001111,
			0b00000110,
			0b00011111,
			0b00000100,
			0b00011111,
			0b00010001};

	u8 Pattern12[8]={0b00000100,  // Rokba is died
			0b00010110,
			0b00001111,
			0b00011110,
			0b00010001,
			0b00001000,
			0b00001000};




	while(1)
	{
		CLCD_u8WriteSpecialCharacter(Pattern,0,0,3);
		_delay_ms(10);
		CLCD_u8GoToXY(0,7);
		CLCD_u8SendString(Hello);
		CLCD_u8GoToXY(1,5);
		CLCD_u8SendString(statement1);
		CLCD_u8GoToXY(1,9);
		CLCD_u8SendString(statement2);

		_delay_ms(200);


		CLCD_u8SendCommand(0b00000001);


		CLCD_u8SendString(play);
		CLCD_u8GoToXY(1,0);
		CLCD_u8SendString(football);

		for(Local_u8Iterator1=0;Local_u8Iterator1<=5;Local_u8Iterator1++)
		{
			CLCD_u8WriteSpecialCharacter(Pattern3,0,1,11);
			CLCD_u8WriteSpecialCharacter(Pattern2,1,1,10);
			_delay_ms(10);

			CLCD_u8WriteSpecialCharacter(Pattern4,3,1,11);
			CLCD_u8WriteSpecialCharacter(Pattern,2,1,10);
			_delay_ms(10);

		}

		CLCD_u8SendCommand(0b00000001);

		CLCD_u8SendString(dance);
		for(Local_u8Iterator2=0;Local_u8Iterator2<=7;Local_u8Iterator2++)
		{
			CLCD_u8WriteSpecialCharacter(Pattern5,0,1,7);
			_delay_ms(10);
			CLCD_u8WriteSpecialCharacter(Pattern6,0,1,7);
			_delay_ms(10);
		}


		CLCD_u8SendCommand(0b00000001);





		/* Against roadblocks */




		CLCD_u8SendString(roadblock);
		_delay_ms(150);
		CLCD_u8SendCommand(0b00000001);





		for(Local_u8Iterator3=0;Local_u8Iterator3<2;Local_u8Iterator3++)
		{
			CLCD_u8WriteSpecialCharacter(Pattern7,0,1,0);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,14);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern2,0,1,1);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,14);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern7,0,1,2);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,13);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern2,0,1,3);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,12);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern7,0,1,4);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,11);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern2,0,1,5);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,10);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern7,0,1,6);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,9);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern2,0,1,7);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,8);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern7,0,0,8);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,8);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern2,0,1,9);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,7);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern7,0,1,10);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,6);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern2,0,1,11);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,5);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern7,0,1,12);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,4);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern2,0,1,13);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,3);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern7,0,1,14);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,2);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);

			CLCD_u8WriteSpecialCharacter(Pattern2,0,1,15);
			CLCD_u8WriteSpecialCharacter(Pattern8,1,1,1);
			_delay_ms(10);
			CLCD_u8SendCommand(0b00000001);
		}


		CLCD_u8WriteSpecialCharacter(Pattern,1,1,15);
		CLCD_u8GoToXY(0,2);
		CLCD_u8SendString(kill);
		CLCD_u8WriteSpecialCharacter(Pattern9,0,1,0);

		for(Local_u8Iterator=1;Local_u8Iterator<=14;Local_u8Iterator++)
		{

			CLCD_u8WriteSpecialCharacter(Pattern10,2,1,Local_u8Iterator);
			_delay_ms(10);
			CLCD_u8GoToXY(1,Local_u8Iterator);
			CLCD_u8SendData(' ');

		}

		CLCD_u8WriteSpecialCharacter(Pattern11,3,1,15);
		_delay_ms(100);

		CLCD_u8WriteSpecialCharacter(Pattern12,4,1,15);
		_delay_ms(100);

		CLCD_u8SendCommand(0b00000001);

		CLCD_u8GoToXY(0,3);
		CLCD_u8SendString(RIP);
		_delay_ms(250);

		CLCD_u8SendCommand(0b00000001);





	}

}
