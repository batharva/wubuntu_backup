#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t)
    {
        int n,x,y;
        cin>>n>>x>>y;
        cout<<1*x+2*y;
        t-=1;
    }
    return 0;
}