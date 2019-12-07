// "cin一组词入vector，将这些词转换为大写字母"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string word;
    vector<string> words;

    while (cin >> word) {
        words.push_back(word);
    }

    // 将word更改为大写字母
    for (auto& i : words) {
        for (auto& ii : i) {
            ii = toupper(ii);
            cout << ii;
        }
        cout << endl;
    }

    return 0;
}