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

    //string first = gen_random(3);
    //string second = gen_random(4);
    //string third = gen_random(6);
    //string fourth = gen_random(3);
    string data;

    ofstream myfile;
    myfile.open ("setA.txt");

    for (int i=0;i<100;i++)
    {
        data = gen_random(3) + "." + gen_random(4) + "." + gen_random(6) + "@" + gen_random(5) + ".com";
        //emails = three + four + five;
        //cout << emails << endl;
        cout << data << endl;
        myfile << data << endl;
        //myfile << emails << endl;
    }

    myfile.close();

    return 0;
}
