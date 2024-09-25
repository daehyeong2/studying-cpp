#include <bits/stdc++.h>
using namespace std;

int s(int n) {
	return n * (n + 1) / 2;
}

int main() {
	int n = 6, a = 3, l = 28;
	cout << n * (a + l) / 2 << "\n";
	cout << s(n) << "\n";
	return 0;
}