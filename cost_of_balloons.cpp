#include <iostream>
using namespace std;
int main() {
	int T,GB,PB,PA,i,q1,q2,sum=0;
	cin >> T;    				//number of test cases

	for(i=0;i<T;i++)			//test cases loop
	{
		sum=0;
		cin>>GB>>PB;			//get the prices of green & purple balloons 
		cin>>PA;				//get total number of participants
		while(PA!=0)			// loop runs till participants come to zero
		{
			cin>>q1>>q2;
			if(i%2==0)			// row changes for every iteration 
			{
				sum+=(q1==1)?GB:0; //adding prices of ballons if values is 1
				sum+=(q2==1)?PB:0;
			}
			else
			{
				sum+=(q1==1)?PB:0;
				sum+=(q2==1)?GB:0;
			}
			
			PA--;					//decrement for every participant
		}
		cout<<sum<<endl;			//sum of balloons
	}
	return(0);
	
}