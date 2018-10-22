# Console Solitaire
### Game Details
##### Aim: 
In this game the aim is sorting a card deck of playing cards into four categories as
Spades, Hearts, Diamonds, and Clubs in the increasing order (A,2,3,4,5,6,7,8,9,10,J,Q,K). So,
you have four “Foundation Lists”. You should pile cards to the Foundation Lists in the
increasing order starting from “A”.


##### On the board: 
In the beginning of the game, you see 7 lists. Let’s call these lists as “Board
Lists”. The first list includes one card, the second list includes two cards, the third list
includes three cards, and so on. Each list shows only the identity of the card on the frontmost,
the other cards are downturned. There is also a list on the top which includes rest of the cards.
Let’s call this card list as “Top List”. You can see all the cards in the Top List.


##### Playing the game:
 In order to achieve the goal you have to reveal the downturned cards and
learn the identity of the cards. For this purpose, you can sort cards on the board by the
following rule; all the cards have to be in the decreasing order, all black cards follow red
cards, and all red cards follow black cards. If you can move all upturned cards from a board
list, it will reveal the next downturned card if the list is not empty. You can select cards from
Top List or from Board Lists and move these cards to Board or Foundation Lists according to
rules. If a Board List is empty you can fill it only by the biggest card which is “K”. You can
understand the rules better by practicing the Solitaire game.


##### Symbol of colors:
R = Red
B = Black

##### Symbol of suits:
S = Spades
H = Hearts
D = Diamonds
C = Clubs
##### Symbol of numbers:
A, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K

##### Symbol of upturned or downturned:
Up = Upturned
Down = Downturned

##### Example play:
See `sample_run.pdf`

----
### Implementation Details
##### Compiling
 `g++ main.cpp`
