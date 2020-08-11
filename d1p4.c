#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int i;
	scanf("%d", &i);
	if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0){
		printf("%d", i);
	}
	system("pause");
}