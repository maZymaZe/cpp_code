#include <iostream>
#include <list>
using std::cin;
using std::cout;
using std::endl;
using std::list;
int main() {
    list<int> li;
    int i;
    while (cin >> i)
        li.push_back(i);
    list<int>::iterator iter;
    for (iter = li.begin(); iter != li.end(); iter++)
        if (*iter == 1)
            iter = li.erase(iter);
    for (iter = li.begin(); iter != li.end(); iter++)
        cout << *iter << " ";
    cout << endl;
    return 0;
}