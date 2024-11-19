#include <bits/stdc++.h>
using namespace std;

int pivot(vector<int>& v, int l, int r) {
	int pivot_element = v[r];
	int moveLow = l; // i
    int moveHigh = l;  // j
    while (moveHigh < r)
    {
        if (v[moveHigh] > pivot_element)
        {
            moveHigh++;
        }
        else
        {
            swap(v[moveLow], v[moveHigh]);
            moveLow++;
            moveHigh++;
        }
    }
	swap(v[r], v[moveLow]);
    return moveLow;
}
void quickSort(vector<int>& v, int l, int r) {
	if(l >= r) return;
	int pivot_index = pivot(v, l ,r);
	quickSort(v,l, pivot_index-1);
	quickSort(v, pivot_index+1, r);
}
int main() {
	vector<int> v = {2, 5, 7, 45, 3, 1, 16, 15};
    // cout<<pivot(v, 0, 7)<<endl;
	quickSort(v, 0, 7);
	for(auto a : v) cout<<a<<" ";

	return 0;
}