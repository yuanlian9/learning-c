#include<stdio.h>
#include<stdlib.h>

//int Func(int arr[], int size){
//	int ret = 0;
//	for (int i = 0; i < size; i++){
//		ret ^= arr[i];
//	}
//	return ret;
//}

int BitOneCount(int num){
	int count = 0;
	for (int i = 0; i < 32; i++){
		if ((num&(1 << i)) != 0){
			count++;
		}
	}
	return count;
}

int main(){
	printf("%d\n",BitOneCount(-10));
	system("pause");
	return 0;
}