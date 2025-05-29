// Decimal  int  demo  program
#include <stdio.h>
main()
{
	int  a  = 42937;
	printf("%d \n" , a);//42937
	printf("%o \n" , a); //  Converts  decimal  number to  octal  number  due  to   %o   i.e.  123671
	printf("%x \n" , a); // Converts  decimal  number to   hexa-decimal    number  due  to   %x   i.e.  a7b9  due  to  %x
	printf("%X \n" , a); //A7B9  due  to  %X
}


/*
1) Conversion  of  decimal  to  octal   (Division  by   8)
    ---------------------------------------
            Number    Quotient    Reminder
             42937       5367             1
			 5367          670              7
			 670            83                6
             83              10                3
			 10                1                 2
			 1                  0                 1
   Remainders   in   the  reverse   order   --->  123671

2) Conversion  of  decimal  to  hexa  decimal  (Division  by   16)
    --------------------------------------------------
	      Number       Quotient    Reminder
           42937            2683             9
            2683              167              11 = 'B'
			167                 10                 7
			10                    0                  10 = 'A'
   Remainders   in   the  reverse   order   --->  A7B9
*/
