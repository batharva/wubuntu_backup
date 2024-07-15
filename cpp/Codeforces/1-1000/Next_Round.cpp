#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int numinput[n];
    for (int i = 0; i < n; i++)
    {
        cin>>numinput[i];
    }
    
    int counter=0;
    for (int i = 0; i < n; i++)
    {
        if (numinput[i]>=numinput[k-1] && numinput[i]>0)
        {
            counter++;
        }
    }

    cout<<counter<<endl;
    return 0;
}
