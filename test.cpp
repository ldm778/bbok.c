#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i=0;
	int j=1;
    int n=0;
	int g=0;
   scanf("%d",&n);
for(i=1;i<=n;i++)
{
	j=j*i;
	g=g+j;

}
printf("g=%d",g);


return 0;

}
