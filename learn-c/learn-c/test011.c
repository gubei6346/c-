//函数调用
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//设计函数建议只完成独立的功能
//一个函数如果不写返回类型，默认返回int类型
int is_prime(int n) {
	//2-n-1之间的数字
	int j = 0;
	for (j = 2; j < n; j++) {
		if (n % j == 0)
			return 0;
	}
	return 1;
}
//int binary_search(int* a,int k)
int binary_search(int a[], int k, int s) {
	int left = 0; 
	//int sz = sizeof(arr) / sizeof(arr[0]); 不可以这样写 数组传参实际传递的是数组首元素的地址
	int right = s - 1;
	int mid = (left + right) / 2;
	while (left <= right) {
		if (a[mid] > k) {
			right = mid - 1;
		}
		else if (a[mid] < k) {
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}
int main() {
	//100-200之间的素数
	//int i = 0;
	//int count = 0;
	//for (i = 100; i <= 200; i++) {
	//	//判断i是否为素数
	//	if (is_prime(i) == 1) {
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("\ncount=%d\n", count);

	//折半查找
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
	if (ret == -1) {
		printf("cant find");
	}
	else {
		printf("find it");
	}
}