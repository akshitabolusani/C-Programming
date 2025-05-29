//  int  demo  program
#include <stdio.h>
#include <limits.h>  //  In  view  of  INT_MAX  and  INT_MIN
main()
{
	int  x =  25;
	printf("%d \n" , x);//25
	printf("%d \n" , sizeof(x));//4B (Because it is an int dtype)
	printf("%d \n" , INT_MAX);//2^31-1
	printf("%d \n" , INT_MIN);//-2^31
	x = INT_MAX + 1;  //  max value + 1 = min value
	printf("%d \n" , x);//-2^31
	x = INT_MIN - 1;  //  min  value - 1 = max value
	printf("%d \n" , x);//2^31-1
}


/*
int  x;
Which  value  can  variable  'x'  hold ?  --->  Any  value  between  -2 ^ 31  and  2 ^  31 - 1
*/
