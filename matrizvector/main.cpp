#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector< vector<int> > m(10, vector<int>(15,3));

    for(int i=0; i<m.size(); i++){
        for(int j=0; j<m[i].size(); j++){
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
