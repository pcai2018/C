#include <stdio.h>
#include <math.h>

int main()
{
    int originalArr[5] = {-3,-2,4,5,6};
    int newArr[5] = {0};
    int i = 0;
    int j = 4;
    int k = 4;

    /*
    首先比较初始元素的平方和末尾元素的平方大小
    其次，将较大的一方放入新数组的末尾位置，并移动i或j的位置。

    循环结束的条件，i <= j
    */
   while (i <= j)
   {
        if (pow(originalArr[i],2) > pow(originalArr[j],2))
        {
            newArr[k] = pow(originalArr[i],2); 
            i++;
            k--;
        }
        else
        {
            newArr[k] = pow(originalArr[j],2);
            j--;
            k--;
        }
   }

   for (int i = 0; i < 5; i++)
   {
        printf("%d ",newArr[i]);
   }
   
   return 0;

}