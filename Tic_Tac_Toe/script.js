document.addEventListener('DOMContentLoaded', function() {
    const cells = document.querySelectorAll('.cell');
    const restartButton = document.getElementById('restartButton');
    
    let currentPlayer = 'X';
    let gameActive = true;
    let board = ["", "", "", "", "", "", "", "", ""];
  
    // All possible winning combinations
    const winningCombinations = [
      [0, 1, 2], // Top row
      [3, 4, 5], // Middle row
      [6, 7, 8], // Bottom row
      [0, 3, 6], // Left column
      [1, 4, 7], // Middle column
      [2, 5, 8], // Right column
      [0, 4, 8], // Diagonal from top-left
      [2, 4, 6]  // Diagonal from top-right
    ];
  
    // Handle a cell being clicked
    function handleCellClick(e) {
      const cell = e.target;
      const cellIndex = cell.getAttribute('data-cell-index');
  
      // If the cell is already filled or the game is paused, exit early
      if (board[cellIndex] !== "" || !gameActive) {
        return;
      }
  
      // Update cell and board
      board[cellIndex] = currentPlayer;
      cell.textContent = currentPlayer;
  
      // Check for a win
      if (checkWin()) {
        setTimeout(() => {
          alert("Player " + currentPlayer + " wins!");
        }, 100);
        gameActive = false;
        return;
      }
  
      // Check for a draw
      if (board.every(cell => cell !== "")) {
        setTimeout(() => {
          alert("It's a draw!");
        }, 100);
        gameActive = false;
        return;
      }
  
      // Switch players
      currentPlayer = currentPlayer === 'X' ? 'O' : 'X';
    }
  
    // Check if the current player has won
    function checkWin() {
      return winningCombinations.some(combination => {
        return combination.every(index => {
          return board[index] === currentPlayer;
        });
      });
    }
  
    // Reset the game state
    function restartGame() {
      currentPlayer = 'X';
      gameActive = true;
      board = ["", "", "", "", "", "", "", "", ""];
      cells.forEach(cell => {
        cell.textContent = "";
      });
    }
  
    // Add event listeners to each cell and restart button
    cells.forEach(cell => {
      cell.addEventListener('click', handleCellClick);
    });
    
    restartButton.addEventListener('click', restartGame);
  });
  