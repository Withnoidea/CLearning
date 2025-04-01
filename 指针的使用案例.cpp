#include <stdio.h>
int main()
{
//	int num = 10;
//	int *p;
//	p = &num;
//	*p = 20;
//	printf("%p\n", &num);//num地址
//	printf("%p\n", p);//p指针存放的地址
//	printf("%d\n", *p);//20
//	printf("%d\n", num);//20

//	char ch = 'w';
//	char *p = &ch;
//	*p = 'q';
//	printf("%c\n", ch);//q

//指针变量的大小取决于地址的大小
//32位平台下地址是32个bit位（即4个字节）
//64位平台下地址是64个bit位（即8个字节）

	printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(short *));
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(float *));
	printf("%d\n", sizeof(double *));
	printf("%d\n", sizeof(long *));
	printf("%d\n", sizeof(long long *));
	
	return 0;
}