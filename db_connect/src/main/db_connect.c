#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>
#include <string.h>

int main()
{
	const char *conninfo = "host=/var/run/postgresql dbname=magic_cards user=host1";
	PQconn *conn = PQconnectdb(conninfo);
	
	char* feedback;
	
	switch(PQstatus(conn))
	{
		case CONNECTION_STARTED:
			feedback = "Waiting for connection";
			break;		
		case CONNECTION_MADE:
			feedback = "Connection made";
			break;
		default:
			feedback = "Nothing happening cheif";
			break;
	}	
	return 0;

}



