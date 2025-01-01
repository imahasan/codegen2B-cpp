#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    cout << "The current date and time is: " << asctime(timeinfo);
    system("pause");
    return 0;
}