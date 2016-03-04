/********************************************************
**  闲来无事，于是想写一个类似STL里vector功能的类（或者**
**说是模板），经过qq上别人的点播，初步写出了vector的输 **
**入输出等功能，模板和其他功能有待以后实现。	       **
********************************************************/
#ifndef VECTOR_H
#define VECTOR_H

const int LENGTH = 2;               // 数组最大初始化长度

class Vector
{
public:
    Vector();
    Vector(Vector &tmp);
    virtual ~Vector();
    int size();
    void push_back(int num);		// 压入
    void pop_back();			// 弹出
    int top();				// 取出最后一个元素
    int operator [](int index)       // 运算符重载，模拟vector模板里直接可以通过[]来访问元素成员的功能
    {
        return arry[index];
    }

protected:
    int *arry;
    int Size;
    int Length;
private:
};

#endif // VECTOR_H
