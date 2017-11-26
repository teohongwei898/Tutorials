#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    map<string, int > words
    cout << "Enter some text, press Enter, Ctrl+Z, then Enter to end." << endl;
    istream_iterator<string> stream_begin {cin};
    istream_iterator<string>stream_end;
    while (stream_begin!=stream_end)
        words[*stream_begin++]++;

    cout<<"Here are the word counts for the text you have entered:"<<endl;
    const int wordsPerLine {4};
    int wordCount {};
    cout<<setiosflags(ios::left);
    for (const auto&word : words)
    {
        cout<<setw(15)<<word.first << " " << setw(5) << word.second;
        if (++wordCount % wordsPerLine == 0) cout<< endl;

    }
    cout << endl;
}
    return 0;
}
