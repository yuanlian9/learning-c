#include<stdio.h>
#include<stdlib.h>
//给定两个整形变量的值，将两个值的内容进行交换
int main(){
	int a = 10;
	int b = 20;
	int temp = 0;
	temp = a;
	a = b;//b=10
	b = temp;
	printf("%d %d\n", a, b);






	system("pause");
	return 0;
}