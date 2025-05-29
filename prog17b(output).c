// Find  outputs
#include <stdio.h>
main()
{
	int   x = 25;
	printf("%d \n" , x);//25
	printf("%u \n" , &x);// address of valiable x  (may  be  1000)
	printf("%d \n" , sizeof(x)); // 4B  becoz  'x'  is  int  variable
}



/*
1) What  is  the  format  for  address ?  --->  %u  becoz  addresses  are  always  positive

2) Does  system  support  negative  addresses  ?  --->  No

3) What  are  negative  numbers  called ?  --->  Signed  numbers  due  to  -  sign
     What  are  positive  numbers  called ?  --->  Unsigned  numbers  becoz  there  is  no  sign
*/
