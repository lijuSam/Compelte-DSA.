#include<iostream>
#include <string>
using namespace std;

bool compare(string &str,int start,int end){

    if(start>=end){
        return true;
    }

    if(str[start] != str[end]){
        return false;
    }

    return compare(str,start+1,end-1);
}

int main(){
    int n = 10011;
    string str = to_string(n); // convert integer to string 
    
    cout << compare(str,0,str.length()-1) <<endl;


}