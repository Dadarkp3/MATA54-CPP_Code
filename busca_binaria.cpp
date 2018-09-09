#include <stdio.h>
#include <stdlib.h>
# include <iostream> 

using namespace std;

int buscaBinaria (int A[], int n, int x);

int main() {
	int A [] = { 16, 2, 77, 40, 12071 };
	int n = (sizeof(A)/sizeof(*A));
	cout << buscaBinaria(A, n, 77) << endl;
	return 0;
}

int buscaBinaria (int A[], int n, int x) {
	int i = 0;
	int f = n - 1;
	while(i <= f) {
		int m = (i + f)/2;
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
