// QuestInfo.cpp: implementation of the QuestInfo class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "QuestInfo.h"

#ifdef INFO_BUILDER

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

using namespace info;

QuestInfoPtr QuestInfo::MakeInfo(const std::wstring& filename)
{
    QuestInfoPtr info(new QuestInfo(filename));
    return info;
}

QuestInfo::QuestInfo(const std::wstring& filename) : InfoFile(filename), m_IsOpenFile(false)
{
    m_IsOpenFile = OpenFile(filename);

    if (!m_IsOpenFile)
    {
        assert(0);
    }
}

QuestInfo::~QuestInfo()
{
    clear();
}

bool QuestInfo::OpenFile(const std::wstring& filename)
{
    return true;
}

#endif //INFO_BUILDER