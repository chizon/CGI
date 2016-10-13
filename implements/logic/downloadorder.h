//======================================================================
//
//        Copyright (C) 2014 ���ձ�
//        All rights reserved
//
//        filename : downloadorder.h
//        description : ������Ϣ����
//
//        created by Ҷ�� at  2014-08-01 10:00:00
//        modified by XX at  
//
//======================================================================

#ifndef _DOWNLOAD_ORDER_H_
#define _DOWNLOAD_ORDER_H_

#include <string>
#include <vector>
#include <json/json.h>
#include "order_table.h"

namespace logic
{

bool DownloadOrderList(const std::string& strUserID, const std::string& strUserKey, std::string& strFileName);

}

#endif


