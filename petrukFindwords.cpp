Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore

@irfanshow
irfanshow
/
Petruk-Find-Words
1
00
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
Petruk-Find-Words/petruk-FindWord.cpp
@irfanshow
irfanshow get word vertical revisi
…
Latest commit 02de6ac 5 minutes ago
 History
 1 contributor
87 lines (73 sloc)  1.93 KB

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

char *reverse(char *a){
	static char show[16];
    for (int i=0;i<15;i++){
    show[i]=a[14-i];
 }
	return show;

}
char *getWordVertical(int a){
	static char VertHere [16];
	for (int i=0;i<15;i++){
	VertHere[i]=words[i][a];
	}
	return VertHere;
}

bool searchVertical(char *vertical){
     bool found;
     char *store ;
     for (int i = 0 ;i<rows;i++){
         store = (getWordVertical(i));
         if(strstr(store,vertical)||strstr(reverse (store),vertical)){
             return true;

}


 bool searchHorizontal(char *horizontal){
     bool found;
     char *store ;
     for (int i = 0 ;i<rows;i++){
         store = *(words+i);
         if(strstr(store,horizontal)||strstr(reverse(store),horizontal)){
             return true;
           }
         else {
             found = false ;
         }
     }
     return found;
 }
int main(){
char word[16];
     int n;
     cin >> n;
     cin.ignore(n,'\n');
     for (int i=0;i<n;i++){
         cin.getline(word,16,'\n');
         if (searchHorizontal(word)|| searchVertical(word))
             cout << "Ada\n";
         else
             cout << "Tidak Ada\n";
     }
     return 0;

