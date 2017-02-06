#include <list>
#include <iostream>
using namespace std;
int main()
{
	
	int no;
	cin>>no;
	while(no-- > 0)
	{
		int a;
		cin>>a;
		int first;int second;
		cin>>first;
		char ccc;
		cin>>ccc;
		cin>>second;
		while(a-- > 1)
		{
			char ch;
			cin>>ch;
			if(ch=='P')
			{
				first=second;
				cin>>second;
			}
			else
			{
				int temp=first;
				first=second;
				second = temp;
			}
		}
		cout<<"Player "<<second;

	}
}