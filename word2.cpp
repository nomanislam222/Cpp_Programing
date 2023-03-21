#include <iostream>
using namespace std;

void find_char(string word, char letter){
    int temp = 0;
    for (int i=0;i<word.length();i++)
    {
        if (word[i] == letter)
        {
           temp = 1;
        }
    }

    if(temp == 1)
        cout<<"Your given word "<< word <<" has " << word.length() <<" characters and contain character " << letter <<endl;
    else
        cout<<"Your given word "<< word <<" has " << word.length() <<" characters but does not contain character " << letter <<endl;
}

int main()

{
    int num;
    char letter;
    string word;

    cout << "How many characters: " << endl;
    cin >> num;
    cout << "Must have character: " << endl;
    cin >> letter;
    cout << "Write your answer: " << endl;
    cin >> word;

    find_char(word,letter);

    return 0;
}
