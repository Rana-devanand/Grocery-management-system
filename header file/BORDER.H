void border()
{

    for(int i=1;i<=80;i++)
	cprintf("-");

    for(int j=2;j<=24;j++)
      {
	gotoxy(80,j);
	cprintf("|");
      }
    for(int k=80;k>=1;k--)
    {
      gotoxy(k,24);
      cprintf("-");
    }
    for(int l=23;l>=2;l--)
    {
     gotoxy(1,l);
     cprintf("|");
    }
   for(int z=2;z<=78;z++)
   {
     gotoxy(z,3);
     cprintf("-");
   }
}
