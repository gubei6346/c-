//函数递归
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(unsigned int n){
	if (n > 9) {
		print(n / 10);//限制条件
	}
	printf("%d ", n % 10);
}
int main() {
	/*printf("111");
	main();*/

	unsigned int num = 1234;
	//scanf("%u ", &num);
	print(num);//print函数可以打印参数部分数字的每一位

}
