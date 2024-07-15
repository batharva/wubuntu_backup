#include <iostream>
using namespace std;
int sumofmultiples(int n,int x){
    int sum=0;
    for (int i = 2; i <=n; i++)
    {
        if ((i%x)==0)
        {
            sum = sum +i;
        }
        
    }
    return sum;
}
int main(){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        int n;
        cin>>n;
        int numbers[n-1],b=0;
        for (int i = 2; i <=n; i++)
        {
            numbers[b]=i;
            b++;
        }
        int multiplessum[n-1];
        for (int i = 0; i < n-1; i++)
        {
            multiplessum[i]=sumofmultiples(n,numbers[i]);
        }
        //sort array
        for (int i = 0; i <(n-1); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (multiplessum[i]>multiplessum[j])
                {
                    int temp =multiplessum[i];
                    multiplessum[i]=multiplessum[j];
                    multiplessum[j]=temp;

                    int temp2=numbers[i];
                    numbers[i]=numbers[j];
                    numbers[j]=temp2;
                }
            }
        }
        cout<<numbers[0]<<endl;       
    }
    return 0;
}