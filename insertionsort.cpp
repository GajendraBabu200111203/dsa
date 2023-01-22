#include<iostream>  
using namespace std;  
int main ()  
{    
       int n;
    cout<<"Enter the number of elemnts you want to enter in array"<<endl;
    cin>>n;
    int a[n];
    for( int i=0;i<n;i++)
    cin>>a[i];

    cout<<"\nElemnts in array before sorting \n";
    for(int i=0;i<n;i++)  
    {  
        cout <<a[i]<<"\t";  
    }    
    for(int k=1; k<n; k++)   
    {  
        int temp = a[k];  
        int j= k-1;  
        while(j>=0 && temp <= a[j])  
        {  
            a[j+1] = a[j];   
            j = j-1;  
        }  
        a[j+1] = temp;  
    }  
    cout<<"\nElements in array after sorting\n";
    for(int i=0;i<n;i++)  
    {  
        cout <<a[i]<<"\t";  
    }  
}