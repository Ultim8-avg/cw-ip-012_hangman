#include <libhmg/input_validation.h>

#include <iostream>

using namespace std;

int input_validation(char letter)
{
    //�������� (224-255)
    if (/*letter - 224 >= 0 && letter - 224 < 256*/
        letter == '�' || letter == '�' || letter == '�' || letter == '�'
        || letter == '�' || letter == '�' || letter == '�' || letter == '�'
        || letter == '�' || letter == '�' || letter == '�' || letter == '�'
        || letter == '�' || letter == '�' || letter == '�' || letter == '�'
        || letter == '�' || letter == '�' || letter == '�' || letter == '�'
        || letter == '�' || letter == '�' || letter == '�' || letter == '�'
        || letter == '�' || letter == '�' || letter == '�' || letter == '�'
        || letter == '�' || letter == '�' || letter == '�' || letter == '�'
        || letter == '�') {
        return 0;
    }

    // SetConsoleCP(1251);
    // for (int i = '�'; i < '�'; i++)
    //{
    //	if (letter == i)
    //		return 0;
    //}

    // SetConsoleCP(866);
    return 11;
}