#include <bits/stdc++.h>
#define li long long int
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int a=1,b=1;
	cin >> n;
	for(int i=2;i<=n;i++){
		b = a+b;
		a = b-a;
	}
	cout << b << endl;
	return 0;
}