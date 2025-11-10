using namespace std;
#include <iostream>
#include <unistd.h>
int main()
{
    fork();
    cout << "hello wordl\n";
    int pValue = getpid();
    if (pValue > 0)
        cout << "yes it is greater than 0";
    cout << pValue;
    return 0;
}