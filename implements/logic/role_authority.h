//======================================================================
//
//        Copyright (C) 2014 ���ձ�
//        All rights reserved
//
//        filename : role_authority.h
//        description : ��ɫȨ�ޱ�
//
//        created by Ҷ�� at  2014-08-01 10:00:00
//        modified by XX at  
//
//======================================================================

#ifndef _ROLE_AUTHORITY_H_
#define _ROLE_AUTHORITY_H_

#include <vector>

namespace logic
{

bool SelectRoleAuthorityTable(const std::vector<unsigned int>& roleIDList, std::vector<unsigned int>& authorityList);

}

#endif

