#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "File.h"
#include <algorithm>
using namespace std;



void main()
{
	string name = "G:\\5j89.PDB";
	File f(name);
	//cout << f << endl;
	//File f2{ f };
	string msg = "REMARK 470   M RES CSSEQI  ATOMS                                                ";
	//cout << f.v.capacity() << endl;
	//f.v.shrink_to_fit();
	//advance(it, 1);
	//auto it = f.v.begin();

	//*it = msg; // замена8
	//f.v.insert(it, 1); // вставка
	//f.v.erase(it, it+2); // удаление €чейки/диапазона €ч. в векторе по итератору
	
	auto rezolt = find(f.v.begin(), f.v.end(), msg);
	if (rezolt == f.v.end()) cout << "Not Found" << endl;
	else f.v.insert(rezolt+1, "hello");
	//cout << f << endl;
	f.Save(name);
}
