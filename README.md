
![So_long Logo](so_longm.png)

**Overview**  
The **so_long** project is a small 2D game development assignment in the 42 School curriculum. It serves as an introduction to basic graphics programming, event handling, and game loop logic in C. You’ll use the **MiniLibX** graphics library (a simple library provided by 42) to open a window, display images (sprites), handle user keyboard input, and render a playable map.

---

## Key Objectives

1. **Map Parsing**  
   - You must load a map (usually a `.ber` file) that describes the game’s layout using specific characters (e.g., walls, empty spaces, player position, collectibles, exit).
   - The map must be rectangular, surrounded by walls, and contain:
     - **1 Player** (`P`)
     - **1 Exit** (`E`)
     - **At least 1 Collectible** (commonly denoted as `C`)

2. **Game Mechanics**  
   - The player moves in four directions (up, down, left, right) across a grid-based map.
   - Each movement counts as a “move” and must be displayed/printed (often in the terminal).
   - The player needs to collect all collectibles (`C`) before exiting through `E`.
   - The game should close once the player steps on the exit tile, provided all collectibles are gathered.

3. **Graphics & Rendering**  
   - Use **MiniLibX** to create a window and render the map as a simple 2D grid with different textures or sprites for walls, floor, collectible items, etc.
   - Each grid cell is represented by a sprite (e.g., 32×32 pixels).
   - Handle basic animations or static images as desired (depending on project requirements or bonus objectives).

4. **Event Handling**  
   - Use keyboard inputs (e.g., W, A, S, D or arrow keys) to move the player character.
   - The window should close gracefully (e.g., pressing ESC or clicking the close button).

5. **Error Handling**  
   - Detect invalid maps (non-rectangular, missing required characters, walls not properly enclosing the map, etc.).
   - Display meaningful error messages and exit.

6. **Code Quality**  
   - Follow the **42 Norm** (the school’s coding standard) throughout the entire project.
   - Properly manage memory to avoid leaks (e.g., always free allocated resources before exiting).

---

## Typical Flow

1. **Read & Validate the Map**  
   - Open the map file, check its shape, count special characters (P, E, C).
   - Ensure the walls form a closed boundary around the playable area.
   - Ensure you can actually reach the exit and all collectibles (often checked via flood-fill or BFS/DFS).

2. **Initialize Game**  
   - Initialize MiniLibX, create a window, load/assign textures or sprites for each character on the map.
   - Store the map layout in a 2D array or similar structure.

3. **Game Loop**  
   - Wait for user input (key press events).
   - Update the player’s position if the move is valid (not running into walls).
   - Update the number of collectibles if the player steps on a collectible tile.
   - Check for win condition (if all collectibles are gathered and the player is on the exit tile).

4. **Render**  
   - On each move or event, redraw the map to reflect the new player position and any changes.

5. **Clean Exit**  
   - When the player has won or if the user requests to close, free allocated memory, destroy the window, and exit gracefully.

---

## Bonus Objectives (Optional Features)

- **Enemy / Patrol**: Add enemies that move around the map and force a game over on collision.
- **Animations**: Animate the player sprite, collectibles, or environment elements.
- **Multiple Levels**: Allow loading different `.ber` files to chain multiple levels.
- **Score / Move Counter**: Display the move count in real-time within the game window instead of just printing in the console.

---

## Skills and Concepts Learned

- **Event-Driven Programming**: Handling keyboard and window events properly.  
- **2D Grid & Pathfinding**: Validating the map, ensuring collectible and exit accessibility.  
- **Graphics with MiniLibX**: Basic rendering of images, window management, and double buffering concepts.  
- **Memory Management**: Allocating and freeing resources in C, especially with images/textures.  
- **Error Handling & Robustness**: Detecting erroneous input files and handling them gracefully.

---

### Final Thoughts

The **so_long** project is a playful way to practice C programming fundamentals while getting your feet wet in simple game development. By the end of this project, you’ll have a working mini-game, a deeper understanding of event loops and rendering in a windowed environment, and sharper problem-solving skills—key stepping stones for more advanced 42 projects and general programming challenges.
