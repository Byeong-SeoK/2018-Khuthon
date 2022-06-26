#pragma once
#include <iostream>
#include "divuniv.h"
using namespace std;

class user
{
private:
	string id;
	string pass;
	divuniv *univ_name; // university class형 변수로 바꾼다.
	string univname;
public:
	user() {}; // 초기화
	user(string id, string password, string univname)
	{
		this->id = id;
		this->pass = password;
		this->univname = univname;
	}

	void setuniv_name(string univname)
	{
		univ_name->setunivname(univname);
	}

	string getid()
	{
		return id;
	}

	string getpass()
	{
		return pass;
	}

	divuniv* get_univ_name()
	{
		return univ_name;
	}

	string get_univname()
	{
		return univname;
	}

	void sign();
	user* login();
	void getinfo()
	{
		cout << id << " " << pass << " " << univname << endl;
	}
	string select_univname()
	{
		system("cls");
		int y;
		string t1 = "경희대학교";
		string t2 = "중앙대학교";
		string t3 = "한국외국어대학교";
		cout << "삽입할 대학교를 선택하세요." << endl;
		cout << "1. 경희대학교" << endl;
		cout << "2. 중앙대학교" << endl;
		cout << "3. 한국외국어대학교" << endl;
		cin >> y;
		if (y==1)
			univname = t1;
		else if (y==2)
			univname = t2;
		else if (y==3)
			univname = t3;

		cout << univname << endl;
		return univname;
	}



};