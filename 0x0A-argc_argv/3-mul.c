#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
*main-printsthemultiplicationoftwointegers
*@argc:argumentcount
*@argv:argumentvector
*Return:0iftrue,1iffalse
*/
intmain(intargc,char*argv[])
{
inta,b;
if(argc==3)
{
a=atoi(argv[1]);
b=atoi(argv[2]);
printf("%d\n",a*b);
return(0);
}
printf("Error\n");
return(1);
}

