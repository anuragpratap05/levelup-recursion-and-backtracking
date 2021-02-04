# levelup-recursion-and-backtracking
#include<bits/stdc++.h>
using namespace std;


void word_break(int idx, string s, set<char> sets, int n, int cnt, string psf, int k)
{
	if (idx == s.length())
	{
		if (cnt == k)
		{
			cout << psf << endl;
		}
		return;
	}
	word_break(idx + 1, s, sets, n, cnt + 1, psf + s[idx], k);
	word_break(idx + 1, s, sets, n, cnt, psf, k);
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
	word_break(0,	t, sets, n, 0, "", k);



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








