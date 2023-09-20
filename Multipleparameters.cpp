#include<iostream>
using namespace std;
template <class T> void display (T x, T y);
int main(){
	cout<<"Sum= "<<max(20,30)<<endl;
	cout<<"Sum= "<<max(20.572,29.3265)<<endl;
	display(20,30);
	display("Prasanna","priyanka");
	return 0;
}
template <class T> void display (T x, T y){
	cout<<"X ="<<x<<endl<<"Y="<<y<<endl;;
}
template <typename T> T max(T x ,T y){
	return (x+y);
}
