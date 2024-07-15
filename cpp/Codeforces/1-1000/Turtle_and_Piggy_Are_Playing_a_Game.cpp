#include <iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        int l,r;
        cin>>l>>r;
        int x=r;
        int score=0;
        int p=2;
        while (1)
        {
            if (x%p==0)
            {
                x=x/p;
                score++;   
            }else{
            p++;}
            if (x==1)
            {
                p=2;
                break;
            }
            
        }
        cout<<score<<endl;
        
    }
    
    return 0;
}