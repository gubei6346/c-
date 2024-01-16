//转义字符
#include <stdio.h>
//int main() {
//	//printf("D:\test\test.c");
//	printf("ab\ncd");
// printf("(??)"); ??)--]   用?\?\)解决
//}
int main() {
	printf("%C\n", '\130');//八进制  X--ASCII码是88
	printf("%c\n", '\101');//A-65 八进制是101
	printf("%c\n", '\x30');
	printf("%d\n", strlen("abc"));
}