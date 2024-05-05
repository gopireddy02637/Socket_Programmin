# Socket_Programmin
Socket_Programming in C/C++ using TCP/IP,udp. IPV4,ipv5

We will learning about Server and cilent connection 
Server programming
clinet programming

Communication btw clent and server enable
server handleing single client and server Handling multiple cilents 


more on theory of socket programming (TCP/IP,UDP and IPV4,IPv6)


## NOTE1
Socket
it is nothing but file descriptor, just like we have file open and file read in c prog it returns pointer but here it returne integer vaule.
it have 2 programs server and cilent 
    sever send the request to cilent and get respond.
    cilent is applicaton get connect to address of the server snd comminicate
it creates an end point to receive and send the information over the network
the other end point opens a file descriotor and connects to the earlier socket to read anwrite (or send and secv).this end is called the cilent   

Two types
Stream Socket(SOCK_STREAM):
Connection oriented, uses TCP/IP IP is responsible for the data routing (path selection correct path of transfer)and not for data intergrity(accuracy,consistancy,reliable).
Ensure that data sent to be error free and complete and in same order as it was sent
tenlet

Datagram Socket (SOCK_DGRAM):
cONNECTIONLESS SOCKETS. uSES udp .not reliable.Packet may/may not reach but if reache ,will be error free . uses ip for routing
Used when TCP stack is either not available or few dropped packets doesn't harm(like video confrencing , movies etc)

### Note2
Big endian(Network Byte Order) // litle endian byte order:
Big endian - the most significant bit ( the bit end )(0x12345678) is placed at the byte with the lowerst address. the rest of the data is placed in the orde on the three bytes in memory.
Little Endian byte order: the least signifiacnt byte ( the little end )(0x78563412)of thr data is placed at the byte with the lowest address. the rest od the data placed in order intthe nest three bytes in memeory
in netwrok we used it big ending
APIs (htons(sending),ntohs(receving)) conversion to and from network to host byte orders.

### Note3
Blocking and Non Blocking
Blocking socket is set a request and is waiting for server respons and wait until it get it so for that 
the create multi threding concept 

Non-bloking socket 
alway run a thread never block read and erite  from buffer to socket channel

we have ioctlsocket(SOCKET s,long cmd,u_long *argv) thisis API which help blcoking ang non blocking socket succes 1 unsucce -1
u_long val = 0 for blocking 1 for Non-blocking we are using blocking socket becoz we use multithreading 
by default evrything is blocking socket 


#### Note 4
setsocketopt call
call this before bind funtion , only one use of each socket addres(protocol/network/port)
int setsockopt(SOCKET s,int level,int optname,const char *optval,int optlen)
level= options for socket descrpter
optname  =name of the socket, allow to use same prot which my socket is using , tis will allow if some other port is using the same port
optval , optlen are for blocking or non blocking 
retrun 0 if succescussfull
now we will see how the new request are handle but befoer that we need to write cilent prog what if cilent connect and how it communicTE TO YOU

##### nOTE 5
CILENT Progamming
