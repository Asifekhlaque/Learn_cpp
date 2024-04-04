#include<iostream>
using namespace std;
class A{
	public:
		void show(){
			cout<<"Def Method"<<endl;
		}
		//Overloading
		void show(int a){
			cout<<"Para Method"<<endl;
		}
};
int main(){
	A obj;
	obj.show();
	obj.show(1);
}