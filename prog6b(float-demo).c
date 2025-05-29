// float  demo  program
#include <stdio.h>
#include <float.h>  //  In view of FLT_MAX  and FLT_MIN
main()
{
	float  x = 10.8f;
	printf("%g \n" , x);//10.8
	printf("%d \n" , sizeof(x));//4B
	printf("%g \n" , FLT_MAX);  //  max  value  of  float  i.e.  3.4 * 10 ^ 38
	printf("%g \n" , FLT_MIN);  //  min  value  of  float  i.e. 1.17 * 10 ^ -38
	printf("%g \n" , sizeof(float));//  Garbage  value  due  to  wrong  format   %g
}




/*
1) float  x = 10.8f;
    Can  'f'  be  omitted  from  the  above  statement ?  --->
												Yes  and  double  is  automatically  converted  to  float  becoz  'x'  is  float  variable

2) float  x = 10.8f;
    What  is  the  advantage  in  writing  'f' ?  ---> Process  time  is  saved  due  to  no  conversion
*/
