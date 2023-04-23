/*
题目：https://leetcode-cn.com/problems/remove-element/

两种解法
第一种：暴力破解

第二种：快慢指针

*/

#include <stdio.h>

int removeElement(int* nums, int numSize, int val);

int main(){


};

int removeElement(int *nums,int numSize, int val)
{
    for (int i = 0; i < numSize; i++)
    {
        if (nums[i] == val)
        {
            for (int j = i + 1; j < numSize; j++)
            {
                nums[j - 1] = nums[j];
            }
        }

        i--;
        numSize--;
    }

    return numSize;
}