#pragma once
#include "univadmin.h"
#include <iostream>
using namespace std;
class divuniv : public Univuser, public Univ 
{ // khu knu snu���
private:
	string univname;
public:

	void setunivname(string univname)
	{
		this->univname = univname;
	}


};