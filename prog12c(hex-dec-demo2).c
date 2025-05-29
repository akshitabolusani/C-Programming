// Find  outputs  (Home  work)
#include <stdio.h>
main()
{
	int  a  =  0XBEEF;
	printf("%X\n" , a); // BEEF due to %X
	printf("%x\n" , a); // beef due to %x
	printf("%d\n" , a); //  11 * 16 ^ 3 + 14 * 16 ^ 2 + 14 * 16 ^ 1 + 15 * 16 ^ 0
	printf("%o\n" , a);// Converts  hexa  decimal  to  octal  number  due  to  %o  i.e. 137357
	printf("%X \n" ,  0Xa7b9); // A7B9 due to %X
	printf("%x \n" ,  0xA7B9); // a7b9 due to %x
}



/*
1) Conversion  of  hexadecimal  to   decimal
    -----------------------------------------------
     4096   256   16   1  ---> Weights
        B        E      E    F   --->  11 * 4096 + 14 * 256 + 14 * 16 + 15 * 1

2) Conversion  of  hexadecimal  to  octal       16  --->  2  ---> 8
    ---------------------------------------------
     a) Conversion  of   hexa  decimal  to  binary    (2 ^ 4 == 16)
	     ------------------------------------------------
		  8421       8421       8421       8421  ---> Weights
          1011        1110        1110        1111   --->  Binary  number

	b) Conversion  of  binary  to  octal  (2 ^ 3 = 8)
	     -------------------------------------
		 421       421      421    421    421    421
         001        011      111     011    101     111
			1           3         7        3       5         7     --->  octal  number
*/
