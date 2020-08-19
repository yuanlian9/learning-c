#include<stdio.h>
#include<stdlib.h>

int main(){
	/*int num = 0;
	for (num = 0 ; num < 100; num++)
		if (num % 2 == 1){
			printf("%d\n", num);
		}
		else{
			printf(" ");
		}
	
*/ 
	/*int num = 1;
	while (num <= 100){
		if (num % 2 != 0){
			printf("%d ", num);
		}
		num++;
	}*/

	int num = 1;
	while (num <= 100){
		/*if (num <= 100){*/
			printf("%d ", num);
			num += 2;
		}
		/*num += 2;*/
	/*}*/
	system("pause");
	return 0;
}