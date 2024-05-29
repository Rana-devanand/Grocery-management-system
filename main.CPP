#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>
#include<graphics.h>

// define macro... OTP purpose..
#define size 5

#include "border.h"
#include "user.h"
#include "otp.h"
#include "note.h"
#include "product.h"
#include "billing.h"

       void company_name(char name[])
	  {
	   gotoxy(25,2);
	   textcolor(3);
	   cprintf("%s",name);
	  }



void main()
{
	 clrscr();


 note();    // code available in note.h
 clrscr();
 char name[20];
	 border();     // border.h
   gotoxy(4,4);
   textcolor(12);
   cprintf("Enter Your Company Name : ");
   scanf("%s",&name);

 company_name(name);    // tcs.cpp

   textcolor(9);
   gotoxy(4,5);
   cputs("Enter user detail... ");

  char* user_name = user_info(name);     // code present in [ user.h ] file

//***********************************************************************//
// *******************  user successfully log-in  ***********************//
   gotoxy(15,4);
   cprintf("  -->*  Available product In our Store   *<--  ");

//***************** Product List *********************//
	product();

	clrscr();
	border();
	gotoxy(25,2);
	textcolor(3);
		cprintf("%s",name);
		gotoxy(45,2);
		cprintf("User: %s",user_name);

//**************   Final Billing Process  ***********//

	   clrscr();
	   border();
	   gotoxy(25,2);
	   textcolor(3);
		cprintf("%s",name);
		gotoxy(45,2);
		cprintf("User: %s",user_name);

	   billing(user_name,name);   //billing.h ( Final billing process...)

   getch();
}