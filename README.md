###Rock-Paper-Scissors Game
This is a simple console-based Rock-Paper-Scissors game implemented in C. The game randomly generates the computer's choice using the rand() function seeded with the current time, making each game session unique.

Features:
Randomized Computer Choice: The computer's choice (rock, paper, or scissors) is randomly generated for each game session, providing a dynamic and unpredictable experience.
User Input: Players can input their choice (rock, paper, or scissors) via the console.
Winning Logic: The game determines the winner based on the classic rules of Rock-Paper-Scissors: rock beats scissors, scissors beats paper, and paper beats rock.
Best of Three Rounds: The game is played in a best-of-three rounds format, where the player who wins two rounds first is declared the overall winner.
Time-based Randomization: The time() function from the standard library is used to seed the random number generator (rand()), ensuring a different sequence of pseudo-random numbers each time the game is played.
How to Run:
Ensure you have a C compiler installed on your system.
Clone this repository to your local machine.
Navigate to the directory containing the source code files.
Compile the main.c file using your C compiler.
Run the compiled executable file in your terminal.
Usage:
Upon running the executable, the game will prompt you to enter your choice (rock, paper, or scissors).
After your choice is entered, the computer will randomly generate its choice.
The game will then determine the winner of the round based on the choices made.
The process will repeat for three rounds, with the winner being declared at the end.
Contributors:
Your Name
License:
This project is licensed under the MIT License.
