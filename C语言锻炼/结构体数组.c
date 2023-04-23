#include <stdio.h>
#include <string.h>

#define STUCOUNT 5
#define COURSECOUNT 4

//课程信息结构体
typedef struct{
    char name[32];      //课程名字
    float score;        //课程分数
}Course_st;

//学生信息结构体
typedef struct {
    char name[32];      //学生名字
    Course_st course[COURSECOUNT]; //学生的课程信息
}Student_st;

/*每个学生的平均成绩,我需要传递一个结构进去*/
float calStudentsAvgScore(const char *stuname, Student_st* pStus, int stuCount);

/*每门课的平均成绩，只需要传递结构中数组*/
float calCourseAvgScore(const char *coursename, Student_st* pStus, int stuCount);

int main()
{
    Student_st stus[STUCOUNT] = {
        {"张三",{{"语文",85.0f},{"数学",89.0f},{"英语",96.0f},{"物理",70.0f}}},
        {"李四",{{"语文",82.0f},{"数学",79.0f},{"英语",95.0f},{"物理",60.5f}}},
        {"王五",{{"语文",83.0f},{"数学",99.0f},{"英语",99.0f},{"物理",30.5f}}},
        {"徐六",{{"语文",84.0f},{"数学",79.0f},{"英语",93.0f},{"物理",64.5f}}},
        {"蔡八",{{"语文",86.0f},{"数学",69.0f},{"英语",92.0f},{"物理",63.5f}}}
    };

   

    printf("李四的平均成绩%.2f\n",calStudentsAvgScore("李四",stus,STUCOUNT));
    printf("语文的平均成绩%.2f\n",calCourseAvgScore("语文",stus,STUCOUNT));

    return 0;

}

/*每个学生的平均成绩,我需要传递一个结构进去*/
float calStudentsAvgScore(const char *stuname,Student_st* pStus, int stuCount)
{
    float sum = 0.0;

    //根据传入的名字，从数组中查找，查找到计算平均成绩
    for (int i = 0; i < stuCount; i++)
    {
        if (strcmp(stuname,pStus[i].name) == 0)     //查找对应的学生
        {
            for (int j = 0; j < COURSECOUNT; j++)
            {
                sum += pStus[i].course[j].score;
                printf("张三总成绩%.2f\n",sum);
            }
        }
    }

    return sum/COURSECOUNT;

}

/*每门课的平均成绩，只需要传递结构中数组*/
float calCourseAvgScore(const char *coursename, Student_st* pStus, int stuCount)
{
    float courseSum = 0.0;

    for (int i = 0; i < stuCount; i++)
    {
        //printf("%s\n",pStus[i].course->name);

        if (strcmp(coursename,pStus[i].course->name) == 0)
        {
            courseSum += pStus[i].course->score;
            //printf("%.2f\n",pStus[i].course->score);
        }
    }

    return courseSum/STUCOUNT;
}