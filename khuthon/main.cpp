#include "user.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	string n, z, x, y, y2, y3, temp = "root";
	float v, d1;
	user* A = nullptr;
	
	cout << "**********************************대학 근처 상점 찾기(ver.0)**********************************" << endl;
	cout << "1. 회원가입" << endl;
	cout << "2. 로그인" << endl;
	cout << "0. 종료" << endl;
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
					cout << "<관리자 화면>" << endl;
					cout << "1. 맛집정보입력" << endl;
					cout << "2. 맛집정보출력" << endl;
					cout << "0. 로그아웃" << endl;
					cin >> c;
					while (c != 0)
					{
						switch (c)
						{
						case 1:
							system("cls");
							cout << "상점이름, 전화번호, 주소, 평점, 식당종류 순으로 입력(띄어쓰기 필수)" << endl;
							cout << "ex) 차이나타운 0310000000 영통 4.3 중식" << endl;
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
						cout << "<관리자 화면>" << endl;
						cout << "1. 맛집정보입력" << endl;
						cout << "2. 맛집정보출력" << endl;
						cout << "0. 로그아웃" << endl;
						cin >> c;
					}
				}
				else
				{
					system("cls");
					cout << "**********************************대학 근처 상점 찾기(ver.0)**********************************" << endl;
					cout << "1. 주변맛집 검색" << endl;
					cout << "2. 맛집 룰렛" << endl;
					cout << "0. 로그아웃" << endl;
					cin >> b;
					while (b != 0)
					{
						switch (b)
						{
						case 1:
							cout << "**********************************대학 근처 상점 찾기(ver.0)**********************************" << endl;
							cout << "원하는 식당종류를 입력하세요." << endl;
							cin >> y3;
							A->get_univ_name()->printlist(A->get_univname(), y3);
							system("pause");
							break;
						case 2:
							system("cls");
							cout << "**********************************대학 근처 상점 찾기(ver.0)**********************************" << endl;
							cout << "맛집의 범위를 제한하세요." << endl;
							cout << "1. 평점" << endl;
							cout << "2. 식당종류" << endl;
							cout << "0. 메뉴로" << endl;
							cin >> d;

							while (d != 0)
							{
								switch (d)
								{
								case 1:
									cout << "**********************************대학 근처 상점 찾기(ver.0)**********************************" << endl;
									cout << "원하는 최저 평점을 입력하세요." << endl;
									cin >> d1;
									A->get_univ_name()->listing(A->get_univname(), d1);
									break;
								case 2:
									cout << "**********************************대학 근처 상점 찾기(ver.0)**********************************" << endl;
									cout << "원하는 식당 종류를 입력하세요." << endl;
									cin >> y2;
									A->get_univ_name()->listing2(A->get_univname(), y2);
								}
								system("pause");
								cout << "**********************************대학 근처 상점 찾기(ver.0)**********************************" << endl;
								cout << "맛집의 범위를 제한하세요." << endl;
								cout << "1. 평점" << endl;
								cout << "2. 식당종류" << endl;
								cout << "0. 메뉴로" << endl;
								cin >> d;

							}
							break;

						}
						system("cls");
						cout << "**********************************대학 근처 상점 찾기(ver.0)**********************************" << endl;
						cout << "1. 주변맛집 검색" << endl;
						cout << "2. 맛집 룰렛" << endl;
						cout << "0. 로그아웃" << endl;
						cin >> b;
					}
				}
			}
			else
			{
				cout << "로그인 실패." << endl;
				A = A->login();
			}
			break;
		}
		A = nullptr;
		cout << "**********************************대학 근처 상점 찾기(ver.0)**********************************" << endl;
		cout << "1. 회원가입" << endl;
		cout << "2. 로그인" << endl;
		cout << "0. 종료" << endl;
		cin >> a;
	}
	
	return 0;
}