# Name Pending
A grid-based online real-time strategy game.

## Game Design
The game should be able to be both long-term and short term, so ideally the host could set a base unit of time.

### The Grid
The game will take place on a (procedurally generated??) grid with each square having a set of features, such as being part of a river, a mountain range, plains or forests, and having roads or other structures.
Players will be able to create units from structures they build. Units and Structures claim an area around them automatically.
Claimed squares will generate a resource of some variety every unit of time.

### Tile Types
|Tile Name|Resource Produced|Traversability|
|---------|-----|---|
|Grassland|Wheat|100% Grounded Only|
|Forest|Wood|80% Grounded Only|
|River|Fish|10% Grounded, 100% Coastal|
|River|Fish|80% for Coastal, 100% Naval|
|Desert|None|100%|

### Structures
|Structure Name|Intended Function|
|---------|------------------------------|
|Barracks|Consume Resources to produce units|
### Units
|Unit Name|Intended Function|
|---------|------------------------------|

### User Interface
Initially, the user interface will be command-line-interface only. Eventually a graphical interface will hopefullly be made.

#### CLI
The 

## Versions
Two versions will be made:
- A client, which the users will run
- A server, which will actually simulate everything.