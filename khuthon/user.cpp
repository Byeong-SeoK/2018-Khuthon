#include "user.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void user::sign() // Add user
{
	system("cls");

	vector<user*> log; // 지금까지 회원가입된 user 정보들을 담을 임시 벡터
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
	cout << "*****회원가입 화면입니다.*****" << endl;
	cout << "생성할 ID(학번)를 입력해주세요: ";
	cin >> addid2;

	for (int i = 0; i < log.size(); i++) {
		if (log[i]->getid() == addid2)
		{
			cout << "이미 사용중인 ID입니다!" << endl;
			return;
		}
	}

	cout << "생성할 PASSWORD를 입력해주세요: ";
	cin >> addpass2;

	cout << "본인의 대학교명을 입력해주세요: ";
	cin >> add_univ_name2;


	if (fout.is_open())
	{
		fout << "아이디: " << addid2 << " " << "비밀번호: " << addpass2 << " " << "학교명: " << add_univ_name2 << endl;
	}

	fout.close();


	cout << "회원가입 성공!" << endl;
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
	cout << "*****로그인 화면입니다.*****" << endl;
	cout << "ID를 입력해주세요: ";
	cin >> loginid;


	for (int i = 0; i<log2.size(); i++) // user vecotr의 size만큼 i가 for문을 돈다.
	{
		if (log2[i]->getid() == loginid) // user[i]는 주소값 > getid를 통해 user.h의 user id를 불러온다.
		{
			cout << "PASSWORD를 입력해주세요: ";
			cin >> loginpass;
			if (log2[i]->getpass() == loginpass) // 마찬가지로 user.h의 user pass 를 불러온다. id와 pass모두 일치할 경우 로그인 성공.
			{
				cout << "로그인 성공" << endl;
				user* curuser = log2[i]; // curuser 현재 로그인된 유저를 지정해준다.
				return curuser;
			}
			else
			{
				cout << "비밀번호가 일치하지 않습니다!" << endl;
				return false;
			}

		}
		else
		{
			if (i == log2.size() - 1)
			{
				cout << "존재하지 않은 ID입니다!" << endl;
				return false;
			}
			else
			{
				continue;
			}
		}
	}
}