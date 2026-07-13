# Name Pending
A grid-based online real-time strategy game.

## Game Design
The game should be able to be both long-term and short term, so ideally the host could set a base unit of time.

### The Grid
The game will take place on a (procedurally generated??) grid with each square having a set of features, such as being part of a river, a mountain range, plains or forests, and having roads or other structures.
Players will be able to create units from structures they build. Units and Structures claim an area around them automatically.
Claimed squares will generate a resource of some variety every unit of time.

Each square can have up to one structure and up to 3 units.

#### Tile Types
|Tile Name|Resource Produced|Traversability|
|---------|-----|---|
|Plains|Wheat|100% Grounded Only|
|Forest|Wood|80% Grounded Only|
|River|Fish|10% Grounded, 100% Coastal & Naval|
|Sea|Fish|80% Coastal, 100% Naval|
|Desert|None|100% Grounded|
|Mountain|Stone|50% Grounded|

### Structures
Structures can only be built within a certain range of other structures.

|Structure Name|Intended Function|Cost|
|---------|------------------------------|-----|
|Barracks|Consume Resources to produce Grounded Units|Gold, Wood,Wheat|
|Port|Consume Resources to produce Coastal Units|Gold,Wood,Fish|
|Housing|Produces some gold|Gold,Wood|
|Market|Produces Additional Gold, opens up trade with other players|Gold,Wood,Stone| 
|Road|Doubles movement speed along them|Wood,Stone|
|Bridge|Can only be built over water, normalising the speed of movement.|Wood,Stone,Gold|

### Units
|Unit Name|Intended Function|Cost|
|---------|------------------------------|-----|
|Settler|Moves fairly quickly but has no combat capabilities.<br> Can form a settlement consisting of a few houses|
|Soldier|Moves at a moderate pace and can fight other units|
|Archer|Moves at a moderate pace and can engage other units at a range, but have less health|
|Cavalry|Moves at a rapid pace over Deserts and Plains but will not move across water without a bridge|
|Barge|Moves a unit along a river. No combat capacity|
|Galley|Moves 2 units across water. Can engage in combat on other ships|
|Galleon|Moves 3 units across rivers & seas. Good at naval combat and can attack adjacent units|
|Ship Of The Line|Does not move units. Excels at ship-to-ship combat and can attack grounded units from several squares away|


### User Interface
Initially, the user interface will be command-line-interface only. Eventually a graphical interface will hopefullly be made.

#### CLI

## Versions
Two versions will be made:
- A client, which the users will run
- A server, which will actually simulate everything.