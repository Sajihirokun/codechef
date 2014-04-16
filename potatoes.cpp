/*
Neithan Casano
medium.com/@n3iTh4N
Codechef Competition Code: APRIL14
Problem Code: POTATOES
*/

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
 
#define ll long long
 
using namespace std;

bool IsPrime(int number)
{	// Given:   num an integer > 1
	// Returns: true if num is prime
	// 			false otherwise.
	// standard isPrime function lifted from http://users.dickinson.edu/~braught/courses/cs131f97/CPPcode/isprime.cpp
	
	int i;
	
	for (i=2; i<number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	
	return true;	
}

int main () {

	ll n = 0, tc = 0, tc2 = 0, ctr = 0, ktmp = 0, k = 0;
	scanf("%llu", &n);
	
	for (ll i = 0; i < n; ++i){
		scanf("%llu%llu", &tc, &tc2);
		// printf("%llu %llu\n", tc, tc2);
		k = tc + tc2 + 1;
		ktmp = k;
		while (IsPrime(k) == false)
			k++;
		
		printf("%llu\n", k-ktmp+1);
		
	}
 
	return 0;
	
}