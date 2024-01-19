<img src="https://download.logo.wine/logo/C%2B%2B/C%2B%2B-Logo.wine.png" with="400" height="200"/>


# Learn_c++

# What is c++?
  High level General purpose programin language
  It was developed by *Bjarne strustrup* at Bell lab in 1980's in USA

# Syntax
   
     #include<iostream>
     using namespace std;
     main(){
       cout<<"Hello word";
     }
# C++ Object-Oriented Programming (OOPs) 
## Class
- A blueprint or template for creating objects.
- Defines attributes (data members) and behaviors (member functions/methods).
## Object
- An instance of a class.
- Represents a real-world entity and encapsulates data and behavior.
```c++
#include<iostream>
using namespace std;
class demo{
	void method1(){
		cout<<"Class Method";
	}
};
int main(){
	demo obj;
	obj.method1();
	return 0;
}
```
## Encapsulation
- Bundling data and methods that operate on that data within a single unit (class).
- Hides the internal details from the outside world.
```c++
#include<iostream>
using namespace std;
class demo{
	private:
		int a=10;//Class Data Member is Private in nature
	public:
	void method1(){ // Class Member Function must be Public in nature
		cout<<"Class Method"<<endl;
		cout<<a;
	}
};
int main(){
	demo obj;
	obj.method1();
	return 0;
}
```
