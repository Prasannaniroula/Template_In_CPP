#include<iostream>
using namespace std;
template <class T> void display(T x);
void display(int x);
int main(){
	display(20.5);
	display(20);
	display("Prasanna");
}
template <class T> void display(T x){
	cout<<"Generic function  x= "<<x<<endl;
}
void display(int x){
	cout<<"Normal function x="<<x<<endl;
}
