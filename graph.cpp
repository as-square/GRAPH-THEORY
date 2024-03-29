#include <bits/stdc++.h>

using namespace std;

const int N =1e5+5;

vector<int> G[N];


int main(){
    
    /* taking input nodes and edges*/
    int n,m;
    cin>>n>>m;
    
    /* storing the nodes and edge relation in an array*/
    for (int i = 0; i <m; i++)
    {
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    
    /* printing the graph*/

    for (int i = 1; i <=n ; i++)
    {
        cout<<i<<"------->";
        for(auto elm : G[i])
        {
            cout<<elm<<",";
        }
        cout<<"\n";
    }

   
    return 0;
}
