#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a ;
    cin>>a;
    while(a-->0)
    {
        string s1 ,s2;
        cin>>s1>>s2;
        int l , m;
        l = s1.length();
        m = s2.length();
        int freq1[26]={0};
        int freq2[26]={0};
        int flag = 0;
        for(int i=0;i<l;i++)
        {
            freq1[s1.at(i)-'a']++;
        }
        for(int i=0;i<m;i++)
        {
            freq2[s2.at(i)-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(freq1[i]!=0&&freq2[i]!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
           
    }
    return 0;
}