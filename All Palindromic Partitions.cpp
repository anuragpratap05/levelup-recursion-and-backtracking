# levelup-recursion-and-backtracking#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string s)
{
	int i = 0;
	int j = s.length() - 1;
	while (i < j)
	{
		if (s[i] != s[j])
		{
			return false;
		}
		i++;
		j--;
	}
	return true;
}

void palindrome(string s, string asf)
{
	if (s.length() == 0)
	{
		cout << asf << endl;
		return;
	}
	for (int i = 0; i < s.length(); i++)
	{
		string prefix = s.substr(0, i + 1);
		if (is_palindrome(prefix))
		{
			string ros = s.substr(i + 1);

			palindrome(ros, asf + "(" + prefix + ") ");
		}
	}
}

int main()
{


	string s;
	cin >> s;
	int n = s.length();



	palindrome(s, "");




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







