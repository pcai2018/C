/*
    File Name       :     graph.h
    Model Name      :
    Create Date     :
    Author/Corporation:
    Abstract Description:



*/

#ifndef __GRAPH_H__

#define __GRAPH_H__


/*Macro Define Section*/
#define     PI      3.141592


/*Struct Define Section*/

/*长方形*/
typedef struct{
		float width;
		float height;
}Rect_st;

/*三角形*/
typedef struct{
	float bottom;
	float height;
}Triangle_st;

/*圆形*/
typedef struct{
	float ridus;
}Circle_st;

#include <stdio.h>
#include <math.h>

/* Static Prototype Declare Section*/

/* Uncompress Functions*/

/* Global Variable Declare Section*/

/* Display information*/

/* File Static Variable Define Section*/

/* The array of thread No*/

/* Function Definition Section*/
//设置长方形的长、宽
extern void setRectAtribute(Rect_st* pRect);
//长方形周长
extern float getRectGirth(const Rect_st* pRect);
//长方形面积
extern float getRectArea(const Rect_st* pRect);

//设置三角形的底、高
extern void setTriangleAtribute(Triangle_st* pTriangle);
//三角形周长
extern float getTriangleGirth(const Triangle_st* pTriangle);
//三角形面积
extern float getTriangleArea(const Triangle_st* pTriangle);

//设置圆的半径
extern void setCircleAtribute(Circle_st* pCircle);
//圆的周长
extern float getCircleGirth(const Circle_st* pCircle);
//圆的面积
extern float getCircleArea(const Circle_st* pCircle);

#endif