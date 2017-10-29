
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
    }
    
    float *mas=new float[a];
    string str2;
    getline(cin,str2);
    istringstream numstream(str2);
    for(int i=0;i<a;i++){
        if(!(numstream>>mas[i])){
            cout<<"An error has occuried while reading input data.";
            break;
        }
    }
    while(place!=a){
        for(int i=place;i<a;i++){
            if(mas[place]>mas[i]){
                swap(mas[place],mas[i]);
                break;
            }
            if(i==a-1){
                place=place+1;
            }
        }
}
    for(int i=0;i<a;i++){
        cout<<mas[i]<<" ";
    }
    return 0;
}
