//for循环
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	/*for (int i = 0; i <= 10; i++) {
		printf("%d", i); 
		
	}*/

	/*int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++){
		printf("%d", arr[i]);
	}*/

	//for (;;) {//都可以省略   判断部分省略--判断部分恒为真
	//	printf("1111");
	//}

	/*int  i = 0;
	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("11\n");
		}
	}*/



	//执行0次
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++) {
		k++;
	}
}
