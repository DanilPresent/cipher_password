
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string encryption() {
	int N = 0;
	int n1 = 0;
	string pass;
	ofstream out;
	system("cls");
	cout << "Input password for encrypt: ";
	cin >> pass;
	cout << "Input the number of words for encrypt: ";
	cin >> N;
	string *wordList = new string[N];
	cout << "Input your word for encrypt: " << endl;
	out.open("words.txt");
	if (out.is_open()){
		for (int i = 0; i < N; i++) {
			cout << i + 1 << ")";
			string g;
			cin >> g;
			wordList[i] = g;
			out << g << endl;
		}
	}
	out.close();
	system("cls");
	cout << "Password: " << pass << endl; 
	cout << "Words for encrypte:" << endl ;
	for (int j = 0; j < N; j++) {
		cout << wordList[n1 + j] << endl;
	}
	system("pause>nul");
	return pass;
}

string decryption() {
	string hash;
	system("cls");
	cout << "Input your hash: ";
	cin >> hash;
	cout << hash;
	system("pause>nul");
	return hash;
}

int main()
{
	system("cls");
	system("color 0a");
	system("chcp 1251>nul");
	string inp;
	cout << "Welcome to programm CIPHER." << endl << "CIPHER is programm for encrypt your password." << endl << "Programmer: DanilPresent" << endl;
	cout << "" << endl << "1.Encrypt" << endl << "2.Decrypt" << endl << "3.Exit" << endl;
	cout << "Input value: ";
	cin >> inp;
	if (inp == "1") {
		encryption();
	}
	else if (inp == "2") {
		decryption();
	}
	else if (inp == "3") {
		system("exit");
	}
	else {
		cout << "Input the correct value!";
		system("pause>nul");
		return main();
	}
	system("pause>nul");
	return 0;
}

