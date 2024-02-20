//操作符
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main() {
	//交换a和b不适用第三个变量
	int a = 5;
	int b = 3;
	/*a = a + b;
	b = a - b;
	a = a - b;*///这种情况会出现溢出

	/*a = a ^ b;
	b = a ^ b;
	a = a ^ b;*/

	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int [10]));//int[10]是arr数组的类型
	printf("%d\n", sizeof(a));//计算a所占空间的大小，单位是字节
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);//sizeof是一个操作符不是函数

	//~按位取反
}