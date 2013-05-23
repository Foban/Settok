#include<iostream>

using namespace std;

char *StrTok(char* str, char* stis){
    static char *work = 0;
    static int i,n,l;
    if(str){
        work = str;
        i = 0;
        n = 0;
        l = 0;
        for(; str[l] != '\0';++l);
    }
    char *Tokker = 0;
    bool fl = true;
    if(work && l-i){
    for(; i < l && fl ; ++i)
        for(int p = 0; stis[p] != '\0' && fl; ++p){
            if(work[i]==stis[p]) fl = false;
        }

    Tokker = new char[i-n];
    int p=0;
    for(; n < i-1; ++n,++p)
        Tokker[p] = work[n];
    if(i==l) Tokker[p] = work[l-1];
    ++n;
    }
    return Tokker;
}

int main(){

    char *l="pri.vet He.ll.o t.ri top";
    cout << l << '\n';
    cout << StrTok(l," .");
    while(l){
        l = StrTok(0," .");
        cout << l;
    }
}
