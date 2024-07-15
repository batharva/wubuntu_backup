/*
distinct letters odd boy
ya female


wjmzbmr

wjmzbr
*/

#include <iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    char letters[str.size()];
    int counter =0;
    for (int i = 0; i < str.size(); i++)
    {
        bool found=false;
        for (int j = 0; j < counter; j++)
        {
            if (str[i]==letters[j])
            {
                found=true;
                break;
            }
        }
        if (!found)
        {
            letters[counter]=str[i];
            counter++;
        }
        
    }
    if (((counter)%2)==0)
    {
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    
    
    return 0;
}