#pragma once
#include <string>
using namespace std;
#define MAX 1000

struct Person
{
    string name;
    int age;
    int sex;
    string tele_number;
    string address;
};

struct addressbooks
{
    Person personArray[MAX];
    int m_count;
};
