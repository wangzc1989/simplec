#ifndef _H_SIMPLEC_SOCKET_START
#define _H_SIMPLEC_SOCKET_START

#include <rsmq.h>
#include <socket_msg.h>

//
// ss_run - ����socket ������
// host		: ��������
// port		: �˿�
// run		: ��Ϣ����Э��
// return	: void
//
extern void ss_run(const char * host, uint16_t port, void (* run)(msgrs_t));

#endif//_H_SIMPLEC_SOCKET_START