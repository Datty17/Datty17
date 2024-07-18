#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	long long tong = 0;
	for(int i = 1; i <= n*2-1; i += 2){
		tong += i;	
	}
	cout << tong ;
}
