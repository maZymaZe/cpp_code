#include <list>
#include "extract.h"
#include "grade.h"
#include <iostream>

using namespace std;

vector<Student_info> extract_fails_1(vector<Student_info> &students)
{

    vector<Student_info> pass, fail;

    for (vector<Student_info>::size_type i = 0;
         i != students.size(); ++i)
    {

        if (fgrade(students[i]))
            fail.push_back(students[i]);
        else
            pass.push_back(students[i]);
    }
    std::cout << "pass    :" << pass.size() << "\n";
    std::cout << "students:" << students.size() << "\n";
    students = pass;
    return fail;
}

vector<Student_info> extract_fails_2(vector<Student_info> &students)
{
    vector<Student_info> fail; 
    for (vector<Student_info>::size_type i = 0; i != students.size();)
    {
        if (fgrade(students[i]))
        {
            fail.push_back(students[i]);
            students.erase(students.begin() + i);
        }
        else
        {
            ++i;
        }
    }
    return fail;
}

vector<Student_info> extract_fails_3(vector<Student_info> &ss)
{
    vector<Student_info> fail;
    //vector<Student_info>::iterator it = ss.begin();
    auto it = ss.begin();
    while (it != ss.end())
    {
        if (fgrade(*it))
        {
            fail.push_back(*it);
            it = ss.erase(it);
        }
        else
        {
            ++it;
        }
    }
    return fail;
}

list<Student_info> extract_fails_4(list<Student_info> &ss)
{
    list<Student_info> fail;
    list<Student_info>::iterator it = ss.begin();
    // auto it = ss.begin();
    while (it != ss.end())
    {
        if (fgrade(*it))
        {
            fail.push_back(*it);
            it = ss.erase(it);
        }
        else
        {
            ++it;
        }
    }
    return fail;
}


// vector<Student_info>   extract_fails_3(vector<Student_info> &students)
// {

//     vector<Student_info> fail;
//     vector<Student_info>::size_type i = 0;

//     while (i != students.size())
//     {
//         if (fgrade(students[i]))
//         {
//             fail.push_back(students[i]);
//             students.erase(students.begin() + i);
//         }
//     }

//     return fail;
// }
