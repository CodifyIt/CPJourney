#include <bits/stdc++.h>
#define li long long int
using namespace std;

li memo[10000] = {0};

li fib(int n){
	if(memo[n]) return memo[n];
	return memo[n] = fib(n-1) + fib(n-2);
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	memo[0] = memo[1] = 1;
	cout << fib(n) << endl;
	return 0;
}
