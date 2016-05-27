#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#define maxEntryNum 100
int write_to_file(string Abbr, string Expe, string Content);
int read_from_file(string* Abbr, string* Expe, string* Content);

int main(void)
{
  string Abbr[maxEntryNum];
  string Expe[maxEntryNum];
  string Content[maxEntryNum];
  ofstream file_ptr;

  file_ptr.open("MyDictionary.xml");
  file_ptr << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
  file_ptr << "<d:dictionary xmlns=\"http://www.w3.org/1999/xhtml\" xmlns:d=\"http://www.apple.com/DTDs/DictionaryService-1.0.rng\">\n\n";
  file_ptr.close();

  int entryNum = read_from_file(Abbr, Expe, Content);

  for(int i = 0; i < entryNum;i++){
    write_to_file(Abbr[i], Expe[i], Content[i]);
  }

  file_ptr.open ("MyDictionary.xml",ofstream::app);
  file_ptr << "</d:dictionary>";
  file_ptr.close();
  return 0;
}

int write_to_file(string Abbr, string Expe, string Content){
    ofstream myfile;
    myfile.open ("MyDictionary.xml",ofstream::app);

    myfile << "<d:entry id=\""+Abbr+"\" d:title=\""+Abbr+"\">" << endl;;
    myfile << "\t<d:index d:value=\""+Abbr+"\"/>" << endl;
    myfile << "\t<h1>"+Abbr+"</h1>" << endl;
    myfile << "\t<p>\n\t\t"+Expe+"<br/>\n\t</p>" << endl;
    myfile << "\t<h3>Definition</h3>" << endl;
    myfile << "\t<p>\n\t\t"+Content+"<br/>\n\t</p>" << endl;
    myfile << "</d:entry>" << endl << endl;

    myfile.close();
    return 0;
}

int read_from_file(string* Abbr, string* Expe, string* Content){
  string line;
  ifstream myfile ("MyDictionary.txt");
  int index_abb(0), index_expe(0), index_content(0);

  if (myfile.is_open()){
    while ( getline (myfile,line) ){
      if(line[0] == '#' && line[1] == '#'){
        Expe[index_expe++] = &line[3];
      }else if(line[0] == '#'){
        Abbr[index_abb++] = &line[2];
      }else if(line[0] != '\0'){
        Content[index_content++] = line;
      }
    }
    myfile.close();
  }else{
    cout << "Do not find the file MyDictionary.txt" << endl;
    exit(1);
  }

  return index_abb;
}
