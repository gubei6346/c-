//����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main() {
	//int arr[8];
	//char ch[5];
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//��ȫ��ʼ��
	//int arr1[10] = { 1,2,3,4,5 };//����ȫ��ʼ��
	int arr2[] = { 1,2,3,4,5 };//��������ȷ�������С
	//char ch[5] = { 'b','b','b' };
	//char ch1[] = { 'b','b','b' };//��������ȷ�������С
	
	//char ch3[5] = "bit";//b i t \0 0
	//char ch4[] = "bit";//b i t \0
	//char ch5[] = { 'b','i','t' };// b i t
	//printf("%d\n", strlen(ch4));//3
	//printf("%d\n", strlen(ch5));//���ֵ
	//printf("%s\n", ch4); 
	//printf("%s\n", ch5);

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *p=arr;//��������������Ԫ�صĵ�ַ
	for (int i = 0; i < 10; i++) {
		printf("%d ", *p);
		p++;
	}
	/*arr[4] = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}*/

	//%p�ǰ���ַ��ʽ��ӡ
	//for (int i = 0; i < 10; i++) {
	//	printf("&arr[%d]=%p\n",i, &arr[i]);//һά���鰥�ڴ�����������ŵ�
	//}


}