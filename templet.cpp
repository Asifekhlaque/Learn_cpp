#include<iostream>
using namespace std;
template<class k>
/*void show(k a,k b){ //Function Template
	cout<<"\nOpration Works\n";
	cout<<a+b;
}*/
class show{ //Class Template
	public:
		show(k a,k b){
			cout<<"\nOpration Works\n";
	        cout<<a+b;
		}
};
int main(){
	/*string a="Khu",b="shi";
	show(a,b);
	show(10,20);
	show(12.34,56.89);*/
	show <int>b(90,89);
	show <string>c("As","if");
	show <float>d(90.9,89.9);
	show <char>e('a','b');
	return 0;
}