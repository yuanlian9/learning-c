//**һά���鴫��**
//
//**1.��һ�������в���һ����**

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int arr[4] = { 9, 5, 2, 7 };
//	int Tofind = 2;
//	for (int i = 0; i < 4; i++){
//		if (arr[i] != Tofind){
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//*********************************************************************************************************

//**��չ**
//```c
//#include <stdio.h>
//#include <stdlib.h>
//
//int Func(int arr[], int size){
//	int Tofind = 2;
//	for (int i = 0; i < 4; i++){
//		if (arr[i] != Tofind){
//			continue;
//		}
//		return i;
//	}
//}
//
//int main(){
//	int arr[4] = { 9, 5, 2, 7 };
//
//	printf("%d\n", Func(arr, 4));
//	system("pause");
//	return 0;
//}
//****************************************************************************************************

//**��ά���鴫�ε�������ʽ**
//
//**1.��ӡһ����ά����**

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	//����Ϊ3,ÿ��Ԫ�صĳ�����4
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	for (int row = 0; row < 3; row++){
//		for (int col = 0; col < 4; col++){
//			printf(" %d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}
//*****************************************************************************************************

//**��1.**

//#include <stdio.h>
//#include <stdlib.h>
//
//
//void Printarr(int arr[][4]){
//	for (int row = 0; row < 3; row++){
//		for (int col = 0; col < 4; col++){
//			printf(" %d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//}
//
//int main(){
//	//����Ϊ3,ÿ��Ԫ�صĳ�����4
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	Printarr(arr);
//
//
//	system("pause");
//	return 0;
//}
//*****************************************************************************************************

//**��2.**

//#include <stdio.h>
//#include <stdlib.h>
//
//
//void Printarr(int arr[3][4]){
//	for (int row = 0; row < 3; row++){
//		for (int col = 0; col < 4; col++){
//			printf(" %d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main(){
//	//����Ϊ3,ÿ��Ԫ�صĳ�����4
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	Printarr(arr);
//
//
//	system("pause");
//	return 0;
//}
//********************************************************************************************************
//
//**��3.**

//#include <stdio.h>
//#include <stdlib.h>
//
////���麯�����ε�ʱ�����ʽת��ָ��,���ָ�����ָ����Ԫ�ص�ָ��
////��ǰ������һ����ά����,��Ԫ����һ��int[4]
////��Ԫ�ص�ָ�����int (*)[4] ����ָ��
//void Printarr(int(*arr)[4]){
//	for (int row = 0; row < 3; row++){
//		for (int col = 0; col < 4; col++){
//			printf(" %d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main(){
//	//����Ϊ3,ÿ��Ԫ�صĳ�����4
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	Printarr(arr);
//
//
//	system("pause");
//	return 0;
//}
//******************************************************************************************************

//
//int arr[5] //������ͨ����
//int* arr2[5] //ָ������
//int(*p)[10] //����ָ��
//int(*p[10])[5] //����Ϊ10��Ԫ�ص�ָ������,�����ÿһ��Ԫ�ض���һ������ָ��,�������ָ��ָ�򳤶�Ϊ5��Ԫ�ص�int����
//
//* *һ��ָ�봫��**

//#include <stdio.h>
//#include <stdlib.h>
//
//void Print(int* arr, int size){
//	int i = 0;
//	for (i = 0; i < size; i++){
//		printf(" %d ", *(arr + i));
//	}
//	printf("\n");
//}
//int main(){
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int* p = arr;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//��һ��ָ��p��������
//	Print(p, 10);
//	system("pause");
//	return 0;
//
//}
//*****************************************************************************************************

//**����ָ�봫��**

#include <stdio.h>
#include <stdio.h>

void test(int** ptr){

	printf("%d\n", **ptr);
}
int main(){

	int n = 10;
	int* p = &n;
	int** pp = &p;

	//test(pp);
	test(&p);
	system("pause");
	return 0;
}
//***************************************************************************************************8
