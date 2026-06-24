#include<iostream>
#include<sys/types.h>
#include<windows.h>
#include<unistd.h>

using namespace std;

void main() {
    if (fork() || fork()) {
        fork();
        cout<<"Hello ";
    }
}
