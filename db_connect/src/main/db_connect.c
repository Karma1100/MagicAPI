#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>


int main()
{
	const char *conninfo = "host=/var/run/postgresql dbname=magic_cards user=host1";
	PGconn *conn = PGconnectdb(conninfo);

	
	return 0;

}



