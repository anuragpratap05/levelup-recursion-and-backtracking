# levelup-recursion-and-backtracking
#include<bits/stdc++.h>
using namespace std;

void solution(string str, string pat, map<char, string> &m, string opat)
{
	if (pat.length() == 0)
	{
		if (str.length() == 0)
		{
			unordered_set<char > s;

			for (int i = 0; i < opat.length(); i++)
			{
				char th = opat[i];
				if (s.find(th) == s.end())
				{
					cout << th << " -> " << m[th] << ", ";
					s.insert(th);
				}
			}
			
			cout << ".";
			s.clear();

		}
		return;
	}


	char ch = pat[0];
	string r_pat = pat.substr(1);

	if (m.find(ch) != m.end())
	{

		string mapped_str = m[ch];
		if (str.length() >= mapped_str.length())
		{
			string left = str.substr(0, mapped_str.length());
			string right = str.substr(mapped_str.length());
			if (left == mapped_str)
			{
				solution(right, r_pat, m, opat);
			}
		}



	}
	else
	{
		for (int i = 0; i  < str.size(); i++)
		{
			string left = str.substr(0, i + 1);
			string right = str.substr(i + 1);

			m[ch] = left;
			solution(right, r_pat, m, opat);
			m.erase(ch);
		}
	}
}


int main()
{


	string str, pat;
	cin >> str >> pat;
	//int n = s.length();
	//int m = pat.length();
	map<char, string> m;

	solution(str, pat, m, pat);



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








