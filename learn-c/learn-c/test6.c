//操作符2
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
	//int a = 0;
	//printf("%d", ~a);//~按位取反

	//int a = 10;
	//int b = ++a;//先++后赋值
	//int b = a++;//先赋值后++
	//printf("%d\n", b);
	//printf("%d", a);
	
	//强制类型转换
	/*int a = (int)3.14;
	printf("%d", a);*/

	// 逻辑远算 &&、||

	//条件操作符（三目操作符）
	//？：
	//exp1 ? exp2 : exp3
	//exp1 成立，exp2计算，整个表达式输出exp2的结果
	//exp1 不成立，exp3计算，整个表达式输出exp3的结果
	//int a = 0;
	//int b = 3;
	//int max = 0;
	/*if (a > b)
		max = a;
	else
		max = b;*/

	//max = a > b ? a : b;
	//printf("%d", max);

	//逗号表达式
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);//a=5 c=1 b=3
//	//逗号表达式从左向右依次计算，真个表达式的结果是最后一个表达式的结果
//	printf("%d", d);
//}



//static修饰全局变量
//static int g_val = 2024;

// static修饰函数
//int g_val = 2024;
int Add(int x, int y) {
	return x + y;
}
//static int Add(int x, int y) {
//	return x + y;
//}
