//��������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ƺ�������ֻ��ɶ����Ĺ���
//һ�����������д�������ͣ�Ĭ�Ϸ���int����
int is_prime(int n) {
	//2-n-1֮�������
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
	//int sz = sizeof(arr) / sizeof(arr[0]); ����������д ���鴫��ʵ�ʴ��ݵ���������Ԫ�صĵ�ַ
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
	//100-200֮�������
	//int i = 0;
	//int count = 0;
	//for (i = 100; i <= 200; i++) {
	//	//�ж�i�Ƿ�Ϊ����
	//	if (is_prime(i) == 1) {
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("\ncount=%d\n", count);

	//�۰����
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