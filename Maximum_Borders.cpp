// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int T,R,C,count=0,max=0,k=0,pre_max=0;
	char F;
	cin >>T;										// Reading input from STDIN
	for(k=0;k<T;k++)
	{
		cin>>R>>C;
		count=0;
		char* arr = new char[R * C];

		for (int i = 0; i < R; i++) 
		{
        	for (int j = 0; j < C; j++) 
			{
				cin>>F;
            	*(arr + i * C + j) = F;
       		}
		}

			// Traverse the 2D array
		for (int i = 0; i < R; i++) 
		{
			for (int j = 0; j < C; j++) 
			{
				if(*(arr + i * C + j)=='#')
				{
					count++;
					max=count;
				}
				else
				{
					count=0;
				}
			}

			if(max > pre_max)
			{
				pre_max=max;
				count=0;
			}

		}

		cout<<pre_max<<endl;
		count=0,max=0,pre_max=0;
	
		//Delete the array created
		delete[] arr;

	}
}

