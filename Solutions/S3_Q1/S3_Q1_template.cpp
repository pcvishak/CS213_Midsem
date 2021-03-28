#include <iostream>
#include <stack>
using namespace std;

void mountain (stack<char> &st, int n){
    // Complete this function ..!
	return;
}

main() {
  stack<char>st;  
  int n;
  cin>>n;

  // Read n integers and push them to a stack
  for(int i=0; i<n; i++){
	char x;
	cin>>x;
	st.push(x);
  }
  
  // Convert the stack to be in mountain order
  mountain(st, n);  // to be written by student
  
  // Print the stack
  while(!st.empty()){
	char x=st.top();
	cout<<x<<" ";
	st.pop();
  }
	
  return 0;
}
