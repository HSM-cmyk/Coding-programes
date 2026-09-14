function domReady(fn) {
    if (
        document.readyState === "complete" ||
        document.readyState === "interactive"
    ) {
        setTimeout(fn, 1000);
    } else {
        document.addEventListener("DOMContentLoaded", fn);
    }
}

domReady(function () {

    // When a QR code is successfully scanned
    function onScanSuccess(decodeText, decodeResult) {
        // Find the result container
        const resultContainer = document.getElementById("scan-result");
        
        // Make the container visible and display the text
        resultContainer.style.display = "block";
        resultContainer.innerHTML = `<strong>Scanned QR Code:</strong> <br> <a href="${decodeText}" target="_blank" style="color: #0284c7; word-break: break-all;">${decodeText}</a>`;
        
        // Optional: Stop the scanner once a code is found
        // htmlscanner.clear();
    }

    let htmlscanner = new Html5QrcodeScanner(
        "qr-code-reader",
        // Note: Changed 'qrbos' to the correct spelling 'qrbox'
        { fps: 10, qrbox: 250 } 
    );
    
    htmlscanner.render(onScanSuccess);
});