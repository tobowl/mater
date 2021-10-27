#include <stdio.h>
#include <pthread.h>


void* funcCallback(void *arg)
{
    printf("id1:%ld\n", pthread_self());
    printf("this funcCallBack\n");
    return NULL;
}

void* contenArg(void *arg)
{
    char *str = (char*)arg;
    printf("id2:%ld\n", pthread_self());
    printf("this content arg:%s\n", str);

    return NULL;
}

int main()
{
    printf("Hello World\n");
    pthread_t id_deamo;
    pthread_t id_deamo_2;
    char buff[5] = "fuck";

    pthread_create(&id_deamo, NULL, funcCallback, NULL);
    pthread_create(&id_deamo_2, NULL, contenArg, (void*)buff);

    pthread_join(id_deamo_2, NULL);

    return 0;
}