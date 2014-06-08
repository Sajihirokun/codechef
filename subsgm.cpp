/*
Neithan Casano
medium.com/@n3iTh4N/collections/
Problem Code: SUBSGM
Event Code: LTIME10
*/

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

#define ll long long

using namespace std;

int main () {

	ll n = 0, n2 = 0, tc = 0;
	vector<ll> tcv;
	ll q = 0, q2 = 0, max = -999999, ctr = 1;
	
	scanf("%llu", &n);
	scanf("%llu", &n2);
	
	for (ll i = 0; i < n; ++i){
		scanf("%llu",&tc);
		//printf("%llu", tc);
		tcv.push_back(tc);
	}
	
	ll *p = &tcv[0];
	for (ll i = 0; i < tcv.size(); ++i){
		//printf("%llu ", p[i]);
		
		// cout << p[i] << " ";
		
		if (p[i] == p[i+1]-1)
			ctr++;
		else
			ctr = 1;
			
		if (ctr > max)
			max = ctr;
	}
	// cout << endl;
	printf("%llu\n", max);
	// cout << max << endl;
	max = -99999; ctr = 1;
	
	for (ll i = 0; i < n2; ++i){
		scanf("%llu", &q);
		scanf("%llu", &q2);
		//cout << q << " " << q2 << endl;
		
		p[q-1] = q2;
		
		for (ll d = 0; d < tcv.size(); ++d){
			// cout << p[d] << " ";

			if (p[d] == p[d+1]-1)
				ctr++;
			else
				ctr = 1;
				
			if (ctr > max)
				max = ctr;

		}
		// cout << max << endl;
		printf("%llu\n", max);
		// cout << endl;
		// cout << endl;
		max = -99999; ctr = 1;
	}

	return 0;
}
