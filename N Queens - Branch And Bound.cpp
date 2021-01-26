# levelup-recursion-and-backtracking
#include<bits/stdc++.h>
using namespace std;





void queen(int n, int i, int j, int* col, int* ndiag, int* rdiad, string psf)
{
	if (i == n)
	{
		cout << psf << "." << endl;
	}

	for (int j = 0; j < n; j++)
	{
		if (col[j] == false and ndiag[i + j] == false and rdiad[i - j + n - 1] == false)
		{
			col[j] = true;
			ndiag[i + j] = true;
			rdiad[i - j + n - 1] = true;
			queen(n, i + 1, j, col, ndiag, rdiad, psf + to_string(i) + "-" + to_string(j) + ", ");
			col[j] = false;
			ndiag[i + j] = false;
			rdiad[i - j + n - 1] = false;
		}
	}
}

int main()
{



	int n;
	cin >> n;

	//int a[n][m];

	int* col = new int[n]();

	int *ndiag = new int[2 * n - 1]();
	int* rdiad = new int[2 * n - 1]();



	queen(n, 0, 0, col, ndiag, rdiad, "");

}



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

