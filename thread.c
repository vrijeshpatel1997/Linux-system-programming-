#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>



void *ThreadFunction(void * vargp){

sleep(2);
printf("hello Threadinf \n");

return NULL;

}
int main()


{

pthread_t thread_id;
printf("earlier when we didnt use threading ");



pthread_create(&thread_id, NULL, ThreadFunction, NULL);
pthread_join(thread_id, NULL);
printf("after when we have used threading");
exit(0);

}
