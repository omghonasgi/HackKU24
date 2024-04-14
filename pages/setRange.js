// Function to update the displayed range value
function updateRangeDisplay() {
    var range = document.getElementById("range").value;
    document.getElementById("currentRange").textContent = range;
}

// Function to store the selected range in localStorage
function storeRange() {
    var range = document.getElementById("range").value;
    localStorage.setItem("range", range);
    alert("Range saved successfully");
}

// Call updateRangeDisplay function when the page loads
window.onload = function() {
    var savedRange = localStorage.getItem("range");
    if (savedRange !== null) {
        document.getElementById("range").value = savedRange;
        updateRangeDisplay();
    }
}