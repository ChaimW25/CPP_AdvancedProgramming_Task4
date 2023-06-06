# Coup - Strategy and Bluffing Board Game
Coup is an exciting board game that combines elements of strategy and bluffing, making it reminiscent of poker. In Coup, players must outmaneuver their opponents to be the last one standing.

## Game Overview
Coup is played using a deck of 15 cards. These cards consist of 5 unique types: Captain, Duke, Ambassador, Assassin, and Contessa. Each unique card has three copies in the deck, resulting in a total of 15 cards.

## The objective of the game is to eliminate your opponents' cards while ensuring at least one of your own cards remains in play. Players use coins, referred to as "influence" in the game, to manipulate and eliminate other players' cards. Some unique cards also possess special abilities that can help players gain or lose coins.

## Gameplay and Bluffing
One of the most intriguing aspects of Coup is the element of deception. Players keep their cards hidden from opponents, allowing them to bluff and pretend to have specific cards with unique abilities. However, opponents can challenge a player's claim, potentially leading to the exposure and elimination of one of their cards.

## Rules Summary
At the beginning of the game, each player is dealt two cards from the deck.
The game progresses with players taking turns in a clockwise order.
On their turn, a player can perform actions such as taking coins, using special abilities of their claimed card, or initiating a coup to eliminate an opponent's card.
Players can also perform actions that involve bluffing, pretending to have a card and using its corresponding ability, even if they don't actually possess that card.
Opponents have the option to challenge a player's claim. If challenged, the accused player must reveal the claimed card. If their claim is false, they lose one of their cards.
The game continues until all players except one have lost both their cards, and the remaining player is declared the winner.
Please note that this is just a brief summary of the rules. For a more detailed understanding of gameplay and specific card abilities, it's recommended to refer to the official rules or instruction manual provided with the game.

## Player Classes
In this project, I have implemented classes for different player functions, each corresponding to a specific card in the game of Coup. These classes provide the necessary functionality and behavior for each player's actions and interactions within the game.

## Class List
Ambassador.hpp and Ambassador.cpp: Represents the Ambassador card functionality.
Assassin.hpp and Assassin.cpp: Represents the Assassin card functionality.
Captain.hpp and Captain.cpp: Represents the Captain card functionality.
Contessa.hpp and Contessa.cpp: Represents the Contessa card functionality.
Duke.hpp and Duke.cpp: Represents the Duke card functionality.
Game.cpp: Contains the game-related functions and logic.
Player.cpp and Player.hpp: Contains the player-related functions and actions.
By implementing these classes, I have organized the codebase and encapsulated the specific behaviors and abilities associated with each card. The classes are split into separate .hpp (header) and .cpp (implementation) files, adhering to good software engineering practices.

The .hpp files serve as the header files and contain the class declarations, while the corresponding .cpp files hold the implementations of the class functions.

This modular structure allows for better code maintainability, readability, and reusability. It also simplifies the inclusion and usage of specific player functionalities within the main game logic.

To enhance the functionality of the game, make sure to implement the necessary methods and functions within each class. These should handle the specific actions and interactions related to the corresponding card or player.

Feel free to explore the individual class files to understand the details of their implementations. Additionally, refer to the documentation within each file for further explanations and usage instructions.

Enjoy working with these player classes and have fun developing your Coup game project!

