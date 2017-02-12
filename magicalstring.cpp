#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string s ;
    cin>>s;
    int a;
    cin>>a;
    while(a-->0)
    {
        unsigned long long n;
        cin>>n;
        bool count [10]={false};
        int countdig = 0;
        int counteven = 0;
        bool czero = false;
        for(int i=0; i<s.length();i++)
        {
            if(count[s.at(i)-'0']==false)
            {
               count[s.at(i)-'0'] = true;
               countdig++;
               if((s.at(i)-'0')%2==0)
               {
                    counteven++;
                    if(s.at(i)=='0')
                    czero = true;
                   
               }
            }
            if(countdig==10)
            break;
        }
        if(czero)
        {
            cout<<((countdig-1)*pow(countdig,n-2)*counteven)-((counteven-1)*pow(counteven,n-1))<<endl;
        }
        else
        {
            cout<<(pow(countdig,n-1)*counteven)-pow(counteven,n);
        }
    }
}