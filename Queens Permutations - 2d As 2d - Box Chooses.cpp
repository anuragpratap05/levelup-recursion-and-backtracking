# levelup-recursion-and-backtracking
#include<bits/stdc++.h>
using namespace std;

void queensPermutations(int qpsf,  int row, int col, int n, string psf, bool* a)
{
	//cout  << " row=" << row << "col=" << col << " noq=" << qpsf << " psf=" << psf << endl;
	if (row == n)
	{
		//cout << "row=" << row << endl;
		if(qpsf==n)
		cout << psf << endl<<endl;
		return;
	}

	int nr = 0;
	int nc = 0;
	string sep = ".";
	if (col == n - 1)
	{
		nr = row + 1;
		nc = 0;
		sep = "\n";
	}
	else
	{
		nr = row;
		nc = col + 1;
		sep = "\t";
	}

	for (int i = 0; i < n; i++)
	{
		if (!a[i])
		{
			a[i] = true;
			queensPermutations(qpsf + 1, nr, nc, n, psf + "q" + to_string(i + 1) + sep, a);
			a[i] = false;
		}
	}
	queensPermutations(qpsf, nr, nc, n, psf + "-" + sep, a);
}

int main()
{



	int n;
	cin >> n ;
	bool* a = new bool[n]();


	//bool *a = new bool[k]();
	//int sum = 0;
	//char* ans = new char[n];

	queensPermutations(0, 0, 0, n, "", a);






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

