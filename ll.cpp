#include <iostream>
#include <list>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc-->0)
    {
        int a , b;
        cin>>a>>b;
        list<int> fr;
        for(int i = 0 ; i<a ;i++)
        {
            int temp=0;
            cin>>temp;
            fr.push_back(temp);
        }
        for(int i=0 ;i<b;i++)
        {
            int df = 0;
            for (list<int>::iterator it=fr.begin(); it!=fr.end(); ++it)
            {
                list<int>::iterator it1 =it;
                it1++;
                if(*it < *it1)
                {
                    it = fr.erase(it);
                    df=1;
                    break;
                }
            }
            if(df==0)
            {
                fr.pop_back();
            }
        }
        for (list<int>::iterator it=fr.begin(); it!=fr.end(); ++it)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}
