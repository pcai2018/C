#include <stdio.h>

/*统计字符串中数字的个数*/
int strNumberCount(char ch); 

/*统计字符串中小写字母的个数*/
int strSmallCount(char ch);

/*统计字符串中大写字母的个数*/
int strUpperCount(char ch);

/*统计字符串中其他字母的个数*/
int strOtherCount(char ch);

int main()
{
    char ch;
    unsigned int strNumberCount = 0;    //数字的个数
    unsigned int strSmallCount = 0;     //小写字母的个数
    unsigned int strUpperCount = 0;     //大写字母的个数
    unsigned int strOtherCount = 0;     //其他字符的个数

    while ((ch = getchar()) != '\n')
    {
        if (ch >= '0' && ch <= '9')
        {
            strNumberCount++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            strSmallCount++;
        }
        else if (ch >= 'A' && ch<= 'Z')
        {
            strUpperCount++;
        }
        else
        {
            strOtherCount++;
        }
        
    }

    printf("字符串中数字的个数%d 小写字母的个数：%d 大写字母的个数%d 其他字母的个数%d",strNumberCount,strSmallCount,strUpperCount,strOtherCount);

    return 0;
}

