#include<iostream>
using namespace std;
// Copy Constructor
class Demo{
	int a,b;
	public:
		Demo(int x,int y){
		a=x;
		b=y;
		cout<<"Value"<<"\t"<<a<<"\t"<<b;
		cout<<"\nI Am Normal\n";
	}
	Demo(Demo &ref){
		a=ref.a;
		b=ref.b;
		cout<<"I am copy\n";
		cout<<"Value"<<"\t"<<a<<"\t"<<b;
	}
	~Demo(){
		cout<<"\nObject End\n";
	}
	
};
int main(){
	Demo obj(6,7);
	Demo obj2=obj;// when you want to initialize a new object using the values of an existing object of the same class.
}