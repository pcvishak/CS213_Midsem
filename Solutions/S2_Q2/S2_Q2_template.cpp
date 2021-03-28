#include<bits/stdc++.h>
 
using namespace std;
 
std::list<int> shuffle(std::list<int> &L1) {
    // Complete this function ..!
}
 
int main(){
	
	int n;
	cin >> n;
	
	int myints[n];
	for (int i=0; i<n; i++){
		cin >> myints[i];
	}
    std::list<int> L (myints, myints + sizeof(myints) / sizeof(int) );
 
 
    std::list<int> L2 = shuffle(L);
    for (std::list<int>::iterator it = L2.begin(); it != L2.end(); it++)
        std::cout << *it << ' ';
    return 0;
}
