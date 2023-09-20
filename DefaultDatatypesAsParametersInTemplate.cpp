#include<iostream>
using namespace std;
template <class T1=int, class T2=string> class myclass{
 T1 p;
 T2 q;
 public:
 	myclass(T1 x, T2 y){
 		p=x;
 		q=y;
	 }
	 void display(){
	 	cout<<"p="<<p<<endl;
	 	cout<<"q="<<q<<endl;
	 }
};
int main(){
	myclass<> obj1(24,"Prasanna");
	myclass<string,int> obj2("Prasanna",24);
	myclass<string> obj3("Prasanna","Santosh");
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}
