# levelup-recursion-and-backtracking#include<bits/stdc++.h>
using namespace std;
bool is_safe(int row, int col, int n, int** chess)
{
	for (int i = row, j = col; j >= 0; j--)
	{
		if (chess[i][j] != 0)
		{
			return false;
		}
	}

	for (int i = row, j = col; j < n; j++)
	{
		if (chess[i][j] != 0)
		{
			return false;
		}
	}

	for (int i = row, j = col; i >= 0; i--)
	{
		if (chess[i][j] != 0)
		{
			return false;
		}
	}

	for (int i = row, j = col; i < n; i++)
	{
		if (chess[i][j] != 0)
		{
			return false;
		}
	}

	for (int i = row, j = col; i >= 0 and j >= 0; i--, j--)
	{
		if (chess[i][j] != 0)
		{
			return false;
		}
	}

	for (int i = row, j = col; i < n and j < n; i++, j++)
	{
		if (chess[i][j] != 0)
		{
			return false;
		}
	}

	for (int i = row, j = col; i >= 0 and j < n; i--, j++)
	{
		if (chess[i][j] != 0)
		{
			return false;
		}
	}

	for (int i = row, j = col; i <n and j >= 0; i++, j--)
	{
		if (chess[i][j] != 0)
		{
			return false;
		}
	}
	return true;


}

void queenspermutations(int qpsf, int n, int** chess)
{
	if (qpsf == n)
	{
		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				if (chess[x][y])
				{
					cout << "q" << to_string(chess[x][y]) << "\t";
				}
				else
				{
					cout << "-\t";
				}

			}
			cout << endl;
		}
		cout << endl;
		return;
	}


	for (int cell = 0; cell < n * n; cell++)
	{
		int row = cell / n;
		int col = cell % n;

		if (chess[row][col] == 0 and is_safe(row, col, n, chess))
		{
			chess[row][col] = qpsf + 1;
			queenspermutations(qpsf + 1, n, chess);
			chess[row][col] = 0;
		}
	}


	return;


}

int main()
{

#ifndef ONLINE_jUDGE
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	int n;
	cin >> n ;
	bool* a = new bool[n]();


	//bool *a = new bool[k]();
	//int sum = 0;
	//char* ans = new char[n];

	int** chess = new int* [n];
	for (int i = 0; i < n; i++)
	{
		chess[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			chess[i][j] = 0;
		}
	}

	queenspermutations(0, n, chess);





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

