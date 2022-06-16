const mongoose = require('mongoose');

const Schema = mongoose.Schema;

const weatherdataSchema = new Schema({
    mac: String,
    temp: Number,
    hum: Number,
    logTimeStamp: Date,
});

const WeatherModel = mongoose.model('WeatherData', weatherdataSchema);

module.exports = WeatherModel;