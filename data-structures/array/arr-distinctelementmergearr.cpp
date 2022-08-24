#include <bits/stdc++.h>
using namespace std;
//this program must merge two arrays
//the final array must have non-dupes
vector<int> uniqueMergeTwo(vector<int> &a,vector<int> &b){
    vector<int> ans,ans2;
    //merge(a.begin(),a.end(),b.begin(),b.end(),ans.begin());
    ans.insert(ans.begin(),a.begin(),a.end());
    ans.insert(ans.end(),b.begin(),b.end());

    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        while(i < ans.size()-1 && ans[i] == ans[i+1])
            i++;

        ans2.push_back(ans[i]);
    }
    return ans2;
} 
int main(){
    int n1,n2;
    vector<int> given1,given2;
    vector<int> solution;
    cout << "Size of first vector :: ";
    cin >> n1;
    cout << "Enter the elements of First vector :: ";
    for(int i=0;i<n1;i++){
        int tmp;
        cin >> tmp;
        given1.push_back(tmp);
    }
    cout << "Size of second vector :: ";
    cin >> n2;
    cout << "Enter the elements of second vector :: ";
    for(int i=0;i<n2;i++){
        int tmp;
        cin >> tmp;
        given2.push_back(tmp);
    }
    
    solution = uniqueMergeTwo(given1,given2);
    cout << "The output :: ";
    for(int i=0;i<solution.size();i++)
        cout << solution[i] << " ";

    return 0;
}