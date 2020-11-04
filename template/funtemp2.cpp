#include <iostream>
#include <cstring>
#include <string>
using namespace std;

template<typename targ>             // template for mymax that works for three datatypes (float,int,string)
targ mymax(targ a,targ b)
{
    targ max;
    max = (a>b)?a:b;
    return max;
}


int main() // driver code
{
    int nMax;

    string sMax;
    string y1,y2;

    float fMax;
    float x1,x2;
    int x,y;

    cout << "Two integer digits : ";
    cin >> x >> y;

    cout << "Calculating greatest" << endl;
    nMax = mymax<int>(x,y); // usage 1

    cout << "Greatest integer is " << nMax << endl;
    
    cout << "Two float digits : ";
    cin >> x1 >> x2;

    fMax = mymax<float>(x1,x2); // usage 2

    cout << "Greatest float number is " << fMax << endl;

    cout << "Two input strings : ";
    cin >> y1 >> y2;

    sMax = mymax<string>(y1,y2); // usage 3

    cout << "Longest string : " << sMax << endl;

    return 0;

}