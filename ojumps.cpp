/*
Neithan Casano
medium.com/@n3iTh4N/collections/
Problem Code: OJUMPS
Event Code: MAY14
*/

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <limits.h>
#include <float.h>

typedef long long ll;
#define db double

using namespace std;

int main () {

	std::ios_base::sync_with_stdio(0);

	//cout << FLT_MAX << endl;
	ll n = 0, i = 0, x = 0, c = 0;
	
	//while (scanf("%d", &n) == 1){
	while (cin >> n){
		//printf("%f\n", fmodf(n,3));
		//printf("%f\n", fmodf(((n+5)/6),1));
			
		if ( (n-1) % 6 == 0 || n % 3 == 0 || n == 0){
			printf("yes\n");
		}
		else
			printf("no\n");
		
	}
	
	return 0;
}