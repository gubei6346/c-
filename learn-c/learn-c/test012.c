//�����ݹ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int my_strlen(char* str) {
//	int count = 0;
//	while(*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
int my_strlen(char* str) {//�ݹ�
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
void print(unsigned int n){
	if (n > 9) {
		print(n / 10);//��������
	}
	printf("%d ", n % 10);
}
int main() {
	/*printf("111");
	main();*/

	/*unsigned int num =0;
	scanf("%u ", &num);
	print(num);*///print�������Դ�ӡ�����������ֵ�ÿһλ

	char arr[] = "bit";
	//ģ��ʵ��һ��strlen����
	printf("%d\n", my_strlen(arr));
}
