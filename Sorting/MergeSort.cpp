#include<bits/stdc++.h>
using namespace std;

// try to merge two array  
void merge(vector<int>& v, int l, int r, int m) {
    // size_A computes the number of elements in the range [l, m].
	int size_A = m - l + 1;

    // size_B computes the number of elements in the range [m+1, r]
	int size_B = r - m;
	vector<int> A;
	vector<int> B;

	for(int i = l; i <= m; i++) {
		A.push_back(v[i]);
	}
	for(int i = m+1; i <= r; i++) {
		B.push_back(v[i]);
	}
	int k = l, i = 0, j = 0;

	while(i < size_A && j < size_B) {
		if(A[i] < B[j]) {
			v[k] = A[i];
			k++;
			i++;
		} else {
			v[k] = B[j];
			j++;
			k++;
		}
	}

	while(i < size_A) {
		v[k] = A[i];
		k++;
		i++;
	}

	while(j < size_B) {
		v[k] = B[j];
		k++;
		j++;
	}

}
void mergeSort(vector<int> &v, int l, int r) {
	if(l == r) return;
	int m = (l+r)/2;
	mergeSort(v,l, m);
	mergeSort(v,m+1,r);
	merge(v, l, r, m);
}



int main() {
	vector<int> v = {4,2,1,3,9,10,15,20,25,60,1,4,6,14,17,18,19,40,32};
	int l = 4, m = 9, r = 16;
	// merge(v, l, r, m);
    mergeSort(v, 0, 18);
	for(int a : v) cout<<a<<" ";
	return 0;
}
