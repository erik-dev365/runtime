#ifndef _WAPI_MUTEX_PRIVATE_H_
#define _WAPI_MUTEX_PRIVATE_H_

#include <config.h>
#include <glib.h>
#include <pthread.h>
#include <sys/types.h>

struct _WapiHandle_mutex
{
	guint32 name;
	pid_t pid;
	pthread_t tid;
	guint32 recursion;
};

struct _WapiHandlePrivate_mutex
{
	int dummy;
};

#endif /* _WAPI_MUTEX_PRIVATE_H_ */
