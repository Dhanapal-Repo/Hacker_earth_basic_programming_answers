
#include <iostream>

using namespace std;

int main() {
	int grid;
	string s;
	cin >> grid>>s;			// Reading input from STDIN
	
	for(int i=0;i<grid;i++)
	{
		if((s[i]=='H')&&(s[i+1]=='H'))
		{
			cout<<"NO";
			return(0);
		}

		if(s[i]=='.')s[i]='B';
	}

	cout<<"YES"<<endl<<s;
	return(0);
}
