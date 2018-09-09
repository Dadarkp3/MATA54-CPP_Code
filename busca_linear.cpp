#include <stdio.h>
#include <stdlib.h>
# include <iostream> 

using namespace std;

bool linearSearch (int A[], int n, int x);

int main() {
	int A [] = { 16, 2, 77, 40, 12071 };
	int n = (sizeof(A)/sizeof(*A));
	cout << linearSearch(A, n, 20) << endl;
	return 0;
}

bool linearSearch (int A[], int n, int x) {
	for(int i = 0; i < n; i++) {
		if(A[i] == x) {
			return true;
		}
	}
	return false;
}
