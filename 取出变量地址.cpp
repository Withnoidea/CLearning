#include <stdio.h>
int main()
{
	int num = 10;
	&num;
	//int num有四个字节，每个字节都有地址，取出的是第一个字节的地址
	printf("%p\n", &num);//%p以地址形式打印
}