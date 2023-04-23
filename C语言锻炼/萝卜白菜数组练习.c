#include <stdio.h>

#define VEGECOUNT 3

/*打印蔬菜信息*/
void printVegetableInfo(const char* vegeName[], float *price, int *weight, int count);
/*计算总费用的函数*/
float calTotalPrice(float *vegTotalPrice, int count);

int main()
{
    const char* vegeName[VEGECOUNT] = {"白菜","萝卜","西红柿"};
    float vegePrice[VEGECOUNT] = {1.68,4.50,3.58}; 
    unsigned int vegeWeight[VEGECOUNT] = {2,6,9};

    printVegetableInfo(vegeName,vegePrice,vegeWeight,VEGECOUNT);

    return 0;

}

void printVegetableInfo(const char* name[], float *price, int *weight, int count)
{
    float totalPrice = 0.0;
    float vegePrice[VEGECOUNT] = {0.0};
    
    printf("名字：");
    for (int i = 0; i < count; i++)
    {
        printf("%7s",name[i]);
    }
    printf("\n");

    printf("价格：");
    for (int i = 0; i < count; i++)
    {
        printf("%-5.2f",price[i]);
    }
    printf("\n");

    printf("数量：");
    for (int i = 0; i < count; i++)
    {
        printf("%3d",weight[i]);
    }
    printf("\n");
    
    for (int i = 0; i < count; i++)
    {
        vegePrice[i] = price[i] * weight[i];
    }

    totalPrice = calTotalPrice(vegePrice,VEGECOUNT);
    
    printf("总价：%.2f",totalPrice);
    
    
}

float calTotalPrice(float *vegTotalPrice, int count)
{
    float totalPrice = 0.0;

    for (int i = 0; i < count; i++)
    {
        totalPrice += vegTotalPrice[i];
    }

    return totalPrice;
}