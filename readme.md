#Algorithm for Guessing Game Project

```
include necesarry libraries

main():
    make a 20 length char array called userName
    make an integer called guess initialized -999
    make an integer called answer that will be randomly generated
    make an integer called turns that initizalized 0
    make an integer (boolean) called keepGoing start true (-1)

    seed random number generator
    generate random number between 1 and 100 and put in correct
    ask use for their name and put in userName
    greet user with name

    while keepGoing is true:
        +1 to turns
        ask user for a number, but in guess
        if guess < correct:
            print "too low"
        else if guess > correct:
            print "too high"
        else:
            print "correct, you win"
            set keepGoing to false (0)

    evaluate their performance
    if turns < 7:
        print "great job, you performed above average"
    else if turns > 7:
        print "you could do better, you performed below average"
    else:
        print "good job, your performance was average"

```
