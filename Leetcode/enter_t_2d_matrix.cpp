#include<iostream>
#include<vector>

using namespace std;

int main(){

   
    int t=0,n=0,m=0;
    cout<<"enter the no of test cases : ";
    cin>>t;
    
    vector<vector<vector<int>>> test(t);
    for(int i=0;i<t;i++){
        cout<<"\nenter n = ";
        cin>>n;
        cout<<"enter m = ";
        cin>>m;
        vector<vector<int>> vii;
        for(int j=0;j<n;j++){
            vector<int> vi;

            for(int k=0;k<m;k++){
                cout<<"enter element index ("<<j<<","<<k<<") = "<<i+j+k<<endl;
                int temp=i+j+k;
                
                vi.push_back(temp);
            }
            vii.push_back(vi);
        }
        test.push_back(vii);
    }

    for(int i=0;i<test.size();i++){
        
        for(int j=0;j<test[i].size();j++){

            for(int k=0;k<test[i][j].size();k++){
                cout<<test[i][j][k]<<"  ";
                
            }
            cout<<endl;
        }
        cout<<endl;
    }
    


    return 0;
}
