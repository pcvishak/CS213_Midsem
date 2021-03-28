#include<bits/stdc++.h>
 
using namespace std;
 
std::list<int> shuffle(std::list<int> &L1) {
    int n = 0;
    for (std::list<int>::iterator it = L1.begin(); it != L1.end(); it++) n++;
    n /= 2; // get the value of n by counting the number of elements in the list
 
    std::list<int>::iterator it2 = L1.begin();
    for(int i=0;i<n;i++) it2++; // get to the middle element
 
    std::list<int>::iterator it1 = L1.begin();
    
    std::list<int> L2;
    for(; it2!=L1.end(); it1++,it2++) {
        L2.push_back(*it1);
        L2.push_back(*it2);
    }
 
    return L2;
}
 
int main(){
	
	int n;
	cin >> n;
	
	int myints[n];
	for (int i=0; i<n; i++){
		cin >> myints[i];
	}
    std::list<int> L (myints, myints + sizeof(myints) / sizeof(int) );
 
    // std::cout << "The contents of L are: ";
    // for (std::list<int>::iterator it = L.begin(); it != L.end(); it++)
    //     std::cout << *it << ' ';
    // std::cout << '\n';
 
    std::list<int> L2 = shuffle(L);
    // std::cout << "The contents after shuffing are: ";
    for (std::list<int>::iterator it = L2.begin(); it != L2.end(); it++)
        std::cout << *it << ' ';
    return 0;
}
