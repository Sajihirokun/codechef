/*
Neithan Casano
medium.com/@n3iTh4N/collections/
Problem Code: SNAPE
Event Code: COOK45
*/

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string.h>
#include <cmath>
 
#define ll float
 
using namespace std;

int main () {

	std::ios_base::sync_with_stdio(0);

	ll n = 0, tc = 0, tc2 = 0, ans1 = 0, ans2 = 0;
	
	// scanf("%llu", &n);
	cin >> n;
	while (n--){
		// scanf("%llu%llu", &tc, &tc2);
		cin >> tc >> tc2;
		ans1 = sqrt(pow(max(tc,tc2),2) - pow(min(tc,tc2),2));
		ans2 = sqrt(pow(tc,2)+pow(tc2,2));
		// printf("%.2f %.2f\n", ans1, ans2);
		// printf("%f %f\n", tc, tc2);
		cout << ans1 << " " << ans2 << endl;
	}
		
	return 0;
	
}