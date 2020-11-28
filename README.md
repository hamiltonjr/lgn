# LGN
## A Linux Guess the Number Game

It is a guess the number game using Linux command-line interface (CLI). I never saw a version using 
the CLI: the I coded it.

One of the options is -h to see the help. User can type:

    ./lgn -h

To see the software version, use:

    ./lgn -v

As everybody hope, it is possible to use this options together:

    ./lgn -vh

To create a new game, use:

    ./lgn -c

To exit game in any time:

    ./lgn -x

The more interesting is the option -g to input a guess. When a new game is created, a random number 
from 1 to 100 is generated and saved. Tue user can input guesses to know the number choosen. For
example, if user want to guess 37, it is possible typing:

    ./lgn -g 37

It is shown if user is right or wrong (with tips like 'is less' or 'is greater') and a counting of 
guesses.

This software is free under the MIT License. Users can contribute, download and play. I hope that 
users have fun with this different version of Guess the Number.

