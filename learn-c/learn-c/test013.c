//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str) {
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right) {
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//递归
//void reverse_string(char* str) {
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(my_strlen(str+1)>=2){
//		reverse_string(str + 1);
//	}
//	
//	*(str + len - 1) = tmp;
//}

//double Pow(int n,int k) {
//	if (k == 0) {
//		return 1;
//	}
//	else if (k > 0) {
//		return n * Pow(n, k - 1);
//	}
//	else {
//		return 1.0 / (Pow(n, -k));
//	}
//}
//int main() {
	//加减交替求分数的和
	/*int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++) {
		sum += flag*1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);*/

	//求最大值
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];
	int i = 0;
	for (i = 0; i < 10; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d\n", max);*/
	//乘法口诀表
	//int i = 1;
	//for (i = 1; i <= 9; i++) {
	//	for (int j = 1; j <= i; j++) {
	//		printf("%d*%d=%2d ", j, i,i*j);//-2d
	//	}
	//	printf("\n");
	//}

	//将字符串逆序
	/*char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);*/

	//编写一个函数实现n的k次方，使用递归实现
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret=Pow(n, k);
//	printf("%lf\n", ret);
//}