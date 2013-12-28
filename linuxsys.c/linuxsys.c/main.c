//
//  main.c
//  linuxsys.c
//
//  Created by Joseph Priest on 12/1/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>



int main(int argc,char *argv[]){
    FILE* file = popen("ntpdate", "r");
    char buffer[100];
    fscanf(file, "%100s", buffer);
    pclose(file);
    printf("buffer is :%s\n", buffer);
    return 0;
}