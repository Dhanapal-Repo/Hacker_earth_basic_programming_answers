
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	float z=0,o=0;
	string s;
	cin >> s;										// Reading input from STDIN
	
	for(int i=0;i<s.size();i++){

		if(s[i]=='z')
		{
			z++;
		}
		else
		{
			o++;
		}
	}

	if(o/2==z)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}

	return(0);
}

