#include <stdio.h>


 void main()
 {
 int a,b,*c;
 a = 4;
 b = 3;
 c = &a;
 *c = *c +1;
 c = &b;
 b = b+4;
 printf("%d %d %d",a,b,*c);
 }