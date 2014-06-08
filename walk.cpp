/*
Neithan Casano
medium.com/@n3iTh4N/collections/
Problem Code: WALK
Event Code: MARCH14
*/

#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main (){

	int n = 0, nn = 0;
	long long int tc = 0;
	long long int ctr = 0;
	long long int *tcvp;
	vector<long long int> tcv;
	vector<long long int>::iterator tcvit;
	long long int c = 0, fctr = 0;
	long long int extra = 0;

	scanf("%d", &n);
	while (n--){
		scanf("%d", &nn);
		
		if (nn == 1){
			scanf("%llu", &tc);
			printf("%d\n", tc);
			continue;
		}
		
		while (nn--){
			scanf("%llu", &tc);
			//printf("%lu\n", tc);
			tcv.push_back(tc);
			
		}

		tcvit = max_element(tcv.begin(),tcv.end());
		//cout << *tcvit << endl;

		tcvp = &tcv[0];
		for (int i = tcv.size(); i >= 0; i--){
			if (tcvp[i] == *tcvit){
				c = tcv.size() - ctr;
				break;
			}
			ctr++;
		}
		
		//cout << "start iterating again at" << c << endl;
		// cout << ctr << endl;
		ctr = tcv.size() - ctr; //ctr contains max + all numbers to the left
		// cout << tcv.size() - ctr << endl;
		fctr = ctr+*tcvit;
		//printf("%llu\n",fctr);
		
		for (long long int i = c, d = tcvp[c]; i < tcv.size(); i++, d--){
			//cout << tcvp[i] << " " << d << " ";
			// cout << tcvp[i] - d << " ";
			if (tcvp[i] > d){
				// cout << "fuck!" << endl;
				//cout << tcvp[i] - d;
				if(tcvp[i] - d > extra)
					extra = tcvp[i] - d;
			}
		}
		
		fctr += extra;
		//cout << " - ";
		cout << fctr << endl;
		
		ctr = 0; fctr = 0; c = 0; extra = 0;
		tcv.erase(tcv.begin(),tcv.end());
	}

	return 0;
}