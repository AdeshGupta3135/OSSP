# name: Magical Arena

# Description:

 A turn-based battle game implemented in Node.js where two players fight until one loses all their health points.

version: 1.0.0

author: ADESH KUMAR GUPTA


# Features:
  - Players have attributes such as health, strength, and attack.
  - Players take turns attacking and defending using dice rolls.
  - Damage is calculated based on:
      - Attack damage = attack * attack dice roll
      - Defense damage = strength * defense dice roll
  - Remaining damage reduces the defender's health.
  - The game ends when a player's health reaches 0.

# Requirements:
  - Node.js (v16 or later)
  - NPM (Node Package Manager)

# Project_structure:
``
  - Arena.js: Arena logic for handling player actions
  - Player.js: Player class implementation
  - index.js: Main game logic
  - test:
    - Arena.test.js: Unit tests for Arena logic
    - Player.test.js: Unit tests for Player class
  - package.json: Node.js project configuration file
  - .gitignore: Git ignore file
  - README.md: Project documentation
``
# how_to_build_and_run:
  setup:
    - Navigate to the project directory in your terminal.
    - Install dependencies with the command: `npm install`
  run_game:
    - Start the game using the command: `node index.js`

# how_to_play:
  - Two players are created with their initial attributes (health, strength, attack).
  - Players alternate between attacking and defending:
      - The attacker rolls a 6-sided die to calculate their attack.
      - The defender rolls a 6-sided die to calculate their defense.
  - The outcome of the dice rolls is used to calculate damage and update health.
  - The game continues until one player's health reaches 0.

# unit_tests:
 ## framework: Jest
  test_coverage:
    - Validates player health reduction.
    - Ensures damage calculation accuracy.
    - Confirms game-ending conditions.
  run_tests:
    - Execute the tests with the command: `npm test`
.
