#include <stdio.h>
int main(void)
{
  float ar=0, be=0, ca=0;
  float cost, postage, weight, discount=0;
  char c;
  float x;

  printf("what do you want?\n");
  printf("a:ar   b:be   c:ca   \n");
  printf("q:quit\n");

  c=getchar();
  while(getchar()!='\n')
    continue;

  while(c!='q')
  {
    if(c!='a' && c!='b' && c!='c')
    {
      printf("need to be a, b, c or q!\n");
      c=getchar();
      while(getchar()!='\n')
        continue;
      continue;
    }

    else
    {
      printf("\nHow many pounds?\n");
      scanf("%f", &x);
      while(getchar()!='\n')
        continue;

      switch(c)
      {
        case 'a': ar += x;
                  break;
        case 'b': be += x;
                  break;
        case 'c': ca += x;
                  break;
      }
    }

    printf("\nThat's %.2f ar, %.2f be and %.2f ca so far. "
           "Enter next item (q to quit):\n", ar, be, ca);
    c=getchar();
    while(getchar()!='\n')
      continue;
  }

  printf("\nOK. %.2f ar, %.2f be and %.2f ca in total.\n", ar, be, ca);

  if (0 == (weight=ar+be+ca))
    printf("You didn't order anything! Bye.\n");

  else
  {
    cost = 2.05*ar + 1.15*be + 1.09*ca;

    if(cost>=100)
      discount = 0.05 * cost;

    if(weight<=5)
      postage=6.5;
    else if(weight>5 && weight<20)
      postage=14.0;
    else
      postage=14.0+(weight-20)*0.5;

    printf("\nThe cost is %.2f. Discount is %.2f. Postage is %.2f. Total charge is %.2f.\n",
            cost, discount, postage, cost-discount+postage);
  }

  return 0;
}
