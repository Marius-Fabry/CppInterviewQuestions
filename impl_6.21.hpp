#pragma once

#include <set>
#include <stdint.h>

using Sudoku = uint8_t[9][9];

class SudokuValidator {
public:
    SudokuValidator(const Sudoku& sudoku);

    bool IsSolvable() const;

private:
    bool AreRowsSolvable() const;
    bool AreColumnsSolvable() const;
    bool AreSubarraysSolvable() const;

    bool IsSubarraySolvable(int x_min, int x_max, int y_min, int y_max) const;

    const Sudoku& m_sudoku;
};

SudokuValidator::SudokuValidator(const Sudoku& sudoku)
    : m_sudoku(sudoku)
{
}

bool SudokuValidator::IsSolvable() const
{
    return AreRowsSolvable() && AreColumnsSolvable() && AreSubarraysSolvable();
}

bool SudokuValidator::AreRowsSolvable() const
{
    for (int y = 0; y < 9; ++y) {
        if (!IsSubarraySolvable(0, 9, y, y + 1)) {
            return false;
        }
    }
    return true;
}

bool SudokuValidator::AreColumnsSolvable() const
{
    for (int x = 0; x < 9; ++x) {
        if (!IsSubarraySolvable(x, x + 1, 0, 9)) {
            return false;
        }
    }
    return true;
}

bool SudokuValidator::AreSubarraysSolvable() const
{
    for (int y = 0; y < 3; ++y) {
        for (int x = 0; x < 3; ++x) {
            if (!IsSubarraySolvable(3 * x, 3 * (x + 1), 3 * y, 3 * (y + 1))) {
                return false;
            }
        }
    }
    return true;
}

bool SudokuValidator::IsSubarraySolvable(int x_min, int x_max, int y_min, int y_max) const
{
    std::set<uint8_t> seen_numbers;
    for (int y = y_min; y < y_max; ++y) {
        for (int x = x_min; x < x_max; ++x) {
            const auto& number = m_sudoku[x][y];
            if (number == 0) {
                continue;
            }
            if (seen_numbers.find(number) != seen_numbers.end()) {
                return false;
            }
            seen_numbers.insert(number);
        }
    }
    return true;
}