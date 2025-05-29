// Find  outputs
#include <stdio.h>
#include <float.h>  //  In view of  DBL_MAX  and  DBL_MIN
main()
{
	double  x = 10.8;
	printf("%lg \n" , x);//10.8
	printf("%d \n" , sizeof(x));//8B
	printf("%lg \n" , DBL_MAX);  //  max  value  of   double  i.e.  1.79 * 10 ^ 308
	printf("%lg \n" , DBL_MIN);  //  min  value  of  double  i.e.  2.22 * 10 ^ -308
}
