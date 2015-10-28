var express = require('express');
var app = express();
var http = require('http').Server(app);
var config = require("./config");
var port = process.env.PORT || 3000;
var path = require('path');

require("fs").symlink(
path.resolve(config.examples),
path.resolve(__dirname + "/examples"),
'junction',
 function (err) {
        if (err) {
                console.log( err.code === 'EEXIST' ? "Go to the link above!\n" : err);
        }
  }
);

app.use(express.static(__dirname));

http.listen(port, function () {
    console.log('listening on http://localhost:' + port);
});
