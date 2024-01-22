//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
	//int a = 0;
	//int b = 0;
	//int c = 0;
	////输入
	//scanf("%d%d%d", &a, &b, &c);
	////调整顺序
	//if (a < b) {
	//	int tmp = a;
	//	a = b;
	//	b = tmp;
	//}
	//if (a < c) {
	//	int tmp = a;
	//	a = c;
	//	c = tmp;
	//}
	//if (b < c) {
	//	int tmp = b;
	//	b = c;
	//	c = tmp;
	//}
	////输出
	//printf("%d %d %d",a,b,c);


	//求两个数的最大公约数
	//int m = 0;
	//int n = 0;
	//scanf("%d %d", &m, &n);
	//int max = m>n?n:m;//设max为m和n的最大公约数
	//while (1) {
	//	if (m % max == 0 && n % max == 0) {
	//		printf("最大公约数是：%d\n", max);
	//		break;
	//	}
	//	max--;
	//}

	//辗转相除法求最大公约数
	//int m = 0;
	//int n = 0;
	//int t = 0;
	//scanf("%d%d", &m, &n);
	//while (t = m % n) //无须比较m和n的大小
	//{
	//	m = n;
	//	n = t;
	//}
	//printf("最大公约数为：%d", n);

	//输出1000-2000之间的闰年
	//int y = 0;
	//int count = 0;
	//for (y = 1000; y <= 2000; y++) {
	//	//判断是不是闰年
	//	//能被4整除不能被100整除
	//	//能被400整除
	//	if ((y % 4 == 0 && y % 100 != 0)||(y % 400 == 0)) {
	//		printf("%d ", y);
	//		count++;
	//	}
	//}
	//printf("\ncount=%d\n", count);

	//打印100-200之间的素数
	//int i = 0;
	//int count = 0;
	//for (i = 101; i <= 200; i+=2) {//偶数不是素数
	//	int j = 0;
	//	int flag = 1;
	//	for (j = 2; j <=sqrt(i); j++) {//sqrt是开平方
	//		if (i % j == 0) {
	//			flag = 0;//不是素数
	//			break;
	//		}
	//	}
	//	if (flag==1) {
	//		count++;
	//		printf("%d\n", i);
	//    }	
	//}
	//printf("\ncount=%d\n", count);
//}