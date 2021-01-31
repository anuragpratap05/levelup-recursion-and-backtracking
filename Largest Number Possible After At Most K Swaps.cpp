# levelup-recursion-and-backtracking#include<bits/stdc++.h>
using namespace std;

int maxi = INT_MIN;

string swap_f(string s, int i, int j)
{
	//string str1;
	string ith = "";
	string jth = "";
	ith +=  s[i];
	//cout<<"ith="<<ith<<endl;

	jth += s[j];
	//cout<<"jth="<<jth<<endl;

	string left = s.substr(0, i);
	//cout<<"left="<<left<<endl;
	string middle = s.substr(i + 1 , j - i - 1);
	//cout<<"middle="<<middle<<endl;
	string right = s.substr(j + 1);
	//cout<<"right="<<right<<endl;

	string ans = left + jth + middle + ith + right;
	//cout << ans;
	return ans;


}




void solve(string s, int k)
{

	//int dig = stoi(s);
	//cout << dig;
	/*if (dig > maxi)
	{
		maxi = dig;
	}*/

	int dig = stoi(s);
	if (dig > maxi)
	{
		maxi = dig;
	}

	//cout << s << endl;

	if (k == 0)
	{

		return;
	}
	for (int i = 0; i < s.length() - 1; i++)
	{
		for (int j = i + 1; j < s.length(); j++)
		{
			if (s[i] < s[j])
			{
				//cout << s[i] << " " << s[j] << endl;
				s = swap_f(s, i, j);
				solve(s, k - 1);
				s = swap_f(s, i, j);
			}
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

	int k;
	cin >> k;


	//cout << s;
	//int m = pat.length();



	solve(s, k);
	cout << maxi;



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








