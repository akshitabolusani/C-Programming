//  Find  outputs
#include <stdio.h>
#include <limits.h>
main()
{
	unsigned  char   ch  =  'g';
	printf("%c \n" , ch);//g
	printf("%d\n" , sizeof(ch));//1B
	printf("%d \n" , UCHAR_MAX);//255
	//printf("%d \n" , UCHAR_MIN);//  Error  becoz  UCHAR_MIN  macro  does  not  exist
	ch = 256;  //  max  value + 1 = min  value
	printf("%d \n", ch);//0
	ch = -1;  //  min  value - 1  = max  value
	printf("%d \n", ch);//255
}


/*
1) unsigned   char  ch;
    Which  value  can  variable  ch  hold  ?  ---> Any  value  between  0  and  255

2) unsigned   x;
     Is  'x'  unsigned  char  (or)  unsigned  int ?  --->  unsigned  int
*/
