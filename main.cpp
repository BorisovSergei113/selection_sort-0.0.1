#include <iostream>
#include <sstream>
using namespace std;

int main() {
     unsigned int a;
     unsigned int place=0;


    string str;
    getline(cin,str);
    istringstream stream(str);
    if(!(stream>>a)){
        cout<<"An error has occuried while reading input data."<<endl;
        exit(0);
    }

    float *mas=new float[a];
    string str2;
    getline(cin,str2);
    istringstream numstream(str2);
    for(int i=0;i<a;i++){
        if(!(numstream>>mas[i])){
            cout<<"An error has occuried while reading input data.";
            exit(0);
        }
    }
    for(int j=0;j<a-1;j++){
        place=j;
        for (int i = place;i<a;i++) {
            if(mas[place]>mas[i]){
                place=i;
            }
            swap(mas[place],mas[j]);
        }
    }

    for(int i=0;i<a;i++){
        cout<<mas[i]<<" ";
    }
    return 0;
}