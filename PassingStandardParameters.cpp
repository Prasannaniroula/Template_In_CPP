//passing standard parameters
#include<iostream>
using namespace std;
template <class T> void display(T x, int y);
int main(){
	display(20.5,20);
}
template <class T> void display(T x, int y){
	T sum;
	sum= x+y;
	cout<<"Sum= "<<sum;
}
