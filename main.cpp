
#include <iostream>

#include <windows.h>

#include <string>

#include <dos.h>

// Read user input and use it in system() command//

int system(const char *command);

int main()

{

using namespace std;

char x;

char y;

char v;

system("color 1e");

cout << "\t\t!!!!WELCOME TO devBen PDF SCANNER!!!! \n\n\nHERE YOU CAN SCAN YOU HARD DISK FOR AVAILABLE .PDF FILES";

cout << "\n\nDO YOU WANT ME TO SCAN A DISK OR A SPECIFIC FOLDER. \n\nTYPE D for disk OR F for folder.:\n\n";

cin >> y;

if (y = 'd')

{

cout << "\n\nSPECIFY THE DISK YOU WANT TO SCAN AND HIT ENTER.: " << endl;

cin >> v;

string cmdLine = "forfiles.exe /p ";

cmdLine += v;

cmdLine += ":\\ /s /m *.pdf";

system(cmdLine.c_str());

}

else if (y = 'f')

{

cout << "\n\nSPECIFY THE FOLDER YOU WANT TO SCAN AND HIT ENTER.: " << endl;

cin >> x;

string cmdLine = "forfiles.exe /p ";

cmdLine += x;

cmdLine += ":\\ /s /m *.pdf";

system(cmdLine.c_str());

}



return 0;



}


