#include<iostream>
using namespace std;

int main() {
    int N,Scode,max = 0;
    int track[1000] = {0};

    cout<<"Enter N: ";
    cin>>N;

    for(int i=0; i<N;i++) {
        cout<<"Enter song code: ";
        cin>>Scode;
        track[Scode]++;
        
        if(track[Scode] > max) {
            max = track[Scode];
        }
    }
    int maxcount = 0;
    for(int i = 0; i < 1000; i++) {
        if(track[i] == max) {
            maxcount++;
        }
    }

    cout <<"Number of favourite singers: " << maxcount;

    return 0;
}
