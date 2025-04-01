#include <stdio.h>

enum Sex{
	MALE,
	FAMALE,
	SECRET
};
//MALE FAMALE SECRET 是枚举常量
int main()
{
	//字面常量
	3.14;
	100;
	
	//const 修饰的常变量
	const float pai = 3.14;
//	pai = 5.28;
	
	//define 标识符常量
	#define MAX 100
	printf("max = %d\n", MAX);
	
	//枚举常量
	printf("%d\n", MALE);
	printf("%d\n", FAMALE);
	printf("%d\n", SECRET);
	//枚举常量默认从0开始
	
	return 0;
}