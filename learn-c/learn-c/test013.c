#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main() {
	//加减交替求分数的和
	/*int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++) {
		sum += flag*1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);*/

	//求最大值
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];
	int i = 0;
	for (i = 0; i < 10; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d\n", max);*/
	//乘法口诀表
	int i = 1;
	for (i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%2d ", j, i,i*j);//-2d
		}
		printf("\n");
	}
}