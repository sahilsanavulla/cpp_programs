#ifndef FRIEND_FUNCTION_AND_CLASS_H_INCLUDED
#define FRIEND_FUNCTION_AND_CLASS_H_INCLUDED



#endif // FRIEND_FUNCTION_AND_CLASS_H_INCLUDED


class Test_1
{
private:
    char m_cCharacter = 'A';
    int m_nNumber = 10;

public:
    friend class Test_2;
};

class Test_2
{
public:
    void Display(Test_1 obj);
