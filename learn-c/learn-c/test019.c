//ָ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main() {
	int a = 10;
	int *pa=&a;//�õ�����a��4���ֽ��е�һ���ֽڵĵ�ַ
	*pa = 20;

	int arr[10] = { 0 };
	/*int* p = arr;
	char* pc = arr;
	printf("%p\n", p);
	printf("%p\n", p + 1);*/
	//ָ�����͵�����
	//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��
	//2.ָ�����;����ˣ�ָ����һ�������߶�Զ������)

	int* p = arr;
	for (int i = 0; i < 10; i++) {
		*(p + i)=1;
	}
}