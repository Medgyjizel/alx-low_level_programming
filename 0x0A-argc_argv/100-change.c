#include<stdio.h>
#include<stdlib.h>

/**
*main-function
*@argc:lengthofargv
*@argv:numberofargument
*Return:Always0
*/

intmain(intargc,char*argv[])
{
/*Declaringvariables*/
intposition,total,change,aux;
intcoins[]={25,10,5,2,1};/*Arrayint*/

position=total=change=aux=0;

if(argc!=2)
{
printf("Error\n");
return(1);
}

total=atoi(argv[1]);/*Covertstrtoint*/

if(total<=0)
{
printf("0\n");
return(0);
}

/*DeclaringWhile*/

while(coins[position]!='\0')

{
if(total>=coins[position])
{
aux=(total/coins[position]);
change+=aux;
total-=coins[position]*aux;
}

position++;

}

printf("%d\n",change);
return(0);
}

