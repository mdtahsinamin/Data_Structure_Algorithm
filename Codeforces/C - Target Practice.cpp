/*
 *	 	 .... In the name of ALLAH .....
 *  	 	 Bismillahir Rahmanir Rahim
 */

/*
 * @author : Me
 * created : 2023-09-28 16:33:01
 * filename: C - Target Practice.cpp
 */

#include <bits/stdc++.h>
using namespace std;
/// type define part
typedef long long ll;
typedef double dl;
/// define Part
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()
#define mem(a, b) memset(a, b, sizeof(a))
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define MOD 1000000007
#define fraction(a) \
    cout << fixed;  \
    cout << setprecision(a);
#define debug(x)         \
    cout << #x << " = "; \
    _print(x);           \
    cout << endl;
/// value
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
template <class T>
void _print(T x) { cout << x; }
template <class T>
void _print(vector<T> x)
{
    cout << "[ ";
    for (T i : x)
        cout << i << " ";
    cout << "]";
}
template <class T>
void _print(set<T> x)
{
    cout << "[ ";
    for (T i : x)
        cout << i << " ";
    cout << "]";
}
template <class T, class V>
void _print(pair<T, V> x) { cout << "{" << x.first << "," << x.second << "} "; }
template <class T, class V>
void _print(map<T, V> x)
{
    cout << "[ ";
    for (auto i : x)
        _print(i);
    cout << "]";
}
template <class T>
void _print(multiset<T> x)
{
    cout << "[ ";
    for (T i : x)
        cout << i << " ";
    cout << "]";
}

int main()
{
    fast();
    int t;
    cin >> t;

    while (t--)
    {
        char str[11][11];

        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                cin >> str[i][j];
            }
        }
        int cnt = 0;

        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                if (str[i][j] == 'X')
                {
                    if ((i <= 10 && j == 1) || (i == 1 && j <= 10) || (j == 10 && i <= 10) || (i == 10 && j <= 10))
                    {
                        cnt++;
                    }
                    else if ((i == 2 && (j > 1 && (j <= 9))) || (j == 2 && (i > 1 && (i <= 9))) || (j == 9 && (i > 1 && (i <= 9))) || (i == 9 && (j > 1 && (j <= 9))))
                    {
                        cnt += 2;
                    }
                    else if ((i == 3 && (j > 2 && (j <= 8))) || (j == 3 && (i > 2 && (i <= 8))) || (j == 8 && (i > 2 && (i <= 8))) || (i == 8 && (j > 2 && (j <= 8))))
                    {
                        cnt += 3;
                    }
                    else if ((i == 4 && (j > 3 && (j <= 7))) || (j == 4 && (i > 3 && (i <= 7))) || (j == 7 && (i > 3 && (i <= 7))) || (i == 7 && (j > 3 && (j <= 7))))
                    {
                        cnt += 4;
                    }
                    else if ((i == 5 && (j > 4 && (j <= 6))) || (j == 5 && (i > 4 && (i <= 6))) || (j == 6 && (i > 4 && (i <= 6))) || (i == 6 && (j > 4 && (j <= 6))))
                    {
                        cnt += 5;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}