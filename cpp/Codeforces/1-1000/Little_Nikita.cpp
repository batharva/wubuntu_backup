#include <iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        int n,m;
        cin>>n>>m;
        if ((n-m)%2==0 && n>=m)
        {
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        
    }
    
    return 0;
}