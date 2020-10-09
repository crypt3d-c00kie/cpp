#include <iostream>
#include <stack>
#include <cstring>

// String Reversal with stack!

using namespace std;
int main()
{
    stack<char> s;
    int i;
    char arr[1024];

    cout << "Your string : ";
    cin >> arr;

    for(i=0;i<strlen(arr);i++)
    {
        s.push(arr[i]);
        

    }
    cout << "Reversed string : ";
    while(!s.empty())
    {
        cout << s.top();
        s.pop();

    }

    return 0;

}