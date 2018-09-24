#ifndef PM2PROBLEM4A_PROBLEM4A_H
#define PM2PROBLEM4A_PROBLEM4A_H
#include <iostream>
using namespace std;

void ProblemFourA(string & str)
{
    int n = str.length();

    for (int i=0; i<n/2; i++)
        swap(str[i], str[n-i-1]);
}

#endif //PM2PROBLEM4A_PROBLEM4A_H
