#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <netinet/in.h>
#include "config.c"

void  main(){
	conf_t * config;
//	char listen[]="127.0.0.1";
//	config->listen=&listen;
	config->port=5001;
	
//	printf("%s",config->listen);
	printf("%d",config->port);
}

void start (){	
}

void stop(){

}

void reload(){

}
