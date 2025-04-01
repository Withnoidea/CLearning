//define 定义标识符常量
#define MAX 100

//define 定义宏
#define ADD(x, y) ((x) + (y))

#include <stdio.h>
int main()
{
	int sum = ADD(2, 3);//等价sum = ((2) + (3)) = 5
	printf("%d\n", sum);
	
	sum = 10 * ADD(2,3); //等价 10 * ((2) + (3)) = 50
	printf("%d\n", sum);
	
	return 0;
}