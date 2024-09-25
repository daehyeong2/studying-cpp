#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v = {1, 2, 3, 4, 5, 6};
	rotate(v.begin(), v.begin() + 1, v.end());
	for(int i : v) cout << i << ' ';
}