#include <iostream>
#include <string.h>
#include <math.h>

int main(void)
{
    //Variables
    std::string text;
    std::cout << "Text: ";
    std::cin >> text;
    int a = strlen(text);
    //Letters
    int letters = 0;
    //Sentences
    int sentences = 0;
    //Words
    int words = 1;
    for (int i = 0; i < a; i ++)
    {
        //Increment Letters
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            letters ++;
        }
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            letters ++;
        }
        //Increment Words
        if (text[i] == ' ')
        {
            words ++;
        }
        //Increment Sentences
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences ++;
        }
    }
    //Calculate Index
    float l = (letters * 100) / words;
    float s = (sentences * 100) / words;
    float index = (0.0588 * l) - (0.296 * s) - 15.8;
    int cl = round(index);
    //Print Index
    if (cl < 1)
    {
        std::cout << "Before Grade 1\n";
    }
    else if (cl >= 16)
    {
        std::cout << "Grade 16+\n";
    }
    else
    {
        std::cout << "Grade %d\n", cl;
    }
}



