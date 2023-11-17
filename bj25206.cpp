#include<iostream>

using namespace std;

int main() {
    string str1,str2;
    float a;
    float b = 0;
    float c = 0;

    for (int i = 0; i < 20; i++) {
        cin >> str1 >> a >> str2;
        if (str2 != "P") {
            c += a;
        }
        if (str2 == "A+") {
            b += a * 4.5;
        }
        else if (str2 == "A0") {
            b += a * 4.0;
        }
        else if (str2 == "B+") {
            b += a * 3.5;
        }
        else if (str2 == "B0") {
            b += a * 3.0;
        }
        else if (str2 == "C+") {
            b += a * 2.5;
        }
        else if (str2 == "C0") {
            b += a * 2.0;
        }
        else if (str2 == "D+") {
            b += a * 1.5;
        }
        else if (str2 == "D0") {
            b += a * 1.0;
        }
        else if (str2 == "F") {
            b += a * 0;
        }
    }
    cout << b / c;

}