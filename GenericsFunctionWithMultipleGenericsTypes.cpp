//Generics function with multiple generics types
#include<iostream>
using namespace std;
template <class T1, class T2> void display(T1 x,T2 y);
int main(){
	display(20.5,20);
	
}
template <class T1, class T2> void display(T1 x,T2 y){
	T1 sum;
	sum=x+y;
	cout<<"Sum = "<<sum;
}
