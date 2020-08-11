#include<stdio.h>
#include<stdlib.h>

int main(){
	int a = 10;
	int b = 20;
	a = a + b;//a=30  b=20
	b = a - b;//a=30 b=10
	a = a - b;
	printf("%d %d\n", a, b);

	system("pause");
	return 0;
}