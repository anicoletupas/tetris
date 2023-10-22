#include "Board.h"

Board::Board (Pieces *pPieces, int pScreenHeight) {
    for(int i = 0; i < BOARD_WIDTH; i++)
        for(int j = 0; j < BOARD_HEIGHT; j++)
        {
            mBoard[i][j] = POS_FREE;
        }
}

void Board::StorePiece(int pX, int pY, int pPiece, int pRotation) {
    
}

bool Board::IsGameOver() {
    return false;
}

void Board::DeleteLine(int pY) {

}

void Board::DeletePossibleLines() {

}

bool Board::IsFreeBlock(int pX, int pY) {
    if (mBoard[pX][pY] == POS_FREE)
        return true;
    return false;
}

int Board::GetXPosInPixels(int pPos) {
    return ((BOARD_POSITION - (BLOCK_SIZE * (BOARD_WIDTH / 2))) + (pPos * BLOCK_SIZE));
}

bool Board::IsPossibleMovement(int pX, int pY, int pPiece, int pRotation) {
    return false;
}