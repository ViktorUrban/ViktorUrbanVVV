#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class File //: public vector<string>
{
private:
	string msg;
	fstream f;
	string name;
	int СountStr();
public:
	vector<string> v;
	File();
	File(const string& name);
	~File();
	friend ostream& operator<<(ostream& os, const File& obj);
	vector<string>::iterator FindStr(const string& msg);
	vector<string>::iterator FindStr(const vector<string>& msg);

	// FindStr модиф для поиска по vector<string>

	void Save();
	void Save(const string& name);
};