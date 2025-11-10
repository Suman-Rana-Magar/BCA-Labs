#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int pid;
    // pid = fork(); // creates a new process

    fork();
    fork();
    fork();
    fork();

    // if (pid == 0)
    // {
    //     cout << "Child process ID: " << getpid() << endl;
    //     cout << "Child's parent process ID: " << getppid() << endl;
    //     //
    // }

    // cout << "getpid() outside if: " << getpid() << end"l;
    cout << "hello world" << endl;
    return 0;
}