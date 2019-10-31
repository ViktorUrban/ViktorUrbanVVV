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
	int �ountStr();
public:
	vector<string> v;
	File();
	File(const string& name);
	~File();
	friend ostream& operator<<(ostream& os, const File& obj);
	vector<string>::iterator FindStr(const string& msg);
	vector<string>::iterator FindStr(const vector<string>& msg);

	// FindStr ����� ��� ������ �� vector<string>

	void Save();
	void Save(const string& name);
};