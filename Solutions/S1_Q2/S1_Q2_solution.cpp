#include <iostream>
#include <vector>
using namespace std;


bool Q(vector<int> &A, int i, int j, int k){
	
	if(i == j){
		return false;
	}
	
	if ((A[i] + A[j]) < k){
		return Q(A, i+1, j, k);
	}
	else if((A[i] + A[j]) > k){
		return Q(A, i, j-1, k);
	}
	else{
		return true;
	}
	
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

