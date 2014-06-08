/*
Neithan Casano
medium.com/@n3iTh4N/collections/
Problem Code: CHEFZOT
Event Code: JUNE14
*/

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <limits.h>
#include <float.h>

typedef long long ll;

using namespace std;

int main () {

	std::ios_base::sync_with_stdio(0);

	vector<ll> sa;
	ll *sap;
	
	ll n = 0, j = 0, tc = 0, prod = 1, maxlen = 0, maxprod = 1, len = 0;
	cin >> n;
	while (j++ < n){
		//cout << "j: " << j << " - n: " << n << endl; 
		cin >> tc;
		if (tc == 0){
			// sa.push_back(prod);
			if (len > maxlen){
				maxlen = len;
			}
			len = 0;
		}
		else{
			len++;
		}
		
		//catch end of string
		if (j == n){
			// sa.push_back(prod);
			if (len > maxlen){
				maxlen = len;
			}

		}
	}
	
	cout << maxlen << endl;
	
	// sap = &sa[0];
	
	// for (int i = 0; i < sa.size(); i++){
		// cout << sap[i] << " ";
	// }
	// cout << endl;
	
	return 0;
	
}


