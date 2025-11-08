//generate strong password

#include<iostream>
#include <cstdlib>//use for random function
#include<ctime>
#include<cstring>
using namespace std;

string getPassword(int length){
    string Password = " ";
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@&#";
    int charSize = characters.size();
    srand(time(0));
    int randomIndex;
    for(int i=0; i<length; i++){
        randomIndex = rand() % charSize;
        Password = Password + characters[randomIndex];
    }
    return Password;
}

int main(){
    int length;
    cout<<"Enter the length of the Password :";
    cin>>length;
    string password = getPassword(length);
    cout<<"Generated Password :"<<password;

    return 0;
}