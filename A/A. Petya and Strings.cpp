#include <iostream>

using namespace std;

int solve()
{
    string line1,line2;
    cin>>line1>>line2;
    int i = 0 ;

    while(line1[i] != '\0'){
        if(tolower(line1[i]) < tolower(line2[i])){
            return -1;
        }else if(tolower(line1[i]) > tolower(line2[i])) return 1;
        i++;
    }
    return 0;

}

int main(){
    cout <<solve()<<endl;
    return 0 ;
}
