#include <bits/stdc++.h>
#define li long long int
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int fib[n+1] = {0};
	fib[0] = fib[1] = 1;
	for(int i=2;i<=n;i++){
		fib[i] = fib[i-1] + fib[i-2];
	}

	cout << fib[n] << endl;
	return 0;
}