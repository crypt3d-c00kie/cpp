#include <iostream>
#define LEN 1024

// Selection sort algorithms

using namespace std;

int main()
{
    int i,j;
    int nSize;
    int nArr[LEN];

    cout << "Array size? ";
    cin >> nSize;

    cout << "Elements : "; 
    for(i=0;i<nSize;i++)
    {
        cin >> nArr[i];
    }

    //the algorithm

    for(i=0;i<nSize;i++)
    {
        for(j=i+1;j<nSize;j++)
        {
            if (nArr[j] < nArr[i])
            {
                std::swap(nArr[j],nArr[i]);
            }
        }
    }
    cout << "*******" << endl;
    cout << "Selection Sorted Array : ";
    for(i=0;i<nSize;i++) // output
    {
        cout << nArr[i] << " ";

    }
    cout << endl;
    return 0;
}