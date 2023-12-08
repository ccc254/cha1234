#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    string name;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    int num;
    cout << name <<": ";
    cin >> num;
    cout << "Fahsai: I think you may be GEAR "<<num/10000000-12<<". I have a free movie ticket for you.\n";
    string ans;
    string day;
    string answ;
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cin.ignore();
    cout << name <<": ";
    getline(cin,ans); 
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name<<": ";
    getline(cin,day);
    cout << "Fahsai: "<< day << "....that is OK!!! I'm looking forward to watching "<< ans <<" with you.\n";
    cout << name <<": ";
    getline(cin,answ); 
    cout << "Fahsai: 555+ see you "<< day<< ". Bye Bye \\(^ ^)/";

    return 0;
}
