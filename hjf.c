#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Boor
{
	char name[20];
	short price;
};
int main()
{struct Boor b1={"CYYYFHJ",55};

struct Boor* p=&b1;
printf("书名：%s\n",p->name);
printf("价格：%d\n",p->price);
//printf("书名：%s\n",b1.name);
//printf("价格：%d\n",b1.price);

	return 0;
}




















//#include<stdio.h>
//int main()
//{
//	int a=39;
//	int b=48;
//	int n=MAX(a,b);
//	printf("n=%d",n);
//	return 0;
//
//}
//		

//




