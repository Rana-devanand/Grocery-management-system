void billing(char *name, char *com_name)
{
  int total=0;

	int choise;
	gotoxy(14,4);
	cprintf("   -:  If you Buy Press [1] , or Not Press [0]    :-");
//************************************************************************//
//********************   Billing File name create   *********************//
       char bill[30];
       gotoxy(3,6);
       cputs("Enter File name :");
       cin>>bill;

       ofstream file;
       file.open(bill,ios::in);
//------------------------------------------------------------------------//

	gotoxy(3,8);
	cprintf("Fruit: ");
	gotoxy(3,9);
	cprintf("~~~~~~");
	gotoxy(10,8);
	cin>>choise;
	switch(choise)
	{
	 case 1:
	 int x=60,y=7;
	 char f1[]="Apple      $ 70",f2[]="Bananas    $ 40",f3[]="Grapes     $ 50",f4[]="Pineapple  $ 80",f5[]="citrus     $ 30";
	 int fruit1=70,fruit2=40,fruit3=50,fruit4=80,fruit5=30;

	  gotoxy(65,5);
	  cout<<"| Fruit |";
	  gotoxy(65,6);
	  cout<<"~~~~~~~~~";

	  gotoxy(x,y);
	  cout<<"1. "<<f1;
	  y++;
	  gotoxy(x,y);
	  cout<<"2. "<<f2;
	  y++;
	  gotoxy(x,y);
	  cout<<"3. "<<f3;
	  y++;
	  gotoxy(x,y);
	  cout<<"4. "<<f4;
	  y++;
	  gotoxy(x,y);
	  cout<<"5. "<<f5;

	  int n,i,xaxis=3,yaxis=9;
	  int value;
//****************************************************//
//************  billing file *************************//


       if(!bill)
       {
	 cout<<" Something went wrong";
       }
       else
       {

	  gotoxy(3,6);
	  cprintf("Enter total Product you buy in Fruit :");
	  cin>>n;

	  file<<"Store:"<<com_name;
	  file<<"\n* Customer name:"<<name;

	  file<<"\n\n *>     Fruit    <*\n";
	  file<<"------------------------------\n";
	  for(i=1;i<=n;i++)
	  {
	    gotoxy(xaxis,yaxis);
	    cprintf("Enter %d Product : ",i);
	    cin>>value;

	    if(value==1)
	    {
	      value=fruit1;
	      file<<i<<"."<<f1<<"\n";
	    }
	    else if(value==2)
	    {
	      value=fruit2;
	      file<<i<<"."<<f2<<"\n";
	    }
	    else if(value==3)
	    {
	      value=fruit3;
	      file<<i<<"."<<f3<<"\n";
	    }
	    else if(value==4)
	    {
	      value=fruit4;
	      file<<i<<"."<<f4<<"\n";
	    }
	    else if(value==5)
	    {
	      value=fruit5;
	      file<<i<<"."<<f5<<"\n";
	    }
	    else
	     { gotoxy(25,9);
	      cprintf("invalid input");
	     }

	    total += value;
	    gotoxy(60,23);
	    cout<<"Total :"<<total;

	  }

	} // file close


	  break;

	  case 0:
	  break;

	  default:
	   gotoxy(25,9);
	   cprintf("Choose the Correct one :");
	}
 //***********************  Fruit case over  ***********************//

 //****************************************************************//
 //**********************    Dairy  ********************************//

   int dchoise;
   gotoxy(3,11);
   cprintf("Dairy:");
   gotoxy(10,11);
   cin>>dchoise;
   switch (dchoise)
   {
    case 1:
    char d1[]="Butter      $ 80",d2[]="Cheese      $ 40",d3[]="Eggs        $ 120",d4[]="Milk        $ 40",d5[]="Sour Cream  $ 60",d6[]="Yogurt      $ 35";
    int diary1=80,diary2=40,diary3=120,diary4=40,diary5=60,diary6=35;

    gotoxy(65,5);
    cout<<"| Dairy |";
    gotoxy(65,6);
    cout<<" ~~~~~~~";

    int left=60,right=7;

     gotoxy(left,right);
     cout<<"1. "<<d1;
     right++;
     gotoxy(left,right);
     cout<<"2. "<<d2;
     right++;
     gotoxy(left,right);
     cout<<"3. "<<d3;
     right++;
     gotoxy(left,right);
     cout<<"4. "<<d4;
     right++;
     gotoxy(left,right);
     cout<<"5. "<<d5;
     right++;
     gotoxy(left,right);
     cout<<"6. "<<d6;

     int total_diary,j,choice_diary;
     int total_d_amount=0;
     gotoxy(3,6);
     cprintf("Enter total Product you buy in Diary :");
     cin>>total_diary;

     // diary data   //
     file<<"\n\n*>   Diary    <*\n";
     file<<"---------------------------\n";

     for(j=1;j<=total_diary;j++)
     {
       gotoxy(3,12);
       cprintf("Enter %d Product : ",j);
       cin>>choice_diary;
       if(choice_diary == 1)
       {
	  total_d_amount=diary1;
	  file<<j<<"."<<d1<<"\n";
       }
       else if(choice_diary == 2)
       {
	  total_d_amount=diary2;
	  file<<j<<"."<<d2<<"\n";
       }
       else if(choice_diary == 3)
       {
	  total_d_amount=diary3;
	  file<<j<<"."<<d3<<"\n";
       }
       else if(choice_diary == 4)
       {
	  total_d_amount=diary4;
	  file<<j<<"."<<d4<<"\n";
       }
       else if(choice_diary == 5)
       {
	  total_d_amount=diary5;
	  file<<j<<"."<<d5<<"\n";
       }
       else if(choice_diary == 6)
       {
	  total_d_amount=diary6;
	  file<<j<<"."<<d6<<"\n";
       }
       else
       { gotoxy(25,12);
	 cprintf("Invalid input ");
       }
     total += total_d_amount;
     gotoxy(60,23);
     cout<<"Total :"<<total;

    }

    break;

    case 0:
    break;

    default:
    gotoxy(25,12);
    cprintf("Choose the correct one :");

   }
 //*********************s**********************************************//
 //*******************   Beverages start   ***************************//

   int bchoise;
   gotoxy(3,14);
   cprintf("Beverages:");
   gotoxy(14,14);
   cin>>bchoise;
   switch (bchoise)
   {
     case 1:
     char b1[]="Coffee      $ 60",b2[]="Juice       $ 20",b3[]="Soft drinks $ 120",b4[]="Tea         $ 10",b5[]="Water       $ 20",b6[]="Wine        $ 600";
     int bb1=80,bb2=40,bb3=120,bb4=40,bb5=60,bb6=35;

    gotoxy(65,5);
    cout<<"| Beverages |";
    gotoxy(65,6);
    cout<<" ~~~~~~~~~~";

    int left=60,right=7;

     gotoxy(left,right);
     cout<<"1. "<<b1;
     right++;
     gotoxy(left,right);
     cout<<"2. "<<b2;
     right++;
     gotoxy(left,right);
     cout<<"3. "<<b3;
     right++;
     gotoxy(left,right);
     cout<<"4. "<<b4;
     right++;
     gotoxy(left,right);
     cout<<"5. "<<b5;
     right++;
     gotoxy(left,right);
     cout<<"6. "<<b6;

     int total_b,j,choice_b;
     int total_b_amount=0;
     gotoxy(3,6);
     cprintf("Enter total Product you buy in Beverages :");
     cin>>total_b;

     // diary data   //
     file<<"\n\n*>   Beverages    <*\n";
     file<<"-------------------------------\n";
      int k;
     for(k=1;k<=total_b;k++)
     {
       gotoxy(3,15);
       cprintf("Enter %d Product : ",j);
       cin>>choice_b;
       if(choice_b == 1)
       {
	  total_b_amount=bb1;
	  file<<k<<"."<<b1<<"\n";
       }
       else if(choice_b == 2)
       {
	  total_b_amount=bb2;
	  file<<k<<"."<<b2<<"\n";
       }
       else if(choice_b == 3)
       {
	  total_b_amount=bb3;
	  file<<k<<"."<<b3<<"\n";
       }
       else if(choice_b == 4)
       {
	  total_b_amount=bb4;
	  file<<k<<"."<<b4<<"\n";
       }
       else if(choice_b == 5)
       {
	  total_b_amount=bb5;
	  file<<k<<"."<<b5<<"\n";
       }
       else if(choice_b == 6)
       {
	  total_b_amount=bb6;
	  file<<k<<"."<<b6<<"\n";
       }
       else
       { gotoxy(25,15);
	 cprintf("Invalid input");
       }
     total +=total_b_amount;


     gotoxy(60,23);
     cout<<"Total :"<<total;

    }

    break;
    case 0:
    break;

    default:
     gotoxy(25,15);
     cprintf("choose the Correct one :");
   }

// *******************************************************************//
 //*************************  Vegegies start  ************************//


   int vchoise;
   gotoxy(3,17);
   cprintf("vegegies:");
   gotoxy(14,17);
   cin>>vchoise;
   switch (vchoise)
   {
     case 1:
    char v1[]="Asparagus   $ 80",v2[]="Broccoli    $ 30 ",v3[]="Cabbage     $ _60",v4[]="Mushrooms   $ 400",v5[]="Cauliflower $ 35",v6[]="Onions      $ _80",v7[]="Potatoes    $ 20",v8[]="Tomotoes    $ 55";
    int vv1=80,vv2=30,vv3=60,vv4=400,vv5=35,vv6=80,vv7=20,vv8=55;

    gotoxy(65,5);
    cout<<"| Vegegies |";
    gotoxy(65,6);
    cout<<" ~~~~~~~~~";

    int x=60,z=7;
     gotoxy(x,z);
     cout<<"1. "<<v1;
     z++;
     gotoxy(x,z);
     cout<<"2. "<<v2;
     z++;
     gotoxy(x,z);
     cout<<"3. "<<v3;
     z++;
     gotoxy(x,z);
     cout<<"4. "<<v4;
     z++;
     gotoxy(x,z);
     cout<<"5. "<<v5;
     z++;
     gotoxy(x,z);
     cout<<"6. "<<v6;
     z++;
     gotoxy(x,z);
     cout<<"7. "<<v7;
     z++;
     gotoxy(x,z);
     cout<<"8. "<<v8;
     int total_v,choice_v,l;
     int total_v_amount=0;
     gotoxy(3,6);
     cprintf("Enter total Product you buy in Vegegies  :");
     cin>>total_v;

     // diary data   //
     file<<"\n\n*>   Vegegies    <*\n";
     file<<"------------------------------\n";

     for(l=1;l<=total_v;l++)
     {
       gotoxy(3,18);
       cprintf("Enter %d Product : ",l);
       cin>>choice_v;
       if(choice_v == 1)
       {
	  total_v_amount=vv1;
	  file<<l<<"."<<v1<<"\n";
       }
       else if(choice_v == 2)
       {
	  total_v_amount=vv2;
	  file<<l<<"."<<v2<<"\n";
       }
       else if(choice_v == 3)
       {
	  total_v_amount=vv3;
	  file<<l<<"."<<v3<<"\n";
       }
       else if(choice_v == 4)
       {
	  total_v_amount=vv4;
	  file<<l<<"."<<v4<<"\n";
       }
       else if(choice_v == 5)
       {
	  total_v_amount=vv5;
	  file<<l<<"."<<v5<<"\n";
       }
       else if(choice_v == 6)
       {
	  total_v_amount=vv6;
	  file<<l<<"."<<v6<<"\n";
       }
	else if(choice_v == 7)
       {
	  total_v_amount=vv7;
	  file<<l<<"."<<v7<<"\n";
       }
       else if(choice_v == 8)
       {
	  total_v_amount=vv8;
	  file<<l<<"."<<v8<<"\n";
       }
       else
       { gotoxy(25,18);
	 cprintf("choies the correct one");
       }
     total +=total_v_amount;
     //tv += total_v_amount;

     gotoxy(60,23);
     cout<<"Total :"<<total;

    }

    break;
    case 0:
    break;

    default:
    gotoxy(25,18);
     cprintf("choose the Correct one :");
   }
 //*********************************************************//
 //****************  Cleansers ********************************//

   int cchoise;
   gotoxy(3,20);
   cprintf("cleansers:");
   gotoxy(14,20);
   cin>>cchoise;
   switch (cchoise)
   {
     case 1:
    char c6[]="Wipes         $ 532",c5[]="Vacuum Bags   $ 200",c4[]="Sponge        $ 299",c3[]="Dryer Sheets  $ 240",c2[]="Soap          $ 80",c1[]="Detergent     $ 60",c7[]="Bleach        $ 49",c8[]="Air freshers  $ 99";

    int cc1=60,cc2=80,cc3=240,cc4=299,cc5=200,cc6=532,cc7=49,cc8=99;

    gotoxy(65,5);
    cout<<"| Cleansers |";
    gotoxy(65,6);
    cout<<" ~~~~~~~~~";

    int x=58,z=7;
     gotoxy(x,z);
     cout<<"1. "<<c1;
     z++;
     gotoxy(x,z);
     cout<<"2. "<<c2;
     z++;
     gotoxy(x,z);
     cout<<"3. "<<c3;
     z++;
     gotoxy(x,z);
     cout<<"4. "<<c4;
     z++;
     gotoxy(x,z);
     cout<<"5. "<<c5;
     z++;
     gotoxy(x,z);
     cout<<"6. "<<c6;
     z++;
     gotoxy(x,z);
     cout<<"7. "<<c7;
     z++;
     gotoxy(x,z);
     cout<<"8. "<<c8;

     int total_c,choice_c,m;
     int total_c_amount=0;
     gotoxy(3,6);
     cprintf("Enter total Product you buy in cleansers  :");
     cin>>total_c;

     // diary data   //
     file<<"\n\n*>   Cleansers    <*\n";
     file<<"-------------------------------\n";

     for(m=1;m<=total_c;m++)
     {
       gotoxy(3,21);
       cprintf("Enter %d Product : ",m);
       cin>>choice_c;
       if(choice_c == 1)
       {
	  total_c_amount=cc1;
	  file<<m<<"."<<c1<<"\n";
       }
       else if(choice_c == 2)
       {
	  total_c_amount=cc2;
	  file<<m<<"."<<c2<<"\n";
       }
       else if(choice_c == 3)
       {
	  total_c_amount=cc3;
	  file<<m<<"."<<c3<<"\n";
       }
       else if(choice_c == 4)
       {
	  total_c_amount=cc4;
	  file<<m<<"."<<c4<<"\n";
       }
       else if(choice_c == 5)
       {
	  total_c_amount=cc5;
	  file<<m<<"."<<c5<<"\n";
       }
       else if(choice_c == 6)
       {
	  total_c_amount=cc6;
	  file<<m<<"."<<c6<<"\n";
       }
	else if(choice_c == 7)
       {
	  total_c_amount=cc7;
	  file<<m<<"."<<c7<<"\n";
       }
       else if(choice_c == 8)
       {
	  total_c_amount=cc8;
	  file<<m<<"."<<c8<<"\n";
       }
       else
       { gotoxy(25,21);
	 cprintf("Invalid input");
       }
     total +=total_c_amount;

     gotoxy(60,23);
     cout<<"Total :"<<total;

    }

    break;
    case 0:
    break;

    default:
     gotoxy(25,21);
     cprintf("choose the correct one");
   }

 //*********************************************************************//
 //***********************  personal ***********************************//


   int pchoise;
   gotoxy(3,23);
   cprintf("Personal:");
   gotoxy(14,23);
   cin>>pchoise;
   switch (pchoise)
   {
     case 1:
    char p1[]="Cotten swabs  $ 445",p2[]="Deodorant     $ 300",p3[]="Eye Drops     $ 40",p4[]="Facial Clean  $ 110",p5[]="First aid     $ 450",p7[]="Lip Care      $ 35",p8[]="Makeup        $ 99",p9[]="Razors        $ 129",p10[]="Shampoo       $ 25",p11[]="Shaving Cream $ 45",p12[]="Sunscreen     $ 98",p13[]="Toothpaste    $ 65",p14[]="Toothbrush    $ 20",p6[]="Condisoners   $ 135";

    int pp1=445,pp2=300,pp3=40,pp4=110,pp5=450,pp6=135,pp7=35,pp8=99,pp9=129,pp10=25,pp11=45,pp12=98,pp13=65,pp14=20;

    gotoxy(65,5);
    cout<<"| Personal |";
    gotoxy(65,6);
    cout<<" ~~~~~~~~~";

    int x=58,z=7;
     gotoxy(x,z);
     cout<<"1. "<<p1;
     z++;
     gotoxy(x,z);
     cout<<"2. "<<p2;
     z++;
     gotoxy(x,z);
     cout<<"3. "<<p3;
     z++;
     gotoxy(x,z);
     cout<<"4. "<<p4;
     z++;
     gotoxy(x,z);
     cout<<"5. "<<p5;
     z++;
     gotoxy(x,z);
     cout<<"6. "<<p6;
     z++;
     gotoxy(x,z);
     cout<<"7. "<<p7;
     z++;
     gotoxy(x,z);
     cout<<"8. "<<p8;
      gotoxy(x,z);
     cout<<"9. "<<p9;
     z++;
     gotoxy(x,z);
     cout<<"10. "<<p10;
     z++;
     gotoxy(x,z);
     cout<<"11. "<<p11;
     z++;
     gotoxy(x,z);
     cout<<"12. "<<p12;
     z++;
     gotoxy(x,z);
     cout<<"13. "<<p13;
     z++;
     gotoxy(x,z);
     cout<<"14. "<<p14;

     int total_p,choice_p,n;
     int total_p_amount=0;
     gotoxy(3,6);
     cprintf("Enter total Product you buy in Personal   :");
     cin>>total_p;

     // diary data   //
     file<<"\n\n*>   Personal    <*\n";
     file<<"----------------------------- \n";

     for(n=1;n<=total_p;n++)
     {
       gotoxy(3,24);
       cprintf("Enter %d Product : ",n);
       cin>>choice_p;
       if(choice_p == 1)
       {
	  total_p_amount=pp1;
	  file<<n<<"."<<p1<<"\n";
       }
       else if(choice_p == 2)
       {
	  total_p_amount=pp2;
	  file<<n<<"."<<p2<<"\n";
       }
       else if(choice_p == 3)
       {
	  total_p_amount=pp3;
	  file<<n<<"."<<p3<<"\n";
       }
       else if(choice_p == 4)
       {
	  total_p_amount=pp4;
	  file<<n<<"."<<p4<<"\n";
       }
       else if(choice_p == 5)
       {
	  total_p_amount=pp5;
	  file<<n<<"."<<p5<<"\n";
       }
       else if(choice_p == 6)
       {
	  total_p_amount=pp6;
	  file<<n<<"."<<p6<<"\n";
       }
	else if(choice_p == 7)
       {
	  total_p_amount=pp7;
	  file<<n<<"."<<p7<<"\n";
       }
       else if(choice_p == 8)
       {
	  total_p_amount=pp8;
	  file<<n<<"."<<p8<<"\n";
       }
	 else if(choice_p == 9)
       {
	  total_p_amount=pp9;
	  file<<n<<"."<<p9<<"\n";
       }
       else if(choice_p == 10)
       {
	  total_p_amount=pp10;
	  file<<n<<"."<<p10<<"\n";
       }
       else if(choice_p == 11)
       {
	  total_p_amount=pp11;
	  file<<n<<"."<<p11<<"\n";
       }
       else if(choice_p == 12)
       {
	  total_p_amount=pp12;
	  file<<n<<"."<<p12<<"\n";
       }
	else if(choice_p == 12)
       {
	  total_p_amount=pp13;
	  file<<n<<"."<<p13<<"\n";
       }
       else if(choice_p == 14)
       {
	  total_p_amount=pp14;
	  file<<n<<"."<<p14<<"\n";
       }


       else
       { gotoxy(25,24);
	 cprintf("Invaid input");
       }
     total +=total_p_amount;

     gotoxy(60,23);
     cout<<"Total :"<<total;

    }

    break;
    case 0:
    break;

    default:
     gotoxy(25,24);
     cprintf("choose the Correct one :");
   }

   file<<"\n\n-------------------------------";
  file<<"\n     Total Price: "<<total;
    file<<"\n----------------------------";
 getch();
}
