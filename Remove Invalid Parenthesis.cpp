# levelup-recursion-and-backtracking
#include<bits/stdc++.h>
using namespace std;


int check(string s, int n)
{
	stack<char> st;
	for (int i = 0; i < n; i++)
	{
		char ch = s[i];
		if (ch == '(')
		{
			st.push(ch);
		}
		else
		{
			if (st.size() == 0)
			{
				st.push(')');
			}
			else if (st.top() == ')')
			{
				st.push(')');
			}
			else if (st.top() == '(')
			{
				st.pop();
			}
		}
	}
	return st.size();
}

void valid_strings(string s, int n, int ra, map<string, int> &set1)
{
	//cout << ra << endl;

	if (ra == 0)
	{
		//cout << s << endl;

		//map<string, int> set1;
		if (check(s, s.length()) == 0)
		{
			if (set1[s] == 0)
			{
				cout << s << endl;
				set1[s]++;
			}

		}


		return;
	}

	for (int i = 0 ; i < s.length(); i++)
	{
		string left = s.substr(0, i);
		string right = s.substr(i + 1);

		string str = left + right;
		//cout << str << endl;

		valid_strings(str, n, ra - 1, set1);

	}
}


int main()
{



	string s;
	cin >> s;
	int n = s.length();
	//cout << s;
	//int m = pat.length();

	int unwanted = check(s, n);
	//cout << unwanted;
	map<string, int> set1;


	valid_strings(s, n, unwanted, set1);


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








