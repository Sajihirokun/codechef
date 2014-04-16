/*
Neithan Casano
medium.com/@n3iTh4N
Codechef Competition Code: APRIL14
Problem Code: BINTREE
*/

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string.h>
#include <cmath>
 
#define ll long long
 
using namespace std;

int main () {

	std::ios_base::sync_with_stdio(0);
 	ll n = 0, tc = 0, tc2 = 0, ctr = 0, extra = 0;
	vector<ll> tcv, tc2v;
	ll *p1, *p2;
	
	scanf("%llu", &n);
	while (n--){
		scanf("%llu%llu", &tc, &tc2);
		// printf("%llu %llu\n", tc, tc2);
		
		tcv.push_back(tc);
		tc2v.push_back(tc2);
		
		while (tc > 1){
			tc /= 2;
			// printf("%llu ", tc);
			tcv.push_back(tc);
		}
		// printf("\n");

		while (tc2 > 1){
			tc2 /= 2;
			// printf("%llu ", tc2);
			tc2v.push_back(tc2);
		}
	
		sort(tcv.begin(), tcv.end());
		sort(tc2v.begin(), tc2v.end());
		
		p1 = &tcv[0];
		p2 = &tc2v[0];
		
		/* actual algorithm */
		// cout << "sizes before alg: " << tcv.size() << " " << tc2v.size() << endl;
		for (ll i = 0; i < min(tcv.size(),tc2v.size()); i++){
			if (p1[i] != p2[i]){
				// printf("%llu ", p1[i]);
				// printf("%llu ", p2[i]);
				ctr+=2;
			}
		}
		/* actual algorithm */
		
		// for (ll i = 0; i < tcv.size(); i++)
			// printf("%llu ", p1[i]);
		// printf("\n");
		// for (ll i = 0; i < tc2v.size(); i++)
			// printf("%llu ", p2[i]);
		// printf("\n");
		// printf("\n");
		
		
		extra = max(tcv.size(),tc2v.size()) - min(tcv.size(),tc2v.size());
		// cout << "extra: " << extra << endl;
		ctr += extra;

		
		printf("%llu\n", ctr);
		
		tcv.erase(tcv.begin(), tcv.end());
		tc2v.erase(tc2v.begin(), tc2v.end());
		ctr = 0; extra = 0;
	
	}

		
	return 0;
	
}