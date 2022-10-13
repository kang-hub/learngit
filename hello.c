#include <stdio.h>

static int add(int x, int y)
{
  return (x+y);
}

static int sub(int a, int b)
{
  return (a-b);
}

int main(int argc, char *argv[])
{
  int sum;
  printf("Hello world!\n");
  sum = add(1,2);
  printf("sum=%d\n", sum);
  return 0;
}
