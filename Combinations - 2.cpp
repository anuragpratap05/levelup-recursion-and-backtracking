# levelup-recursion-and-backtracking
#include<bits/stdc++.h>
using namespace std;

void solve(int idx, bool* a, int n, int k, string psf, int cnt, char* ans)
{

	//a[idx]=
	//cout << idx << endl;

	//cout << "aya" << endl;
	if (cnt == k)
	{

		for (int i = 0; i < n; i++)
		{
			cout << ans[i];
		}
		cout << endl;
		return;
	}



	for (int b = idx + 1; b < n; b++)
	{
		if (!a[b])
		{
			a[b] = true;
			ans[b] = 'i';
			solve(b, a, n, k, psf, cnt + 1, ans);
			a[b] = false;
			ans[b] = '-';
		}
	}
}




int main()
{



	int n, k;
	cin >> n >> k ;

	bool *a = new bool[k]();
	//int sum = 0;
	char* ans = new char[n];
	for (int i = 0; i < n; i++)
	{
		ans[i] = '-';
	}
	solve(-1, a, n, k, "", 0, ans);






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

