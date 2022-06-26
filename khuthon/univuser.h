#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Univuser {
	friend class Univ;
private:
	string S_number;
	string S_address;
	string name;
	float grade;
	string section;

public:

	void get_number(string _S_number) {
		string S_number = _S_number;
	}
	void get_address(string _S_address) {
		string S_address = _S_address;
	}
	void get_name(string _name) {
		string name = _name;
	}
	void get_grade(float _grade) {
		float grade = _grade;
	}
	void get_section(string _section) {
		string section = _section;
	}

	void fileoutput(string x) {
		ifstream store;
		store.open(x + ".txt");
		while (!store.eof()) {
			string a, b, c, d;
			store >> a >> b >> c >> d;
			cout << a << " " << b << " " << c << " " << d << endl;
		}
		store.close();
	}

	void listing(string x, float z) {
		vector <string> numvec;
		vector <string> addvec;
		vector <string> namevec;
		vector <string> gradevec;
		vector <string> secvec;
		vector <string> choice_namevec;

		ifstream store;
		store.open(x + ".txt");
		while (!store.eof()) {
			string a, b, c, d, e;
			store >> a >> b >> c >> d >> e;
			namevec.push_back(a);
			numvec.push_back(b);
			addvec.push_back(c);
			gradevec.push_back(d);
			secvec.push_back(e);
		}
		store.close();


		for (int i = 0; i < gradevec.size()-1; i++)
		{
			if (atof((gradevec[i].c_str())) >= z)
			{
				choice_namevec.push_back(namevec[i]);
			}
		}

		srand((unsigned int)time(NULL));

		cout << "결과는 " << choice_namevec[rand() % choice_namevec.size()] << endl;

	}

	void listing2(string x, string z) {
		vector <string> numvec;
		vector <string> addvec;
		vector <string> namevec;
		vector <string> gradevec;
		vector <string> secvec;
		vector <string> choice_namevec;

		ifstream store;
		store.open(x + ".txt");
		while (!store.eof()) {
			string a, b, c, d, e;
			store >> a >> b >> c >> d >> e;
			namevec.push_back(a);
			numvec.push_back(b);
			addvec.push_back(c);
			gradevec.push_back(d);
			secvec.push_back(e);
		}
		store.close();


		for (int i = 0; i < secvec.size() - 1; i++)
		{
			if (secvec[i] == z)
			{
				choice_namevec.push_back(namevec[i]);
			}
		}

		srand((unsigned int)time(NULL));

		cout << "결과는 " << choice_namevec[rand() % choice_namevec.size()] << endl;

	}
	
	void printlist(string x, string y)
	{
		vector <string> numvec;
		vector <string> addvec;
		vector <string> namevec;
		vector <string> gradevec;
		vector <string> secvec;
		vector <string> choice_namevec;
		vector <string> choice_numvec;
		vector <string> choice_addvec;
		vector <string> choice_gradevec;
		vector <string> choice_secvec;

		ifstream store;
		store.open(x + ".txt");
		while (!store.eof()) {
			string a, b, c, d, e;
			store >> a >> b >> c >> d >> e;
			namevec.push_back(a);
			numvec.push_back(b);
			addvec.push_back(c);
			gradevec.push_back(d);
			secvec.push_back(e);
		}
		store.close();


		for (int i = 0; i < secvec.size() - 1; i++)
		{
			if (secvec[i] == y)
			{
				choice_namevec.push_back(namevec[i]);
				choice_numvec.push_back(numvec[i]);
				choice_addvec.push_back(addvec[i]);
				choice_gradevec.push_back(gradevec[i]);
				choice_secvec.push_back(secvec[i]);
			}
		}

		for (int i = 0; i < choice_namevec.size(); i++)
		{
			cout << choice_namevec[i] << " " << choice_numvec[i] << " " << choice_addvec[i] << " " << choice_gradevec[i] << " " << choice_secvec[i] << endl;
		}

	}





};

