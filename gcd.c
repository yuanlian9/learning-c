#include<stdio.h>
#include<stdlib.h>


int main(){







	int arr[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(arr));�����16
	//printf("%d\n", sizeof(arr + 0));�����4.
	//������������������Ҳ����ʽת��ָ��
	//printf("d\n", sizeof(*arr));//�����4
	//printf("%d\n",sizeof(arr[0]));sizeof(*(arr+0));�ȼ�
	//printf("%d\n", sizeof(arr + 1));//���4
	printf("%d\n", sizeof(&arr));//���4 ����ָ��
	//printf("%d\n", sizeof(*&arr));//���16 ����ָ������õõ�һ������
	//printf("%d\n", sizeof(&*arr));//4���int��&���õ�һ��int*
	//printf("%d\n", sizeof(&arr + 1));//4����ָ��+1��������ָ�룬ֻҪ��ָ�룬32λϵͳ�¾���4
	//printf("%d\n", sizeof(&arr[0] + 1));//4 int*


	system("pause");
	return 0;
}