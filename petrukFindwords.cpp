#include <iostream>
#include <cstring>

using namespace std;
const int cols = 16, rows = 15;

 char words[rows][cols] = {"tgbwwinterwsesn",
                                "aaunttmmhfoodnb",
                                "jlwcqldzmpmvdmr",
                                "asagmquwvvbsohi",
                                "bwplotanadtpgnc",
                                "rewngodjcpnatnk",
                                "eeotwosbqharrsa",
                                "azcgeswewnaknpb",
                                "dinnerqodlwdcar",
                                "onopkwmparktzcc",
                                "qbfrogmamwpweey",
                                "lqzqnnmrzjjsclg",
                                "mosgzczetdbooto",
                                "pdcrzmsngrdnrpz",
                                "ohnkzwaterjgtra"};


char *getWordVertical(int x){
    char word [16];
    for (int i = 0;i<rows;i++){

        word[i]=words [i][x];


    }
    return word;


}
bool searchVertical(char *vertical){
    bool found;
    char *store ;
    for (int i = 0 ;i<rows;i++){
        store = *(words+i);
        if(strstr(store,vertical)){
            return true;
           }
        else {
            found = false ;
        }
    }
    return found;
}





char *reverse(char *horizontalWords){
    strrev(horizontalWords);
    return strrev(horizontalWords);
}


bool searchHorizontal(char *horizontal){
    bool found;
    char *store ;
    for (int i = 0 ;i<rows;i++){
        store = *(words+i);
        if(strstr(store,horizontal)){
            return true;
           }
        else {
            found = false ;
        }
    }
    return found;
}


int main()
{
    char word[16];
    int n;
    cin >> n;
    cin.ignore(n,'\n');
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchHorizontal(word)|| reverse(word))
            cout << "Ada\n";
        else
            cout << "Tidak Ada\n";
    }
    return 0;
}
