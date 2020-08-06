#include<stdio.h>
int main (){
	int a [3][5];
	printf("a = %p\n",a);
	printf("a+1 = %p\n",a+1);
	printf("a+1 is 20 bytes(5 integers) bigger than a\n");
	return 0;
}
