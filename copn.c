#include <stdio.h>

void count_by(unsigned x, unsigned n, unsigned result[n]);
int main(void)
{
    int res[10];
    count_by(1,10, res);
  return 0;  
}

void count_by(unsigned x, unsigned n, unsigned result[n]) {
  // fill the array result passed as argument with your answer
  int i;
  for (i = 0; i <= n; i++)
{
    result[i] = x * (i+1);
}
printf("%d,", result[i]);
}