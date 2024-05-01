#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int sum = 0;
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);

        // 一機能ごとにするとしたら分けたほうがいい?
        // もう一つforを作ってsumを出す的な
        // 解答例はそうしてる
        sum += vec.at(i);
    }

    int mean = sum / N;

    for (int i = 0; i < N; i++)
    {
        if (vec.at(i) > mean)
        {
            cout << vec.at(i) - mean << endl;
        }
        else
        {
            cout << mean - vec.at(i) << endl;
        }
    }
}

// 両方とも「平均」と訳されるが、
// 「Average」が日常的な会話や文脈の中で
// よく使われる一般的な用語であるのに対し、
// 「Mean」は数学／統計学／機械学習といった
// 専門的な文脈の中でよく使われる専門的な用語で
// あるという違いがある