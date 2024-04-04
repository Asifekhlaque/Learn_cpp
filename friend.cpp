#include<iostream>
using namespace std;
class sanjay;
class Asif{
	int money=50;
	char luck='T';
	friend void khushi(Asif,sanjay);
};
class sanjay{
	int money=90;
	char lunch='C';
	friend void khushi(Asif,sanjay);
};
void khushi(Asif a1,sanjay s1){
	cout<<"Bhai paysa mil gyia\nAub party guys :)"<<"\t"<<a1.money+s1.money<<a1.luck<<s1.lunch;
}
int main(){
	Asif obj1;
	sanjay obj2;
	khushi(obj1,obj2);
}