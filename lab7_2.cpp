#include <iostream>
#include <string>
using namespace std ;
int main() {
    string f = "Fahsai: " ;
    string name ;
    int id ;
    cout << f <<"Sawadee ka...Can you tell me your name?\n"  ;
    cout << "?????: " ;
    getline(cin,name);
    cout << f << "Wow!!! " << name <<" is a really cool name.\n" ;
    cout << f <<"I think you are an Engineering student. What is your student ID?\n" ;
    cout << name <<": " ;
    cin >> id ;
    cin.ignore();
    int y = id/10000000 -12 ;
    cout <<f <<"I think you may be GEAR " << y <<". I have a free movie ticket for you.\n";
    cout << f << "Let's go to the cinema together!!!\n" ;
    cout << f << "What movie do you want to watch?\n" ;
    string movie ;
    cout << name << ": ";
    getline(cin,movie);
    cout << f << "So....which day are you free to go with me?\n" ;
    cout << name << ": " ;
    string date;
    getline(cin,date);
    cout << f << date << "....that is OK!!! I'm looking forward to watching "<<movie <<" with you.\n";
    cout << name << ": " ;
    getline(cin,movie) ;
    cout << f <<"555+ see you "<< date << ". Bye Bye \\(^ ^)/" ;
    
}
