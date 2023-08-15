#include<iostream>
#include<string>
using namespace std;
string DNA[30];
string virus[100];
bool check_string(string a, string b)
{
    for(int i = 0; i < a.length() - b.length() + 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < b.length(); j++)
        {
            if (b[j] == '*')
            {
                continue;
            } 
            else if (b[j] != a[i+j])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            return true;
        }
    }
    return false;
}
void Input(string DNA[],string Virus[], int test_case)
{
    
    cin >> test_case;
    for(int index = 1; index <= test_case; index++)
    {
        
        int Hawai_line, virus;
        cin >> Hawai_line;
        for (int i = 0; i < Hawai_line; i++)
        {
            cin >> DNA[i];
        }
        cin >> virus;
        for(int i = 0; i < virus; i++)
        {
            cin >> Virus[i];
        }
        cout << "Data set #" << index << ":" << endl;
        for (int i = 0; i <  virus; i++)
        {
            cout << "Virus #" << i+1 << ": ";
            bool flag = true;
            for (int j = 0; j < Hawai_line; j++)
            {
                if(check_string(Virus[i], DNA[j]) == true)
                {
                    flag = false;
                    break;
                } 
            }
            if (flag == false)
            {
                 cout << "Nuts. This virus is illegal in Hawaii!\n";
            }
            else 
            {
                cout << "Cool! Victor can take it with him!" << endl;
            }
        }
      cout << endl;
    }   
}
int main()
{
    
    int test_case;
    Input(DNA, virus, test_case);
}