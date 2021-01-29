# levelup-recursion-and-backtracking
#include<bits/stdc++.h>
using namespace std;

string get_sum(string s, map<char , int>& ma)
{
	//int num = 0;
	string num = "";
	for (int i = 0; i < s.length(); i++)
	{

		char ch = s[i];
		//cout << ma[ch] << " ";

		num += to_string(ma[ch]);
	}

	//cout << num;

	return num;
}


void solve(string s1, string s2, string s3, map<char , int>& ma, bool* used, string unique_str, int i, vector<char> &clone)
{

	if (i == unique_str.length())
	{
		string sum1 = get_sum(s1, ma);
		string sum2 = get_sum(s2, ma);
		string sum3 = get_sum(s3, ma);
		//cout << sum1 << " " << sum2 << " " << sum3 << endl;
		int a = stoi(sum1);
		int b = stoi(sum2);
		int c = stoi(sum3);
		if (a + b == c)
		{

			//string clone = sort(unique_str.begin(), unique_str.end());
			for (int idx = 0; idx < clone .size(); idx++)
			{
				char th = clone[idx];
				//cout << clone[idx];
				cout << th << "-" << ma[th] << " ";
			}
			cout << endl;
			//cout << sum1 << " " << sum2 << " " << sum3 << endl;

			/*for (auto x : ma)
			{
				cout << x.first << "->" << x.second << "," ;
			}
			cout << endl;*/

			/*cout << sum1 << " " << sum2 << " " << sum3 << endl;
			for (int j = 0; j < 26; j++)
			{
				char th = 'a' + j;

				//fot(int idx==)
				if (ma[th] )
				{
					cout << th << "-" << ma[th] << " , ";
				}
			}
			cout << endl;*/
		}
		return;
	}
	char ch = unique_str[i];
	for (int dig = 0; dig <= 9; dig++)
	{
		if (used[dig] == false)
		{
			used[dig] = true;
			ma[ch] = dig;
			solve(s1, s2, s3, ma, used, unique_str, i + 1, clone);
			used[dig] = false;
			ma[ch] = -1;
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

	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	vector<char> clone;

	int n = s1.length();
	int m = s2.length();
	int k = s3.length();

	map<char , int> ma;
	bool* used = new bool[10]();

	string unique_str = "";

	for (int i = 0; i < n; i++)
	{
		char ch = s1[i];
		if (!ma[ch])
		{
			ma[ch] = -1;
			unique_str += ch;
			clone.push_back(ch);
		}
	}

	for (int i = 0; i < m; i++)
	{
		char ch = s2[i];
		if (!ma[ch])
		{
			ma[ch] = -1;
			unique_str += ch;
			clone.push_back(ch);
		}
	}

	for (int i = 0; i < k; i++)
	{
		char ch = s3[i];
		if (!ma[ch])
		{
			ma[ch] = -1;
			unique_str += ch;
			clone.push_back(ch);
		}
	}
	//cout << unique_str << endl;
	/*for (auto x : ma)
	{
		cout << x.first << "->" << x.second << endl;
	}*/
	//string clone = sort(unique_str.begin(), unique_str.end());

	sort(clone.begin(), clone.end());

	solve(s1, s2, s3, ma, used, unique_str, 0, clone);
//


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








