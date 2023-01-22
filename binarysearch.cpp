// Binary Search in C++
//Gajendra Babu

#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] > x)
      return binarySearch(arr, x, low, mid - 1);

    return binarySearch(arr, x, mid + 1, high);
  }

  return -1;
}

int main(void) {
  int n;
  cout<<"Enter length of array"<<endl;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  int x;
  cout<<"Enter no. to be searched"<<endl;
  cin>>x;
  int ans = binarySearch(arr, x, 0, n - 1);
  if (ans == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", ans);
}