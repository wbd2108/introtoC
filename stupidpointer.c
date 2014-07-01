#include <stdio.h>

int main(int argc, char const *argv[]) {
int a =2;
int *p= &a;
int c[4]= {23,12,1,0};
int *array_p;
printf("address of a = %p/n", p);
printf("address of p = %p/n", &p);
printf("wow, %d= %d/n", *p, a);
array_p=c;
printf("start of the array %p/n", c);
printf("pointer array %p/n", array_p);
printf("%d/n", c[0]);
return 0;
}
