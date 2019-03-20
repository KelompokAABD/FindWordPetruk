/* 1857051014 Muhammad Nur Ashiddiqi
   1817051005 Arfina Shella Meilany
   1817051021 Arafia Isnayu Akaf
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
int word(){
    int jumlah;
    cout<<" Berapa kata yang ingin di cari = ";
    cin>>jumlah;
    int len[jumlah];
    int diag;
    int hasil[jumlah];
    int found[jumlah];
    char kata[jumlah][15];
    cin.ignore();
    for(int p=0;p<jumlah;p++){
        cin.getline(kata[p],15);
        len[p]=strlen(kata[p]);
    }
   for(int i=0;i<jumlah;i++){
        hasil[i]=0;
        int len1=len[i],x=0;
        bool ada[len1], jadi;

        for(int a=0;a<15;a++){
            for(int l=0;l<=(15-len1);l++){
                for (int w=l;w<=l+(len1-1);w++){
                    if(*(*(A+a)+w)==kata[i][x])
                        ada[x]=1;
                    else
                        ada[x]=0;
                    x++;
                }
                for(int j=0;j<len1;j++){
                    if(ada[j]==1){
                        jadi=1;
                        hasil[i]+=jadi;
                    }
                    else jadi=0;
                    if(hasil[i]==len1){
                        found[i]=1;
                    }
                }
                hasil[i]=0;
                x=0;
            }
        }
        for(int b=0;b<15;b++){
            for(int l=0;l<=(15-len1);l++){
                for(int w=l;w<=l+(len1-1);w++){
                    if(*(*(A+w)+b)==kata[i][x])
                        ada[x]=1;
                    else
                        ada[x]=0;
                    x++;
                }
                for(int j=0;j<len1;j++){
                    if(ada[j]==1){
                        jadi=1;
                        hasil[i]+=jadi;
                    }
                    else jadi=0;
                    if(hasil[i]==len1){
                        found[i]=1;
                    }
                }
                hasil[i]=0;
                x=0;
            }
        }
        for(int c=0;c<15;c++){
            for(int m=0;m<=(15-len1);m++){
                diag=-1;
                for(int n=m;n<m+(len1-1);n++){
                    ++diag;
                    if(*(*(A+n)+c+diag)==kata[i][x])
                        ada[x]=1;
                    else
                        ada[x]=0;
                    x++;
                }
                for(int j=0;j<len1;j++){
                    if(ada[j]==1){
                        jadi=1;
                        hasil[i]+=jadi;
                    }
                    else jadi=0;
                    if(hasil[i]==len1){
                        found[i]=1;
                    }
                }
                hasil[i]=0;
                x=0;
            }
        }
