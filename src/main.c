#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include "types.h"

TicketCaller* pc;

void client_inform_order(order_t* od, int clerk_id) {
	// TODO: ...
}

void client_think_order() {
	sleep(rand() % (clientMaxThinkSec + CLIENT_MIN_THINK_SEC) + CLIENT_MIN_THINK_SEC);
}

void client_wait_order(order_t* od) {
	// TODO: ...
}

void clerk_create_order(order_t* od) {
	// TODO: ...
}

void clerk_annotate_order() {
	sleep(rand() % (clerkMaxWaitSec + CLERK_MIN_WAIT_SEC) + CLERK_MIN_WAIT_SEC);
}

void cooker_wait_cook_time() {
	sleep(rand() % (cookMaxWaitSec + COOK_MIN_WAIT_SEC) + COOK_MIN_WAIT_SEC);
}

void* client(void *args) {
	client_t* cl = (client_t*) args;
	int pw = get_unique_ticket(pc);

	// TODO: ...
}

void* clerk(void *args) {
	clerk_t* ck = (clerk_t*) args;

	// TODO: ...
}

void* cooker(void *args) {
	int num_plates = 0;

	// TODO: ...
}

int main(int argc, char *argv[]) {
	parseArgs(argc, argv);
	pc = init_ticket_caller();

	// TODO: ...
	return 0;
}
