//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
	//int a = 0;
	//int b = 0;
	//int c = 0;
	////����
	//scanf("%d%d%d", &a, &b, &c);
	////����˳��
	//if (a < b) {
	//	int tmp = a;
	//	a = b;
	//	b = tmp;
	//}
	//if (a < c) {
	//	int tmp = a;
	//	a = c;
	//	c = tmp;
	//}
	//if (b < c) {
	//	int tmp = b;
	//	b = c;
	//	c = tmp;
	//}
	////���
	//printf("%d %d %d",a,b,c);


	//�������������Լ��
	//int m = 0;
	//int n = 0;
	//scanf("%d %d", &m, &n);
	//int max = m>n?n:m;//��maxΪm��n�����Լ��
	//while (1) {
	//	if (m % max == 0 && n % max == 0) {
	//		printf("���Լ���ǣ�%d\n", max);
	//		break;
	//	}
	//	max--;
	//}

	//շת����������Լ��
	//int m = 0;
	//int n = 0;
	//int t = 0;
	//scanf("%d%d", &m, &n);
	//while (t = m % n) //����Ƚ�m��n�Ĵ�С
	//{
	//	m = n;
	//	n = t;
	//}
	//printf("���Լ��Ϊ��%d", n);

	//���1000-2000֮�������
	//int y = 0;
	//int count = 0;
	//for (y = 1000; y <= 2000; y++) {
	//	//�ж��ǲ�������
	//	//�ܱ�4�������ܱ�100����
	//	//�ܱ�400����
	//	if ((y % 4 == 0 && y % 100 != 0)||(y % 400 == 0)) {
	//		printf("%d ", y);
	//		count++;
	//	}
	//}
	//printf("\ncount=%d\n", count);

	//��ӡ100-200֮�������
	//int i = 0;
	//int count = 0;
	//for (i = 101; i <= 200; i+=2) {//ż����������
	//	int j = 0;
	//	int flag = 1;
	//	for (j = 2; j <=sqrt(i); j++) {//sqrt�ǿ�ƽ��
	//		if (i % j == 0) {
	//			flag = 0;//��������
	//			break;
	//		}
	//	}
	//	if (flag==1) {
	//		count++;
	//		printf("%d\n", i);
	//    }	
	//}
	//printf("\ncount=%d\n", count);
//}