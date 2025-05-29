// short  demo  program
#include <stdio.h>
#include <limits.h>  //  In  view  of  SHRT_MIN   and  SHRT_MAX
main()
{
	short   s   =  25;  //  's'  is  variable  of  type  short  with  value  25
	printf("%hd \n" , s);  //  Value  of  's'  i.e.  25
	printf("%hi \n" , sizeof(s));  //  2B  becoz  's'  is  short  variable
	printf("%hd \n" , SHRT_MAX);  //  max  value  of  short  integer  i.e.  2 ^ 15 - 1 = 32767
	printf("%hd \n" , SHRT_MIN);  //  min   value  of  short  integer  i.e.  -2 ^ 15  = -32768
	s = 32768;  //  max value + 1 = min  value
    printf("%hd \n", s); //  -32768
	s = 32769;  //  max value + 2 = min  value + 1
    printf("%hd \n", s);  //  -32767
	s = 32770;//  max value + 3 = min  value + 2
    printf("%hd \n", s);  //  -32766
	s = -32769;  //  min  value - 1 =  max  value
 	printf("%hd \n", s);  //  32767
	s = -32770;   //  min  value - 2 =  max  value - 1
	printf("%hd \n", s);  //  32766
	s = -32771;    //  min  value - 3 =  max  value - 2
 	printf("%hd \n", s);  //  32765
}



/*
1) short   x;
    Which  value  can  variable  'x'  hold ?  --->  Any  value  between  -32768  and  32767

2) What  happens  when  value  beyond  maximum  is  represented ?  --->  Value  from  minimum  is  represented

3) What  is  maximum  value + 1 ?  --->  Mininum  value
     What  is  maximum  value + 2 ?  ---> Mininum  value +  1
     What  is  maximum  value + 3 ?  ---> Mininum  value +  2
   	  and  so  on

4) What  happens  when  value  below  minimum  is  represented ?  --->  Value  from  maximum  is  represented

5) What  is  minimum  value - 1 ?  --->  Maximum value
     What  is  minimum  value  - 2 ?  ---> Maximum value - 1
     What  is  minimum  value  - 3 ?  --->Maximum value - 2
  	  and  so  on
*/
