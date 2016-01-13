
#ifndef OBSERVER_H_H_
#define OBSERVER_H_H_

/*
	���ģʽ
		�۲���ģʽ.
*/

/************************************************************/

/************************************************************/

/************************************************************/

class IObserver
{
public:
	virtual int Update(void * pData) = 0;
};

/************************************************************/

class ISubject
{
public:
	virtual void Attach(IObserver * pOb) = 0;
	virtual void Detach(IObserver * pOb) = 0;

	virtual void Notify() = 0;

	virtual void Clear() = 0;
	virtual int  GetCount() = 0;
};

#endif