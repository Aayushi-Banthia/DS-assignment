//a
#include<iostream>
#include <string>
using namespace std;

int main(){
    string s1 ="hello. ";
    string s2 ="how are oyu.";
    string s=s1+s2;
    cout<<s<< endl;
}


//b
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="ADIT";
    int n = sizeof(s)/sizeof(s[0]);
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
    cout<< s<< endl;
}


//c
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="adit";
    int n=sizeof(s)/sizeof(s[0]);
    for(int i=0;i<n;i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
        cout<<s[i]<<" ";
    }
}


//d
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int n = str.length();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "Sorted string: " << str << endl;

    return 0;
}
