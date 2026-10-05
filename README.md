# CIS 165 Lab 3 — C++ Output and Time Calculations

Course section: **\[enter your section]**

## Programs

This repository contains two C++ programs:

* `diamond.cpp` prints the required seven-line diamond pattern.
* `game\\\\\\\_time.cpp` converts the assigned video-game level times from minutes into hours and remaining minutes, then calculates the difference between the two levels.

## Initial plans

### Diamond

I planned to make the diamond by using one `cout` statement for each of the seven lines. I would manually type the spaces before the asterisks so the first line has three spaces and one asterisk, the next has two spaces and three asterisks, and so on until the middle line. Then I would reverse the pattern for the bottom half.

### Video-game time

I planned to store 78 minutes and 144 minutes in separate variables. I would use integer division by 60 to find the hours and the remainder operator to find the leftover minutes. I would then subtract the Level 1 time from the Level 2 time and convert that difference the same way. Each result would be stored in a variable before being displayed.

## How to compile and run

I used OnlineGDB to write, compile, and run both programs.



To run diamond.cpp, open the source file in OnlineGDB, select C++ as the language, and click the Run button. The program does not require any user input.



To run game\_time.cpp, open the source file in OnlineGDB, select C++ as the language, and click the Run button. The program also does not require any user input.



## Testing

I used OnlineGDB to compile and run both programs. The programs ran without compiler errors or warnings. I tested the assigned values of 78 and 144 minutes and got 1 hour 18 minutes, 2 hours 24 minutes, and a 1 hour 6 minute difference. I also temporarily tested 125 and 190 minutes and got 2 hours 5 minutes, 3 hours 10 minutes, and a 1 hour 5 minute difference. I then restored the assigned values of 78 and 144 minutes and ran the program again to confirm the final results.

|Program/test|Values or pattern checked|Expected result before running|Actual output|Match or correction|
|-|-|-|-|-|
|`diamond.cpp`|Seven required lines|Three spaces and 1 star; two spaces and 3 stars; one space and 5 stars; 7 stars; then the reverse pattern|The program printed all seven required lines with the expected spacing and stars|Match|
|`game\_time.cpp` — assigned values|78 and 144 minutes|Level 1: 1 hour, 18 minutes. Level 2: 2 hours, 24 minutes. Difference: 1 hour, 6 minutes.|Level one took 1 hour(s) and 18 minute(s). Level two took 2 hour(s) and 24 minute(s). Level two took 1 hour(s) and 6 minute(s) longer than level one.|Match|
|`game\_time.cpp` — changed values|125 and 190 minutes|Level 1: 2 hours, 5 minutes. Level 2: 3 hours, 10 minutes. Difference: 1 hour, 5 minutes.|Level one took 2 hour(s) and 5 minute(s). Level two took 3 hour(s) and 10 minute(s). Level two took 1 hour(s) and 5 minute(s) longer than level one.|Match|

For the diamond test, I checked the spaces by comparing the output with the required seven-line pattern and by viewing the output with invisible whitespace shown during testing. This made it easier to confirm that there were no extra spaces after the asterisks.

The programs compiled without compiler warnings. After the changed-value test, I restored the assigned values of 78 and 144 in `game\_time.cpp` and completed a final compile and run. The final output matched the assigned-value test.

## Code explanations

### `diamond.cpp`

The program uses seven `cout` statements, one for each line of the diamond. The number of spaces before the asterisks decreases toward the middle while the number of asterisks increases. After the middle line, the pattern reverses. Using separate output statements keeps the program simple and follows the requirement not to use loops or other concepts that have not been covered yet.

### `game\_time.cpp`

The program starts with the two assigned times in minutes. There are 60 minutes in an hour, so integer division by 60 gives the whole number of hours. For example, `78 / 60` gives 1. The remainder operator gives what is left after the full hours are removed, so `78 % 60` gives 18.

The same calculations are performed for Level 2. The program then subtracts 78 from 144 to get a difference of 66 minutes. Integer division gives `66 / 60 = 1` hour, and the remainder gives `66 % 60 = 6` minutes.

### Why store calculations in variables?

The assignment requires calculations to be completed before `cout` so the program separates the work from the display. This makes each result easier to read, check, and explain. It also makes it easier to find a calculation error without having to inspect a formula hidden inside an output statement.

