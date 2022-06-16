var express = require('express');
var router = express.Router();
const mongoose = require('mongoose');
const WeatherModel = require('../models/weatherdata');

var mongoDB = 'mongodb://127.0.0.1/my_database';

/* GET ALL weater data. */
router.get('/', function(req, res, next) {
    try{
        const weatherdata = WeatherModel.find({}, function(err, weatherdata) {
            if (err) return console.error(err);
            res.json(weatherdata);
        });
    }

    catch (error) {
        console.error(error);
    }
});




/* POST weater data. */
router.post('/submit', function(req, res, next) {
    const weatherModel = new WeatherModel({
        mac: req.body.mac,
        temp: req.body.temp,
        hum: req.body.hum,
        logTimeStamp: new Date()
    });
    // Save weather data to database
    try {
        weatherModel.save();        
        res.send("Success");
    } catch (err) {
        res.send(err);
    }
});






module.exports = router;
