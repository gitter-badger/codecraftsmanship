//
//  main.cpp
//  interview
//
//  Created by Amit Kumar Singh on 2/15/16.
//  Copyright © 2016 ___AKSINGHDCE___. All rights reserved.
//

#include <iostream>

void remove_space(char* str){
    int i=0, j=0;
    while(str[i] != '\0'){
        if(str[i] != ' '){
            if(j != i){
                str[j] = str[i];
            }
            i++;
            j++;
        }
        while(' ' == str[i] && '\0' != str[i]){
            i++;
        }
    }
    str[j] = '\0';
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char string[] = "welcome to    amazon";
    remove_space(string);
    std::cout<<string<<std::endl;
    return 0;
}
