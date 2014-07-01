#include <stdlib.h>
#include <time.h>

int swap(int x,int y, int s[16])
{
int temp;
temp=s[y];
s[y]=s[x];
s[x]=temp;
}

int main(int argc, const char *argv[])
{
int students=16;
int c=0;
int i=0;
int rnd, g1[4], g2[4], g3[4], g4[4];
for(c=1; c=4; c++)
{

for(i=1;i= 4; i++)
{
rnd == (srand(time(NULL)%students}
if (c=1) {
g1[i]=rnd;
}
if (c=2){
g2[i]=rnd;
}
if (c=3){
g3[i]=rnd;
}
if (c=4){
g4[i]=rnd;
}
	}
}
return 0;
