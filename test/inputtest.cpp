#include <libhmg/name_input.h>
#include <libhmg/input_validation.h>
#include <libhmg/victory_check.h>

#include <ctest.h>
#include <string>
#include <vector>

using namespace std;

CTEST(name_inputf, right_input)
{
    int testExp = 0;
    int testResult = name_input("������");
    ASSERT_EQUAL(testExp, testResult);
}

CTEST(name_inputf, wrong_input)
{
    int testExp = 1;
    int testResult = name_input("������1234567");
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(input_validationf, right_input)
{
    int testExp = 0;
    int testResult = input_validation('�');
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(input_validationf, wrong_input)
{
    int testExp = 11;
    int testResult = input_validation('g');
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(victory_checkf, right_input)
{
    vector<char> found = {'�', '�', '�', '�','�','�'};
    string answer = "������";
    int testExp = 0;
    int testResult = victory_check(answer, found);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(victory_checkf, wrong_input)
{
    vector<char> found = {'�', '�', '�', '�'};
    string answer = "������";
    int testExp = 1;
    int testResult = victory_check(answer,found);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(victory_checkf, right_input)
{
    vector<char> found = {'�', '�', '�','�'};
    string answer = "������";
    int testExp = 0;
    int testResult = victory_check(answer, found);
    ASSERT_EQUAL(testExp, testResult);
}
CTEST(victory_checkf, wrong_input)
{
    vector<char> found = {'�', '�', '�'};
    string answer = "������";
    int testExp = 1;
    int testResult = victory_check(answer, found);
    ASSERT_EQUAL(testExp, testResult);
}
