#include <iostream>
#include <ctime>
#include <unistd.h>
#include <fstream>

using namespace std;

string gen_random(const int len) {

    string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i)
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];


    return tmp_s;

}

int main(int argc, char *argv[]) {

    string data;

    ofstream myfile;
    myfile.open ("setA.txt");

    for (int i=0;i<10;i++)
    {
        data = gen_random(10);
        cout << data << endl;
        myfile << data << endl;
    }

    myfile.close();

    return 0;
}
