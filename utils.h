#ifndef UTILS_H
#define UTILS_H

/*
 * This is the header that organizes the Linux Guess the Number 
 * Project (lgn). 
 */

#include <ctype.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#define FILENAME "game.dat"
#define BASE     10

struct game_ 
{
    int number;
    int guess;
    int nguesses;
};
typedef struct game_ game;

// prototype(s)
#undef atoi
#define atoi ATOI
int ATOI(char*);

void help(void);
void version(void);
void create_game(game*);
void exit_game(game*);
void load_game(game*);
void play_game(game*);
void save_game(game*);

#endif // UTILS_H

