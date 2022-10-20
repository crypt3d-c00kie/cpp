#include<bits/stdc++.h>
using namespace std;
/*
problem statement
You have an array (A) of N integers where ith (0 <= i < N) index value denote the country NO. of the ith person ( 0 <= A[i] <=1e9 ) . You have another array (B) which denotes the skill of the ith person. You have to update the array B, such that B[i] = B[i] - X; where X = floor(Average skill of the country) where the ith person belongs. You have to print the new array.

*Input :*
First-line contains an integer N, the next two lines contain 2 arrays A and B respectively.
*Output:*
Print the updated array B
*Constraints:*
    1 <= N <= 1e5
    0 <= A[i] <=1e9
    0 <= B[i] <=1e9 
*Sample Input:*
7
1 1 5 3 1 3 5
10 20 30 15 17 19 7
*Sample Output:*
-5 5 12 -2 2 2 -11
*Explanation:*
 Average of country 1 = (10 + 20 + 17)/3 = 15
 Average of country 3 = (15 + 19)/2 = 17
 Average of country 5 = (30 + 7)/2 = 18
 Now, new B = [ (10-15),(20-15),(30-18),(15-17),(17-15),(19-17),(7-18) ]
     B = [-5 ,5,12,-2,2,2,-11]

*/
struct data{
    double sum;
    double count;
};
int main(){
    int n;
    vector<int> country;
    vector<int> skill;
    cout << "Number of elements :: ";
    cin >> n;
    cout << "Country array :: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        country.push_back(tmp);
    }
    cout << "Skill array :: ";
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        skill.push_back(tmp);
    }
    map<int,data> m;
    for(int i=0;i<n;i++){
        double current_country = country[i];
        double current_skill = skill[i];
        data d;

        //checking if the country is already accounted for
        if(m.find(current_country) == m.end()){  // if country not found, creating an entry
            d = {current_skill,1};
            m[current_country] = d;
        }
        else{   //if country already exists
            d = m[current_country];
            d.sum += current_skill;
            d.count++;
            m[current_country] = d;
        }
    }

    for(auto x : m){
        x.second.sum = floor(x.second.sum/x.second.count); // finding the average
        m[x.first] = x.second; // reassigning it back to the data;
    }
    
    cout << "Resultant :: ";

    for(int i=0;i<n;i++){
        cout << skill[i] - m[country[i]].sum << " ";
    }
    return 0;
}