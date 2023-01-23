//Fibonacci Recusrsion
//Gajendra Babu
#include <iostream>
using namespace std;

int Fibonacci(int n)
{
    int i, a = 0, b = 1, c;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n;
    cin>>n;
    cout<<Fibonacci(n);
    return 0;
}