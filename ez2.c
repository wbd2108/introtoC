#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[]) {
int x,y,remainder,original;
scanf("%d", &x);
scanf("%d", &y);
remainder=x%y;
original=x/y;
printf("%d/n", remainder);
if(original>=1 && remainder==0) {
printf("Yes");
}
else {
printf("No");
}
return 0;
}
