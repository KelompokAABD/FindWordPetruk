/* 1857051014 Muhammad Nur Ashiddiqi
   1817051005 Arfina Shella Meilany
   1817051029 Arafia Isnayu Akaf
   1817051049 Bobby Malela
*/
// Buat program dengan kosep pointer bahasa C++ untuk menyelesaikan permainan cari kata.
#include <iostream>
#include <cstring>
using namespace std;

    char b1[]={'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'};
    char b2[]={'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'};
    char b3[]={'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'};
    char b4[]={'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'};
    char b5[]={'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'};
    char b6[]={'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'};
    char b7[]={'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'};
    char b8[]={'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'};
    char b9[]={'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'};
    char b10[]={'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'};
    char b11[]={'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'};
    char b12[]={'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'};
    char b13[]={'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'};
    char b14[]={'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'};
    char b15[]={'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'};
    char *A[]={b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15};

//fungsi untuk memanggil puzzle
char FindWord(){
    for(int b=0;b<15;b++){
        for(int k=0;k<15;k++)
            cout<<*(*(A+b)+k)<<"|";
            cout<<endl;
    }
    cout<<endl;
}
