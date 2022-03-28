// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num=0,x=0,min=10000,count=0;
	cin >> num;							// array input
	//int arr_a[num],arr_b[num];
	int *arr_a = new int[num];			//declaring arrays in run time
	int *arr_b = new int[num];

	for (x = 0; x < num; x++) {			// to get array of a
		cin >> arr_a[x];
		if(arr_a[x]<min)min=arr_a[x];
	}
	for (x = 0; x < num; x++) {			// to get array of a
		cin >> arr_b[x];
	}

	for (x = 0; x < num; x++){

		while(arr_a[x]>min)
		{
			arr_a[x]-=(arr_b[x]);
			count++;
		}

		if(arr_a[x]<min)
		{
			min=arr_a[x];
			x=-1;
		}
		else if(arr_a[x]<0)
		{
			cout<<-1;
			return(0);
		}
	}
	
	
	cout<<count;
	
	delete [] arr_a;
	delete [] arr_b;
	return(0);
}
