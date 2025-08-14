🎮 Tic-Tac-Toe (C++ Console Game)

  A simple two-player Tic-Tac-Toe game implemented in C++.
  Players take turns placing X or O on a 3×3 board until someone wins or the game ends in a tie.



  📌 Features

  ✅ Two-player mode – Play against another person
  
  ✅ Simple text interface – Runs entirely in the console
  
  ✅ Input validation – No invalid or already-taken slots allowed
  
  ✅ Automatic win/tie detection – Rows, columns, and diagonals checked after every move
  
  ✅ Beginner-friendly – Easy to read, well-structured code for learning purposes



  🛠 How It Works

  1. Player 1 chooses their marker (X or O).
  
  2. Players take turns entering a slot number (1–9).
   
  3. After each move:
     - The board updates.
     - The game checks for a winner or tie.
    
 4.The game ends with:
   - "Player-1 Won!!" or "Player-2 Won!!"
   - "It’s a Tie!" if the board is full.



 🚀 How to Run

 1️⃣ Compile the program
   g++ tic_tac_toe.cpp -o tic_tac_toe
   
 2️⃣ Run the executable
 ./tic_tac_toe      # Linux / Mac
 tic_tac_toe.exe    # Windows
