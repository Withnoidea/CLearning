#include<stdio.h>
const int N = 1e5 + 10;
int q[N];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i ++)
		scanf("%d", &q[i]);
	int l = 0, r = n - 1;
	while(l < r)
	{
		int mid = l + r >> 1;
		if(q[mid] >= m) r = mid;
		else l = mid + 1;
	}
	printf("%d\n", l);
	return 0;
}