#include <iostream>
#include <math.h>
using namespace std;
int reversenum(int num){
    int temp=num;
    int digits=0;
    int reverse=0;
    while (temp>0)
    {
        temp=temp/10;
        digits++;
    }
    while (digits)
    {
        reverse=reverse + (num%10)*pow(10,digits-1);
        num=num/10;
        digits--;
    }
    return reverse;
}
int main(){
    int testcases;
    cin>>testcases;
    int results[testcases];
    for (int i = 0; i < testcases; i++)
    {
        int num;
        cin>>num;
        results[i]=reversenum(num);
    }
    for (int i = 0; i < testcases; i++)
    {
        cout<<results[i]<<endl;
    }
    return 0;
}