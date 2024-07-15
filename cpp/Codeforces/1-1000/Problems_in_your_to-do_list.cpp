#include <iostream>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    int results[testcases];
    for (int j = 0; j < testcases; j++)
    {
        int N;
        cin>>N;
        int D[N];
        for (int i = 0; i < N; i++)
        {
            cin>>D[i];
        }
        int a=0;        
        for (int i = 0; i <N; i++)
        {
            if (D[i]>=1000)
            {
                a++;
            }
            
        }
        results[j]=a;
    }
    for (int i = 0; i < testcases; i++)
    {
        cout<<results[i]<<endl;
    }
    return 0;
}