#include <bits/stdc++.h>
#define li long long int
using namespace std;

li fibo[10000] = {0};

li fib(int n){
	if(fibo[n]) return fibo[n];
	return fibo[n] = fib(n-1) + fib(n-2);
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	fibo[0] = fibo[1] = 1;
	cout << fib(n) << endl;
	return 0;
}