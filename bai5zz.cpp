#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n,dem=1;
    cout<<" nhap vao N: ";
    cin>>n;
    for(int i=1; i<=n; i++){
       dem=dem*i;}
       cout<<"giai thua cua " <<n<<" la: "<<dem<<endl;

    return 0;
}
