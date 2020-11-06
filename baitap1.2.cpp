#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout<<" nhap vao gia tri cua n: ";
    cin>>n;
    if(n%2==0)
    {
        cout<<"n la so chan =: "<<n<<endl;
    }
    else
    {
        cout<<" n la so le: "<<n<<endl;
    }
    cout<<" --------- bai 2: ----------";
    int a,b;
    cout<<"nhap vao 2 so: ";
    cin>>a>>b;
    if(a>0&&b>0)
    {
        cout<<a<<"2 so cung dau: "<<b<<endl;
    }
    if(a>0&&b<0)
        cout<<a<<"trai dau "<<b<<endl;
    return 0;
}
