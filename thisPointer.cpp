#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
	public:
		A(int a,int b){
			this->a=a;
			this->b=b;
			cout<<"a\t"<<a<<"\tThis Pointer\t"<<"b\t"<<b;
		}
};
int main(){
	A(10,20);
}