# levelup-recursion-and-backtracking#include<bits/stdc++.h>
using namespace std;

void palindrome(int cs, int fs, map<char, int> &m, char odd_ch, string psf)
{

	if (cs > fs)
	{
		cout << psf;
		reverse(psf.begin(), psf.end());
		if (odd_ch != '4')
		{
			cout << odd_ch;
		}
		cout << psf;
		cout << endl;
		return;
	}
	for (auto x : m)
	{
		if (x.second != 0)
		{
			//x.second-1;
			m[x.first] -= 1;
			palindrome(cs + 1, fs, m, odd_ch, psf + x.first);
			m[x.first] += 1;

		}
	}
	return;
}

int main()
{


	string s;
	cin >> s;
	int n = s.length();
	map<char, int > m;

	for (int i = 0; i < n; i++)
	{
		m[s[i]]++;
	}

	char odd_ch = '4';
	int odd_num = 0;

	//cout << m.size() << endl;


	int len = 0;
	for (auto x : m)
	{
		//cout << x.first << " " << x.second;
		if (x.second % 2 != 0)
		{
			odd_num++;
			odd_ch = x.first;
		}
		m[x.first] /= 2;
		len += x.second / 2;
	}
	/*cout << endl;
	cout << len << endl;
	for (auto x : m)
	{
		cout << x.first << " " << x.second;
	}
	cout << endl;*/
	if(odd_num>1)
	{
	    cout<<"-1";
	    
	}
	else
	palindrome(1, len, m, odd_ch, "");




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








