#include<iostream>
using namespace std;
class add{
	public:
		void add(){
			cout<<"\nAdd\n";
		}
};
class sub{
	public:
		void sub(){
			cout<<"\nSub\n";
		}
};
class A{
	public:
		void display(){
			cout<<"\nSuper class\n";
		}
};
class B: public A{
	public:
		void show(){
			cout<<"\nSub class\n";
		}
};
class c: public B:public add:public sub{
	public:
		void view(){
			cout<<"\nSuper sub class\n";
		}
};
int main(){
	c obj;
	obj.view();
	obj.show();
	obj.display();
}