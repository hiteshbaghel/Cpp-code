/* program of calculator using of switch case */
/*in this calculator addition , subtraction , multiplication , divide , 
and simple interest task perform */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int a,b,c,l,ch;
  float pie,r,ar,p,s,t,si;
  printf("*************A simple calculator by Hitesh baghel*************\n");
  do
  {
    	printf("\n Enter 1 for Addition");
        printf("\n Enter 2 for Subtraction");
        printf("\n Enter 3 for Multiplication");
        printf("\n Enter 4 for Division");
        printf("\n Enter 5 for Simple Intrest");
        printf("\n Enter 6 for Exit \n");
        printf("\n");
        printf(" Enter your Choice :- ");
        scanf("%d",&ch);
        switch (ch)
      {
           case 1:
           printf("\n Enter first number :- ");
           scanf("%d",&a);
           printf("\n Enter second number  :- ");
           scanf("%d",&b);
           c=a+b;
           printf("\n Sum of two number = %d",c);
           printf("\n");
           break;
           case 2:
           printf("\n Enter first number :- ");
           scanf("%d",&a);
           printf("\n Enter second number :- ");
           scanf("%d",&b);
           c=a-b;
           printf("\n Subtraction of two number = %d",c);
           printf("\n");
           break;
           case 3:
           printf("\n Enter first number :- ");
           scanf("%d",&a);
           printf("\n Enter second number :- ");
           scanf("%d",&b);
           c=a*b;
           printf("\n Multiplication of two number = %d",c);
           printf("\n");
           break;  
           case 4:
           printf("\n Enter first number :- ");
           scanf("%d",&a);
           printf("\n Enter second number :- ");
           scanf("%d",&b);
           c=a/b;
           printf("\n Division of two number = %d",c);
           printf("\n");
           break;  
           case 5:
           printf("\n Enter Principle :- ");
           scanf("%f",&p);
           printf("\n Enter Rate of interest :- ");
           scanf("%f",&r);
           printf("\n Enter time (in year) :- ");
           scanf("%f",&t);
           si=p*r*t/100;
           printf("\n simple intrest is = %f",si);
           printf("\n");
           break;
           case 6:
           exit(0);
		   default :
		   printf("\n");
		   printf(" Enter correct choice\n");
        }// end of switch case
    }
  while(1);
  getch();
}
