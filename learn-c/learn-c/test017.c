//������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main() {
	//����a��b�����õ���������
	int a = 5;
	int b = 3;
	/*a = a + b;
	b = a - b;
	a = a - b;*///���������������

	/*a = a ^ b;
	b = a ^ b;
	a = a ^ b;*/

	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int [10]));//int[10]��arr���������
	printf("%d\n", sizeof(a));//����a��ռ�ռ�Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);//sizeof��һ�����������Ǻ���

	//~��λȡ��
}