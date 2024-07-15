#include <iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        float n;;
        cin>>n;
        int a=n/4;
        if (((n/4)-a)>0)
        {
            cout<<"Not Good"<<endl;
        }else{
            cout<<"Good"<<endl;
        }
        
    }
    
    return 0;
}