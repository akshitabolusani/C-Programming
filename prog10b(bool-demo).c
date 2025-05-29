//  Find  outputs
#include <stdbool.h> // In view of true and false
#include <stdio.h>
main()
{
	bool  a = true;
	printf("%d\n" , a);//1
	a = false;
	printf("%d\n" , a);//0
	printf("%d\n" , sizeof(a));//1B  becoz  'a'  is  bool  variable
	printf("%d\n" , true + true + true);//  1 + 1 + 1 = 3
	printf("%d\n" , true + false + true);// 1 + 0 + 1 = 2
	printf("%b \n" ,  true); //  b  becoz there  is  no  %b  format
	printf("%k \n" ,  true); //  k  becoz there  is  no  %k  format
	printf("%g \n" ,  true); //garbage value  due  to  wrong  format  %g
	printf("%d \n" ,  true); //  1
	printf("% \n" ,  true); //  Nothing  becoz  format  is  missing
}





/*
1) printf("%valid  format" , variable);
    What  is  printed ? --->  Value  of  the  variable

2) printf("%wrong  format" , variable);
    What  is  printed ? --->  Garbage  value

3) printf("%Non-existing  format" , variable);
    What  is  printed ? --->  Non-existing  format  name

4) printf("%" , variable);
    What  is  printed ? ---> Nothing  becoz  there  is  no  format
*/
