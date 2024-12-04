// Check out https://symbl.cc/en/collections/chess-symbols/ for chess symbols

// C program to print the chess board
#include <stdio.h>
#include <locale.h>
#include <wchar.h>

void print_chess_board()
{
    // Unicode characters for the pieces
    // TODO: Maybe use Unicode characters for the pieces?
    const wchar_t *board[8][8] = {
        {L"♖", L"♘", L"♗", L"♕", L"♔", L"♗", L"♘", L"♖"},
        {L"♙", L"♙", L"♙", L"♙", L"♙", L"♙", L"♙", L"♙"},
        {L" ", L" ", L" ", L" ", L" ", L" ", L" ", L" "},
        {L" ", L" ", L" ", L" ", L" ", L" ", L" ", L" "},
        {L" ", L" ", L" ", L" ", L" ", L" ", L" ", L" "},
        {L" ", L" ", L" ", L" ", L" ", L" ", L" ", L" "},
        {L"♟", L"♟", L"♟", L"♟", L"♟", L"♟", L"♟", L"♟"},
        {L"♜", L"♞", L"♝", L"♛", L"♚", L"♝", L"♞", L"♜"}};

    // Print the board
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            wprintf(L"%ls ", board[row][col]);
        }
        wprintf(L"\n");
    }
}

int main()
{
    setlocale(LC_ALL, ""); // Set locale for Unicode support
    print_chess_board();
    return 0;
}
