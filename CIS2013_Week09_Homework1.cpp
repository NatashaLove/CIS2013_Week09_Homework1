#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main () {
	
	ifstream key;
	char f_name;
	char to_do;
	string msg;
	char symb;
	char a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	
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
	
while (key>>symb){
			
		
			if (symb=='a') {
				a=1;
				
				}
				else if (symb=='b') {
				b=2;
				
				}
				else if (symb=='c') {
				c=3;
				
				}
				else if (symb=='d') {
				d=4;
				
				}
				else if (symb=='e') {
				e=5;
				
				}
				else if (symb=='f') {
				f=6;
				
				}
				else if (symb=='g') {
				g=7;
				
				}
				else if (symb=='h') {
				h=8;
				
				}
				else if (symb=='i') {
				i=9;
				
				}
				else if (symb=='j') {
				j=10;
				
				}
				else if (symb=='k') {
				k=11;
				
				}
				else if (symb=='l') {
				l=12;
				
				}
				else if (symb=='m') {
				m=13;
				
				}
				else if (symb=='n') {
				n=14;
				
				}
				else if (symb=='o') {
				o=15;
				
				}
				else if (symb=='p') {
				p=16;
				
				}
				else if (symb=='q') {
				q=17;
				
				}
				else if (symb=='r') {
				r=18;
				
				}
				else if (symb=='s') {
				s=19;
				
				}
				else if (symb=='t') {
				t=20;
				
				}
				else if (symb=='u') {
				u=21;
				
				}
				else if (symb=='v') {
				v=22;
				
				}
				else if (symb=='w') {
				w=23;
				
				}
				else if (symb=='x') {
				x=24;
				
				}
				else if (symb=='y') {
				y=25;
				
				}
				else if (symb=='z') {
				z=26;
				
				}
				// else if (symb==' ') {
				// ' '=27;
				
				// }
				
		}
	
	
	
	
	return 0;
}