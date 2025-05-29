//  unsigned  demo  program
#include <stdio.h>
#include <limits.h>
main()
{
	unsigned  x =  25U;
	printf("%u \n" , x);//25
	printf("%d  \n" , sizeof(x));//4B
	printf("%u \n" , UINT_MAX);//2^32-1
	//printf("%u \n" , UINT_MIN);//  Error  becoz  UINT_MIN  macro  does  not  exist
	x = UINT_MAX + 1;  //  max value + 1 = min  value
	printf("%u \n" , x);//0
	x = -1;  //  min  value - 1 =  max  value
	printf("%u \n", x);//2^32-1
}


/*
1) unsigned   x;
    Which  value  can  variable  'x'  hold  ?  ---> Any  value  between  0  and  2 ^  32  -  1

2) unsigned  x = 25U;
    Can  U  be  omitted  from  the  above  statement ?  --->
								  Yes  becoz   int  is  automatically  converted  to  unsigned   becoz  'x'  is  unsigned   variable
*/
