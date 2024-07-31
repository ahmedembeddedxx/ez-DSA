#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

string convert_word_to_number(string word)
{
    string num = "";
    for (int i = 0; i < word.size(); i++)
    {
        if(word[i] >= 'a' && word[i] <= 'c')
            num+='2';
        if(word[i] >= 'd' && word[i] <= 'f')
            num+='3';
        if(word[i] >= 'g' && word[i] <= 'i')
            num+='4';
        if(word[i] >= 'j' && word[i] <= 'l')
            num+='5';
        if(word[i] >= 'm' && word[i] <= 'o')
            num+='6';
        if(word[i] >= 'p' && word[i] <= 's')
            num+='7';
        if(word[i] >= 't' && word[i] <= 'v')
            num+='8';
        if(word[i] >= 'w' && word[i] <= 'z')
            num+='9';
    }
    
    return num;

    
}

bool find(string str1, string str2)
{
    int i = str1.find(convert_word_to_number(str2));
    return i<str1.size() && i>=0;
}
int main()
{   
    string bag_of_words[] = {"bag", "of", "words", "alp", "babar"};
    int k = 5;
    string phone_number = "2246322227";


    for (int i = 0; i < k; i++)
    {
        if(find(phone_number, bag_of_words[i]))
            cout<<bag_of_words[i]<<' ';
    }
    cout<<endl;

}
