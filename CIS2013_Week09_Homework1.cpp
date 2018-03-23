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
	
	//char a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	
	cout << "Hello! Enter the key file number (1, 2, 3)" << endl;
	cin >> f_name;
	//string K = "key.dat";
	
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

	if (to_do == 'E') {
		
		ifstream key("key.dat");
		char encryptedStr[500];
		
		cout << "Enter the message you want to encrypt: ";
		cin >>  msg;
	{
		
		int i;
		for (i = 0; i < msg.length(); i++)
		{
			key >> keychar;
			char c = encrypt(msg[i], keychar);
			encryptedStr[i] = c;
		}
		encryptedStr[i] = 0;
		cout << encryptedStr<<endl;
	}
	key.close();

		
	}
	else if (to_do == 'D'){
		
		ifstream key("key.dat");
		//char decryptedStr[500];
		string secr_msg;
		
		cout << "Enter the message you want to decrypt: ";
		cin >>  msg;
		
	{
		char decryptedStr[500];
		int i;
		for (i = 0; i < msg.length(); i++)
		{
		key >> keychar;
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
	

	
	// int encrypt;
	
	// for(int i=0; i<=msg.length(); i++) {
	// for(int y=0; y<500; y++) {
		// key[y]+msg[i]= encrypt;
	// }
	
// }
//cout << encrypt;
	
	
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


//cout << "Enter your message: ";
	//cout << endl;
	
	// for (int i=0; i<msg.length(); i++) {

// if (msg[i] = 'a') {
				// a=1;
				
				// }
				// else if (msg[i]=='b') {
				// b=2;
				
				// }
				// else if (msg[i]=='c') {
				// c=3;
				
				// }
				// else if (msg[i]=='d') {
				// d=4;
				
				// }
				// else if (msg[i]=='e') {
				// e=5;
				
				// }
				// else if (msg[i]=='f') {
				// f=6;
				
				// }
				// else if (msg[i]=='g') {
				// g=7;
				
				// }
				// else if (msg[i]=='h') {
				// h=8;
				
				// }
				// else if (msg[i]=='i') {
				// i=9;
				
				// }
				// else if (msg[i]=='j') {
				// j=10;
				
				// }
				// else if (msg[i]=='k') {
				// k=11;
				
				// }
				// else if (msg[i]=='l') {
				// l=12;
				
				// }
				// else if (msg[i]=='m') {
				// m=13;
				
				// }
				// else if (msg[i]=='n') {
				// n=14;
				
				// }
				// else if (msg[i]=='o') {
				// o=15;
				
				// }
				// else if (msg[i]=='p') {
				// p=16;
				
				// }
				// else if (msg[i]=='q') {
				// q=17;
				
				// }
				// else if (msg[i]=='r') {
				// r=18;
				
				// }
				// else if (msg[i]=='s') {
				// s=19;
				
				// }
				// else if (msg[i]=='t') {
				// t=20;
				
				// }
				// else if (msg[i]=='u') {
				// u=21;
				
				// }
				// else if (msg[i]=='v') {
				// v=22;
				
				// }
				// else if (msg[i]=='w') {
				// w=23;
				
				// }
				// else if (msg[i]=='x') {
				// x=24;
				
				// }
				// else if (msg[i]=='y') {
				// y=25;
				
				// }
				// else if (msg[i]=='z') {
				// z=26;
				
				// }
				// // else if (msg [i]==' ') {
				// // ' '=27;
				
				// // }
				
		
// }
	
// while (key>>symb){
			
		
			// if (symb=='a') {
				// a=1;
				
				// }
				// else if (symb=='b') {
				// b=2;
				
				// }
				// else if (symb=='c') {
				// c=3;
				
				// }
				// else if (symb=='d') {
				// d=4;
				
				// }
				// else if (symb=='e') {
				// e=5;
				
				// }
				// else if (symb=='f') {
				// f=6;
				
				// }
				// else if (symb=='g') {
				// g=7;
				
				// }
				// else if (symb=='h') {
				// h=8;
				
				// }
				// else if (symb=='i') {
				// i=9;
				
				// }
				// else if (symb=='j') {
				// j=10;
				
				// }
				// else if (symb=='k') {
				// k=11;
				
				// }
				// else if (symb=='l') {
				// l=12;
				
				// }
				// else if (symb=='m') {
				// m=13;
				
				// }
				// else if (symb=='n') {
				// n=14;
				
				// }
				// else if (symb=='o') {
				// o=15;
				
				// }
				// else if (symb=='p') {
				// p=16;
				
				// }
				// else if (symb=='q') {
				// q=17;
				
				// }
				// else if (symb=='r') {
				// r=18;
				
				// }
				// else if (symb=='s') {
				// s=19;
				
				// }
				// else if (symb=='t') {
				// t=20;
				
				// }
				// else if (symb=='u') {
				// u=21;
				
				// }
				// else if (symb=='v') {
				// v=22;
				
				// }
				// else if (symb=='w') {
				// w=23;
				
				// }
				// else if (symb=='x') {
				// x=24;
				
				// }
				// else if (symb=='y') {
				// y=25;
				
				// }
				// else if (symb=='z') {
				// z=26;
				
				// }
				// else if (symb==' ') {
				// ' '=27;
				
				// }
				
		//}