//函数递归
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int my_strlen(char* str) {
//	int count = 0;
//	while(*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
int my_strlen(char* str) {//递归
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
void print(unsigned int n){
	if (n > 9) {
		print(n / 10);//限制条件
	}
	printf("%d ", n % 10);
}
int Fac(int n) {
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
//int Fib(int n) {//效率太低
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

int Fib(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main() {
	/*printf("111");
	main();*/

	/*unsigned int num =0;
	scanf("%u ", &num);
	print(num);*///print函数可以打印参数部分数字的每一位

	//char arr[] = "bit";
	////模拟实现一个strlen函数
	//printf("%d\n", my_strlen(arr));

	//int n = 0;
	//scanf("%d", &n);
	//int i = 0;
	//int ret = 1;
	////迭代    有些代码可以用迭代也可以用递归实现
	//for (i = 1; i <= n; i++) {
	//	ret = ret * i;
	//}
	//printf("%d\n", ret);

	/*int n = 0;
	scanf("%d", &n);
	int ret=Fac(n);
	printf("%d\n", ret);*/

	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
}
