/*
 *	 	 .... In the name of ALLAH .....
 *  	 	 Bismillahir Rahmanir Rahim
 */

/*
 * @author : Me
 * created : 2024-07-11 20:44:58
 * filename: linkedlilst.cpp
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

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

// print
// using head we print full linked list

// head first node address
// node-> data
// node -> address

// with help of address we access the next node

void print(Node *head)
{
    // access the node

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

// user thake input nia then *head return kora.
Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {

            head = newNode;
        }
        else
        {
            Node *temp = head;

            while (temp->next != NULL) // (n - 1) -> n^2
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }

    return head;
}

Node *takeInputBetter()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {

            head = newNode;
            tail = newNode; // know the last node of linked-list
        }
        else
        {
            tail->next = newNode; // for connected
            tail = tail->next;    // update
        }
        cin >> data;
    }

    return head;
}

/*
 * Step 1: create a new node using data
 * Step 2: we need to figure out the i - 1 node for linked
 * Step 3: then liked together
 * if i gether then linked list length
 * Step 2: check the previous step 2 also add temp !== null
 * Step 3: when update temp/ head not equal null
 *
 * if i == 0
 * newNode.next = head;
 * update the head = newNode
 *
 *
 * at last return it

*/

Node *insertNode(Node *head, int i, int data)
{
    Node *newNode = new Node(data);
    int cnt = 0;
    Node *temp = head;

    if (i == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    while (temp != NULL && cnt < i - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;

        temp->next = newNode;
        newNode->next = a;
    }

    return head;

    /*
      newNode->next = temp->next;
      temp->next = newNode;

    */
}

Node *deleteNode(Node *head, int i)
{
    Node *temp = head;
    if (i == 0)
    {
        Node *a = head;
        head = a->next;
        delete a;
        return head;
    }
    int cnt = 0;
    while (temp != NULL && cnt < i - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp != NULL)
    {
        Node *a = temp->next;
        temp->next = a->next;
        delete a;
    }

    return head;
}

int main()
{
    fast();
    // static
    // Node n1(10);
    // Node *head = &n1;

    // Node n2(20);
    // n1.next = &n2;

    // Node n3(30);
    // n2.next = &n3;

    // Node n4(40);
    // n3.next = &n4;

    // Node n5(50);
    // n4.next = &n5;

    // print(head);
    // print(head);

    Node *head = takeInputBetter();
    cout << "Previous linked list : ";
    print(head);
    cout << endl;
    int i, data;
    cin >> i >> data;

    cout << "Now insert new element in linked list: ";

    head = insertNode(head, i, data);
    print(head);

    cout << endl;

    int j;
    cin >> j;

    head = deleteNode(head, j);

    cout << "Now Deleted element in linked list: ";
    print(head);
    cout << endl;
    // dynamic

    // Node *n3 = new Node(10);

    // Node *n4 = new Node(20);

    // n3->next = n4;

    return 0;
}