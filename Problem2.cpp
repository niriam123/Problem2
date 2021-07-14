#include <iostream>
using namespace std;

int main() {
	
cout<<"Please enter the total number of odd numbers which you want to print";
int t;
cin>>t;
cout<<"\n";


        for(int i=0;i<t;i++) {
            int val = 2*i+1;
            cout<<val;
            

            if(i == t-1) {
                break;
            }
            cout<<",";
            cout<<" ";

            
        }

	
	// your code goes here
	return 0;
}
