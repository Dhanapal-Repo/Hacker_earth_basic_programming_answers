#include <iostream>
using namespace std;

int fun_check(int sum)
{
	if(sum%2!=0)
	{
		cout<<"invalid";
		return(0);
	}
	return(1);
}

int main() {
	string s;
	int n,sum=0;
	cin >> s;    //Reading input from STDIN
	char arr[6]={'A','E','I','O','U','Y'};

	for(int i=0;i<sizeof(arr);i++)
	{
		if(s[2]==arr[i])
		{
			cout<<"invalid";
			return(0);
		}
	}

	for(int i=0;i<s.size();i++)
	{
		n=s[i]-48;

		if((n>=0)&&(n<=9))
		{
			sum+=n;

			switch(i)
			{
				case 1:
					if(fun_check(sum)==0)return(0);
					else sum=0;
				break;

				case 4:
					if(fun_check(sum)==0)return(0);
					else sum=0;
				break;

				case 5:
					sum+=s[i-1]-48;
					if(fun_check(sum)==0)return(0);
					else sum=0;
				break;

				case 8:
				if(fun_check(sum)==0)return(0);
					else sum=0;
				break;

				default:
				break;

			}
		}
	}

	cout<<"valid";
	
	return(0);
}