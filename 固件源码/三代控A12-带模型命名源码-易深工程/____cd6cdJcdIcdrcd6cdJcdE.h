#ifndef __INTRINS_H_
#define __INTRINS_H_

#define _nop_() __asm nop __endasm; //����keil�е�"intrins.h"
	
/*--------keil�е�intrins.h��
extern void          _nop_     (void); //��ʱ������һ����������
extern bit           _testbit_ (bit);
extern unsigned char _cror_    (unsigned char, unsigned char); //ѭ������
extern unsigned int  _iror_    (unsigned int,  unsigned char);
extern unsigned long _lror_    (unsigned long, unsigned char);
extern unsigned char _crol_    (unsigned char, unsigned char); //ѭ������
extern unsigned int  _irol_    (unsigned int,  unsigned char);
extern unsigned long _lrol_    (unsigned long, unsigned char);
extern unsigned char _chkfloat_(float);
extern void          _push_    (unsigned char _sfr);
extern void          _pop_     (unsigned char _sfr);
*/


#endif