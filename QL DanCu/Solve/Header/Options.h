#ifndef __OPTIONS_H
#define __OPTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
#include "People.h"

void Menu(const char* filename, MemberNode** list);
void readData(const char* filename, MemberNode** list);
void writeData(const char* filename, MemberNode** list);

#endif