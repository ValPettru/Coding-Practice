Valentina, this version is much cleaner and better organized. You now display the entered mark, validate the mark before processing it, and your program is properly separated into a header file, implementation file, and `main.cpp`. The function names `printGrade()` and `printResult()` are also clearer than before. 

Points to improve:

* The grade for marks below `50` should be `'F'`, not `'E'`. The assignment clearly requires `F` for marks below 50. 
* `char grade;` is declared correctly, but if a logic path ever failed to assign it, it would be unsafe to print. Your validation prevents invalid marks, so this is okay here, but initializing it to `'F'` would be safer.
* There is an extra semicolon in `grade = 'E';;`.
* The header file is acceptable and the header guard is good, but since this program has only one implementation module, the header was not strictly needed. Function prototypes at the top of `main.cpp` would have been enough for this assignment.
* `using namespace std;` is fine in `.cpp` files at this level, and you correctly avoided putting it in the header.

Overall, this is a strong correction. The main remaining issue is simple but important: change the failing grade from `'E'` to `'F'`.

Fix the problem and then start task 3