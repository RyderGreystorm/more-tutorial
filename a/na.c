#include <stdio.h>


int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
 

//   printf(" n addrress : %p\n", &n);

//   printf(" array address: %p\n", &a);
//   printf("array address without &: %p\n", a);

//   printf("pointer value: %p\n", p);
// printf("%d\n", *p);
//   printf("pointer value + 1:%p\n", p + 1);
// printf("%d\n", *(p + 1) );

//   printf("pointer value + 2:%p\n", p +2);
// printf("%d\n", *(p + 2) );

//   printf("pointer value + 3:%p\n", p + 3);
// printf("%d\n", *(p + 3) );

//   printf("pointer value + 4:%p\n", p + 4);
// printf("%d\n", *(p + 4) );

//   printf("pointer value + 5:%p\n", p + 5);
// printf("%d\n", *(p + 5 ));

*(p + 6) = 98;







  printf("a[2] = %d\n", a[2]);
  return (0);
}