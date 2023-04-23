/*
    File Name               :  graph.c
    Model Name              :
    Create Date             :
    Author/Corporation      :
    Abstract Description    :


*/

#include "graph.h"


/*
    Function Name           : setRectAtribute
    Create Date             : 2023/04/21
    Author/Corporation      :cai
    Description             :设置长方形的属性
    Return Code             :

*/
void setRectAtribute(Rect_st* pRect)
{
    if (NULL == pRect)      //NULL写在前面？防止把==误写成=
    {
        return;
    }
}

/*
    Function Name           : setRectAtribute
    Create Date             : 2023/04/21
    Author/Corporation      :cai
    Description             :长方形的周长
    Return Code             :

*/
float getRectGirth(const Rect_st* pRect)
{
    if (pRect == NULL)
    {
        return 0.0f;
    }
    else
    {
        return 2 * (pRect->height + pRect->width);
    }
}

/*
    Function Name           : setRectAtribute
    Create Date             : 2023/04/21
    Author/Corporation      :cai
    Description             :长方形的面积
    Return Code             :

*/
float getRectArea(const Rect_st* pRect)
{
    //判断指针是否为空
    if (pRect == NULL)
    {
        return 0.0f;
    }
    else
    {
        return pRect->height * pRect->width;
    }
}

/*
    Function Name           : setRectAtribute
    Create Date             : 2023/04/21
    Author/Corporation      :cai
    Description             :设置三角形的属性，底和高
    Return Code             :

*/
void setTriangleAtribute(Triangle_st* pTriangle)
{
    if (pTriangle == NULL)
    {
        return;
    }
}

/*
    Function Name           : setRectAtribute
    Create Date             : 2023/04/21
    Author/Corporation      :cai
    Description             :三角形的周长
    Return Code             :

*/
float getTriangleGirth(const Triangle_st* pTriangle)
{
    if (NULL == pTriangle)
    {
        return 0.0f;
    }

    //TODO  这块算法还没有调查，待完成
    return 0.0f;
}

/*
    Function Name           : setRectAtribute
    Create Date             : 2023/04/21
    Author/Corporation      :cai
    Description             :三角形的面积
    Return Code             :

*/
float getTriangleArea(const Triangle_st* pTriangle)
{
    if (pTriangle == NULL)
    {
        return 0.0f;
    }
    else
    {
        return 1/2 * (pTriangle->bottom * pTriangle->height);
    }
}

/*
    Function Name           : setRectAtribute
    Create Date             : 2023/04/21
    Author/Corporation      :cai
    Description             :设置圆的属性 半径
    Return Code             :

*/
void setCircleAtribute(Circle_st* pCircle)
{
    if (pCircle == NULL)
    {
        return;
    }
}
/*
    Function Name           : setRectAtribute
    Create Date             : 2023/04/21
    Author/Corporation      :cai
    Description             :圆的周长
    Return Code             :

*/
float getCircleGirth(const Circle_st* pCircle)
{
    if (pCircle == NULL)
    {
        return 0.0f;
    }
    else
    {
        return 2 * PI * pCircle->ridus;
    }
}

/*
    Function Name           : setRectAtribute
    Create Date             : 2023/04/21
    Author/Corporation      :cai
    Description             :圆的面积
    Return Code             :

*/
float getCircleArea(const Circle_st* pCircle)
{
    if (pCircle == NULL)
    {
        return 0.0f;
    }
    else
    {
        return PI * pow(pCircle->ridus,2);
    }
}