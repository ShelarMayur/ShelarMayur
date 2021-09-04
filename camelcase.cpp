/*There is a sequence of words in CamelCase as a string of letters,s,having the following properties:
 1. It is a concatenation of one or more words consisting of English letters.
 2. All letters in the first word are lowercase.
 3. For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.*/
#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin >> s;
    int n=s.length(), ans=0;
    for(int i=0; i<n; ++i) {
        if(s[i]>='A' && s[i]<='Z')  ans++;
    }
    cout<<ans+1;
    return 0;
}