document.getElementById("addDeviceForm").addEventListener("submit", function(event) {
    event.preventDefault();
    var deviceName = document.getElementById("deviceName").value;
    // Store the device name in local storage
    localStorage.setItem("newDevice", deviceName);
    // Redirect to the previous page
    window.history.back();
});