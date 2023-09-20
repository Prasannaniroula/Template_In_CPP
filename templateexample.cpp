#include<iostream>
using namespace std;

template<typename identifiers> void prasanna(identifiers x){
	cout<<"You have passes: "<<x<<endl;
}
int main(){
	prasanna(10);
	prasanna(2.345);
	prasanna("My name is lakkhan");
	return 0;
}
