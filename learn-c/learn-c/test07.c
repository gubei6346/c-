#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
//int main() {
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
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;//Ҫ���ҵ�����
	//printf("input the number to find:\n");
	//scanf("%d", &k);
	////��arr������������в���k(7)��ֵ
	//int sz = sizeof(arr) / sizeof(arr[1]);//�����Ԫ�ظ���
	//int left = 0;
	//int right = sz-1;
	//while (left<=right) {
	//	int mid = (left + right) / 2;
	//	if (arr[mid] < k) {
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > k) {
	//		right = mid - 1;
	//	}
	//	else {
	//		printf("find it:%dth\n", mid);
	//		break;
	//	}
	//}
	//if (left > right) {
	//	printf("cant find it\n");
	//}

	//�ַ������
	//char arr1[] = "welcome!!!!!";
	//char arr2[] = "############";
	//int left = 0;
	//int right = strlen(arr1) - 1;
	//while (left <= right) {
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(1000);//˯��1��
	//	system("cls");//�����Ļ
	//	left++;
	//	right--;
	//}
	//printf("%s\n", arr2);

	//��¼���� ���3�λ���
	//int i = 0;
	////������ȷ�������ַ�����123456��
	//char password[20] = { 0 };
	//for (i = 0; i < 3; i++) {
	//	printf("����������\n");
	//	scanf("%s", password);//password�����鲻��Ҫȡ��ַ
	//	if (strcmp(password, "123456") == 0) {//�Ƚ������ַ�����������== Ӧ��ʹ��strcmp
	//		printf("��¼�ɹ�\n");
	//		break;
	//	}
	//	else {
	//		printf("�����������������\n");
	//	}
	//}
	//if (i == 3) {
	//	printf("��������������˳�����");
	//}
//}
//дһ����������Ϸ �Զ�����1-100֮��������  ������ ��Ϸ����һֱ�� �����˳���Ϸ
void menu() {
	printf("********************\n");
	printf("******1.play********\n");
	printf("******0.exit********\n");
	printf("********************\n");
}
void game() {
	//������ʵ��
	//���������
	//rand����������һ��1-32767����
	//ʱ���

	int ret = rand()%100+1;//%100��������0-99Ȼ��+1��Χ����1����100
	//printf("%d\n", ret);
	//������
	int guess = 0;
	while (1) {
		printf("�������\n");
		scanf("%d", &guess);
		if (guess < ret) {
			printf("��С��\n");
		}
		else if (guess > ret) {
			printf("�´���\n");
		}
		else if (guess = ret) {
			printf("�¶���\n");
			break;
			}
	}

}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();//��ӡ�˵�
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}