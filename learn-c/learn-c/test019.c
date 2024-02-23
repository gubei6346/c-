//指针
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main() {
	int a = 10;
	int *pa=&a;//拿到的是a的4个字节中第一个字节的地址
	*pa = 20;

	int arr[10] = { 0 };
	/*int* p = arr;
	char* pc = arr;
	printf("%p\n", p);
	printf("%p\n", p + 1);*/
	//指针类型的意义
	//1.指针类型决定了：指针解引用的权限有多大
	//2.指针类型决定了，指针走一步，能走多远（步长)

	int* p = arr;
	for (int i = 0; i < 10; i++) {
		*(p + i)=1;
	}
}