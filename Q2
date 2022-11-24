// wap to read the contents of a file in reverse order and display in another file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    char ch;
    fin.open("file1.txt");
    fout.open("file2.txt");
    fin.seekg(0, ios::end);
    int pos = fin.tellg();
    while (pos >= 0)
    {
        fin.seekg(pos);
        fin.get(ch);
        fout.put(ch);
        pos--;
    }
    fin.close();
    fout.close();
    return 0;
}

