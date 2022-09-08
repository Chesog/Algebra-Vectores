#include <iostream>
#include "raylib.h"
using namespace std;

struct Vectors
{
    Rectangle rect;
    Color rectColor;
};

void main() 
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1280;
    const int screenHeight = 720;
    int rectWidth = 250;
    int rectHeight = 5;
    Color color = GREEN;
    Vectors vectorP1;
    vectorP1.rect.x = screenWidth / 2;
    vectorP1.rect.y = screenHeight / 2;
    vectorP1.rect.width = rectWidth;
    vectorP1.rect.height = rectHeight;
    vectorP1.rectColor = color;

    void drawVector(Vectors vectorP1);
    InitWindow(screenWidth, screenHeight, "Producto Vectorial");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        drawVector(vectorP1);


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
}
void drawVector(Vectors vectorP1)
{
    ClearBackground(BLACK);
    int screenWidth = GetScreenWidth();
    int screenHeight = GetScreenHeight();

    DrawRectangle(vectorP1.rect.x, vectorP1.rect.y,vectorP1.rect.width,vectorP1.rect.height,vectorP1.rectColor);
}