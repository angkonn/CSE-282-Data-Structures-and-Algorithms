// Take 5 integer values into a stack. Find the summation of all the stack elements.

#include<bits/stdc++.h>
using namespace std;
int main(){
   stack<int>stack_list;

   cout << "Give five numbers: ";
   for( int i = 0 ; i < 5 ; i ++){
      int num;
      cin >> num;
      stack_list.push(num);
   }

  int sum = 0;
  while(!stack_list.empty()){
   sum += stack_list.top();
   stack_list.pop();
  }

  cout << "The sum = "<< sum <<endl;
  return 0;
}
