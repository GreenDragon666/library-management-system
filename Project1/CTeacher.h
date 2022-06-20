#pragma once    
#include "CUser.h"
#include<fstream>
class CTeacher :
    public CUser
{
public:
    CTeacher();
    void borrowBookFromLibrary(CManagementBooks& mb);
    void showInfo();
};

