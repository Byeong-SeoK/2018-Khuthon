#include "user.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void user::sign() // Add user
{
	system("cls");

	vector<user*> log; // ���ݱ��� ȸ�����Ե� user �������� ���� �ӽ� ����
	ifstream fin;
	fin.open("account.txt");
	string addid;
	string addpass;
	string add_univ_name;
	string s1, s2, s3;

	while (fin >> s1 >> addid >> s2 >> addpass >> s3 >> add_univ_name)
	{
		user* t = new user(addid, addpass, add_univ_name);
		log.push_back(t);
	}
	fin.close();


	ofstream fout;
	fout.open("account.txt", ios::app);

	string addid2;
	string addpass2;
	string add_univ_name2;
	cout << "*****ȸ������ ȭ���Դϴ�.*****" << endl;
	cout << "������ ID(�й�)�� �Է����ּ���: ";
	cin >> addid2;

	for (int i = 0; i < log.size(); i++) {
		if (log[i]->getid() == addid2)
		{
			cout << "�̹� ������� ID�Դϴ�!" << endl;
			return;
		}
	}

	cout << "������ PASSWORD�� �Է����ּ���: ";
	cin >> addpass2;

	cout << "������ ���б����� �Է����ּ���: ";
	cin >> add_univ_name2;


	if (fout.is_open())
	{
		fout << "���̵�: " << addid2 << " " << "��й�ȣ: " << addpass2 << " " << "�б���: " << add_univ_name2 << endl;
	}

	fout.close();


	cout << "ȸ������ ����!" << endl;
}

user* user::login() // Login
{
	system("cls");

	vector<user*> log2;
	ifstream fin;
	fin.open("account.txt");
	string addid;
	string addpass;
	string add_univ_name;
	string s1, s2, s3;

	while (fin >> s1 >> addid >> s2 >> addpass >> s3 >> add_univ_name)
	{
		user* t = new user(addid, addpass, add_univ_name);
		log2.push_back(t);
	}
	fin.close();


	string loginid;
	string loginpass;
	cout << "*****�α��� ȭ���Դϴ�.*****" << endl;
	cout << "ID�� �Է����ּ���: ";
	cin >> loginid;


	for (int i = 0; i<log2.size(); i++) // user vecotr�� size��ŭ i�� for���� ����.
	{
		if (log2[i]->getid() == loginid) // user[i]�� �ּҰ� > getid�� ���� user.h�� user id�� �ҷ��´�.
		{
			cout << "PASSWORD�� �Է����ּ���: ";
			cin >> loginpass;
			if (log2[i]->getpass() == loginpass) // ���������� user.h�� user pass �� �ҷ��´�. id�� pass��� ��ġ�� ��� �α��� ����.
			{
				cout << "�α��� ����" << endl;
				user* curuser = log2[i]; // curuser ���� �α��ε� ������ �������ش�.
				return curuser;
			}
			else
			{
				cout << "��й�ȣ�� ��ġ���� �ʽ��ϴ�!" << endl;
				return false;
			}

		}
		else
		{
			if (i == log2.size() - 1)
			{
				cout << "�������� ���� ID�Դϴ�!" << endl;
				return false;
			}
			else
			{
				continue;
			}
		}
	}
}