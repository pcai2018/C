#include "graph.h"
#include "password.h"

int main(int argc, char* argv[])
{
    //写graph模块的测试程序
   
    Rect_st rect = {10.0f,20.0f};
    float recGirth = 0.0f;
    char pass[6] = {0};

    printf("请输入密码：\n");
    scanf("%s",pass);
    setPassword(pass);

    while (1)
    {
        printf("请输入验证密码：\n");
        scanf("%s",pass);

        if (checkPassword(pass))
        {
            recGirth = getRectGirth(&rect);

            printf("长方形的周长是%.2f,长是%.2f,宽是%.2f",recGirth,rect.height,rect.width);
        }
        else
        {
            printf("密码输入错误");
        }

        
    }
    

   

    return 0;
}