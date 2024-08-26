/*
class -object

fstream : to write or read the data into file.
ofstream : to write data into file.
ifstream : to read the file.

*/
#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream fout;
	
	fout.open("star.txt");
	
	fout<<"hello, We are learning File Handling in OOP.";
	
	fout.close();
	ifstream fin;
	string line;
	
	fin.open("star.txt");
	
	while(getline(fin, line))
	{
		cout<<line;
	}
	
}




