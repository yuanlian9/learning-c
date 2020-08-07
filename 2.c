#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void p2(){
	int i;
	printf("please input a number ");
	scanf("%d", &i);
	if (i %2==0){
		printf("·ñ");
	}
	else{
		printf("ÊÇ");
	}
	system("pause");
}