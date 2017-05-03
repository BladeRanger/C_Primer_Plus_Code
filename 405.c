#include <stdio.h>
int main(void)
{
  float speed, filesize;
  printf("What's the download speed in Mbs?\n");
  scanf("%f", &speed);
  printf("What's the file size in MB?\n");
  scanf("%f", &filesize);

  printf("At %.2f megabits per second, a file \
of %.2f megabytes\ndownloads in %.2f \
seconds.\n", speed, filesize, filesize * 8 / speed);

return 0;
}
