#pragma once
struct Tetrino
{
    const u8* data;                         //The matrix represents the shape of TETRINO
    const s32 side;                         // Dimensions of the matrix data
};

inline
Tetrino tetrino(const u8* data, s32 side)
{
    return { data, side };
}

// this is data in Tetrino struct
const u8 TETRINO_1[] = {                    // I Block
    0, 0, 0, 0,
    1, 1, 1, 1,
    0, 0, 0, 0,
    0, 0, 0, 0
};

const u8 TETRINO_2[] = {                    // O Block
    2, 2,
    2, 2
};

const u8 TETRINO_3[] = {                    // T Block
    0, 0, 0,
    3, 3, 3,
    0, 3, 0
};

const u8 TETRINO_4[] = {                    // S Block
    0, 4, 4,
    4, 4, 0,
    0, 0, 0
};

const u8 TETRINO_5[] = {                    // Z Block
    5, 5, 0,
    0, 5, 5,
    0, 0, 0
};

const u8 TETRINO_6[] = {                    // J Block 
    6, 0, 0,
    6, 6, 6,
    0, 0, 0
};

const u8 TETRINO_7[] = {                    // L Block
    0, 0, 7,
    7, 7, 7,
    0, 0, 0
};
//End of TETRINO list or you can call that is data list in Tetrino struct


const Tetrino TETRINOS[] = {
    tetrino(TETRINO_1, 4),
    tetrino(TETRINO_2, 2),
    tetrino(TETRINO_3, 3),
    tetrino(TETRINO_4, 3),
    tetrino(TETRINO_5, 3),
    tetrino(TETRINO_6, 3),
    tetrino(TETRINO_7, 3),
};