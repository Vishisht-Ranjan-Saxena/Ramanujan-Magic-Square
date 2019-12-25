/*  MIT Licensed on GitHub

    ramanujn.c ;        ramanujn.exe .

    "RAMANUJAN MAGIC SQUARE" :->
    This open source program is dedicated to Shri. Ramanujan ji.

    Copyright (c) 2019 by Vishisht-Ranjan-Saxena
    All Rights Reserved.
*/

//Authors :  Vishisht Ranjan Saxena

//This programs makes Magic Square on the basis of your DoB.

//Sorry for being late!
//Internet was shut down in various parts of India almost for a week..

#include "stdio.h"
#include "conio.h"
#include "time.h"

void lol()
{  puts("\n \n Invalid INPUT..!");
   getch();   exit(0);   }

void check(int n)
{  if(n<1000)   lol();   }

void out(int n)
{  if(n>=0)  cprintf(" ");
   if(n<10)   cprintf(" %d  |",n);
   else if(n<100)   cprintf(" %d |",n);
   else    cprintf("%d |",n);             }

void main()
{
  long int dob;
  int dd, mm, cc, yy;
  int sum, d, m, c, y;
  time_t tp;    struct tm* t;
  char line[1000];
  textcolor(14);
  textbackground(14);
  clrscr();    printf("\n");
  time(&tp);     t = localtime(&tp);
  strftime(line,1000," %I: %M %p. \n %d %B, %Y (%A) ",t);
  puts(line);    printf("\n");
  cprintf("                      '|| RAMANUJAN  MAGIC  SQUARE ||'");  printf("\n \n");
  cprintf("     This, small open_source program, is developed in the memory of late Shri.  Srinivasa Ramanujan on his 132nd Birth-Anniversary..!");
  printf("\n");
  cprintf("     For those who are unaware, Mr. SRINIVASA RAMANUJAN was one of the greatest  Mathematicians of INDIA, who had done various works & research in the field of Mathematics.");
  cprintf(" Ramanujan Magic Square (a 4x4 Matrix) is also one of his mathemati-cal tricks, in which, sum of any single row or column or even diagonal is same.");
  cprintf("  In fact, sum of all the elements of center & corners' 2x2 Matrix formed inside this so-called Magic Square is also exactly the same.");
  cprintf(" Not only this, sum of all corner values of this Magic Square would be same too and so on.... (the list is very long!)");
  printf("\n");  cprintf("     For more details, you can search it online! (recommended)");
  printf("\n \n");   cprintf(" Now, enter your Date of Birth and see the MAGIC :->");
  printf("\n \n");
  cprintf("'DoB'(DDMMYYYY):-   ");
  scanf("%ld",&dob);
  if((dob>31129999)||(dob<1000000))   lol();
  yy = dob % 100 ;
  cc = (dob % 10000) /100 ;
  mm = (dob / 10000) % 100;
  if(mm>12)   lol();
  dd = (dob / 10000) / 100;
  if((mm==4)||(mm==6)||(mm==9)||(mm==11))
  {  if(dd>30)  lol();   }
  else if(mm==2){
    if(yy/4==0){  if(dd>29)   lol();   }
    else{  if(dd>28)   lol();   }
  }
  else{  if(dd>31)   lol();   }
  sum = dd + mm + cc + yy;
  textcolor(14);
  textbackground(14);
  clrscr();    printf("\n");
  time(&tp);     t = localtime(&tp);
  strftime(line,1000," Timed:-> %I: %M: %S %p. \n Dated: %d %B, %Y (%A) ",t);
  puts(line);
  printf("\n \n \n");
  cprintf("       D D   M M   Y Y   Y Y");   printf("\n");
  cprintf("     |-----|-----|-----|-----|");   printf("\n");
  cprintf("     |");  out(dd);  out(mm);  out(cc);  out(yy);  printf("\n");
  y=yy+1;  c=cc-1;  m=mm-3;  d=dd+3;
  cprintf("     |-----|-----|-----|-----|");   printf("\n");
  cprintf("     |");  out(y);  out(c);  out(m);  out(d);  printf("\n");
  m=mm-2;  d=dd+2;  y=yy+2; c=cc-2;
  cprintf("     |-----|-----|-----|-----|");
  cprintf("          =    '%d' (sum)",sum);   printf("\n");
  cprintf("     |");  out(m);  out(d);  out(y);  out(c);  printf("\n");
  c=cc+1;  y=yy-1;  d=dd+1;  m=mm-1;
  cprintf("     |-----|-----|-----|-----|");   printf("\n");
  cprintf("     |");  out(c);  out(y);  out(d);  out(m);  printf("\n");
  cprintf("     |-----|-----|-----|-----|");   printf("\n \n");
  puts("\n \n  Program NAME:->  'RAMANUJAN Magic Square' ");
  printf("  Developed By:->  Vishisht Ranjan Saxena.. \n");
  getch();
}

//This is my starting with the programs having open source License, so please do tell me if I do any mistakes regarding Copyrights & License or any other issues!
//ALERT: This program is for private/public use.
//Patent Use:-  Not allowed right now
//Also, I don't take the responsibilities regarding the misuses of this program.