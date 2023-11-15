#include <iostream>
#include <string>
using namespace std;


string dvoichka(int ch, string dv)
    {
    char zifra;
    int k = dv.size() -1;
    while (k >= 0 && ch > 0) {
        zifra = ch % 2 + '0';
        dv[k] = zifra;
        k--;
        ch = ch / 2;
    }
    return dv;
}

string zamen(string st)
{
    int k = st.size() -1;
    for (int i = 1; i <= k; i++)
    {
        if (st[i] == '1')
        {
            st[i] = '0';
        }
        else
        {
            st[i] = '1';
        }
    }
    return st;
}

int dop(string st)
{
    int a = 1;
    int b = 0;
    char zifra;
    int k = st.size() -1;
    while (k >= 0) {
        zifra = st[k] - '0';
        b += zifra * a;
        a *= 2;
        k--;
    }
    b++;
    return b;
}

string dop1(int b, string st)
{
    char zifra;
    int k = st.size() -1;
    while (k >= 0 && b > 0) {
        zifra = b % 2 + '0';
        st[k] = zifra;
        k--;
        b = b / 2;
        cout << b << endl;
    }
    cout << b;
    return st;
}



int main()
{
    int ch, ch1, bit, b;
    bool znak = false;
    cin >> ch >> bit;
    if (ch < 0){
    if (ch < 0)
    {
        ch = ch * -1;
        znak = true;
    }
    string st(bit, '0');
    st = dvoichka(ch, st);
    if (znak)
    {
        st[0] = '1';
    }
    cout << dvoichka(ch, st) << endl;
    cout << zamen(st) << endl;
    string dv(bit, '0');
    dv = dvoichka(ch, st);
    st = zamen(st);
    cout << dop(st) << endl;
    b = dop(st);
    cout << dop1(b, dv);
    }
    else
    {
    string st(bit, '0');
    st = dvoichka(ch, st);
    cout << dvoichka(ch, st);
    }
}
