#include <iostream>
#include <string.h>
#include <string>
#include <cassert>
using namespace std;

int* calculateCounters(string str)
{
    int* result = new int[2];
    int counterE = 0;
    int counterRafterE = 0;


    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'e')
        {
            counterE++;
            if (i + 1 < str.length())
            {
                if (str[i + 1] == 'r')
                {
                    counterRafterE++;
                }
            }
        }
    }

    result[0] = counterE;
    result[1] = counterRafterE;

    return result;
}

/*
void Units()
{
    int* arr = new int[2];
    arr[0] = 3, arr[1];
    int* arr2 = calculateCounters("endangered");
    string wd = "endangered";
    assert(arr2 == arr);
    arr[0] = 5, arr[1] = 1;
    assert(calculateCounters("eeeeer") == arr);
    arr[0] = 0, arr[1] = 0;
    assert(calculateCounters("abcd") == arr);
}
*/
int main()
{
    string str;
    cout << "[INPUT] Word: ";
    getline(cin, str);

    int* result = calculateCounters(str);
    cout << "[RESULT] " << str << " - " << result[0] << " and " << result[1] << endl;

    // Unit-TESTS
    //Units();
}