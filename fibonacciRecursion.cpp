//Fibonacci series Recursion
//Gajendra Babu
#include <iostream>
using namespace std;

int fib(int n) {
   if((n==1)||(n==0)) {
      return(n);
   }else {
      return(fib(n-1)+fib(n-2));
   }
}
int main() {
   int n;
   cout << "Enter the number of terms of series : ";
   cin >> n;
   cout << "\nFibonnaci Series : ";
   for(int i=0;i<n;i++)
   {
    cout<<fib(i)<<" ";
   }
   return 0;
}