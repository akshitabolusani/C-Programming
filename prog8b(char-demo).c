//  char  demo  program
#include <stdio.h>
#include <limits.h>
main()
{
	char   ch  =  'g';
	printf("%c \n" , ch);//g
	printf("%d \n"  , sizeof(ch));//1B
	printf("%d \n"  , CHAR_MAX);//127
	printf("%d \n" , CHAR_MIN);//-128
	printf("%c \n" , CHAR_MAX);//  That  char  whose  ascii  value  is   127
	printf("%c \n" , CHAR_MIN);  //  That  char  whose  ascii  value  is   -128
	ch = 128;  //  max value + 1 = min  value
	printf("%d \n" , ch);//-128
	ch = -129;  //  min  value - 1 = max  value
	printf("%d \n" , ch);//127
}




/*
char   ch;
Which  value  can  variable  ch  hold  ?  --->  Any  value  between  -128  and  127
*/
