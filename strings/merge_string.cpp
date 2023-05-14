/*You are given two strings word1 and word2. 
Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string.*/

#include <iostream>
using namespace std;

int main(){
string word1 = "abcdefgh";
string word2= "pqrstu";
string temp;
    for (int i = 0; i < word1.length() || i < word2.length(); i++) 
    { 
        if (i<word1.length()){
            temp += word1[i];
            }
        if (i<word2.length()){ 
            temp += word2[i];
        }
    } 
    
        // if( word1.length() > word2.length()){
        //     for(int i=0; i<word1.length(); i++){
        //         for(int j=0; j<word2.length(); j++){
        //             if(i==j){
        //                 temp = temp + word1[i];
        //                 temp = temp + word2[j]; 
        //             }
        //         }
        //         if(temp.find(word1[i])){
        //         temp=temp+word1[i+1];
        //         }          
        //     }
        //     temp.pop_back();
        // }
        // else{
        //      for(int i=0; i<word2.length(); i++){
        //             for(int j=0; j<word1.length(); j++){
        //                 if(j==i){
        //                     temp = temp + word1[j];
        //                     temp = temp + word2[i];
        //                 }
        //             }
        //             cout<<"\t"<<word2[i];
        //             cout<<"\n"<<temp;
        //             bool found = temp.find(word2[i]);
        //             if(found != 0){
        //                 temp=temp+word2[i+2];
        //             } 
        //         }
        //         cout<<"\n"<<temp;
        //     }
        cout<<"\n"<<temp;
}