//n th element in fibonacci series
#include<bits/stdc++.h>
using namespace std;
 
int fib(int n)
{
    return n<2?n:fib(n-1) + fib(n-2);
}
 
int main ()
{
    int n;
    cin>>n;
    cout << fib(n);

    return 0;
}
