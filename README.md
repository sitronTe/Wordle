# Wordle CLI

Wordle is a word game, where you are supposed to guess a five-letter word. For every
guess you make, you are given a response telling you which letter were EXACT matches
and which were PARTIAL matches. Partial match here means that the letter exists somewhere
in the word you are trying to guess, but not in the correct spot!

If you spend more than six attempts to guess, then you lose the game!

### Example

If the word you are trying to guess is `sport` and you guess `stuck` then your response
would be `stuck` back, but with the `s` rendered in GREEN (because it's an exact match),
the `t` rendered in YELLOW (partial match). The others can just be your standard terminal
text color, or whatever you prefer!

### Running

```bash
mkdir build
cmake ..
make
cp ../dict.txt .
./wordle
```
