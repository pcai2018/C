#include <stdio.h>

int main(int argc,char* argv[])
{
    char ch = 'q';

    do
    {
        printf("菜单如下 请选择\n");
        printf("1、白菜\n");
        printf("2、萝卜\n");
        printf("q 退出\n");
        printf("请选择");

        ch = getchar();     // \n stdin缓存里会有一个换行
        getchar();          //从缓存中将\n 取出 清空输入缓存区
        /*switch case语句 每个case要包含一个大括号，必须有default*/
        switch(ch)
        {
            case '1':
            {
                printf("白菜的价格是1元");
            }
            break;

            case '2':
            {
                printf("萝卜的价格是2元");
            }
            break;

            case 'q':
            break;

            default:
            {
                printf("输入不合理，请重新输入");
                continue;
            }
        }

    } while (ch != 'q');
    
}