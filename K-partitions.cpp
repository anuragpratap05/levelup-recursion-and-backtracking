# levelup-recursion-and-backtracking#include<bits/stdc++.h>
using namespace std;
int c = 0;

void solution(int i, int n, int k, int nos, vector<vector<int>> &v )
{
	if (i > n)
	{
		

		if (nos == k)
		{
		    c++;
		    cout<<c<<". ";
			for (auto x : v)
			{
				//cout << x << " ";
				cout << "[";
				for (int it = 0; it < x.size(); it++)
				{
					if (it == x.size() - 1)
					{
						cout << x[it];
					}
					else
					{
						cout << x[it] << ",";
					}
				}
				cout << "] ";
			}
			cout << endl;
		}
		return ;
	}

	for (int j = 0; j < v.size(); j++)
	{
		if (v[j].size() > 0)
		{
			v[j].push_back(i);
			solution(i + 1, n, k, nos, v);
			v[j].pop_back();
		}
		else
		{
			v[j].push_back(i);
			solution(i + 1, n, k, nos + 1, v);
			v[j].pop_back();
			break;
		}
	}


	return;
}



int main()
{



	int n, k;
	cin >> n >> k;

	vector<vector<int>> v;
	for (int i = 0; i < k; i++)
	{
		vector<int> x;
		v.push_back(x);
	}

	//bool* visited = new bool[n + 1]();

	solution(1, n, k, 0, v);
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

