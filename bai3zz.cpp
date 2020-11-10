#include "bits/stdc++.h"
using namespace std;
int main()
{
    //*Input: Nhập vào 3 số nguyên a,b,c.
     //*Output: In ra giá trị max.
     int a,b,c,_max=0;
     cout<<" nhap vao 3 so a,b,c ";
     cin>>a>>b>>c;
     if(a>b&&a>c)// nếu a>b và a>c thì a= max
         {
             _max=a;
         }
     if(b>c)
            {
                _max=b;
            }
      else
        {
            _max=c;
        }
            cout<<"gia tri lon nhat la = "<<_max;
    //khai báo: biến =(dieu kien)?(if true):(if false);
    //cout<<"____________________________"endl;
    //int _max =(a>b)?(a>c?a:c):(b>c?b:c)





    return 0;
}

