#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;         
    while(num-->0)
    {
        string s;
        int sum=0;
        cin>>s;
        int a[10]={6,2,5,5,4,5,6,3,7,6};

        for(int i=0;i<s.size();i++)
        {
            sum+=a[s[i]-48];
        }
		

        if (sum%2==0)
		{
			for(int i=0;i<(sum/2);i++)
            {
                cout<<"1";
            }
            cout<<endl;
        }
        else
        {
            cout<<"7";
            for (int i= 0;i<(sum-3)/2;i++)
            {
                cout << "1";
            }
         cout<<endl;
        }
    }
}