#include "user.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	string n, z, x, y, y2, y3, temp = "root";
	float v, d1;
	user* A = nullptr;
	
	cout << "**********************************���� ��ó ���� ã��(ver.0)**********************************" << endl;
	cout << "1. ȸ������" << endl;
	cout << "2. �α���" << endl;
	cout << "0. ����" << endl;
	cin >> a;
	while (a != 0)
	{
		switch (a)
		{
		case 1:
			A->sign();
			break;
		case 2:
			A = A->login();

			if (A != nullptr)
			{
				system("pause");
				if (A->getid() == temp)
				{
					system("cls");
					cout << "<������ ȭ��>" << endl;
					cout << "1. ���������Է�" << endl;
					cout << "2. �����������" << endl;
					cout << "0. �α׾ƿ�" << endl;
					cin >> c;
					while (c != 0)
					{
						switch (c)
						{
						case 1:
							system("cls");
							cout << "�����̸�, ��ȭ��ȣ, �ּ�, ����, �Ĵ����� ������ �Է�(���� �ʼ�)" << endl;
							cout << "ex) ���̳�Ÿ�� 0310000000 ���� 4.3 �߽�" << endl;
							cin >> z >> n >> x >> v >> y;
							A->get_univ_name()->Set_name(z);
							A->get_univ_name()->Set_number(n);
							A->get_univ_name()->Set_address(x);
							A->get_univ_name()->Set_grade(v);
							A->get_univ_name()->Set_section(y);
							A->get_univ_name()->file(z, n, x, v, y, A->select_univname());
							break;
						case 2:
							system("cls");
							A->get_univ_name()->fileoutput(A->select_univname());
							system("pause");
							break;
						}
						system("cls");
						cout << "<������ ȭ��>" << endl;
						cout << "1. ���������Է�" << endl;
						cout << "2. �����������" << endl;
						cout << "0. �α׾ƿ�" << endl;
						cin >> c;
					}
				}
				else
				{
					system("cls");
					cout << "**********************************���� ��ó ���� ã��(ver.0)**********************************" << endl;
					cout << "1. �ֺ����� �˻�" << endl;
					cout << "2. ���� �귿" << endl;
					cout << "0. �α׾ƿ�" << endl;
					cin >> b;
					while (b != 0)
					{
						switch (b)
						{
						case 1:
							cout << "**********************************���� ��ó ���� ã��(ver.0)**********************************" << endl;
							cout << "���ϴ� �Ĵ������� �Է��ϼ���." << endl;
							cin >> y3;
							A->get_univ_name()->printlist(A->get_univname(), y3);
							system("pause");
							break;
						case 2:
							system("cls");
							cout << "**********************************���� ��ó ���� ã��(ver.0)**********************************" << endl;
							cout << "������ ������ �����ϼ���." << endl;
							cout << "1. ����" << endl;
							cout << "2. �Ĵ�����" << endl;
							cout << "0. �޴���" << endl;
							cin >> d;

							while (d != 0)
							{
								switch (d)
								{
								case 1:
									cout << "**********************************���� ��ó ���� ã��(ver.0)**********************************" << endl;
									cout << "���ϴ� ���� ������ �Է��ϼ���." << endl;
									cin >> d1;
									A->get_univ_name()->listing(A->get_univname(), d1);
									break;
								case 2:
									cout << "**********************************���� ��ó ���� ã��(ver.0)**********************************" << endl;
									cout << "���ϴ� �Ĵ� ������ �Է��ϼ���." << endl;
									cin >> y2;
									A->get_univ_name()->listing2(A->get_univname(), y2);
								}
								system("pause");
								cout << "**********************************���� ��ó ���� ã��(ver.0)**********************************" << endl;
								cout << "������ ������ �����ϼ���." << endl;
								cout << "1. ����" << endl;
								cout << "2. �Ĵ�����" << endl;
								cout << "0. �޴���" << endl;
								cin >> d;

							}
							break;

						}
						system("cls");
						cout << "**********************************���� ��ó ���� ã��(ver.0)**********************************" << endl;
						cout << "1. �ֺ����� �˻�" << endl;
						cout << "2. ���� �귿" << endl;
						cout << "0. �α׾ƿ�" << endl;
						cin >> b;
					}
				}
			}
			else
			{
				cout << "�α��� ����." << endl;
				A = A->login();
			}
			break;
		}
		A = nullptr;
		cout << "**********************************���� ��ó ���� ã��(ver.0)**********************************" << endl;
		cout << "1. ȸ������" << endl;
		cout << "2. �α���" << endl;
		cout << "0. ����" << endl;
		cin >> a;
	}
	
	return 0;
}