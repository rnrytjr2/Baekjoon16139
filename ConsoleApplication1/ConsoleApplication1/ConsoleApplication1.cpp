// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;
string S;
int q;
struct alphabet
{
    int value[27];
};
alphabet values[200002];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> S;
    cin >> q;

    for (int i = 1; i < S.length()+2; i++)
    {
        values[i] = values[i - 1];
        values[i].value[S[i-1]-'a']++;
    }

    for (int i = 0; i < q; i++)
    {
        char questionchar;
        int li, ri;
        cin >> questionchar >> li >> ri;
        cout << values[ri+1].value[questionchar - 'a'] - values[li].value[questionchar - 'a']<<'\n';
    }
}

