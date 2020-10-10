#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a,vector<int> &b)
{
    vector<int> c;
    int i,j;
    int n1,n2;
    int nSize;
    
    n1 = a.size();
    n2 = b.size();

    nSize = n1+n2;

    cout << "\nFirst Array Elements : ";

    for (i=0;i<n1;i++)
    {
        cout << a[i] << " ";
       
    }

    cout << "\nSecond Array elements : ";
    for(i=0;i<n2;i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    i = j = 0;

    // merge sorting the arrays

    while ( (i<n1) && (j<n2))
    {
        if (a[i] > b[j])
        {
            c.push_back(a[i]);
            i++;
        }
        else if (a[i] < b[j])
        {
            c.push_back(b[j]);
            j++;
        }
        else if (a[i] == b[j])
        {
            c.push_back(a[i]);
            c.push_back(b[j]);
            i++;
            j++;
        }
    }
    while (i < n1)
    {
        c.push_back(a[i]);
        i++;  
    }
    while (j < n2)
    {
        c.push_back(b[j]);
        j++;

    }

    // displaying the merged array

    cout << "\nMerge Sorted Array : ";
    for(i=0;i<nSize;i++)
    {
        cout << c[i] << " ";

    }
    cout << endl;
    
}
int main()
{
    int nLen1,nLen2, nData;
    int i;
    vector<int> v1;
    vector<int> v2;
    

    cout << "Length of array 1 and 2 : ";
    cin >> nLen1 >> nLen2;

    cout << "First array : ";
    for(i=0;i<nLen1;i++)
    {
        
        cin >> nData;
        v1.push_back(nData);
    }
    
    cout << "Number of elements in Array1 : " << v1.size() << endl;

    cout << "\nSecond Array : ";

      for(i=0;i<nLen2;i++)
    {
        cin >> nData;
        v2.push_back(nData);
    }
    cout << "Number of elements in Array2 : " << v2.size() << endl;

    merge(v1,v2);

    return 0;

}