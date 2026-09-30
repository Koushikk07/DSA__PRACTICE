import random


options = ["snake", "water", "gun"]
computer = random.choice(options)

print("--- Snake Water Gun ---")
user = input("Choose (snake, water, gun): ").lower().strip()

if user not in options:
    print("Invalid choice! Run the game again.")
else:
    print(f"\nYou chose: {user.capitalize()}")
    print(f"Computer chose: {computer.capitalize()}\n")

    if user == computer:
        print("It's a tie! 🤝")
    elif (user == "snake" and computer == "water") or \
         (user == "water" and computer == "gun") or \
         (user == "gun" and computer == "snake"):
        print("You win! 🎉")
    else:
        print("You lose! 🤖")
