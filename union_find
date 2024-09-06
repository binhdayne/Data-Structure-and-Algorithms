#include <bits/stdc++.h>
using namespace std;
 
 
class UnionFind {  
public:  
    int parent[1000]; 
    int rank[1000];  

    UnionFind(int n) {  
        for (int i=0;i<n;i++){
            rank[i]=1;
            parent[i]=i;
        }
    }  //make-set khởi tạo các giá trị cơ bản 

    int find(int u) {  
       if (parent[u]==u){
        return u;
       }
       return (parent[u]=find(parent[u]));
    }  //find tìm các root của đối tượng

   void unionSet(int u, int v) {  
        int rootU = find(u);  
        int rootV = find(v);  
        if (rootU != rootV) {  
            if (rank[rootU] < rank[rootV]) {  
                parent[rootU] = rootV;  
            } else if (rank[rootU] > rank[rootV]) {  
                parent[rootV] = rootU;  
            } else {  
                parent[rootV] = rootU; 
            } 
            rank[rootU]++;  
        }  
    }  //union kết nối các đối tượng với nhau
};  

int main() {  
//Test
    UnionFind uf(10);  

    uf.unionSet(1, 2);  
    uf.unionSet(1, 3);  
    uf.unionSet(2, 4);  
    uf.unionSet(5, 6);  
    uf.unionSet(8, 9);  

    for (int i = 0; i < 10; i++) {  
        cout << "Phan tu " << i << " thuoc ve nhom: " << uf.find(i) << endl;  
        cout << "so phan tu cua "<<i<<" la "<<uf.rank[i]<<endl;
    }  
    return 0; 
}
