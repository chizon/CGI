//======================================================================
//
//        Copyright (C) 2014 ���ձ�
//        All rights reserved
//
//        filename : group_table.h
//        description : �û����
//
//        created by Ҷ�� at  2014-08-01 10:00:00
//        modified by ������ at 2014-10-20 22:00:00
//
//======================================================================

#ifndef _GROUP_TABLE_H_
#define _GROUP_TABLE_H_

#include <string>
#include <vector>
#include <map>

namespace logic
{

bool SelectGroupTable(unsigned int iUserID, std::vector<unsigned int>& roleIDList);
bool SelectGroupTable(unsigned int iUserID, std::vector< std::map<std::string, std::string> >& roleInfoList);
bool SelectGroupTableAuthorityList(unsigned int iUserID, std::vector< std::map<std::string, std::string> >& authorityList);

//modified by ������ at 2014-10-20 22:00:00
bool InsertGroupTable(const std::string& strUserID, const std::string& strGroupID);
//end modify

}

#endif

