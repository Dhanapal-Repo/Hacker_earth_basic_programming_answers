#include <iostream>

using namespace std;

int main() {

    long long N = 0,temp=0;
    cin>>N;
    temp=N;
    long data[N];
    for(auto i=0; i<N; i++){// get input array
        cin>>data[i];
    }
    int lastDigit = data[N - 1] % 10; // to check last vaue is divisible by 5 or not
    // Number formed will be divisible by 10
    if (lastDigit == 0)cout<<"Yes";
    else cout<<"No";
    
    return 0;
}