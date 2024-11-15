#include <stdio.h>

#include <raylib.h>

int main () {
    InitWindow (800, 450, "Game");
    while (!WindowShouldClose()) {
        BeginDrawing ();
        ClearBackground (RED);
        EndDrawing ();
    }
    CloseWindow ();
    return 0;
}
