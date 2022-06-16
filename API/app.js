var createError = require('http-errors');     // https://www.npmjs.com/package/http-errors
var express = require('express');             // Express web server framework
var path = require('path');                   // path module        
var cookieParser = require('cookie-parser');  // Parse cookies (needed for auth)
var logger = require('morgan');               // Logger
require("dotenv").config();                   // Load .env file
const mongoose = require("mongoose");         // MongoDB  (https://www.npmjs.com/package/mongoose)

require("./private/database").connect();       // Connect to database

var indexRouter = require('./routes/index');    
var usersRouter = require('./routes/users');
var weaterRouter = require('./routes/weaterdata');

const User = require("./models/user");

var app = express();    //  Create Express app

// view engine setup
app.set('views', path.join(__dirname, 'views'));  //  Set views directory
app.set('view engine', 'jade');                   //  Set view engine to Jade

app.use(logger('dev'));                           //  Log requests to console
app.use(express.json());
app.use(express.urlencoded({ extended: false })); // Parse URL-encoded bodies (needed for auth)
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/users', usersRouter);
app.use('/weatherdata', weaterRouter);

// catch 404 and forward to error handler
app.use(function(req, res, next) {
  next(createError(404));
});

// error handler
app.use(function(err, req, res, next) {
  // set locals, only providing error in development
  res.locals.message = err.message;
  res.locals.error = req.app.get('env') === 'development' ? err : {};

  // render the error page
  res.status(err.status || 500);
  res.render('error');
});

module.exports = app;
