#include<iostream>
using namespace std;

template <class T> class myclass{
	T p1;
	T p2;
	T sum;
	public:
		myclass (T x,T y){
			p1=x;
			p2=y;
		}
		void display(){
			sum = p1+p2;
			cout<<"Sum = "<<sum<<endl;
		}
		void display1(){
			cout<<"p1= "<<p1<<endl;
			cout<<"p2= "<<p2;
		}
};
int main(){
	myclass<int> obj(05,06);
	myclass<string> obj1("Prasanna","anil");
	obj.display();
	obj1.display1();
	return 0;
}
