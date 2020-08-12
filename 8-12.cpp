

#include<stdio.h>
#include<stdlib.h>

int Max(int x, int y){
	if (x > y){
		return x;
	}
	else{
		return y;
	}
}
int main(){
	int a = 5;
	int b = 6;
	/*a 0000 0000 0000 0000 0000 0000 0000 0101
	b 0000 0000 0000 0000 0000 0000 0000 0110*/
	a = a^b;
	//a=0000 0000 0000 0000 0000 0000 0000 0011 3 
	b = a^b;
	//b=0000 0000 0000 0000 0000 0000 0000 0101 5
	a = a^b;
	////a=0000 0000 0000 0000 0000 0000 0000 0110 6
	//a = a + b;//a11
	//b = a - b;//5
	//a = a - b;//6
	/*int temp;
	temp = a;
	a = b;
	b = temp;*/
	

	printf("%d %d\n",a,b);
	system("pause");
	return 0;
}