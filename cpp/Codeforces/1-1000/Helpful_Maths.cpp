#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string num;
    getline(cin,num);
    string sort_num;
    for (int i = 0; i < num.size(); i++)
    {
        sort_num = sort_num+ num[i];
        i++;
    }
    sort(sort_num.begin(),sort_num.end());
    string final_num="";
    for (int i = 0; i < sort_num.size(); i++)
    {
        final_num=final_num+sort_num[i]+"+";
    }
    final_num.erase(final_num.size()-1);
    cout<<final_num<<endl;
    return 0;
}