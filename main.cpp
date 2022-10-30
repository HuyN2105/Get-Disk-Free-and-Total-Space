#include <Windows.h>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;
#define ll long long

string freeSpace, totalSpace;

float toGB(ll n){
    float s = n/1024;
    s/=1024;
    s/=1024;
    return s;
}

ll getFreeSpace(){
    ll s = 0;
    ll t = freeSpace.find(":");
    while(isdigit(freeSpace[t])==false) t++;
    while(freeSpace[t] != ' '){
        if(freeSpace[t] == ','){}
        else if(s==0) s = freeSpace[t]-'0';
        else s = s*10 + (freeSpace[t]-'0');
        t++;
    }
    return s;
}

ll getTotalSpace(){
    ll s = 0;
    ll t = totalSpace.find(":");
    while(isdigit(totalSpace[t])==false) t++;
    while(totalSpace[t] != ' '){
        if(totalSpace[t] == ','){}
        else if(s==0) s = totalSpace[t]-'0';
        else s = s*10 + (totalSpace[t]-'0');
        t++;
    }
    return s;
}
int main(){
    cout << fixed;
    cout << setprecision(1);
    // get D
    system("fsutil volume diskfree D: > diskDStatus.txt");
    freopen("diskDStatus.txt", "r", stdin);
    freopen("ComputerStatus.txt", "w", stdout);
    getline(cin, freeSpace);
    getline(cin, totalSpace);
    ll DFreeSpace = getFreeSpace();
    ll DTotalSpace = getTotalSpace();
    cout << "D: " << DFreeSpace << " (" << toGB(DFreeSpace) << "GB) " << " " << DTotalSpace<< " (" << toGB(DTotalSpace) << "GB) " << endl;
    // get C
    system("fsutil volume diskfree C: > diskCStatus.txt");
    freopen("diskCStatus.txt", "r", stdin);
    freeSpace = ""; totalSpace = "";
    getline(cin, freeSpace);
    getline(cin, totalSpace);
    ll CFreeSpace = getFreeSpace();
    ll CTotalSpace = getTotalSpace();
    cout << "C: " << CFreeSpace << " (" << toGB(CFreeSpace) << "GB) " << " " << CTotalSpace << " (" << toGB(CTotalSpace) << "GB) " << endl;
    return 0;
}
