#include<bits/stdc++.h>
using namespace std;
const int max_n = 40;
bool che[max_n + 1]; // ���� ��� 40�� �־��� �� che[40]�� ������ �ǹǷ� max_n + 1�� �־�� ��.

// max_n������ �Ҽ��� ����� �Լ�
vector<int> era(int mx_n){
	vector<int> v;
	for(int i = 2; i <= mx_n; i++){
		if (che[i]) continue;
		for(int j = 2*i; j <= mx_n; j += i){
			che[j] = 1;
		}
	}
	for(int i = 2; i <= mx_n; i++) if(che[i] == 0)v.push_back(i);
	return v;
}
int main(){
	vector<int> a = era(max_n);
	for(int i : a) cout << i << " ";
}