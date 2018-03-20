#include "callback.h"
typedef void (*CallBackFun)(void *watcherCtx); 

void callback(void *watcherCtx)
{
	call_back *p = (call_back *)watcherCtx;
	p->call();
}

int test(CallBackFun pCallBack, void *watcherCtx)
{
	pCallBack(watcherCtx);
	return 0;
}

int test_barnch()
{
	return 0;
}

int test_barnch2()
{
	return 0;
}

int main()
{
		calltest A;
		A.Run();
		test(callback,&A.m_test);
}
