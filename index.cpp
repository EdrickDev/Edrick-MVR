#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool Esbipartito(int nm, vector<vector<int>>& grafo){
    vector<int> color(nm,-1);
    
    for (int i = 0; i < nm; i++)
    {
        if(color[i]==-1){
            queue<int> cola;
            
            cola.push(i);
        }else if(){

        }
        

    }
    
}

int main() {
    int n,m;
    cout << "Ingresa el numero de nodos" << endl;
    cin >> n;
    cout << "Ingresa el numero de aristas" << endl;
    cin >> m;

    vector<vector<int>> grafo(n);

    for(int i=0;i<m;i++){
        int a,b;
        cout << "Ingresa la arista " << i+1 << endl;
        cin >> a >> b;
        //[0][a,b,c,d]
        //[1][a,b,c,d]
        //[2][a,b,c,d]
        //[3][a,b,c,d]
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    if(Esbipartito(m,grafo)==true){
        cout << "El grafo es bipartito" << endl;
    }else{
        cout << "El grafo no es bipartito" << endl;
    }

    return 0;
}
