#include <cstring>
#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    s = s + " ";
    vector<string> spilt;
    int i, j;
    for (i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != ' ')
            break;
    }
    for (j = i; j <= s.size() - 1; j++)
    {
        if (s[j] == ' ')
            break;
    }
    while (i < s.size())
    {
        spilt.push_back(s.substr(i, j-i));
        for (i = j; i < s.size(); i++)
        {
            if (s[i] != ' ')
                break;
        }
        for (j = i; j < s.size(); j++)
        {
            if (s[j] == ' ')
                break;
        }
    }
    vector<string>::iterator v = spilt.begin();
    while (v != spilt.end())
    {
        cout << (*v) << endl;
        v++;
    }
    return 0;
}