var express = require('express');
var router = express.Router();

/* SET weater data. */
router.get('/', function(req, res, next) {
  res.send('Weahter information should be here');
});

router.post('/submit', function(req, res, next) {
    var weatherData = {
        "mac": req.body.mac,
        "temp": req.body.temp,
        "hum": req.body.hum,
    }
    console.log(weatherData);
    res.send('Data submitted for mac: ' + weatherData.mac);
});

module.exports = router;
