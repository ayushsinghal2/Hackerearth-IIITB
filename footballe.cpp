#include <bits/stdc++.h>
using namespace std;
stack < int > s;
int main()
{
    int n , t, d, id;
    char c;
    cin >> t;
    while(t--){
        cin >> n >> d;
        while(!s.empty()) s.pop();      
        s.push(d);
        for(int i = 0; i < n; i++){
            cin >> c;
            if(c == 'B'){
                int second = s.top();   
                s.pop();
                int first = s.top();
                s.pop();
                s.push(second);    
                s.push(first);
                continue;
            }
            cin >> id;
            s.push(id);         
        }
        cout << "Player " << s.top() << "\n";
    }
    return 0;
}