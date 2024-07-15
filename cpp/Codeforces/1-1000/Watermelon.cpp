#include <iostream>
using namespace std;
int inputlimits(int lower,int higher){
    int num;
    while (true)
    {
        cin>>num;
        if (num>=lower && num<=higher)
        {
            break;
        }
        
    }
    
    return num;
}
int main(){
    int w;
    w=inputlimits(1,100);
    bool flag=0;
    int a=2;
    while ((w-a)>0)
    {
        if(((w-a)%2)==0){
            flag=1;
            break;
        }
        a=a+2;
    }
    if (flag)
    {
        cout<<"YES"<<endl;    
    }else{
        cout<<"NO"<<endl;
    }
    
    
    
    return 0;   
}
