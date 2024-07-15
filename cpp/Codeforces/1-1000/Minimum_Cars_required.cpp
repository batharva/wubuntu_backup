#include <iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        int n;
        cin>>n;
        if (n%4==0)
        {
            cout<<n/4<<endl;
        }else if(n%4<4){
            cout<<n/4 + 1<<endl;
        }else{
            cout<<n/4 + 2<<endl;
        }
        
    }
    
    return 0;

}