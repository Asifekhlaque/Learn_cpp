#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter Age"<<endl;
	cin>>age;
	try{
		if(age>=18){
			cout<<"You can vote"<<endl;
		}
		else{
			throw(age);
		}
	}
	catch(...){
		cout<<"Exception";
	}
	
}