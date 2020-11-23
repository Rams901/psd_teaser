#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


string decrypting(string keys, string a){
    for( int i =0; i< a.length(); i++){
    int key = keys[i % 6] - int('A');
    
    if( int(a[i]) - key > int('A')){
    
    a[i] = char(int(a[i]) - key);
    
                                   }
     else if (int(a[i]) > int('z') || int(a[i]) < int('A')){
       continue;
                                                            }
    else {
        a[i] = char(-(int('A') - (int(a[i]) - key))+ int('z')) ;
         }
                                      }
  return a;
                                        }
int main(){
  string enc_m = "lcj'] [Yp J bYiX ]^`k] _]X hXoa hXO_.";
  string keys = "invicta";
  string dec_m = decrypting(keys, enc_m);
  cout << dec_m;
  
          }