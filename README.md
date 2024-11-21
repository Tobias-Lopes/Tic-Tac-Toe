# Tic-Tac-Toe
Game Tic Tac Toe

Tic-tac-toe is an interplanetary feature among elementary school children, given the high level of strategy required to win at the game. A game consists of a 3x3 board, where players alternate playing by placing X and O symbols. The player who gets a sequence of three adjacent symbols on the board first wins. Symbols can be adjacent either in a row, in a column or on the diagonals of the board. The winning player typically earns the title of universal world street champion.
Jeremias Johnson always liked programming and Artificial Intelligence, but he was never the champion of the universe on his street. Soon he had the idea of ​​creating an AI that could always win at Tic Tac Toe. But creating an AI is difficult...so he thought of starting with small steps. His idea is to create a program that, given a partially filled board, and a move, the program can test whether that move will win, will go nowhere or if it was an invalid move.
As he has to make a pasta painting this week, Jeremias asked for your help to make the program. Your program will receive a 3x3 tic-tac-toe board partially filled with the following symbols:

X - symbol of player

O (capital letter o) - player symbol O

. (period) - symbol representing an empty space

An example board is illustrated below:

X..

...

X.X

After reading the board, your program should read an integer value N indicating a number of moves to test. Next, there will be N lines containing two integer values ​​and a symbol, representing moves to test on the board. ATTENTION: your program will not simulate a match, so all moves must be tested with the initial board.

The play line will have the format X Y SIMB, where X and Y are integers between 1 and 3 representing respectively the play line and column, and SIMB is the symbol (X or O) that was played.

For each move tested, your program must print a message informing the result according to the list below:

- Invalid move! - when the move position is not empty.

- Good move, you will win! - when the play results in a winning configuration.

- Continue the game. - when the play does not result in a winning configuration
