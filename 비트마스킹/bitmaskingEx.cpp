#include <bits/stdc++.h>
using namespace std;

const int n = 4;
int main(){
    string a[n] = {"���", "����","����","��"};
    for(int i = 0; i < (1 << n); i++){ // i�� ����Ǽ�
        string ret = "";
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                /*
                0 0 0 0 (0)
                0 0 0 1 (1)
                0 0 1 0 (2)
                0 0 1 1 (3)
                0 1 0 0 (4)
                ...
                �̷��� ������ ����
                */
                ret += (a[j] + " ");
            }
        }
        cout << ret << '\n';
    }
    return 0;
}