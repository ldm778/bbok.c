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
printf("������%s\n",p->name);
printf("�۸�%d\n",p->price);
//printf("������%s\n",b1.name);
//printf("�۸�%d\n",b1.price);

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




