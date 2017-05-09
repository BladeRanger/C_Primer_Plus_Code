#include <stdio.h>
int main(void)
{
  int power[8];
  int m, n, data;
  int p=0;
   for(m=0; m<8; m++)
   {
     for(n=m+1, data=1; n>0; n--)
     data *= 2;

     power[m] = data;
   }

   do
   {
     printf("power[%d] = %d\n", p, power[p]);
     p++;
   }
   while(p<8);

return 0;
}
