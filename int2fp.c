#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
  int n, c, k;
  int i ,m;
  m=100;
  time_t t;
   srand((unsigned) time(&t));
  for(i=0;i<m;i++)
  {
  	 //printf("%d\n", rand() % 127);
  	 n=rand()%(100000000);
  printf("%d in binary number system is:\n",                                                                                                                                                                                                                                                                                                                                                                                                                                                                   n);
  
  for (c = 22; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");
}
  return 0;
}



