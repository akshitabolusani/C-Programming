// Hexa  decimal  int  demo  program
#include <stdio.h>
main()
{
	int  a  = 0XA7B9;  //  Hexa  decimal  number  due  to  0X
	printf("%X \n" , a);  //  A7B9 due  to  %X
	printf("%x \n" , a);  //  a7b9  due  to  %x
	printf("%d \n" , a);  //  Converts  hexa  decimal  number  to  decimal  number  due to  %d  i.e.  10 * 16 ^ 3 + 7 * 16 ^ 2 + 11 * 16 ^ 1 + 9 * 16 ^ 0
	printf("%o \n" , a);    //  Converts  hexa  decimal  number  to  octal  number  due to  %o  i.e.  123671
}



/*
1) Conversion  of  hexadecimal  to   decimal
    -----------------------------------------------
       4096   256   16   1  ---> Weights
          A       7      B    9  --->   10 * 4096 + 7 * 256 + 11 * 16 + 9 * 1  =  42937

2) Conversion  of  hexadecimal  to  octal
    ---------------------------------------------
     a) Conversion  of   hexa-decimal  to  binary  --->   (2 ^ 4 = 16)
	     ------------------------------------------------
		 8421       8421       8421       8421  ---> Weights
         1010        0111        1011        1001   ---->  Binary  number

	b) Conversion  of  binary  to  octal  --->    (2 ^ 3 =  8)
		-------------------------------------
		 421       421       421       421       421       421    ---> weights
         001		  010	  	   011		110		 111        001
		   1           2           3           6           7           1    --->   octal  number
*/
