#include<iostream>
using namespace std;
class Asif{
	int money=70;
	public:
		friend class harshit;
};
class harshit{
	public:
		void get(Asif a1){
			cout<<"Bhai paysa mil gyia\nAub party guys :)\t"<<a1.money;
		}
};
int main(){
	Asif obj1;
	harshit obj2;
	obj2.get(obj1); 
}