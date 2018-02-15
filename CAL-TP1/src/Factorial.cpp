/*
 * Factorial.cpp
 */

#include "Factorial.h"

int factorialRecurs(int n) {
	if(n <= 1) {
		return 1;
	}
	return n * factorialRecurs(n-1);
}

int factorialDinam(int n) {
	static int memory[10] = {1,1};
	static int last_calculated = 1;

	if(n <= last_calculated) {
		return memory[n];
	}

	for(int i = last_calculated + 1; i <= n; i++) {
		memory[i] = memory[i-1] * i;
	}

	last_calculated = n;

	return memory[n];
}
