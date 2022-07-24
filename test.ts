// calculate days between two dates
function daysBetween(date1, date2) {
    // get total milliseconds between dates
    let difference = date2.getTime() - date1.getTime();
    // convert milliseconds to days
    return Math.floor(difference / (1000 * 60 * 60 * 24));
}

//middleware to check if user is logged in
function isLoggedIn(req, res, next) {
    if (req.isAuthenticated()) {
        return next();
    }
    res.redirect('/login');
}