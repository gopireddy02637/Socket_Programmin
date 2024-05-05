

#include<iostream>
#include<winsock.h>

using namespace std:

#define PORT 9909

int nclient;
struct sockaddr_in srv;

int manin()
{
int nRET=0;
WSADATA ws;
if(WSAStartup(MAKEWORD(2,2),&ws)<0)
{
    cout<<endl<<"WSA Failed to init";
}
else
{
    cout<<endl<<"WSA successfully";
}
int nclient = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
if (nclient<0)
{
    cout <<endl <<"the nclient not opend";
    //print nclient id
    cout<<endl<<nsocket;//184
}
else{
    cout<<endl<<"opended nclient successfully"
}
srv.sin_family = AF_INET;
srv.sin_port = htons(PORT);
srv.sin_addr.s_addr = inet_addr("127.0.0.1");
//srv.sin_addr.s_addr = INADDR_ANY;
memset(&(srv.sin_zero),0,8);
nRET = connect(nclient,(struct sockaddr*)&srv,sizeof(srv));
if(nRET<0)
{
    cout<<endl<<"connect failed";
}
else
{
    cout<<endl<<"connected to the server";
}

}