#include <bits/stdc++.h>

using namespace std;


string lookAndSay(int n)
{

    if(n==1)    return "1";
    
    int count=1,j;
    string ans="";
    string prev ="1";
    
    for(int i=1;i<n;i++)
    {
        count=1;
        for(j=1;j<prev.size();j++)
        {
            if(prev[j-1]==prev[j])
                count+=1;
            else
            {
                ans+=to_string(count) + prev[j-1];
                count=1;
            }
        }
        ans+=to_string(count) + prev[j-1];
        prev= ans;
        ans="";

    }
    
    return prev;
}

int main()
{
    cout<<"Look and Say Problem.";
    
    int n;
    cout<<"Enter value of n :";
    cin>>n;
    cout<<"Look and Say :"<<lookAndSay(n);
}
 
