// Find outputs
#include <stdio.h>
main()
{
	printf("%d\n" , sizeof(10.8F));//4B  due  to  'F'
	printf("%d\n" , sizeof(10.8D));//8B   due  to  'D'
	printf("%d\n" , sizeof(10.8));//8B  becoz  default  is  double
}
