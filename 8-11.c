#include<stdio.h>
#include<stdlib.h>
//�����������α�����ֵ��������ֵ�����ݽ��н���
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