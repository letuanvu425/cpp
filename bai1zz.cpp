#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout<<" nhap vao canh cua hinh vuong n = ";
    cin>>n;
    /*for(int i=1;i<=n;i++)// in ra hàng
    {
       for(int j=1;j<=n;j++)// in ra cột
            cout<<i<<" "<<j<<",";
    cout<<endl;
    }*/
     for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n;j++)
            if(i==1||i==n||j==1||j==n)
            {
                cout<<"* ";
            }
            else
                cout<<"  ";
    cout<<endl;
    }




    return 0;
}

