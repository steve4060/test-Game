#include <stdio.h>

#include <raylib.h>

#define BACKGROUND (Color) {0x18, 0x18, 0x18, 0xFF}

int main () {
    InitWindow (800, 450, "Game");
    while (!WindowShouldClose()) {
        BeginDrawing ();
        ClearBackground (BACKGROUND);
        EndDrawing ();
    }
    CloseWindow ();
    return 0;
}
