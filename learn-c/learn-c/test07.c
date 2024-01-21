#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
//int main() {
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
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;//要查找的数字
	//printf("input the number to find:\n");
	//scanf("%d", &k);
	////在arr这个有序数组中查找k(7)的值
	//int sz = sizeof(arr) / sizeof(arr[1]);//数组的元素个数
	//int left = 0;
	//int right = sz-1;
	//while (left<=right) {
	//	int mid = (left + right) / 2;
	//	if (arr[mid] < k) {
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > k) {
	//		right = mid - 1;
	//	}
	//	else {
	//		printf("find it:%dth\n", mid);
	//		break;
	//	}
	//}
	//if (left > right) {
	//	printf("cant find it\n");
	//}

	//字符串输出
	//char arr1[] = "welcome!!!!!";
	//char arr2[] = "############";
	//int left = 0;
	//int right = strlen(arr1) - 1;
	//while (left <= right) {
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(1000);//睡眠1秒
	//	system("cls");//清空屏幕
	//	left++;
	//	right--;
	//}
	//printf("%s\n", arr2);

	//登录界面 最多3次机会
	//int i = 0;
	////假设正确密码是字符串“123456”
	//char password[20] = { 0 };
	//for (i = 0; i < 3; i++) {
	//	printf("请输入密码\n");
	//	scanf("%s", password);//password是数组不需要取地址
	//	if (strcmp(password, "123456") == 0) {//比较两个字符串不可以用== 应该使用strcmp
	//		printf("登录成功\n");
	//		break;
	//	}
	//	else {
	//		printf("密码错误，请重新输入\n");
	//	}
	//}
	//if (i == 3) {
	//	printf("三次密码均错误，退出程序");
	//}
//}
//写一个猜数字游戏 自动产生1-100之间的随机数  猜数字 游戏可以一直玩 除非退出游戏
void menu() {
	printf("********************\n");
	printf("******1.play********\n");
	printf("******0.exit********\n");
	printf("********************\n");
}
void game() {
	//猜数字实现
	//生成随机数
	//rand函数返回了一个1-32767的数
	//时间戳

	int ret = rand()%100+1;//%100的余数是0-99然后+1范围就是1——100
	//printf("%d\n", ret);
	//猜数字
	int guess = 0;
	while (1) {
		printf("请猜数字\n");
		scanf("%d", &guess);
		if (guess < ret) {
			printf("猜小了\n");
		}
		else if (guess > ret) {
			printf("猜大了\n");
		}
		else if (guess = ret) {
			printf("猜对了\n");
			break;
			}
	}

}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();//打印菜单
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}