/********************************************************
**  �������£�������дһ������STL��vector���ܵ��ࣨ����**
**˵��ģ�壩������qq�ϱ��˵ĵ㲥������д����vector���� **
**������ȹ��ܣ�ģ������������д��Ժ�ʵ�֡�	       **
********************************************************/
#ifndef VECTOR_H
#define VECTOR_H

const int LENGTH = 2;               // ��������ʼ������

class Vector
{
public:
    Vector();
    Vector(Vector &tmp);
    virtual ~Vector();
    int size();
    void push_back(int num);		// ѹ��
    void pop_back();			// ����
    int top();				// ȡ�����һ��Ԫ��
    int operator [](int index)       // ��������أ�ģ��vectorģ����ֱ�ӿ���ͨ��[]������Ԫ�س�Ա�Ĺ���
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
