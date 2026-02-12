#ifndef GUARD_GAME_CORNER_EXPANSION_H
#define GUARD_GAME_CORNER_EXPANSION_H

#define GAME_CORNER_VAR_ID_CHECK        0  // This is just a funny variable used for the Game Corner map itself and can be set to 0
#define GAME_CORNER_VAR_WINNINGS        VAR_TEMP_4   // Must be set to a valid variable for most minigames to function

#define FLAPPY_STORE_HIGH_SCORE         TRUE  // If this variable isn't set to 0, this tracks the high score of the Flappy Bird minigame

#define DERBY_FLAG_NICKNAME             FLAG_DERBY_NICKNAME    // This flag tracks whether nicknames should be reset or not. Must be set to a valid flag
#define DERBY_FLAG_RESET                FLAG_DERBY_RESET    // This flag tracks whether the data for the derby should be reset or not. Must be set to a valid flag

#define FLIP_VAR_LEVEL                  VAR_UNUSED_0x40FE   // If this variable isn't set to 0, it will track the difficult level for any game of Voltorb Flip after the first one

#endif // GUARD_GAME_CORNER_EXPANSION_H
