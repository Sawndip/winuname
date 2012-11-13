// testuname.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <tchar.h>
#include "utsname.h"


int _tmain(int argc, _TCHAR* argv[])
{
	struct utsname name;
    uname(&name);
    printf("\nsysname:\t%s\nnodename:\t%s\nrelease:\t%s\nversion:\t%s\nmachine:\t%s\n",
            name.sysname,
            name.nodename,
            name.release,
            name.version,
            name.machine);

	return 0;
}

