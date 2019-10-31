#include "File.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

File::File() : File("G:\\obj.txt")
{
}

File::File(const string& name)
{
	this->name = name;
	v.reserve(this->ÑountStr()+100);
	f.open(name,  fstream::in );
	if (!f.is_open()) cout << "error" << endl;
	else
	{
		while (true)
		{
			getline(f, msg);
			v.push_back(msg);
			if (f.eof()) break;
		}
	}
	f.close();
}

int File::ÑountStr()
{
	f.open(name, fstream::in);
	if (!f.is_open()) cout << "error" << endl;
	else
	{
		int count=0;
		while (true)
		{
			getline(f, msg);
			count++;
			if (f.eof())
			{
				f.close();
				return count;
			}
		}
	}
	
}

vector<string>::iterator File::FindStr(const string& msg)
{
	string str;
	for (auto it = v.begin(); (it != v.end()); it++)
	{
		str = *it;
		int x = str.find(msg);
		if (x >= 0)
		{
			return it;
		}
	}
}

vector<string>::iterator File::FindStr(const vector<string>& msg)
{
	auto it = v.begin();
	return it;
}


void File::Save(const string& name)
{
	f.open(name, fstream::out);
	if (!f.is_open()) cout << "error" << endl;
	else
	{
		for (auto it = v.begin(); (it != v.end() - 1); it++)
		{
			f << *it << '\n';
		}
		auto it = v.end() - 1;
		f << *it;
	}
	f.close();
}

void File::Save()
{
	this->Save(this->name);
}

File::~File()
{
	
}

ostream& operator<<(ostream& os, const File& obj)
{
	for (auto el : obj.v)
	{
		os << el << endl;
	}
	return os;
}
