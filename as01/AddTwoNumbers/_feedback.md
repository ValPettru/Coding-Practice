Valentina, your solution is mostly correct and satisfies the main requirements of AS01: it asks for two numbers, receives them using `cin`, adds them, and clearly displays the sum. The assignment requires input, variables, calculation, and clear output, which your program does properly. 

* Good work keeping the program simple and easy to read.

* Your variables are acceptable for this small task:

  ```cpp
  int num1, num2;
  ```

* The calculation is correct:

  ```cpp
  num1 + num2
  ```

* Your final output is clear and matches the required message:

  ```cpp
  cout << "The sum is: " << (num1 + num2) << endl;
  ```

* The prompt formatting is slightly different from the sample. You used `endl` after each prompt:

  ```cpp
  cout << "Please enter the first number: " << endl;
  ```

  This puts the input on the next line. It still works, but the sample expects the input to be entered on the same line after the prompt:

  ```cpp
  cout << "Please enter the first number: ";
  ```

* The assignment asks to calculate the sum. Although calculating directly inside the `cout` statement works, it would be clearer to store it in a separate variable:

  ```cpp
  int sum = num1 + num2;
  ```

* Your `main` function should explicitly end with:

  ```cpp
  return 0;
  ```

Overall, this is a good first submission. Focus on matching the sample output format more closely and returning `0` from `main` explicitly.

Correct the problems stated up there and let me know to start task 2