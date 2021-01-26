#include<bits/stdc++.h>
using namespace std;

void help(string s, int count, string psf, int i)
{
	if (i == s.length())
	{
		if (count == 0)
			cout << psf << endl;
		else
		{
			cout << psf + to_string(count) << endl;
		}
		return;
	}
	if (count > 0)
		help(s, 0, psf + to_string(count) + s[i], i + 1);
	else
		help(s, 0, psf + s[i] , i + 1);
	help(s, count + 1, psf, i + 1);
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	help(s, 0, "", 0);












	/*for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}*/
	//cout << maxi;








}
