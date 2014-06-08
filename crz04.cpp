/*
Neithan Casano
medium.com/@n3iTh4N/collections/
Problem Code: CRZ04
Event Code: CDCN2014
*/

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
 
#define ll long long
#define ld long double
#define db double
 
using namespace std;
 
int main () {
 
	float n = 0, h = 0, m = 0, angle = 0, hangle = 0, mangle = 0;
	scanf("%f", &n);

	while (n--){
		scanf("%f%f", &h, &m);

		// check for invalid time

		if (h > 23 || m > 59 || h < 0 || m < 0){
		printf("%s\n", "Invalid Time");
		continue;
		}

		if (h > 12) 
			h -= 12;

		//cout << h << " " << m << endl;
		//calculate angle between 12 and the hour hand and 12 and the minute hand

		hangle = (60*h + m) * 0.5;
		mangle = 6*m;

		//calculate angle between hands
		//cout << hangle << " " << mangle << endl;
		angle = fabs(hangle - mangle);
		angle = min(angle, 360 - angle);
		// if (h > 6)
		// angle = 360 - fabs(0.5*(60*h - 11*m));
		// else
		// angle = fabs(0.5*(60*h - 11*m));
		// printf("%llu %llu\n", h, m);
		printf("%.1f\n", angle);
	}
	 
	return 0;
}