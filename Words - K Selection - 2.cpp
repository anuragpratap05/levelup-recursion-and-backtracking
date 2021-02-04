# levelup-recursion-and-backtracking
#include<bits/stdc++.h>
using namespace std;


void word_break(int idx, string s, int n, int ls, string psf, int k)
{
	if (idx > k)
	{

		cout << psf << endl;

		return;
	}
	for (int i = ls + 1; i < s.length(); i++)
	{
		char ch = s[i];
		word_break(idx + 1, s, n, i, psf + ch, k);
	}
}


int main()
{


	string s;
	cin >> s;
	int k;
	cin >> k;
	int n = s.length();
	set<char> sets;

	for (int i = 0; i < s.length(); i++)
	{
		char ch = s[i];
		sets.insert(ch);
	}
	//cout << sets[0] << endl;
	string t = "";
	for (auto x : sets)
	{
		//cout << x << " ";
		t += x;
	}
	word_break(1,	t, n, -1, "", k);



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








