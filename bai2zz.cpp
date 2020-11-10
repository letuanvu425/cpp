#include "bits/stdc++.h"
using namespace std;
int main()
{
    /*Input : nhập vào số nguyên n.

*Output: Số các chữ số x (1 ≤ x ≤ n) thỏa mãn 1 trong các điều kiện:
n=10
i chạy từ 0 -- 10

-Chia hết cho 2.

-Chia hết cho 3.

-Chia hết cho cả 2 và 3: nếu chia hết cho 2 và 3 thì dem++ */
    int n;
    int dem=0;
    cout<<" nhap vao so nguyen n = ";
    cin>>n;
    for(int i=1;i<=n;i++)
        if(i%2==0&&i%3==0)
{
    dem++;
}
            cout<<dem<<endl;

    return 0;
}

