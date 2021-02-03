# levelup-recursion-and-backtracking
#include<bits/stdc++.h>
using namespace std;


void word_break(int idx, string s, map<char, int> &m, char* boxes, int n, int cnt )
{

	if (idx == n)
	{

		for (int x = 0; x < n; x++)
		{
			cout << boxes[x];
		}
		cout << endl ;

		return;
	}

	char ch = s[idx];
	int lo = m[ch];

	//cout << ch << " " << lo << " idx=" << idx  << " " ;

	for (int i = lo + 1; i < n; i++)
	{
		//cout << "i=" << i << endl;
		if (boxes[i] == '-')
		{
			m[ch] = i;
			boxes[i] = ch;
			word_break(idx + 1, s, m, boxes, n, cnt + 1);
			m[ch] = lo;
			boxes[i] = '-';
		}
	}
}


int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	string s;
	cin >> s;
	int n = s.length();
	map<char, int> m;

	for (int i = 0; i < s.length(); i++)
	{
		char ch = s[i];
		m[ch] = -1;
	}




	//cout << s;
	//int m = pat.length();

	char* boxes = new char[n];
	for (int i = 0; i < n; i++)
	{
		boxes[i] = '-';
	}



	word_break(0,	s, m, boxes, n, 0);



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








