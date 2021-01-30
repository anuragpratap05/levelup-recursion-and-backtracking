# levelup-recursion-and-backtracking
#include<bits/stdc++.h>
using namespace std;
int c = 0;

bool equal_sum(int* subsetSum, int k)
{
	for (int i = 0; i < k - 1; i++)
	{
		if (subsetSum[i] != subsetSum[i + 1])
		{
			return false;
		}
	}
	return true;
}

void solution(int* a, int vidx, int n, int k, int* subsetSum, int nos, vector<vector<int>> &v)
{

	if (vidx == n)
	{
		if (nos == k)
		{
			if (equal_sum(subsetSum, k))
			{
				for (auto x : v)
				{
					cout << "[";
					for (int idx = 0; idx < x.size(); idx++)
					{
						if (idx == x.size() - 1)
						{
							cout << x[idx];
						}
						else
						{
							cout << x[idx] << ", ";
						}
					}
					cout << "] ";
				}

				cout << endl;
			}
			//cout << endl;
		}
		return;
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].size() > 0)
		{
			v[i].push_back(a[vidx]);
			subsetSum[i] += a[vidx];
			solution(a, vidx + 1, n, k, subsetSum, nos, v);
			v[i].pop_back();
			subsetSum[i] -= a[vidx];
		}
		else
		{

			v[i].push_back(a[vidx]);
			subsetSum[i] += a[vidx];
			solution(a, vidx + 1, n, k, subsetSum, nos + 1, v);
			v[i].pop_back();
			subsetSum[i] -= a[vidx];
			break;

		}
	}
}



int main()
{


	int n, k;
	cin >> n ;

	int *a = new int[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}

	cin >> k;

	if (k == 1) {
		cout << "[";
		for (int i = 0; i < n; i++) {
			cout << a[i] << ", ";
		}
		cout << "]";

	}
	//if there are more subsets than no. of elements in array or sum of all elements is not divisible by k
	else if (k > n || sum % k != 0) {
		cout << "-1";

	}
	else
	{
		int* subsetSum = new int[k]();


		vector<vector<int>> v;
		for (int i = 0; i < k; i++)
		{
			vector<int> x;
			v.push_back(x);
		}

		//bool* visited = new bool[n + 1]();

		//solution(1, n, k, 0, v);
		solution(a, 0, n, k, subsetSum, 0, v);
	}
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

