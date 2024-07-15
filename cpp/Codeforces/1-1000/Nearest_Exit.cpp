#include <iostream>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    bool results[testcases];
    for (int i = 0; i < testcases; i++)
    {
        int seat;
        cin>>seat;
        if (seat<=50)
        {
            results[i]=0;
        }else{
            results[i]=1;
        }
    }
    
    for (int i = 0; i < testcases; i++)
    {
        if (results[i])
        {
            cout<<"RIGHT"<<endl;
        }else
        {
            cout<<"LEFT"<<endl;
        }
        
        
    }
    
    return 0;
}