import random

def get_choices():
    player_choise=input("Enter a choice (rock,paper,scissors):")
    options =["rock","paper","scissors"]
    computer_choise=random.choice(options)
    choices = {"player":player_choise,"computer":computer_choise} 
    return choices

def check_win(player,computer):
    print(f"You chose {player} and computer chose {computer}")
    if player==computer:
        return "Its a tie !"
    elif player=="rock":
        if computer=="scissors":
            return "Rock smashes scissors ! you win!"
        else:
            return "Paper covers rocks ! you lose."
    elif player=="paper":
        if computer=="scissors":
            return "Scissors cut paper ! you lose!"
        else:
            return "Paper covers rocks ! you win."
    elif player=="scissors":
        if computer=="paper":
            return "Scissors cuts paper ! you win!"
        else:
            return "Rock smashes scissors ! you lose."
        
choices = get_choices()
result = check_win(choices["player"],choices["computer"])
print(result)

