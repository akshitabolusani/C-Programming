// long  long  demo  program
#include <stdio.h>
#include <limits.h>  //  In  view  of  LONG_LONG_MAX  and  LONG_LONG_MIN
main()
{
	long  long  x  =  25LL;
	printf("%lld \n" , x);//25
	printf("%d \n" , sizeof(x));//8B  becoz  'x'  is  long  long  variable
	printf("%lld \n" , LONG_LONG_MAX);//2^63-1
	printf("%lld \n" , LONG_LONG_MIN);//-2^63
}



/*
1) long  long  x;
    Which  value  can  variable  'x'  hold ?  --->  Any  value  between  -2 ^ 63  and  2 ^  63 - 1

2) long  long  x = 25LL;
    Can  LL  be  omitted  from  the  above  statement ?  --->
										Yes  becoz  int  is  automatically  converted  to  long  long  becoz  'x'  is  long  long  variable
*/
