Valentina, your program is organized nicely into separate files, and it compiles logically as a small modular program. You correctly ask for the mark, determine the grade, and display the pass/fail result. Your header guard and namespace usage are also good steps toward proper C++ project structure.

Points to improve:

* You did **not display the entered mark**, but the assignment specifically asks that the program clearly displays the entered mark, the character grade, and whether it is pass or fail. 
* The assignment asks to store the letter grade in a `char` variable. Your program prints the grade directly instead of storing it in a `char`. 
* `returnGrade()` is not a good function name because the function does not return anything; it prints the grade. A better name would be `printGrade()` or, even better, have the function return a `char`.
* `PassNotPass()` should follow the course naming style: function names should start with lowercase, such as `printResult()` or `isPass()`.
* Your nested `if` structure is much deeper than necessary. Use an `if / else if / else` chain to make the grade logic cleaner and easier to read.
* Marks above `100` are not handled correctly. For example, `120` prints `Grade:` with no grade, then `Result: Pass`.
* `using namespace std;` is fine in `.cpp` files, but avoid it in header files. You did not use it in the header, so that part is good.

Overall, this is a good modular attempt, but it misses the required `char` grade variable and the entered-mark output. The next step is to simplify the grading logic and separate “calculating” the grade from “printing” the grade.


Please apply the above notes and let me know when done. 