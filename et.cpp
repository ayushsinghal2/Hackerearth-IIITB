#include <iostream>
using namespace std;

int main()
{
    int n , q , m;
    cin>>n>>q>>m;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(q-- > 0)
    {
        int ab ;
        cin>>ab;
        ab--;
        int res = 0;
        if(ab==0)
        {
            res = arr[1];
            for(int i = 2;i<n;i++)
            {
                res = ((res%m)*(arr[i]%m))%m;
            }
        }

        else
        {
            res=arr[0];
            for(int i = 1;i<n;i++)
            {
                if(i==ab)
                    continue;
                res = ((res%m)*(arr[i]%m))%m;
            }
        }
       
        cout<<res<<endl;
    }
}