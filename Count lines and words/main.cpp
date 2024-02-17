#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    // Count the lines

    ifstream w_file("StudentData.txt");

    if(!w_file.is_open()){
        cout<<"Error!..";
        return 1;
    }

    string line;
    int len_l=0,len_w=0,len=0,i;


    while(!w_file.eof()){
        getline(w_file,line);
        i=0;
        while(line[i]!='\0'){
            len++;
            i++;
        }
        for(i=0;i<len;i++){
            //cout<<line[i]<<endl;
            if(line[i]==' ' || line[i]=='\n'){
                len_w++;
            }
        }
        len_w++;
        len_l++;
    }

    cout<<"Count of lines and words : "<<len_l<<" "<<len_w<<endl;


    return 0;
}
