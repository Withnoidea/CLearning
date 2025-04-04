#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int res = 0;
	for(int i = 1; i <= n; i ++)
	{
		int r = 1;
		for(int j = 1;j <= i; j ++)
			r *= j;
		res += r;
	}
	printf("%d\n", res);
	return 0;
}