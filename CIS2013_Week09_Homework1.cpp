#include <iostream>
#include <string>
#include <fstream>
using namespace std;

char encrypt(char input, char keychar);
char decrypt(char input, char keychar);

int main () {
	
	ifstream key;
	char f_name;
	char to_do;
	string msg;
	char input;
	char keychar;
	
	cout << "Hello! Enter the key file number (1, 2, 3)" << endl;
	cin >> f_name;
	
	if (f_name=='1') {
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
	cin.ignore(1000,'\n');

	if (to_do == 'E') {
		
		ifstream key("key.dat");
		char encryptedStr[500];
		
		cout << "Enter the message you want to encrypt: ";
		getline(cin, msg);
	{
		
		int i;
		for (i = 0; i < msg.length(); i++)
		{
			
			//while (1) 				{ 
			key >> keychar;
			
			//if (keychar == ' ' || (keychar > 'a' && keychar < 'z')) {		
			//	break; 				} 
			char c = encrypt(msg[i], keychar);
			encryptedStr[i] = c;
			//}
		//}
			
		}
		encryptedStr[i] = 0;
		cout << encryptedStr<<endl;
	}
	key.close();

		
	}
	else if (to_do == 'D'){
		
		ifstream key("key.dat");
		char decryptedStr[500];
		string secr_msg;
		
		cout << "Enter the message you want to decrypt: ";
		getline(cin, secr_msg); 
		
	{
		//char decryptedStr[500];
		int i;
		for (i = 0; i < secr_msg.length(); i++)
		{
			
			while (1) 				{ 
		key >> keychar;
		
		if (keychar == ' ' || (keychar > 'a' && keychar < 'z')) 		
			break; 				} 		
		if (secr_msg[i] == 0) break; 
		
			char c = decrypt(secr_msg[i], keychar);
			decryptedStr[i] = c;
		}
		decryptedStr[i] = 0;
		cout << decryptedStr;
	}

		
	key.close();
		
	}
	else {
    cout << "Wrong value, try again. ";
	 }
	

	cin >> input; 
	return 0;
}

char encrypt(char input, char keychar) {
	char x, y;

	if (input == ' ') x = 27;
	else x = input - 'a' + 1;

	if (keychar == ' ') y = 27;
	else y = keychar - 'a' + 1;

	int n = (x + y) % 27;
	if (!n)
		return ' ';
	return 'a' + n - 1;
}

char decrypt(char input, char keychar)
{
	char x, y;

	if (input == ' ') x = 0;
	else x = input - 'a' + 1;

	if (keychar == ' ') y = 0;
	else y = keychar - 'a' + 1;

	char R = x - y;
	if (R < 0)
		R += 27;
	if (!R) return ' ';
	return R + 'a' - 1;
}
