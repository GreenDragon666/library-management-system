#pragma once
#include<string.h>
#include<iostream>
#include"CUser.h"
#include"CManagementBooks.h"
using namespace std;
class CStudent : 
	  public CUser
{
private:
	string m_class;
public:
	CStudent();
	void showInfo();
	void borrowBookFromLibrary(CManagementBooks& mb);
	void setClass(string Class);
	string getClass();
};

