#include<stdio.h>
#include<stdlib.h>


int main(){







	int arr[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(arr));结果：16
	//printf("%d\n", sizeof(arr + 0));结果：4.
	//数组名参与算数运算也会隐式转成指针
	//printf("d\n", sizeof(*arr));//结果：4
	//printf("%d\n",sizeof(arr[0]));sizeof(*(arr+0));等价
	//printf("%d\n", sizeof(arr + 1));//结果4
	printf("%d\n", sizeof(&arr));//结果4 数组指针
	//printf("%d\n", sizeof(*&arr));//结果16 数组指针解引用得到一个数组
	//printf("%d\n", sizeof(&*arr));//4针对int来&，得到一个int*
	//printf("%d\n", sizeof(&arr + 1));//4数组指针+1还是数组指针，只要是指针，32位系统下就是4
	//printf("%d\n", sizeof(&arr[0] + 1));//4 int*


	system("pause");
	return 0;
}