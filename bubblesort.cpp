//Bubble Sort
//Gajendra Babu
#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0;
   int n;
  cout<<"Enter number of elemnts you want to enter in array"<<endl;
  cin>>n;
  int a[n];
  for( i=0;i<n;i++)
  cin>>a[i];

   cout <<"elements in array before sorting\n";
   for(i = 0; i<n; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;

//sorting
for(i = 0; i<10; i++) {
   for(j = i+1; j<n; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Elements in array after sorting\n";
for(i = 0; i<n; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes needed to sort the list:"<<pass<<endl;
return 0;
}