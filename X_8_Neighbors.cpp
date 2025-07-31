#include<iostream>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    char A[N][M];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    int X, Y;
    cin >> X >> Y;
    X--; 
    Y--;
    int dx[] = {-1, -1, -1,  0, 0, 1, 1, 1};
    int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};
    bool all_neighbors_x = true;
    for(int k = 0; k < 8; k++) {
        int ni = X + dx[k];
        int nj = Y + dy[k];
        if(ni >= 0 && ni < N && nj >= 0 && nj < M) {
            if(A[ni][nj] != 'x') {
                all_neighbors_x = false;
                break;
            }
        }
    }
    if(all_neighbors_x)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
