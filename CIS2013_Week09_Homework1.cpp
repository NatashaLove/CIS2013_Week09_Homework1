#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main () {
	
	ifstream key;
	char f_name;
	
	cout << "Hello! Enter the key file name (key.dat)" << endl;
	cin >> f_name;
	string k = "key.dat";
	
	if (f_name='k') {
	key.open("key.dat"); 
	}else
	{ 
	cout << "Could not find the file"; 
	exit(1); 
	} 

	
	if(key.fail()) {
		cout << "Something went wrong with " << f_name << endl;
		exit(1);
} else {
	cout << "Do you want to encrypt or decrypt a message? Enter: E or D accordingly. ";
	cout << endl;
	cout << "Enter your message: ";
	cout << endl;
}
	
	
	
	
	
	
	
	
	
	
	return 0;
}