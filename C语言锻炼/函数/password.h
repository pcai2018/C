#ifndef __PASSWORD_H__
#define __PASSWORD_H__


#include <stdio.h>
#include <stdbool.h>


extern void setPassword(char* setpass);
extern bool checkPassword(char *inpass);		//返回true代表密码验证OK，返回false密码验证失败

#endif          //__PASSWORD_H__