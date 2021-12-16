#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
int xh=0;
    float c_scre=0.0;
    float math_scre=0.0;
    float eng_scre=0.0;
    scanf("%d;%f,%f,%f",&xh,&c_scre,&math_scre,&eng_scre);
printf("The each subject score of No. %d is %.2f, %.2f, %.2f.",xh,c_scre,math_scre,eng_scre);


return 0;

}