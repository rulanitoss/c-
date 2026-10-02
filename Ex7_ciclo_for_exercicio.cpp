#include <iostream>

using namespace std;

int main () {

    int na,nb,nc;
    string la,lb,lc;


    na = 1000;
    nb = 100;
    nc = 10;

    la = "a";
    lb = "b";
    lc = "c";

    for (int i=1; i <= (na/2); i++) {
        cout << la;
    }

    for (int i=1; i <= (nb/2); i++) {
        cout << lb;
    }

    for (int i=1; i <= (nc/2); i++) {
        cout << lc;
    }

    for (int i=1; i <= (nc/2); i++) {
        cout << lc;
    }

    for (int i=1; i <= (nb/2); i++) {
        cout << lb;
    }

    for (int i=1; i <= (na/2); i++) {
        cout << la;
    }




return 0;
}


