#include<stdio.h>
int p3(){
	int i;
	for (i = 1; i <= 100; i++){
		if (i % 2 == 0){
			printf(" ");
		}
		else{
			printf("%d\n", i);
		}
	}
	system("pause");
}