#pragma once
#include <iostream>
#include "divuniv.h"
using namespace std;

class user
{
private:
	string id;
	string pass;
	divuniv *univ_name; // university class�� ������ �ٲ۴�.
	string univname;
public:
	user() {}; // �ʱ�ȭ
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
		string t1 = "������б�";
		string t2 = "�߾Ӵ��б�";
		string t3 = "�ѱ��ܱ�����б�";
		cout << "������ ���б��� �����ϼ���." << endl;
		cout << "1. ������б�" << endl;
		cout << "2. �߾Ӵ��б�" << endl;
		cout << "3. �ѱ��ܱ�����б�" << endl;
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