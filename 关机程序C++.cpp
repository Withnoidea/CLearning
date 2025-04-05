#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	system("shutdown -s -t 60");
	while(true)
	{
		printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
		cin >> s;
		if(s == "我是猪")
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}