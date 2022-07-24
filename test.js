function calculateDaysBetweenDates(begin, end) {
    var start = new Date(begin);
    var end = new Date(end);
    var millisecondsPerDay = 1000 * 60 * 60 * 24;
    var millisBetween = end.getTime() - start.getTime();
    var days = millisBetween / millisecondsPerDay;
    return Math.floor(days);   
}

//http request to get the data
function getData(url, callback) {
    var request = new XMLHttpRequest();
    request.open('GET', url);
    request.onload = callback;
    request.send();
}

function main() {
    console.log("Hello World");
}

//regex for email validation
function verifyEmail(email) {
    var re = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
    return re.test(email);
}

function mapRedue(array) {
    var result = [];
    for (var i = 0; i < array.length; i++) {
        result.push(array[i] * 2);
    }
    return result;
}

