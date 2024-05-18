// Take 6 integer values (0 to 5) into a stack and then find the factorial of each stack element. Store the outputs in another stack. Print the output in the following way:
// Factorial : 0 = 1
// Factorial : 1 = 1
// Factorial : 2 = 4

#include<bits/stdc++.h>
using namespace std;

int factorial( int i ){
      int facto;
      if( i>0 ){
            facto = i*factorial(i-1);
      }
      else if ( i== 0){
         facto = 1;
      }
      return facto;
}

int main(){
   stack<int>num_list;
    stack<int>facto_list;

   for( int i=5 ; i>=0 ; i--){
     num_list.push(i);
     int facto = factorial(i);
     facto_list.push(facto);

   }
   while(!num_list.empty()){
      cout <<"Factorial : "<<num_list.top()<<" = "<<facto_list.top()<<endl;

      num_list.pop();
      facto_list.pop();
   }



}
