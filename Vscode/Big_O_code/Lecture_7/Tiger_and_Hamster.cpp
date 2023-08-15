#include<iostream>
#include<string>
using namespace std;
int minimum_swap(int length, string str)
{
    cin >> length;
    cin >> s;
    int hamster = 0;
    int count = 0;
    int answer = 100000000;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == "H")
        {
             hamster += 1;
        }
    }
    int length_str = length * 2;
    for (int i = 0; i < length ; i++)
    {
        count = 0;
        for (int j = i; j < i + hamster - 1; j++)
        {
            if (str[j] == "T")
            {
                 count += 1;
            }

        }
        answer = min(answer, count);
    }
    return answer;
}
int main()
{
    int length;
    string str;
    minimum_swap(length, str);
}

