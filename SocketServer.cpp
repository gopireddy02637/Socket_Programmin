

#include<iostream>
#include<winsock.h>

using namespace std:

#define PORT 9960
//scoket addres details as a varable i am taking
struct sockaddr_in srv;
int main()
{
    int nRET= 0;
// initialize the wsa Variables (suppporting socket prog in winodws platform)
WSADATA ws;
if(WSAStartup(MAKEWORD(2,2),&ws)<0)
{
    cout<<endl<<"WSA Failed to init";
}
else
{
    cout<<endl<<"WSA successfully";
}
//initialze the socket 
int nsocket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
if (nsocket<0)
{
    cout <<endl <<"the socket not opend";
    //print socket id
    cout<<endl<<nsocket;//184
}
else{
    cout<<endl<<"opended successfully"
}
//initiae the environment for sockaddr structure
srv.sin_family = AF_INET;
srv.sin_port = htons(PORT);
//srv.sin_addr.s_addr = inet_addr("127.0.0.1");
srv.sin_addr.s_addr = INADDR_ANY;
memset(&(srv.sin_zero),0,8);


//bind the socket to local port

nRET = bind(nsocket,(sockaddr*)&srv,sizeof(sockaddr));
if(nRET<0)
{
    cout<<endl<<"failed to bind to local port";
}
else
{
    cout<<endl<<"successfully binded the local port";
}
//Listen the request form client (queues the requests)
nRET = listen(nsocket,5);
if(nRET<0)
[
    cout<<endl<<"fail to start listen to local port"
]
else
{
    cout<<endl<<"started listening to local port"
}
//keep wait for new requests and processd as per the request

retrun 0;
}