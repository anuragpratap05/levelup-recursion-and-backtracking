# levelup-recursion-and-backtracking
#include<bits/stdc++.h>
using namespace std;


void word_break(string s, map<string, int>&m, int n, string psf)
{
	if (s.length() <= 0)
	{
		cout << psf << endl;
		return;
	}
	for (int i = 0; i < s.length() ; i++)
	{
		string left = s.substr(0, i + 1);
		if (m[left])
		{
			string right = s.substr(i + 1);
			word_break(right, m, n, psf + left + " ");
		}

	}
	return;
}


int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	map<string, int> m;
	for (int i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		m[x]++;
	}
	string s;
	cin >> s;
	//int n = s.length();
	//int m = pat.length();




	word_break(s, m, n, "");


	//palindrome(s, "");




}



/*for (int i = 0; i <= n; i++)
{
	for (int j = 0; j <= n; j++)
	{
		cout << dp[i][j] << " ";
	}
	cout << endl;
}*/
//cout << maxi;








