CC = gcc

testsp1:
	$(CC) db_connect/src/main/db_connect.c -o db_connect/src/build/db_connect -lpq

