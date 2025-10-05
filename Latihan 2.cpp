#include<iostream>
using namespace std;

int main(){
    int R, C; cin >> R >> C;
    int m[10][10];
    for (int r=0;r<R;r++) for(int c=0;c<C;c++) cin>>m[r][c];
    for (int r=0;r<R;r++) {
    int s=0;
    for(int c=0;c<C;c++) s=s+m[r][c];
    cout<<s<<"\n";
}
return 0;
}
