#include <bits/stdc++.h>
#define li long long int
using namespace std;

li fib(int n){
	if(n == 1 || n == 0) return 1;
	return fib(n-1)+fib(n-2);
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	cout << fib(n) << endl;
	return 0;
}