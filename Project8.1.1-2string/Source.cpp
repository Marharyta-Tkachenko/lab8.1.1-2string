// ���� ������� �����, ���� ������ ����������� ������� s[0], ...,s s[n], ...
// 1. ��������, �� � ����� ��� ������� ���� ������ ���� s[q] ��� q[].
// 2. ������� ����� ���� ������ ���� s[q] ��� q[s] ������ ������ �***�

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

string change(string& str)
{
    if (str.length() < 2)
    {
        cout << "Enter more string: " << endl;
        return str;
    }
    while (str.find("SQ") != -1)
        str = str.replace(str.find("SQ"), 2, "***");
    while (str.find("QS") != -1)
        str = str.replace(str.find("QS"), 2, "***");
    return str;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    change(str);
    cout << str << endl;
}