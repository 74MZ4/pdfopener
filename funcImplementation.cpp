#include <iostream>
#include <windows.h>
//#include <fstream>
//#include "shellapi.h"
#include "header.h"

void inputFunc(int x) {

    if(x <= 9 && x > 0){

        char sWord[] = "C:\\Users\\hamza\\Desktop\\numerischeMathematik\\00.pdf";
        char sWordf[] = "C:\\Users\\hamza\\Desktop\\numerischeMathematik\\00f.pdf";
        char sWordz[] = "C:\\Users\\hamza\\Desktop\\numerischeMathematik\\00z.pdf";
        sWord[45] = x + '0';
        sWordf[45] = x + '0';
        sWordz[45] = x + '0';
        ShellExecute(NULL,"open", sWord, NULL,NULL,0);
        ShellExecute(NULL,"open", sWordf, NULL,NULL,0);
        ShellExecute(NULL,"open", sWordz, NULL,NULL,0);
    }

    if(x >= 10){
        
        x = x - 10;
        char sWord[] = "C:\\Users\\hamza\\Desktop\\numerischeMathematik\\10.pdf";
        char sWordf[] = "C:\\Users\\hamza\\Desktop\\numerischeMathematik\\10f.pdf";
        char sWordz[] = "C:\\Users\\hamza\\Desktop\\numerischeMathematik\\10z.pdf";
        sWord[45] = x + '0';
        sWordf[45] = x + '0';
        sWordz[45] = x + '0';
        ShellExecute(NULL,"open", sWord, NULL,NULL,0);
        ShellExecute(NULL,"open", sWordf, NULL,NULL,0);
        ShellExecute(NULL,"open", sWordz, NULL,NULL,0);
    }
    
}
