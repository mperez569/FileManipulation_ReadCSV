#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string line, word; 
	ifstream file("../../File_ManipulationCSV1/File_ManipulationCSV1/employees.csv");
	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
			stringstream str(line);
			while (getline(str, word, ','))
			{
				cout << word << endl;
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Something Went Wrong!! :/";
	}
}
