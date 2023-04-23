#include <string.h>
#include "password.h"

#define PASSNUM (6)
static char password[PASSNUM];    //static 代表password在password.c文件内可用 password.c私密变量


void setPassword(char *setpass)
{
    if (NULL == setpass || strlen(setpass) != PASSNUM )
    {
        printf("密码设置不合理!\n");
        return;
    }
    //把密码保存到本模块内部的全局静态变量中
    strncpy(password,setpass,PASSNUM);
    printf("密码设置成功\n");
    return;
}

bool checkPassword(char *inpass)
{
    if (NULL == inpass || strlen(inpass) != PASSNUM )
    {
        printf("密码设置不合理!\n");
        return false;
    }

    if (strcmp(password,inpass) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}