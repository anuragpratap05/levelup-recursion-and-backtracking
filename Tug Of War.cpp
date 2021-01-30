# levelup-recursion-and-backtracking
#include<bits/stdc++.h>
using namespace std;

int mini = INT_MAX;
string ans ;
void solve(int* a, int vidx, vector<int>& set1, vector<int>& set2, int soset1, int soset2, int n)
{
	if (vidx == n)
	{
		int delta = abs(soset1 - soset2);
		if (delta < mini)
		{
			mini = delta;
			ans = "";
			string a = "";
			string b = "";
			for (int idx = 0; idx < set1.size(); idx++)
			{
				if (idx == set1.size() - 1)
				{
					a += to_string(set1[idx]);
				}
				else
				{
					a += (to_string(set1[idx]) + ", ");
				}
			}

			for (int idx = 0; idx < set2.size(); idx++)
			{
				if (idx == set2.size() - 1)
				{
					b += to_string(set2[idx]);
				}
				else
				{
					b += (to_string(set2[idx]) + ", ");
				}
			}

			ans += "[" + a + "] " + "[" + b + "]";
			//cout << ans << endl;
		}
		return;

	}

	if (set1.size() < (n + 1) / 2)
	{
		soset1 += a[vidx];
		set1.push_back(a[vidx]);
		solve(a, vidx + 1, set1, set2, soset1 + a[vidx], soset2, n);
		soset1 -= a[vidx];
		set1.pop_back();
	}
	if (set2.size() < (n + 1) / 2)
	{
		soset2 += a[vidx];
		set2.push_back(a[vidx]);
		solve(a, vidx + 1, set1, set2, soset1, soset2 + a[vidx] , n);
		soset2 -= a[vidx];
		set2.pop_back();
	}
}



int main()
{



	int n, k;
	cin >> n ;

	int *a = new int[n];
	//int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		//sum += a[i];
	}

	vector<int> set1;

	vector<int> set2;

	solve(a, 0, set1, set2, 0, 0, n);
	cout << ans;






}

/*3 1 6 5 7 8 4 9 2
5 2 9 1 3 4 7 6 8
4 8 7 6 2 9 5 3 1
2 6 3 4 1 5 9 8 7
9 7 4 8 6 3 1 2 5
8 5 1 7 9 2 6 4 3
1 3 8 9 4 7 2 5 6
6 9 2 3 5 1 8 7 4
7 4 5 2 8 6 3 1 9*/

/*3 1 6 5 7 8 4 9 2
5 2 9 1 3 4 7 6 8
4 8 7 6 2 9 5 3 1
2 6 3 4 1 5 9 8 7
9 7 4 8 6 3 1 2 5
8 5 1 7 9 2 6 4 3
1 3 8 9 4 7 2 5 6
6 9 2 3 5 1 8 7 4
7 4 5 2 8 6 3 1 9*/



//map<int, int> x = maps[1];
//cout << x[0];



//cout << dp[n];
//cout << ans;
/*for (int i = 0; i < n; i++)
{
	cout << dp[i] << " ";
}*/



/*for (auto vec : *v[0])
{
	for (auto ele : vec)
	{
		cout << ele << " ";
	}
	cout << endl;
}*/
/*for (int i = 0; i < v[5].size(); i++)
{
	cout << v[5][i] << " ";
}*/



//int maping[][10] = {{0, 8}, {1, 4, 2}, {1, 2, 3, 5}, {2, 3, 6}, {1, 4, 7, 5}, {2, 4, 5, 6, 8}, {3, 6, 9, 5}, {4, 7, 8}, {5, 7, 8, 9, 0}, {8, 9, 6}};

//cout << maping[2][3] << " " << maping[0][1];

/*int mini = INT_MAX;

for (int i = 0; i < n; i++)
{
	mini = min(mini, dp[0][i]);
}
cout << mini;*/
/*for (int i = 0; i < n; i++)

{
	for (int j = 0; j < m; j++)
	{
		cout << dp[i][j] << " ";
	}
	cout << endl;
}*/
//cout << dp[eggs][floor];

