// Count elements of an array using hashing.
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;

        cout << num <<" -> " << hash[num] << endl;
    }

    return 0;
}
*/

// Character Hashing
#include<iostream>
using namespace std;

int main(){
    char str[] = "abcdabeji";

    int hash[26] = {0};
    for(int i=0;i<sizeof(str)/sizeof(str[0]);i++){
        int k = int(str[i]) - 97;
        hash[k]++;
    }

    int q;
    cin >> q;
    while(q--){
        char alphabet;
        cin >> alphabet;

        int k = int(alphabet) - 97;
        cout << alphabet << " -> " << hash[k] << endl;
    }

    return 0;
}