#include <iostream>

using namespace std;

int main()
{
    int i=20;
    while (i<=10) {
        cout << i << endl;
        i+=2;
    }

    i=20;
    do {
        cout << i << endl;
        i+=2;
    } while (i<=10);

    int x;
    do {
        cout <<"diz um numero: ";
        cin >> x;
    } while (x != 0);





    return 0;
}
