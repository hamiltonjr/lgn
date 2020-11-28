#include "utils.h"

void help(void)
{

    printf(
        "Usage: ./lgn [option] [arg]. \n",
        "Options:                     \n",
        " -h: to see this help.       \n",
        " -v: version.                \n",
        " -c: to create a new game.   \n",
        " -x: to exit this game.      \n",
        " -g: to guess a number.      \n"
    );

}

void version(void)
{

    printf(
        "LGN - Linux guess the Number Project. \n",
        "Author: Hamilton G. jr.               \n",
        "Version: 1.0.0 November/2020          \n",
        "Free software under MIT License.      \n"
    );

}

