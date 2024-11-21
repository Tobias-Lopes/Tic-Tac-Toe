#include <stdio.h>

#define SIZE 3

void printBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
        }
    }
}

int checkWinner(char board[SIZE][SIZE]) {
    // Verifica linhas e colunas
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] != '.' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0]; // Retorna X ou O
        if (board[0][i] != '.' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i]; // Retorna X ou O
    }

    // Verifica diagonais
    if (board[0][0] != '.' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0]; // Retorna X ou O
    if (board[0][2] != '.' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2]; // Retorna X ou O

    return '.'; // Nenhum vencedor
}

int isValidMove(char board[SIZE][SIZE], int x, int y) {
    return (x >= 0 && x < SIZE && y >= 0 && y < SIZE && board[x][y] == '.');
}

void testMove(char board[SIZE][SIZE], int x, int y, char symbol) {
    if (!isValidMove(board, x, y)) {
        printf("Jogada inválida!\n");
        return;
    }

    // Faz a jogada
    board[x][y] = symbol;

    // Verifica se a jogada resulta em vitória
    if (checkWinner(board) == symbol) {
        printf("Boa jogada, vai vencer!\n");
    } else {
        printf("Continua o jogo.\n");
    }

    // Desfaz a jogada
    board[x][y] = '.';
}

int main() {
    char board[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf(" %c", &board[i][j]); // Lê cada símbolo
        }
    }
    printBoard(board);

    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int x, y;
        char symbol;
        scanf("%d %d %c", &x, &y, &symbol);

        // Ajusta para índices de 0 a 2
        testMove(board, x - 1, y - 1, symbol);
    }

    return 0;
}
