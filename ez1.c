#include <stdio.h>
int count;
char ch;
int count=32;
void  main(int argc, const char *argv[]) {
while (count>127)
{
ch=count;
printf("%d/n", count);
printf("%c/n", ch);
count++;
}
}
