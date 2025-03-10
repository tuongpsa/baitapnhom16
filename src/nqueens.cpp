#include<iostream>
#include<vector>
using namespace std;

int n=1;
vector<int>board;
vector<vector<int>> solution;
vector<int> check;
vector<int>check1;
vector<int>check2;

bool safe(int row,int col) {
    return (check[col]==0 && check1[row-col+n]==0 && check2[row+col-1]==0);
}

void Try(int row) {
    for(int col=1; col<=n; col++) {
        if(safe(row,col)) {
            board[row-1]=col;
            check[col]=1;
            check1[row-col+n]=1;
            check2[row+col-1]=1;
            if(row==n) {
                solution.push_back(board);
            }
            else {
                Try(row+1);
            }
            check[col]=0;
            check1[row-col+n]=0;
            check2[row+col-1]=0;
        }
    }
}

int main() {
    cout << "Enter number of queens: ";
    cin >> n;
    if(n<0){
        cout<<"invalid!";
        return 0;
    }
    board.resize(n);
    check.resize(n+1,0);
    check1.resize(2*n,0);
    check2.resize(2*n,0);
    Try(1);
    if(solution.size() > 0) {
        cout << "Number of solutions is " << solution.size() << endl;
        for(int i=0; i<solution.size(); i++) {
            cout << "Solution " << i+1 << " : " << endl;
            for(int row=0; row<n; row++) {
                for(int col=1; col<=n; col++) {
                    if(solution[i][row] == col) cout << "Q ";
                    else cout << ". ";
                }
                cout << endl;
            }
            cout << endl;
        }
    } else {
        cout << "No solution!" << endl;
    }
}

