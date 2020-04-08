#include <iostream>
#include <vector>
#include<string>
#include<iterator>
using namespace std;
int main()
{
    std::cout << "Enter one or more words. Enter ! to end:";
    std::istream_iterator<string> in{std::cin}; // Reads strings from cin
    std::vector<string> words;
    while (true)
    {
        string word = *in;
        if (word == "!")
            break;
        words.push_back(word);
        ++in;
    }
    std::cout << "You entered " << words.size() << "words." << std::endl;
}