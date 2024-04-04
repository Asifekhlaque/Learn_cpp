#include<iostream>
#include<fstream> // it is used to perform  R / W opration in the file
using namespace std;
int main(){
	// File creation and open we used ofstream and write opteration in the file
	ofstream asif("D:\\C++ServivalSeries\\myfile.txt");
	cout<<"File Created"<<endl;
	// Write to the file
    asif << "Khushi Happy Holi";
    
    cout<<"Writng Text"<<endl;
	asif.close(); 
    // Create a text string, which is used to output the text file
	string myText;
	// Read from the text file
	ifstream obj2;
	obj2.open("D:\\C++ServivalSeries\\myfile.txt");
	// Use a while loop together with the getline() function to read the file line by line
	while (getline (obj2, myText)) {
     // Output the text from the file
     cout << myText;
    }
    cout<<"\nEnd\n";
	// Close the file
	obj2.close();
}