//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//void bubble_sort(int* arr[],int sz) {	
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		//һ���������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++) {
//			if (arr[j] > arr[j] + 1) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//ȷ������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����Ϊ����-ð������
//	bubble_sort(arr,sz);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	 
//}