

void product()
{

//*********************************************************************//
//*************************   Fruits  *********************************//
   char f1[]="Apple",f2[]="Bananas",f3[]="Grapes",f4[]="Pineapple",f5[]="citrus";
   int x=3,y=8;

   gotoxy(3,5);
   cout<<" _________";
   gotoxy(3,6);
   cout<<"| Fruits |";
   gotoxy(3,7);
   cout<<" ~~~~~~~~~";
   for(int i=1;i<=1;i++)
   {
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
   }
//***************************************************************//
//**********************  veggies  ******************************//
  char v1[]="Asparagus",v2[]="Broccoli ",v3[]="Cabbage",v4[]="Mushrooms",v5[]="Cauliflower",v6[]="Onions",v7[]="Potatoes",v8[]="Tomotoes";

   int z=16;
   gotoxy(3,13);
   cout<<" __________";
   gotoxy(3,14);
   cout<<"| Vegegies |";
   gotoxy(3,15);
   cout<<" ~~~~~~~~~~";

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

//*************************************************************//
//**********************   Dairy  *****************************//
 char d1[]="Butter",d2[]="Cheese",d3[]="Eggs",d4[]="Milk",d5[]="Sour Cream",d6[]="Yogurt";
   gotoxy(25,5);
   cout<<" _______";
   gotoxy(25,6);
   cout<<"| Dairy |";
   gotoxy(25,7);
   cout<<" ~~~~~~~";

   int left=25,right=8;

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
 //****************************************************************//
 //************************   Beverages   *************************//

 char b1[]="Coffee",b2[]="Juice",b3[]="Soft drinks",b4[]="Tea",b5[]="Water",b6[]="Wine";

   gotoxy(25,14);
   cout<<" ___________";
   gotoxy(25,15);
   cout<<"| Beverages |";
   gotoxy(25,16);
   cout<<" ~~~~~~~~~~~";

    int r=17;
     gotoxy(left,r);
     cout<<"1. "<<b1;
     r++;
     gotoxy(left,r);
     cout<<"2. "<<b2;
     r++;
     gotoxy(left,r);
     cout<<"3. "<<b3;
     r++;
     gotoxy(left,r);
     cout<<"4. "<<b4;
     r++;
     gotoxy(left,r);
     cout<<"5. "<<b5;
     r++;
     gotoxy(left,r);
     cout<<"6. "<<b6;
 //*********************************************************************//
 //**************************  Cleansers  ******************************//

  char c6[]="Wipes",c5[]="Vacuum Bags",c4[]="Sponge",c3[]="Dryer Sheets",c2[]="Soap",c1[]="Detergent",c[]="Bleach ",c0[]="Air freshers";
   gotoxy(43,5);
   cout<<" ___________";
   gotoxy(43,6);
   cout<<"| Cleansers |";
   gotoxy(43,7);
   cout<<" ~~~~~~~~~~~";
    int r1=8,l=43;
     gotoxy(l,r1);
     cout<<"1. "<<c0;
     r1++;
     gotoxy(l,r1);
     cout<<"2. "<<c;
     r1++;
     gotoxy(l,r1);
     cout<<"3. "<<c1;
     r1++;
     gotoxy(l,r1);
     cout<<"4. "<<c2;
     r1++;
     gotoxy(l,r1);
     cout<<"5. "<<c3;
     r1++;
     gotoxy(l,r1);
     cout<<"6. "<<c4;
     r1++;
     gotoxy(l,r1);
     cout<<"7. "<<c5;
     r1++;
     gotoxy(l,r1);
     cout<<"8. "<<c6;
 //*****************************************************************//
 //********************** Personal  *******************************//
   char p1[]=" Cotten swabs",p2[]="Deodorant",p3[]="Eye Drops",p4[]="Facial Clean..",p5[]="First aid",p6[]="Aid",p7[]="Lip Care",p8[]="Makeup",p9[]="Razors",p10[]="Shampoo",p11[]="Shaving Cream",p12[]="Sunscreen",p13[]="Toothpaste",p14[]="Toothbrush",p15[]="Condisoners";
   gotoxy(63,5);
   cout<<" ___________";
   gotoxy(63,6);
   cout<<"| Personal |";
   gotoxy(63,7);
   cout<<" ~~~~~~~~~~";

    int l1=63,r2=8;

     gotoxy(l1,r2);
     cout<<"1. "<<p1;
     r2++;
     gotoxy(l1,r2);
     cout<<"2. "<<p2;
     r2++;
     gotoxy(l1,r2);
     cout<<"3. "<<p3;
     r2++;
     gotoxy(l1,r2);
     cout<<"4. "<<p4;
     r2++;
     gotoxy(l1,r2);
     cout<<"5. "<<p5;
     r2++;
     gotoxy(l1,r2);
     cout<<"6. "<<p6;
     r2++;
     gotoxy(l1,r2);
     cout<<"7. "<<p7;
     r2++;
     gotoxy(l1,r2);
     cout<<"8. "<<p8;
      r2++;
     gotoxy(l1,r2);
     cout<<"9. "<<p9;
     r2++;
     gotoxy(l1,r2);
     cout<<"10. "<<p10;
     r2++;
     gotoxy(l1,r2);
     cout<<"11. "<<p11;
     r2++;
     gotoxy(l1,r2);
     cout<<"12. "<<p12;
     r2++;
     gotoxy(l1,r2);
     cout<<"13. "<<p13;
     r2++;
     gotoxy(l1,r2);
     cout<<"14. "<<p14;
     r2++;
     gotoxy(l1,r2);
     cout<<"15. "<<p15;

 //***********************************************************//
 // ******************  Continue to next page ****************//

   gotoxy(50,24);
   textcolor(RED+BLINK);
   cprintf("Press enter to ");
   gotoxy(65,24);
   textcolor(RED);
   cprintf("Billing");
  getch();
}