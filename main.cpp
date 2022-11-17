#include <iostream>
using namespace std;
int main() {
float a;
float b;
int opzione;
cin >> a;
cin >> b;
cin >> opzione;
switch (opzione) {
    case 1: cout << (a*b)/2 << endl;
    break;
    case 2: cout << (a*a) << endl;
    break;
    case 3: cout << (a*b) << endl;
    break;
    default: cout << "operazione non valida" << endl;
}
    return 0;
}
