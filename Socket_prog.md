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

//keep wait for new requests and processd as per the request

Socket(int af,int type,int protocol)
AF_INET = ADDRES HANDLING
SOCK_STREAM = TYPE
PROTOCOL WHICH ONE = IPPROTO_TCP
AF_INET is for internetwork:UDP,TCP.ETC