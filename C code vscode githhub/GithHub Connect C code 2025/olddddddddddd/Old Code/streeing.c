#include <stdio.h>
int main()
{
  char name[1000];
  printf("Enter your name: ");
  gets(name);
  // scanf("%s", name);
  printf("Hello! %s\n", name);
  return 0;
}

