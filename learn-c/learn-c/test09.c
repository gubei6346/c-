//goto语句
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	/*flag:
	printf("11\n");
	printf("11\n");
	goto flag;*/
	//goto语句课用来跳出多层嵌套循环 其他情况不建议使用 (只能在一个函数范围内跳转不能跨函数

	//关机程序 输入：我是猪取消关机
	//shutdowm -s -t 60  shutdown -a
	//system()函数用来执行系统命令       依赖头文件stdlib.h
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");
//again:
//	printf("请注意你的电脑在一分钟内关机输入：'我是猪'取消");
//	scanf("%s", input);
//	//依赖头文件 string.h
//	if (strcmp(input,"我是猪")==0) {//两个字符串比较不能使用“==” 应使用strcmp() string compare
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
}