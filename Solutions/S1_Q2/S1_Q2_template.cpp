#include <iostream>
#include <vector>
using namespace std;


bool Q(vector<int> &A, int i, int j, int k){
	// Complete this function ..!
}

int main() {
	
	int n, k, input;
	cin >> n;
	vector<int> A;
	
	for (int i=0; i<n; i++){
		cin >> input;
		A.push_back(input);
	}
	
	cin >> k;
	bool answer = Q(A, 0, n-1, k);
	if(answer == true){
		cout << "true";
	}
	else{
		cout << "false";
	}
	return 0;
}

