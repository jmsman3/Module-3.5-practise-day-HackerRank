#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string S;
    cin >> S;

    vector<int> cnt(26, 0); 

    for (int i = 0; i < S.size(); i++)
    {
        cnt[S[i] - 'a']++;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        if (cnt[i - 'a'] > 0)
        {    
            cout << char(i)  << " : " << cnt[i - 'a'] << endl;
        }
    }

    return 0;
}
