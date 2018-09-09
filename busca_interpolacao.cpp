#include <stdio.h>
#include <stdlib.h>
# include <iostream> 

using namespace std;

int buscaInterpolacao (int A[], int n, int x);

int main() {
	int A [] = { 1, 2, 3, 5, 20 };
	int n = (sizeof(A)/sizeof(*A));
	cout << buscaInterpolacao(A, n, 5) << endl;
	return 0;
}

int buscaInterpolacao (int A[], int n, int x) {
	int i = 0;
	int f = n - 1;
	while(i <= f) {
		int m = i + ((f-i)*(x-A[i])) / (A[f] - A[i]);
		if(x == A[m]) {
			return m;
		}else if( x < A[m]) {
			f = m - 1;
		} else{
			i = m + 1;
		}
	}
	return -1;
}
