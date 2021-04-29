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


char *getWordVertical(int);
char *reverse(char *);
bool searchVertical(char *);

bool searchHorizontal(char *word){
    bool found;
    char *store ;
    for (int i = 0 ;i<rows;i++){
        store = *(words+i);
        if(strstr(store,word)){
            found = true;
           }
        else {
            found = false;
        }
    }
    return found;
}


int main()
{
    char word[16];
    int n;
    cin >> n;
    cin.ignore(n);
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchHorizontal(word) )
            cout << "Ada\n";
        else
            cout << "Tidak Ada\n";
    }
    return 0;
}
