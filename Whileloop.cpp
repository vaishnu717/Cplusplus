#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << (i - j + 1);
            j = j + 1; // if you want to print in decreasing starting from the row no itself such as 3 2 1
        }
        cout << endl;
        i = i + 1;
    }

    int d;
    cin >> d;

    int id = 1;
    while (id <= d)
    {
        int jd = 1;
        while (jd <= id)
        {
            cout << (jd + id - 1); // if you want to print in increasing order starting from the row no itself such as 3 4 5
            jd = jd + 1;
        }
        cout << endl;
        id = id + 1;
    }

    int n2;
    cin >> n2;

    int row2 = 1;
    while (row2 <= n2)
    {
        int col2 = 1;
        while (col2 <= row2)
        {
            char ch = 'A' + row2 - 1; // when you have to print an charactered series use char variable
            cout << ch;
            col2 = col2 + 1;
        }
        cout << endl;
        row2 = row2 + 1;
    }

    int n21;
    cin >> n21;

    int row21 = 1;
    while (row21 <= n21)
    {
        int col21 = 1;
        while (col21 <= n21)
        {
            char cha = 'A' + row21 - 1; // when you have to print an charactered series use char variable
            cout << cha;
            col21 = col21 + 1;
        }
        cout << endl;
        row21 = row21 + 1;
    }

    int n3;
    cin >> n3;

    int row3 = 1;
    while (row3 <= n3)
    {
        int col3 = 1;
        while (col3 <= n3)
        {
            char chi = 'A' + col3 - 1; // when you have to print an charactered series use char variable
            cout << chi;
            col3 = col3 + 1;
        }
        cout << endl;
        row3 = row3 + 1;
    }

    int n4;
    cin >> n4;
    char chim = 65; // when you have to print an charactered series use char variable
    int row4 = 1;

    while (row4 <= n4)
    {
        int col4 = 1;
        while (col4 <= n4)
        {
            cout << chim;
            col4 = col4 + 1;
            chim = chim + 1;
        }
        cout << endl;
        row4 = row4 + 1;
    }
    int d1;
    cin >> d1;

    int id1 = 1;
    char saw = 'A';

    while (id1 <= d1)
    {
        int jd1 = 1;
        while (jd1 <= id1)
        {
            saw = ('A' + jd1 + id1 - 1); // if you want to print in increasing order starting from the row no itself such as 3 4 5
            cout << saw;
            jd1 = jd1 + 1;
        }
        cout << endl;
        id1 = id1 + 1;
    }

    int d2;
    cin >> d2;

    int id2 = 1;
    char sat = 'A';

    while (id2 <= d2)
    {
        int jd2 = 1;
        while (jd2 <= d2)
        {
            sat = ('A' + jd2 + id2 - 1); // if you want to print in increasing order starting from the row no itself such as 3 4 5
            cout << sat;
            jd2 = jd2 + 1;
        }
        cout << endl;
        id2 = id2 + 1;
    }

    int vai;
    cin >> vai;

    int row5 = 1;
    while (row5 <= vai)
    {
        int col5 = 1;
        char start = 'A' + n - row5;
        while (col5 <= row5)
        {
            cout << start;
            start = start + 1;
            col5 = col5 + 1;
        }
        cout << endl;
        row5 = row5 + 1;
    }
    int n8;
    cin >> n8;

    int row8 = 1;
    while (row8 <= n8)
    {
        // space print karlo
        int space1 = n8 - row8;
        while (space1)
        {
            cout << " ";
            space1 = space1 - 1;
        }

        // star print karlo
        int col8 = 1;
        while (col8 <= row8)
        {
            cout << col8;
            col8 = col8 + 1;
        }
        cout << endl;
        row8 = row8 + 1;
    }
    int n7;
    cin >> n7;

    int row7 = 1;
    while (row7 <= n7)
    {
        // space print karlo
        int space = n7 - row7;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // star print karlo
        int col7 = 1;
        while (col7 <= row7)
        {
            cout << col7;
            col7 = col7 + 1;
        }
        int start9 = row7 - 1;
        while (start9)
        {
            cout << start9;
            start9 = start9 - 1;
        }

        cout << endl;
        row7 = row7 + 1;
    }

    return 0;
}