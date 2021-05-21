#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	while(true)
	{
		ifstream infile;
		infile.open("c:\\cs110\\namedb.txt"); 
		if(!infile.is_open()) //determines if file is open
		{
			cout << "Can't open the file!\n";
			return 1;
		}
		cout << "Enter a last name: ";
		string s;
		getline(cin,s);
		if(s == "") break;
		string t;
		string r;
		while(infile.eof() != true)
		{	
			getline(infile,t);
			if(t.find(s) != string::npos)
			{
				r = t;
				cout << t << endl;
			}
			if(infile.eof() == true && r == "")
				cout << "Record not found" << endl;
		}
		infile.close();
	}
	return 0;
}