// Function to handle form submission
document.getElementById('signInForm').addEventListener('submit', function(event) {
    event.preventDefault(); // Prevent default form submission

    // Get username and password values
    var username = document.getElementById('username').value;
    var password = document.getElementById('password').value;

    // Check if username exists in localStorage
    if (localStorage.getItem(username) === password) {
        // If username and password match, redirect to home page
        window.location.href = 'signedIn.html';
    } else {
        // If username and password don't match, display error message
        document.getElementById('errorMessage').textContent = 'Incorrect username or password.';
    }
});