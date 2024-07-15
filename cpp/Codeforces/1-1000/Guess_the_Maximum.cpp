#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        int n;
        cin>>n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin>>array[i];
        }
        int k=INT_MAX;
        for(int i=0;i<n-1;i++){
            k=min(k,max(array[i],array[i+1])-1);
        }
        cout<<k<<endl;
    }
    
    return 0;
}