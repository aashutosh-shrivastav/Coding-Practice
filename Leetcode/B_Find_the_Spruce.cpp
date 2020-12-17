#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t,n,m;//1-10 1-500 1-500
    cin>>t;
    vector< vector< vector<int> > > test(t);
    for(int i=0;i<t;i++){
        cin>>n>>m;
        
        for(int j=0;j<n;j++){
            vector<int> row;
            for(int k=0;k<m;k++){
                char ch;
                cin>>ch;
                if(ch =='*')
                {
                    row.push_back(1);
                }
                else
                {
                    row.push_back(0);
                }
                
            }
        }    
    }


}