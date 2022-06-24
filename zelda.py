#Greet
title = 'You are lost in the magic forest.'
print("🪵"*len(title))
print(title)
print("🪵"*len(title))

def replay():
    turn1 = input("Turn left or right? 🥵 ")
    return main

def main():
    turn = input("Turn left or right? ")
    if turn.lower().strip() == 'right':
        print("🪵"*len(turn))
        print ("Oh no! You are still lost.")
        print("🪵"*len(turn))
        replay()
    elif turn.lower().strip() == 'left':
        print("🪵"*len(title))
        print ('You escaped the magic forest! 🪓🏃💨')
        print("🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵   🪵🪵")
        exit

main()