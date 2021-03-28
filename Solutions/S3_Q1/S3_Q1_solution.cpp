#include <iostream>
#include <stack>
using namespace std;


void mountain (stack<char> &st, int n){
  stack<char>st1;
	for(int i=0; i<(n/2); i++){
		char x=st.top();
		st.pop();
		st1.push(x);
	}
	stack<char>st2;
	for(int i=0; i<(n/2); i++){
		char x=st1.top();
		st1.pop();
		st2.push(x);
	}
	for(int i=0; i<(n/2); i++){
		char x=st2.top();
		st2.pop();
		st.push(x);
	}
	return;
}
 

int main() {
  stack<char>st;  
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
	char x;
	cin>>x;
	st.push(x);
  }
  mountain(st, n);  // to be written by student
  while(!st.empty()){
	char x=st.top();
	cout<<x<<" ";
	st.pop();
  }
	
  return 0;
}
