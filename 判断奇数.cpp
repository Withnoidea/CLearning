#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	if(num % 2)
	{
		printf("%d 是奇数\n", num);
	}
	else
	{
		printf("%d 不是奇数\n", num);	
	}
	
	return 0;
}