//�ؼ���
/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef unsigned int u_int;*///�����ض���  unsigned int
//void test() {//static���ξֲ�����
//	static int a = 1;//a ���ᱻ����
//	a++;
//	printf("%d\n", a);
//}
//int main() {
	/*register int a = 100;*///����洢���Ĵ�����

	//typedef �����ض���
	/*unsigned int num = 100;
	u_int num1 = 100;*/

	//static ��̬��
	//static���ξֲ��������ı��˾ֲ��������������� �������Ǹı��˴洢���ͣ���ջ��תΪ��̬����    
	//static����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���.c���ļ��ڲ�ʹ�ã�����Դ�ļ��޷�ʹ��
	// ��ȫ�ֱ���������Դ�ļ��ڲ�����ʹ������Ϊȫ�ֱ��������ⲿ�������� ���Ǳ�static����֮��ͱ�����ڲ���������)
	//static���κ�����ʹ�ú���ֻ�����Լ����ڵ�Դ�ļ��ڲ�����������Դ�ļ��ڲ�ʹ�ã�������ʱ���������ⲿ�������Ա�����ڲ���������

	//static���ξֲ�����
	/*int i = 0;
	while (i<10)
	{
		test();
		i++;
	}*/


	//static����ȫ�ֱ�����ȫ�ֱ��������������ж�����ʹ�ã�
	//extern�����ⲿ����
	//extern int g_val;//��test6��
	//printf("%d\n", g_val);


	//��������
//	extern int Add(int x, int y);
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//}