//  long  demo  program
#include <stdio.h>
#include <limits.h>
main()
{
	long  x = 25L;
	printf("%ld \n" , x);//25
	printf("%d \n" , sizeof(x));//4B  becoz  'x'  is  long  variable
	printf("%ld \n" , LONG_MAX);//2^31-1
	printf("%ld \n" , LONG_MIN);//-2^31
}




/*
1) long  x;
    Which  value  can  variable  'x'  hold  ?  --->Any  value  between  -2 ^ 31  and  2 ^  31 - 1

2) long  x = 25L;
    Can  L  be  omitted  from  the  above  statement ?  --->
										Yes  becoz  int  is  automatically  converted  to  long  integer  becoz  'x'  is  long  variable

3) long  x = 25L;
    What  is  the  advantage  in  writing  L  ?  --->  Processor  time  is  saved  due  to  no  conversion
*/
