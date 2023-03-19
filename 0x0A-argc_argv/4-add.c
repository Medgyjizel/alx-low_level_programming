#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

/**
*check_num-check-stringtherearedigit
*@str:arraystr
*
*Return:Always0(Success)
*/

intcheck_num(char*str)

{
/*Declaringvariables*/
unsignedintcount;

count=0;
while(count<strlen(str))/*countstring*/

{
if(!isdigit(str[count]))/*checkifstrtherearedigit*/
{
return(0);
}

count++;
}
return(1);
}

/**
*main-Printthenameoftheprogram
*@argc:Countarguments
*@argv:Arguments
*
*Return:Always0(Success)
*/

intmain(intargc,char*argv[])

{

/*Declaringvariables*/
intcount;
intstr_to_int;
intsum=0;

count=1;
while(count<argc)/*Goesthroughthewholearray*/
{
if(check_num(argv[count]))

{
str_to_int=atoi(argv[count]);/*ATOI-->convertstringtoint*/
sum+=str_to_int;
}

/*Conditionifoneofthenumbercontainssymbolsthatarenotdigits*/
else
{
printf("Error\n");
return(1);
}

count++;
}

printf("%d\n",sum);/*printsum*/

return(0);
}

