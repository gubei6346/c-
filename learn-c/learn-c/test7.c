//关键字
/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef unsigned int u_int;*///类型重定义  unsigned int
//void test() {//static修饰局部变量
//	static int a = 1;//a 不会被销毁
//	a++;
//	printf("%d\n", a);
//}
//int main() {
	/*register int a = 100;*///建议存储到寄存器中

	//typedef 类型重定义
	/*unsigned int num = 100;
	u_int num1 = 100;*/

	//static 静态的
	//static修饰局部变量：改变了局部变量的生命周期 （本质是改变了存储类型：从栈区转为静态区）    
	//static修饰全局变量：使得这个全局变量只能在自己所在的源文件（.c）文件内部使用，其他源文件无法使用
	// （全局变量在其他源文件内部可以使用是因为全局变量具有外部链接属性 但是被static修饰之后就变成了内部链接属性)
	//static修饰函数：使得函数只能在自己所在的源文件内部不能在其他源文件内部使用，本质上时将函数的外部链接属性变成了内部链接属性

	//static修饰局部变量
	/*int i = 0;
	while (i<10)
	{
		test();
		i++;
	}*/


	//static修饰全局变量（全局变量在整个工程中都可以使用）
	//extern声明外部符号
	//extern int g_val;//在test6中
	//printf("%d\n", g_val);


	//声明函数
//	extern int Add(int x, int y);
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//}