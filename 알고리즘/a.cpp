#include <bits/stdc++.h>
using namespace std;

void rotate_left_90(vector<vector<int>>& key) {
	int n = key.size();
	int m = key[0].size();
	vector<vector<int>> temp(m, vector<int>(n, 0));

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			temp[i][j] = key[j][m - i - 1];
		}
	}

	key.resize(m);
	key[0].resize(n);
	
	key = temp;
	return;
}

void rotate_right_90(vector<vector<int>>& key) {
	int n = key.size();
	int m = key[0].size();
	vector<vector<int>> temp(m, vector<int>(n, 0));

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			temp[i][j] = key[n - j - 1][i];
		}
	}

	key.resize(m);
	key[0].resize(n);

	key = temp;
	return;
}

int main() {
	vector<vector<int>> a = { {1,2,4}, {5,6,7}, {9,0,1} };
	rotate_left_90(a);
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a[0].size(); j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}