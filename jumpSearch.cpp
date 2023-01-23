//Jump Search
//Gajendra Babu
#include<iostream>
#include<cmath>
int flag=0;
using namespace std;
int jump_Search(int a[], int n, int item) {
    
   int i = 0;
   int m = sqrt(n);

   while(a[m] <= item && m < n) { 
      
      i = m; 
      m += sqrt(n);
      if(m > n - 1)  
         return -1; 
   }

   for(int x = i; x<m; x++) { 
      if(a[x] == item)
         return x; 
         flag =1;
   }
   return -1;
}

int main() {
   int n, item, loc;
   cout << "\n Enter number of elements: ";
   cin >> n;
   int arr[n]; 
   cout << "\n Enter elements: ";

   for(int i = 0; i< n; i++) {
      cin >> arr[i];
   }

   cout << "\n Enter  Elemnt to be searched in the array: ";
   cin >> item;
   loc = jump_Search(arr, n, item);
   if(flag=1)
      cout << "\n Item found at location: " << loc;
   else
      cout << "\n Item is not found in the list.";
}