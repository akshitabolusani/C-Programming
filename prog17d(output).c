// Find  outputs
#include <stdio.h>
main()
{
	char  ch = 'A';
	printf("%c \n" , ch);// A
	printf("%d \n" , ch); //  Ascii  value  of  'A'  i.e.  65
	printf("%u  \n" , &ch);// Address of variable ch   (may  be  1000)
	printf("%d \n" , sizeof(ch));// 1B  becoz  ch  is  char  variable
}
