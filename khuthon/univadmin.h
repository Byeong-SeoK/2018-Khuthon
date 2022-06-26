#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "univuser.h"
using namespace std;
class Univ {

public:
	Univ(Univuser& a, string _S_number, string _S_address, string _name, float _grade, string _section) {
		a.S_number = _S_number;
		a.S_address = _S_address;
		a.name = _name;
		a.grade = _grade;
		a.section = _section;
	}
	Univ() {};
	void Set_number(string _S_number) {
		string S_number = _S_number;
	}
	void Set_address(string _S_address) {
		string S_address = _S_address;
	}
	void Set_name(string _name) {
		string name = _name;
	}
	void Set_grade(float _grade) {
		float grade = _grade;
	}
	void Set_section(string _section) {
		string section = _section;
	}

	void file(string a, string b, string c, float d, string e, string f)
	{
		ofstream fout2;
		fout2.open(f + ".txt", ios::app);
		if (fout2.is_open())
		{
			fout2 << a << " " << b << " " << c << " " << d << " " << e << endl;
		}
		fout2.close();
	}
};

