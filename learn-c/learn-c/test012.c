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
int main() {
	/*printf("111");
	main();*/

	/*unsigned int num =0;
	scanf("%u ", &num);
	print(num);*///print函数可以打印参数部分数字的每一位

	char arr[] = "bit";
	//模拟实现一个strlen函数
	printf("%d\n", my_strlen(arr));
}
