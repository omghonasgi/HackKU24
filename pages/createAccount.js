// Function to handle form submission
document.getElementById('createAccountForm').addEventListener('submit', function(event) {
    event.preventDefault(); // Prevent default form submission

    // Get username and password values
    var username = document.getElementById('username').value;
    var password = document.getElementById('password').value;

    // Check if username already exists in localStorage
    if (localStorage.getItem(username)) {
        alert('Username already exists! Please choose another one.');
        return;
    }

    // Save username and password in localStorage
    localStorage.setItem(username, password);

    // Redirect to login page
    window.location.href = 'index.html';
});
