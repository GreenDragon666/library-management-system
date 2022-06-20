#include "CAdministrator.h"
void CAdministrator::addBook(CManagementBooks& mb)
{
	CBook book;
	cout << "当前图书馆情况如下" << endl;
	mb.showAllBooksInfo();
	cout << "请输入您要增加的图书信息:" << endl;
	string name, author;
	double price;
	int num;
	cout << "请输入增加的图书书名：" << endl;
	cin >> name;
	cout << "请输入增加的图书的作者：" << endl;
	cin >> author;
	cout << "请输入增加的图书价格：" << endl;
	cin >> price;
	cout << "请输入增加的图书的本书：" << endl;
	cin >> num;
	book.setName(name);
	book.setAuthor(author);
	book.setNum(num);
	book.setPrice(price);
	mb.addBook(book);
	cout << "新增图书成功" << endl;
}
void  CAdministrator::setId(string id)
{
	m_id = id;
}

void CAdministrator::setName(string name)
{
	m_name = name;
}

void CAdministrator::setGender(string gender)
{
	m_gender = gender;
}
void CAdministrator::setDepartment(string department)
{
	m_department = department;
}
void CAdministrator::showInfo()
{
	cout << "姓名:" << m_name << " " << "工号:" << m_id << " " << "性别:" << m_gender << " " << "部门:" << m_department <<endl;
}

std::istream& operator>>(std::istream& is, CAdministrator& admin)
{
	is >> admin.m_id >> admin.m_name >> admin.m_gender >> admin.m_department;
	return is;
}
string CAdministrator::getId()
{
	return m_id;
}

string CAdministrator::getName()
{
	return m_name;
}

string  CAdministrator::getGender()
{
	return m_gender;
}


string  CAdministrator::getDepartment()
{
	return m_department;
}
