#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;


    vector<int> v1;

    vector<int> v2;

    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='A')
        {
            v1.push_back(i);
            v1.push_back(i+1);
        }
    }

    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            v2.push_back(i);
            v2.push_back(i+1);
        }
    }

    if(v1.size()==0 || v2.size()==0)
    {
        cout<<"NO"<<endl;
    }

    else {

        bool flag=false;

        int temp=v1[1];
        //cout<<temp<<endl;

        for(int i=0;i<v2.size();i++)
        {
            if(v2[i]>temp && s[v2[i]]=='A')
            {
                flag=true;
            }
        }

        temp=v2[1];

        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]>temp && s[v1[i]]=='B')
            {
                flag=true;
            }
        }

        if(flag==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}