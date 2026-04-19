#include <stdio.h>
#include <libpq.h>
#include "mongoose.h"
#include <time.h>


enum get_req
{
	REQ_GET_DECK,
	REQ_GET_CARD,
	REQ_HEALTH,
	PUT_BOARD_STATE,
	PUT_CARD_EVAL,
	PUT_DECK_EVAL
};


struct api_request
{
	enum get_req type;
	struct mg_connection *conn;
	char payload[50];
	void *ret; 			//this needs to be created in another script that handels datamanagement. custom malloc of a designated space
	struct timespec timestamp;	//Precision time keeping. 


}

static void fn()
{


}



int main()
{
	printf("db_listener start...\n");
	struct mg_mgr mgr;
	
	mg_mgr_init(&mgr);
	mg_http_listen(&mgr, "https://localhost:8000", );
	printf("Mongoose listening on port 8000 ...\n");
	
	printf("loop starting...");
	for(;;)
	{
		mg_mrg_poll(&mgr, 500);

	}	

	return 0;
}
