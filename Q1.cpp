#include <iostream>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	while(T<0){
	cin>>X>>Y;
	T--;
	if(X>Y)
	    {
	  cout<<"FIRST";
	    }
	else if(X==Y)
	    {
	    cout<<"ANY";
	    }
	else{
	    cout<<"SECOND";
        }
	}
	return 0;
}
