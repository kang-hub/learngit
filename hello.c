#include <stdio.h>

static int add(int x, int y)
{
  return (x+y);
}

static int sub(int a, int b)
{
  return (a-b);
}

static int cheng(int x, int y)
{
  return (x*y);
}

static int chu(int x, int y)
{
  return (x/y);
}

int main(int argc, char *argv[])
{
  int sum, a, b;
  printf("Hello world!\n");
  sum = add(1,2);
  printf("sum=%d\n", sum);
  a = sub(5,2);
  printf("a=%d\n", a);
  b = cheng(3,6);
  printf("b=%d\n", b);
  return 0;
}
