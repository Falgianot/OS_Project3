#include <stdio.h>
#include <stdlib.h>
#include "my_pthread.c"
#include "my_pthread_t.h"

my_pthread_t * threadArray;
//comment
void * dummy1(){
int j=0;

for(j=0;j<1000000;j++){
    
    printf("%d\n",j);
  
	}
    return 0;
    //my_pthread_exit(0);

}

void * dummy2(){
int j=0;
for(j=0;j<200;j++){
    printf("hello\n");
	}
    //my_pthread_exit(0);

}

int main(int argc, char** arg){

	//getcontext(&uctx_main);
    threadArray = (my_pthread_t *)malloc(sizeof(my_pthread_t)*10);
    int i;
    
	
    my_pthread_create(&threadArray[0],NULL,dummy1,NULL);
    printf("back in main\n");
    //my_pthread_create(&threadArray[1],NULL,dummy2,NULL);
    
    
    
    //my_pthread_create(&threadArray[0],NULL,dummy2,NULL);
    
	
    
   
    
    
    
    
	return 0;
}

