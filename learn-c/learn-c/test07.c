#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//����n��
	/*int n = 0;
	printf("������n��");
	scanf("%d", &n);
	int plus = 1;
	for (int i = 1; i <= n; i++) {
		plus *= i;
	}
	printf("%d!=%d",n, plus);*/

	//����1��+2��+3��+4��+5!+6��+7��+8��+9��+10��
	//int n = 10;
	//int sum = 0;
	//for (int j = 1; j <= n;j++) {
	//	int plus = 1;//****�����λ������plus��ֵ������
	//	for (int i = 1; i <= j; i++) {
	//		plus *= i;
	//	}
	//	sum += plus;		
	//}
	//printf("1��+2��+3��+4��+5!+6��+7��+8��+9��+10��=%d\n", sum );

	//int n3 = 10;
	//int sum3 = 0;
	//int plus3 = 1;
	//for (int j3 = 1; j3 <= n; j3++) {
	//	for (int i3 = j3; i3 <= j3; i3++) {//��������С
	//		plus3 *= i3;
	//	}
	//	sum3 += plus3;
	//}
	//printf("1��+2��+3��+4��+5!+6��+7��+8��+9��+10��=%d\n", sum3);

	//int n1 = 10;
	//int plus1 = 1;
	//int sum1 = 0;
	//for (int i1 = 1; i1 <= n1; i1++) {//��������С
	//	plus1 *= i1;
	//	sum1 += plus1;
	//}
	//printf("1��+2��+3��+4��+5!+6��+7��+8��+9��+10��=%d\n", sum1);

	//��һ�����������в��Ҿ����ĳ������n
	//�۰����
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//Ҫ���ҵ�����
	//��arr������������в���k(7)��ֵ
	int sz = sizeof(arr) / sizeof(arr[1]);//�����Ԫ�ظ���
	int left = 0;
	int right = sz-1;
	int mid =left+righ
}