//������2
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
	//int a = 0;
	//printf("%d", ~a);//~��λȡ��

	//int a = 10;
	//int b = ++a;//��++��ֵ
	//int b = a++;//�ȸ�ֵ��++
	//printf("%d\n", b);
	//printf("%d", a);
	
	//ǿ������ת��
	/*int a = (int)3.14;
	printf("%d", a);*/

	// �߼�Զ�� &&��||

	//��������������Ŀ��������
	//����
	//exp1 ? exp2 : exp3
	//exp1 ������exp2���㣬�������ʽ���exp2�Ľ��
	//exp1 ��������exp3���㣬�������ʽ���exp3�Ľ��
	//int a = 0;
	//int b = 3;
	//int max = 0;
	/*if (a > b)
		max = a;
	else
		max = b;*/

	//max = a > b ? a : b;
	//printf("%d", max);

	//���ű��ʽ
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);//a=5 c=1 b=3
//	//���ű��ʽ�����������μ��㣬������ʽ�Ľ�������һ�����ʽ�Ľ��
//	printf("%d", d);
//}



//static����ȫ�ֱ���
//static int g_val = 2024;

// static���κ���
//int g_val = 2024;
int Add(int x, int y) {
	return x + y;
}
//static int Add(int x, int y) {
//	return x + y;
//}
