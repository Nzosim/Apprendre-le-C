#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void signalRecue(int signal);

void main(){

    /*
    * 1) RECEVOIR UN SIGNAL
    */
    signal(SIGINT, signalRecue); // le programme executera la méthode signal recue lorsqu'il recevra le signal sigint (ctrl-c)

    /*
    * 2) ATTENDRE UN SIGNAL
    */
    pause();

    /*
    * 3) ENVOYER UN SIGNAL
    */
    kill(123, SIGINT); // envoi le signal SIGINT au processus 123

    /*
    * 4) S'ENVOYER UN SIGNAL
    */  
    raise(SIGINT);

}

void signalRecue(int signal){}