//数组
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main() {
	//int arr[8];
	//char ch[5];
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
	//int arr1[10] = { 1,2,3,4,5 };//不完全初始化
	int arr2[] = { 1,2,3,4,5 };//根据内容确定数组大小
	//char ch[5] = { 'b','b','b' };
	//char ch1[] = { 'b','b','b' };//根据内容确定数组大小
	
	//char ch3[5] = "bit";//b i t \0 0
	//char ch4[] = "bit";//b i t \0
	//char ch5[] = { 'b','i','t' };// b i t
	//printf("%d\n", strlen(ch4));//3
	//printf("%d\n", strlen(ch5));//随机值
	//printf("%s\n", ch4); 
	//printf("%s\n", ch5);

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *p=arr;//数组名是数组首元素的地址
	for (int i = 0; i < 10; i++) {
		printf("%d ", *p);
		p++;
	}
	/*arr[4] = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}*/

	//%p是按地址格式打印
	//for (int i = 0; i < 10; i++) {
	//	printf("&arr[%d]=%p\n",i, &arr[i]);//一维数组哎内存中是连续存放的
	//}


}