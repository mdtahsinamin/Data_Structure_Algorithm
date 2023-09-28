/*
 *	 	 .... In the name of ALLAH .....
 *  	 	 Bismillahir Rahmanir Rahim
 */

/*
 * @author : Me
 * created : 2023-09-28 16:33:03
 * filename: B - Good Kid.cpp
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
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        arr[0]++;
        ll mul = 1;
        for (int i = 0; i < n; i++)
        {
            mul *= arr[i];
        }
        cout << mul << endl;
    }
    return 0;
}