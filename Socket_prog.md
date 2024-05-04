before going to write the programming we need to add 
" wsock32.lib;%(additionalDependencies) "
add winsock.h

#// initialize the wsa Variables (suppporting socket prog in winodws platform)
#//initialze the socket 
#//initiae the environment for sockaddr structure
    //scoket addres details as a varable i am taking
    struct sockaddr_in srv;
#//bind the socket to local port
bind(nsocket,(sockaddr*)&srv,sizeof(sockaddr));
SOCKET S= which scoket
sockaddre  = which socket you need connect, 
size= size of addre family
here bind will connec to our local port here we are creating our server in our local.

#//Listen the request form client (queues the requests)
int listen(SOCKET s, int backlog)
backlog = how many request your server can pull // how many serve r are there in active queue this is kind of queue  active queue max =5
here frits listen to local port and request for client and accpet from cilet request 

#//keep wait for new requests and processd as per the request

Socket(int af,int type,int protocol)
AF_INET = ADDRES HANDLING
SOCK_STREAM = TYPE
PROTOCOL WHICH ONE = IPPROTO_TCP
AF_INET is for internetwork:UDP,TCP.ETC

fd_set{
    unsigned int fd_count = number of file destructer
    SOCKET fd_array[FD_SETSIZE] = ARRAY of socket set socket desturfter in this;
}
FD_SET IS OBJECTED TO KERNEL OPAC =  like example in arry you choes 1 index that is int vaule meand fd it will go to that index in kernal and write the values in that index like open thefile 
and write it or read it it handle by kernel system process.
int nMaxFD = nsocket;
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
nret= Select(nmazfd+1,&fr,&fw,&fe,&tv);
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