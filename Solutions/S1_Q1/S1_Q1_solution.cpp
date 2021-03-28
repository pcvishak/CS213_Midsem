#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &a, int size){
	if (size == 1)
		return a[0];

	vector<int> b(size >> 1, 0);
	for (int i=0; i<size; i+=2){
		b[i >> 1] = a[i] + a[i+1];
	}
	return solve(b, size >> 1);
}

int main(){
	int n, input;
	cin >> n;
	vector<int> array;
	for(int i=0; i<n; i++){
		cin>>input;
		array.push_back(input);
	}
	cout << solve(array, n) << endl;
}
