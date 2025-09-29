# ELEC2645 Unit 1.1 Activity 2 - Data Types

C has a few basic data types for storing variables including:
- `int` for storing whole numbers. Can be 2 or 4 bytes of memory. Use `%i` or `%d` in `printf()`
- `float` for storing decimal numbers. 4 bytes. Use `%f` in `printf()`
- `double` for storing decimal numbers with higher precision. 8 bytes. use `%lf` in `printf()`
- `char` for storing _single_ characters e.g. `'x'` `'y'` `'z'`. 1 byte. Use `%c` in `printf()`

Strings are handled a bit differently, we will go in to more detail later in the course. For now all we need to know is that they can be printed directly like `printf("Test")` or using the `%s` format specifier `printf("%s","Test")`.

We can print multiple variables in the same statement like so: 
```c
int i =9;
float j = 1.337;
printf("i is %d and j is %f\n",i,j);
```
gives the following result `i is 9 and j is 1.337`.

We will see a few more data types later in the course.

### 1 Run code
The program `main.c` needs compiling before it can run. In the terminal below you can type `gcc main.c -o main.out` and then `./main.out` to run the new program. The program outputs multiple lines to the console through `printf()` statements.

### 2 The assignment
Run `make test` and check the output. Whilst the the code compiles the tests are currently failing because we're printing the wrong strings and one line is missing. Complete each Step outlined in `main.c`, to print the expected text to fix the tests. 

### 3 Test command
In the terminal run `make test` which will build `main.c` to create `main.out` if not done already, then run the test script `test.sh`. If you have completed the assigment correctly, ELEC2645 Bot `d[o_0]b` should be happy and say `All tests passed :D`. 

### 4 Submit Solution
Once you have solved the task, you must submit the changes so the autograder runs. To do this you must commit changes and then publish them to the repository. 

To do this:
- Switch to `Source Control` tab on the left hand side
- Stage the files you have changed by clicking `+`
- Type a _meaningful_ commit message in the text box then hit `Commit`
- Hit `Sync Changes` to send updates to to the remote repository on github
- The autograder will run in the background, you can check the results on the repository page