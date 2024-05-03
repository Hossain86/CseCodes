#include<bits/stdc++.h>
using namespace std;
class proposition{
private:
    int p[4], q[4],r[4];
public:
    void get_data();
    void display_output();
};
void proposition::get_data()
{
    cout << "Enter value of p and q and r of table" << endl;
    for (int i = 0; i < 4; i++){
        cout << "Enter p[" << i << "]: ";
        cin >> p[i];
        cout << "Enter q[" << i << "]: ";
        cin >> q[i];
        cout << "Enter r[" << i << "]: ";
        cin >> r[i];
    }
}
void proposition::display_output()
{
    cout << "Output :" << endl;
    cout << "p" << setw(15) << "q"<<setw(15)<<"r" << setw(20) << "(p v q v r)" << endl;
    for (int i = 0; i < 4; i++){
        cout << endl << p[i] << setw(15) << q[i]<<setw(15)<<r[i];
        if (p[i] == 0 && q[i] == 0 && r[i]==0  ){
            cout << setw(15) << "0" << endl;
        }else cout << setw(15) << "1" << endl;
    }
}
int main()
{
    proposition obj;
    obj.get_data();
    obj.display_output();
}
