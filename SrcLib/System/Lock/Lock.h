
#ifndef LOCK_H_H_
#define LOCK_H_H_

/*
	�̰߳�ȫ,�ٽ�����Դ��.
*/

/************************************************************/


/************************************************************/
#include <Windows.h>

/************************************************************/
class CLock
{
public:
	CLock();
	~CLock();

public:
	bool Lock();
	bool UnLock();

private:
	void InitCriticalSection();
	void UnInitCriticalSection();

private:
	CRITICAL_SECTION m_cs;
	bool             m_bCreated;
};

#endif