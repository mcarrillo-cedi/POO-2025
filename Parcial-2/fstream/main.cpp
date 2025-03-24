#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int getLineCount()
{
    ifstream iFile("lorem ipsum.txt");

    int countLine = 0;
    string line;
    while (getline(iFile, line))
    {
        countLine++;
    }

    iFile.close();
    return countLine;
}

int getWordCount()
{
    ifstream iFile("lorem ipsum.txt");

    int countLine = 0;
    string line;
    while (iFile >> line)
    {
        countLine++;
    }

    iFile.close();
    return countLine;
}

void copyFile()
{
    ifstream iFile("lorem ipsum.txt");
    ofstream oFile("copy.txt");

    string line;
    while (getline(iFile, line))
    {
        oFile << line << endl;
    }

    iFile.close();
    oFile.close();
}

void replaceWord(string oldWord, string newWord)
{
    ifstream iFile("lorem ipsum.txt");
    ofstream oFile("replace.txt");

    string word;
    while (iFile >> word)
    {
        if (word == oldWord)
        {
            oFile << newWord << " ";
        }
        else
        {
            oFile << word << " ";
        }
    }

    iFile.close();
    oFile.close();
}

int main()
{

    cout << getLineCount() << endl;
    cout << getWordCount() << endl;
    copyFile();
    replaceWord("lorem", "puppies");

    return 0;
}