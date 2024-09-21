#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
vector<vector<int>> v2(10, vector<int>(10, 0));
vector<int> v3[10];

int main(){
	cout << "v:" << endl;
	for (int i = 1; i <= 10; i++) {
		vector<int> temp;
		for (int j = 1; j <= 10; j++) {
			temp.push_back(j);
		}
		v.push_back(temp);
	}
	for (auto a : v) {
		for (int b : a) {
			cout << b << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "v2:" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << v2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}