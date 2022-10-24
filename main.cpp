/* Async multiclient net chat  by Vergun Denis <blu.eagle@mail.ru>
 * Four structures : Client, Server, Chat, Self. 
 * main() function. 
 * init() func.
 * Functions: creation create_socket(), closing socket close_socket(), 
 * connecting connect_to_socket(), initialisation bind_socket(), 
 * waiting for connection listen_socket() and accept_connection(), 
 * select_connection().
 */

//enum PeerType (55) consist of two members - Client & Server. There two state: Client or Server in programm.
//Client: functions resive messages(including from stdin), send messages to server, send nickname on start
//Server: functions registering(unregistering) clients, resive messages(including from stdin), send messages to all registered clients resive nick from client & register it
//ip scaner, avtomaticheskiy vibor regima raboti.

/*
                (begin)
                   |
                   |    
                  \|/   
        create threads   loop(256(ip 192.168.1.*))(check for connect)
                   |    (threads massive)
                   |
                  \|/
        wait threads ends
                   |
                   |
                  \|/   
        check for client(susess connection) loop  yes ----> end  (client)
                   |
                no |               
                  \|/
                server


*/
#include <iostream>

void spawnThreads();
void wait();
void check();
using namespace std;

int main(){
cout<< "wait..."<<endl;
spawnThreads();
wait();
check();
}

