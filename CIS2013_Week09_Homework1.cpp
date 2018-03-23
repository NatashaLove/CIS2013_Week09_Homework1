#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main () {
	
	ifstream key;
	char f_name;
	char to_do;
	string msg;
	
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
} 
	cout << "Do you want to encrypt or decrypt a message? Enter: E or D accordingly. ";
	cout << endl;
	
	cin >> to_do;

	if (to_do == 'E') {
		
		cout << "Enter the message you want to encrypt: ";
		cin >>  msg;
	}
	else if (to_do == 'D'){
		cout << "Enter the message you want to decrypt: ";
		cin >>  msg;
	}
	// else {
	// cout << "Wrong value, try again. ";
	// }
	
	//cout << "Enter your message: ";
	//cout << endl;
	

	
	
	
	
	
	
	
	
	
	
	return 0;
}