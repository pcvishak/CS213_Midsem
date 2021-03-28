#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &a, int size){
	// Complete this function ..!
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
