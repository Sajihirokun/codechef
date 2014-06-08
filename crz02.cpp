/*
Neithan Casano
medium.com/@n3iTh4N/collections/
Problem Code: CRZ02
Event Code: CDCN2014
*/

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
 
#define ll long long
 
using namespace std;
 
int main () {
 
	ll n = 0, nn = 0, fib = 1, tfib = 0, ans = 0;

	scanf("%llu", &n);

	while (n--){
		scanf("%llu", &nn);
		
		for (ll i = 0; i < nn; i++){
			fib = fib + tfib;
			// printf("%llu ",fib);
			ans = fib;
			tfib = fib - tfib;
		}
		
		// cout << endl;
		printf("%llu\n", ans%1000000007);
		
		fib = 1; tfib = 0;
	}
 
	return 0;
	
}