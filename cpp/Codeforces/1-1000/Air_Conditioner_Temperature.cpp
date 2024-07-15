#include <iostream>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    bool result[testcases];
    for (int i = 0; i < testcases; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a<=b && c<=b)
        {
            result[i]=1;
        }else{
            result[i]=0;
        }
        

    }
    for (int i = 0; i < testcases; i++)
    {
        if (result[i])
        {
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}