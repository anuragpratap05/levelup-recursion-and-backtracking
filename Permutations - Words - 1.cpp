# levelup-recursion-and-backtracking#include<bits/stdc++.h>
using namespace std;


void word_break(string s, map<char, int> &m, string psf, int n)
{

	if (n == 0)
	{
		cout << psf << endl;
		return;
	}
	for (auto x : m)
	{
		if (m[x.first] != 0)
		{
			m[x.first]--;
			word_break(s, m, psf + x.first, n - 1);
			m[x.first]++;
		}
	}
	return;
}


int main()
{



	string s;
	cin >> s;
	int n = s.length();
	map<char, int> m;

	for (int i = 0; i < s.length(); i++)
	{
		char ch = s[i];
		m[ch]++;
	}



	//cout << s;
	//int m = pat.length();



	word_break(s, m, "", n);



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








