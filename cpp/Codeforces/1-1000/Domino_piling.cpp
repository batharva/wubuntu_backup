#include <iostream>
using namespace std;
int main(){
    int m,n;
    while (1)
    {
        cin>>m>>n;
        if (1<=m && m<=n && n<=16)
        {
            break;
        }
    }
    cout<<(m*n)/2<<endl;

    return 0;
}