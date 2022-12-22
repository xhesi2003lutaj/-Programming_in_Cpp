/* CH-230-A
a13_p3.cpp
Xhesilda Lutaj
x.lutaj@jacobs-university.de */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    string file_names,content;
    //write binary and remove old content
    ofstream output("concatn.txt",ios::in|ios::binary|ios::trunc);
    ifstream arr[n];

    for(i=0;i<n;i++){
      cin>>file_names;
      arr[i].open(file_names,ios::out|ios::binary);//reading binary
      if(arr[i].fail()){
        cout<<"Error opening file: "<<i+1<<endl;
      }
     while (getline(arr[i],content))
     {
        output<<content<<endl;
        
      }
    arr[i].close();
    }
    
    output.close();

    return 0;
}

