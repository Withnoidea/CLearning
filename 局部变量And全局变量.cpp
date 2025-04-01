#include <stdio.h>

int global = 2025;//全局变量
int main()
{
	int local = 2024;//局部变量
	int global = 2020;//局部变量
	printf("global = %d \n", global);
	//党局部变量和全局变量同名时，局部变量优先使用
	return 0;
}