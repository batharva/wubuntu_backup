#include <iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        int n,x,y;
        cin>>n>>x>>y;
        if ((y%x)==0 && (y/x)<n )
        {
            cout<<"YES"<<endl;
        }else if ((n*x)==y)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}