#include <stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch(n)
	{
		case 1:
			m ++;//m=3
		case 2:
			n ++;//n=2
		case 3:
			switch(n)
			{
				case 1:
					n ++;
				case 2:
					m ++;// m = 4
					n ++;//n = 3
					break;
			}
		case 4:
			m ++;//m = 5
			break;
		default :
			break;
	}
	
	printf("m = %d, n = %d", m , n);// 5 3
	return 0;
}