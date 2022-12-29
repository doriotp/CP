#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;


    int low=0, high=s.size()-1;

    bool flag=false, flag1=false;
    int index=-1;

    for(int i=0;i<s.size()-1;i++)
    {
        if((s[i]-48)%2!=0)
        {
            continue;
        }

        else if((s[i]-48)%2==0)
        {
            flag=true;
            if(s[high]-48>s[i]-48)
            {
                index=i;
                flag1=true;
            }
            else{
                index=i;
            }
        }

        if(flag1==true) break;
    }

    if(flag==false) cout<<-1<<endl;
    else{
        swap(s[index], s[high]);
        cout<<s<<endl;
    }
}