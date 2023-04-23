/*扩展蔬菜名字和价格，因为会变动*/

#include <stdio.h>

const char* vegeName[] = {"白菜","萝卜","西红柿"};
int vegePrice[] = {1,2,3};          //用数组代替switch case语句

int main()
{
    char ch = 'q';
    int i;
   
    do
    {
        //利用sizeof动态循环 sizeof(vegeName)/sizeof(const char*)
        //来计算数组元素的个数 整个数组的大小sizeof(vegeName)/每个数组元素的大小sizeof(const char*)
        
        for (i = 0; i < sizeof(vegeName)/sizeof(const char*); i++)
        {
            printf("%d.%s\n",i+1,vegeName[i]);
        }

        printf("q.退出\n");
        printf("请选择");

        ch = getchar();
        getchar();

        //字符转数字 代替switch的条件 利用ASCII码的差   用数组代替switch case语句
        if((ch-49) >= 0 && (ch - 49) < sizeof(vegeName)/sizeof(const char*))
        {
            printf("%s的价格是%d元\n",vegeName[ch-49],vegePrice[ch-49]);
        }

    } while (ch != 'q');

    return 0;
}