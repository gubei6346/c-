//指针 就是 地址
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	int a = 10;
//	printf("%p", &a);//%p用来打印地址
//	int* pa = &a;//pa是用来存放地址的，在c语言中pa是指针变量
//	//    *说明pa是指针 int说明pa指向的对象是Int类型
//	char ch = 'w';
//	char* pc = &ch;
//}
//int main() {
//	int a = 10;
//	int* pa = &a;
//	*pa = 20; // *解引用操作 *pa就是通过pa里面的地址找到a
//	printf("%d\n", a);
//
//	printf("%d\n", sizeof(char*));//指针的大小是相同的 指针是用来存放地址的 指针需要多大的空间取决于地址的存储需要
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(long*));
//}