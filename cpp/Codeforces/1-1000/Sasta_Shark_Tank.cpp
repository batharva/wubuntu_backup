#include <iostream>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    string results[testcases];
    for (int i = 0; i < testcases; i++)
    {
        int a,b;
        cin>>a>>b;
        int valuea,valueb;
        valuea=a*10;
        valueb=b*5;
        if (valuea==valueb)
        {
            results[i]="ANY ";
        }else if (valuea>valueb)
        {
            results[i]="FIRST";
        }else{
            results[i]="SECOND";
        }       
    }
    for (int i = 0; i < testcases; i++)
    {
        cout<<results[i];
        cout<<endl;
    }
    
    return 0;
}