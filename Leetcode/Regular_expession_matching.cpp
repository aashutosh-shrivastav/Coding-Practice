#include<bits/stdc++.h>

using namespace std;

class Solution{
    private:
    string s;
    string p;
    public:
    bool isMatch(string s, string p){
        

    }

    Solution(string s1,string s2) : s(s1),p(s2) {}

};

int main(){
    string s1,s2;
    cout<<"enter s1 = ";cin>>s1;
    cout<<"enter s2 = ";cin>>s2;

    Solution obj(s1,s2);
    if(obj.isMatch(s1,s2)){cout<<"\n string have matched";}
    else{cout<<"\n string dont match";}
    return 0;
}


/*

time compexity  = O(s*p);
space complexity = O(s*p);

// input s1    a    bcdeb
//input  s2 a  *   c*?b

dp  []  a   *   c   *   ?   b
[]  T   F   F   F   F   F   F
a   F   T (F|T) F (F|F) F   F
b   F   F   
c   F
d   F
e   F
b   F


 */