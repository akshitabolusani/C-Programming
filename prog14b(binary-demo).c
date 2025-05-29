// Binary  int  demo  program
#include <stdio.h>
main()
{
	int  a  = 0B1010110101;
	printf("%o \n" , a); //  Converts  binary  to  octal   number  due  to  %o  i.e.  1265
	printf("%d \n" , a); //   Converts  binary  to   decimal  number  due  to  %d  i.e.  512 + 128 + 32 + 16 + 4 + 1 = 693
	printf("%x \n" , a);  //   Converts  binary  to   hexa-decimal  number  due  to  %x  i.e.   2b5  due  to  %x
	printf("%X \n" , a); // 2B5  due  to  %X
	printf("%b \n", a); //  b  becoz  there  is  no  %b  format
	a  =  10101;  //  Decimal  number  becoz  there  is  no  0B
	printf("%d\n" , a);// 10101
}


/*
1) Conversion  of  binary  to  octal  (2 ^ 3 =  8)
    --------------------------------------
        4   2   1       4   2   1       4  2   1     4   2   1   --->  Weights
        0   0   1       0   1   0       1   1   0     1   0   1
			 1                 2                 6              5    --->  octal  number

2) Conversion  of  binary  to  decimal
    -----------------------------------------
        512   256   128   64   32   16     8     4     2     1   --->  Weights
          1       0        1      0     1      1      0     1     0     1    --->   512 + 128 + 32 + 16 + 4 + 1 =  693

3) Conversion  of  binary  to  hexa  decimal  (2 ^ 4 =  16)
     ------------------------------------------------
     8   4   2   1      8   4   2   1       8    4    2    1   --->  Weights
     0   0   1    0     1   0    1   1       0    1     0    1
			  2                    B                       5    --->  Hexa  decimal  number
*/
