#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//计算n！
	/*int n = 0;
	printf("请输入n：");
	scanf("%d", &n);
	int plus = 1;
	for (int i = 1; i <= n; i++) {
		plus *= i;
	}
	printf("%d!=%d",n, plus);*/

	//计算1！+2！+3！+4！+5!+6！+7！+8！+9！+10！
	//int n = 10;
	//int sum = 0;
	//for (int j = 1; j <= n;j++) {
	//	int plus = 1;//****在这个位置重置plus的值！！！
	//	for (int i = 1; i <= j; i++) {
	//		plus *= i;
	//	}
	//	sum += plus;		
	//}
	//printf("1！+2！+3！+4！+5!+6！+7！+8！+9！+10！=%d\n", sum );

	//int n3 = 10;
	//int sum3 = 0;
	//int plus3 = 1;
	//for (int j3 = 1; j3 <= n; j3++) {
	//	for (int i3 = j3; i3 <= j3; i3++) {//计算量更小
	//		plus3 *= i3;
	//	}
	//	sum3 += plus3;
	//}
	//printf("1！+2！+3！+4！+5!+6！+7！+8！+9！+10！=%d\n", sum3);

	//int n1 = 10;
	//int plus1 = 1;
	//int sum1 = 0;
	//for (int i1 = 1; i1 <= n1; i1++) {//计算量最小
	//	plus1 *= i1;
	//	sum1 += plus1;
	//}
	//printf("1！+2！+3！+4！+5!+6！+7！+8！+9！+10！=%d\n", sum1);

	//在一个有序数组中查找具体的某个数字n
	//折半查找
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//要查找的数字
	//在arr这个有序数组中查找k(7)的值
	int sz = sizeof(arr) / sizeof(arr[1]);//数组的元素个数
	int left = 0;
	int right = sz-1;
	int mid =left+righ
}