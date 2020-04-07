#include "testing.hpp"

#include "impl_6.21.hpp"

void test_IsEmptySudokuSolvable()
{
    Sudoku empty_sudoku = {};
    TEST_ASSERT(SudokuValidator(empty_sudoku).IsSolvable());
}

void test_IsExampleSudokuSolvable()
{
    Sudoku sudoku = { //
        { 5, 6, 0, 8, 4, 7, 0, 0, 0 }, //
        { 3, 0, 9, 0, 0, 0, 6, 0, 0 }, //
        { 0, 0, 8, 0, 0, 0, 0, 0, 0 }, //
        { 0, 1, 0, 0, 8, 0, 0, 4, 0 }, //
        { 7, 9, 0, 6, 0, 2, 0, 1, 8 }, //
        { 0, 5, 0, 0, 3, 0, 0, 9, 0 }, //
        { 0, 0, 0, 0, 0, 0, 2, 0, 0 }, //
        { 0, 0, 6, 0, 0, 0, 8, 0, 7 }, //
        { 0, 0, 0, 3, 1, 6, 0, 5, 9 }
    }; //
    TEST_ASSERT(SudokuValidator(sudoku).IsSolvable());
}

int main()
{
    test_IsEmptySudokuSolvable();
    test_IsExampleSudokuSolvable();
    return 0;
}