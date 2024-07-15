#include <iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        int nopersons,minage;
        cin>>nopersons>>minage;
        int ages[nopersons];
        int counter=0;
        for (int i = 0; i < nopersons; i++)
        {
            cin>>ages[i];
        }
        for (int i = 0; i < nopersons; i++)
        {
            if (ages[i]>=minage)
            {
                counter++;
            }
            
        }
        cout<<counter<<endl;
    }
    
    return 0;
}