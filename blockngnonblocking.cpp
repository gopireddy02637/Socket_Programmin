

#include<iostream>
#include<winsock.h>

using namespace std:

int nMaxFD 
#define PORT 9960
//scoket addres details as a varable i am taking
struct sockaddr_in srv;
//file_destructer no. of socket destructer or do some read ,write execpetio ]n 64 FD_SETSIZE FILE DESTRUCTED U CAN DD

fd_set fr,fw,fe;

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

//About the blocking vs NON blocking sockets
//optval = 0 means blocking and !=0 means non blcoking
u_long optval = 0;
nRET = ioctlsocket(nsocket,FIONBIO,&optval);
if (nRET!=0)
{
    cout<<endl<<"ioctlsocket call failed";
}
else
{
    cout<<"ioctlsocket is success"
}
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
nMaxFD = nsocket;
struct timeval tv;
//waiting for 1 sec to read ,write ,get exeception by setting the tv before that need to set
v.tv_sec = 1;
tc.tv_usec =0;
//keep waiting until any connection comes
while(1)
{
// making as zero init then reading write it
FD_ZERO(&fr);
FD_ZERO(&fw);
FD_ZERO(&fe);

FD_SET(Nsocket,&fr);
FD_SET(nSocket,&fe);

cout<<endl<<"before select call:"<<fr.fd_count;
//int select(int nfds,fd_set *readfds,fd_set *writefds,fd_set *exceptions,const timeval *timeout)
//it tells the number of FDs are there
nRET= Select(nmazfd+1,&fr,&fw,&fe,&tv);
if(nret>0)
{
    //when someone connect or communicate with a message over a dedicate connection // number of socket FD to communiccate
    cout<<
}
else if (nret == 0)
{
    //no connection or no communication request made or you can say none of the socket descruted ready
}
else
{
    //if -1 it failed anf your applicartion shpould show soem useful message 
    exit(-1)
}
cout<<endl<<"after select call:"<<fr.fd_count;
}
retrun 0;
}