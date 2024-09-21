#include <bits/stdc++.h>
using namespace std;

void test(int arr[]) {
	arr[1] = 1000;
}

void test1(int arr[3]) {
	arr[1] = 1000;
}

void test2(int *arr) {
	arr[1] = 1000;
}

int main(){
	int array[3] = { 1,2,3 };
	test(array);
	for (int v : array) cout << v << " ";
	return 0;
}