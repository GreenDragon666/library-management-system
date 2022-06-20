#pragma once
#include<iostream>
#include"CManagementBooks.h"
using namespace std;
class CUser
{
protected:
	string m_id;
	string m_name;
	string m_gender;
	string m_department;
public:
	CUser();
    virtual	void borrowBookFromLibrary(CManagementBooks& mb)= 0;
	void setId(string id);
	void setName(string name);
	void setGender(string Gender);
	void setDepartment(string department);
    virtual void showInfo()=0;
	virtual ~CUser();
	void returnBook(CManagementBooks& mb);
	string getId();
	string getName();
	string getGender();
	string getDepartment();
	friend std::ostream& operator << (std::ostream& os, const CUser* user);
	friend std::istream& operator >> (std::istream& is, CUser* user);
};

