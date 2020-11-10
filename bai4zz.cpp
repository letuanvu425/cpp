#include "bits/stdc++.h"
using namespace std;
int main()
{
    /*Input:Nhập vào 1 số nguyên n.

*Output: In ra tổng các chữ số của số nguyên đó.*/
    int n,a,b,c;
    cout<<" nhap vao so 3 chu so n: ";
    cin>>n;//vd 123/100=1 %10 = 3 %100//10
   a=n/100;
   b=(n%100)/10;
   c=n%10;
   cout<<a<<" "<<b<<" "<<c;


    return 0;
}
