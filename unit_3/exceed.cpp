#include <iostream>
#define ZERO 0 // makes ZERO symbol for 0 value
#include <climits>

int main()
{
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam; // okay if variable sam already definded

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << "dollars deposited." << endl
         << "Add $1 to each account." << endl << "Now ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and sue  has " << sue;
    cout << " dollars desposited.\nPoor Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << "Take $1 from each accout." << endl << "New";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited " << endl
         << "Lucky sue!" << endl;
    return 0;
}
