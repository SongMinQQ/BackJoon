#include <iostream>
#include <string>

using namespace std;

class Trace{
    static int indexNum;
    static int indexNum2;
    static string working[100][101];
public:
    static void put(string func, string work);
    static void print(string tag = "main()");
};

int Trace::indexNum = 0, Trace::indexNum2 = 1;
string Trace::working[100][101];

void Trace::put(string func, string work){
    if(working[indexNum][0].empty() || working[indexNum][0] == func){
        working[indexNum][0] = func;
        working[indexNum][indexNum2] = work;
        indexNum2++;
    }
    else{
        indexNum++;
        indexNum2 = 1;
        Trace::put(func, work);
    }
}

void Trace::print(string tag){
    int findIndex = 0;
    if(tag != "main()"){
        cout << "-----" << tag << "�� Trace ������ ����մϴ�. -----" << endl;
        for(int i = 0; i < 100; i++){
            if(working[i][0] == tag){
                findIndex = i;
                break;
            }
        }
        for(int i = 1; i < 101; i++){
            if(working[findIndex][i].empty()){
                break;
            }
            cout << working[findIndex][0] << ":" << working[findIndex][i] << endl;
        }
    }
    else{
        cout << "----- ��� Trace ������ ����մϴ�. -----" << endl;
        for(int i = 0; i < 100; i++){
            if(working[i][0].empty()){
                break;
            }
            for(int j = 1; j < 101; j++){
                if(working[i][j].empty()){
                    break;
                }
                cout << working[i][0] << ":" << working[i][j] << endl;
            }
        }
    }
    
}
void f() {
    int a, b, c;
    cout << "�� ���� ������ �Է��ϼ���>>";
    cin >> a >> b;
    Trace::put("f()", "������ �Է� �޾���");
    c = a + b;
    Trace::put("f()", "�� ���");
    cout << "���� " << c << endl;
}
int main(){
    Trace::put("main()", "���α׷� �����մϴ�");
    f();
    Trace::put("main()", "����");

    Trace::print("f()");
    Trace::print();
}