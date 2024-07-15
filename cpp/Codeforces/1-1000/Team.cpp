#include <iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    int problems=0;
    for (int i = 0; i < count; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        if (a==1 && b==1 && c==1)
        {
            problems++;
        }else if ((a==1 && b==1) || (a==1 && c==1) || (c==1 && b==1) )
        {
            problems++;
        }
        
        
    }
    cout<<problems;
    return 0;
}