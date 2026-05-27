""" 
Rules of the "Rock, Paper, Scissors" game are:

Rock beats Scissors,
Scissors beat Paper,
Paper beats Rock,
Two identical moves are a draw.
Let's play! You will be given valid moves of two Rock, Paper, Scissors players, and have to return which player won: "Player 1 won!" for player 1, and "Player 2 won!" for player 2. In case of a draw return Draw!. """

# First try
""" def rps(p1, p2):
    if (p1 == p2):
        return "Draw!"
    else:
        if (p1 == "scissors"):
            if (p2 == "paper"):
                return "Player 1 won!"
            else:
                return "Player 2 won!"
        elif (p1 == "rock"):
            if (p2 == "scissors"):
                return "Player 1 won!"
            else:
                return "Player 2 won!"
        elif (p1 == "paper"):
            if (p1 == "rock"):
                return "Player 1 won!"
            else:
                return "Player 2 won!" """

# Second try
def rps(p1, p2):
    if (p1 == p2):
        return "Draw!"
    
    rules = {
        'scissors': 'paper',
        'paper': 'rock',
        'rock': 'scissors'
    }
    
    if (rules[p1] == p2):
        return "Player 1 won!"
    else:
        return "Player 2 won!"