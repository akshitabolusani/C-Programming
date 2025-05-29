// octal  demo  program
#include <stdio.h>
main()
{
	int  a  = 06247;
	printf("%o \n" , a);  //  6247
	printf("%d \n" , a); //  Converts  octal  number  to  decimal  number  due  to  %d  i.e.  6 * 8 ^ 3 + 2 * 8 ^ 2 + 4 * 8 ^ 1 + 7 * 8 ^ 0 = 3239
	printf("%x \n" , a);  //  Converts  octal  number  to  hexa-decimal  number  due  to  %x  i.e.  ca7  due  to  %x
	printf("%X \n" , a);//CA7  due  to  %X
}



/*
1) Conversion  of  octal  to  decimal
    --------------------------------------
       512     64     8     1  ---> Weights
         6        2      4     7   --->   6 * 512 + 2 * 64 + 4 * 8 + 7 * 1

2) Conversion  of  octal   to  Hexa  decimal    (8   --->  2   --->  16)
    -----------------------------------------------
	a) Conversion  of  octal  to  binary (2  ^ 3 = 8)
	    --------------------------------------
		 421        421      421      421
         110         010      100      111  --->  Binary  number

	b) Conversion  of  binary  to  hexa  decimal  (2 ^ 4 = 16)
	    -------------------------------------------------
		 8421        8421      8421
         1100         1010      0111
  	        C              A           7    --->  Hexa  decimal  number
*/
