#include <stdio.h>
#include <libpq.h>
#include "mongoose.h"
#include <time.h>
#include <pthread.h>

enum get_req
{
	REQ_GET_DECK,
	REQ_GET_CARD,
	REQ_HEALTH,
	PUT_BOARD_STATE,
	PUT_CARD_EVAL,
	PUT_DECK_EVAL
};

struct os_memory_map
{
	void *payload;
	void *return_load;
	pthread_mutex_t *lock;
}

struct api_request
{
	enum get_req type;
	struct mg_connection *conn;
	char payload[50];
	void *ret; 			//this needs to be created in another script that handels datamanagement. custom malloc of a designated space
	struct timespec timestamp;	//Precision time keeping. 


}





static void fn(struct mg_connection conn, enum get_req request, char load[50]) //load will change to void * when the payload includes PUT reuquests)
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
