#include<stdio.h>
void d1p3(){
	int n = 3;
	int i, j;
	for (i = 1; i<= n; i++){
		for (j=1; j<= n-i; j++){
			printf(" ");
		}
		for (j = 1; j <= 2*i-1; j++){
			printf("*");
		}
	}
	system("pause");
	return 0;
}