# AI Reflection

## Tools used

I used ChatGPT to review my two C++ programs against the lab requirements, identify style issues, suggest cleaner variable names, and help me check the required test cases. I still compiled and ran the programs myself rather than treating the AI's answer as proof that the programs worked. In addition i used chatgpt to format the information for the AI reflection and the README file, both for the sake of readability. 

## One decision

One useful suggestion was to change variable names such as `LevelOneMins` and `LevelTwoMins` to lowercase names such as `level\_one\_minutes`. The original calculations worked, but the original names did not follow the course rule requiring meaningful lowercase variable names. I accepted that change and also cleaned up the indentation. I removed extra spaces from the diamond strings so the output would match the required pattern exactly.

## Verification

I compiled both programs with `g++ -std=c++17 -Wall -Wextra`. The compiler produced no warnings. I tested the assigned values of 78 and 144 minutes and got 1 hour 18 minutes, 2 hours 24 minutes, and a 1 hour 6 minute difference. I also temporarily tested 125 and 190 minutes and got 2 hours 5 minutes, 3 hours 10 minutes, and a 1 hour 5 minute difference. I restored the assigned values and ran the program again.

## Learning

I can now explain how integer division and the remainder operator convert minutes into hours and leftover minutes. I still need more practice with C++ formatting and making sure my variable names and indentation follow the course style from the beginning.

