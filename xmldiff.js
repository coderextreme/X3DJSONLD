"use strict";

var parseString = require('xml2js').parseString;
var fs = require('fs');

process.argv.shift();
process.argv.shift();

var files = process.argv;

console.log('############################################');
console.log("diff", files[0], files[1]);

var arrayKeys = {
	crossSection: true,
	emissiveColor: true,
	translation: true,
	diffuseColor: true
};

function myTrim(x) {
    return /-?[0-9.]*/.test(x) ? parseFloat(x) : x;
}

function compare(obj1, p1, obj2, p2) {
	var finalret = true;
	if (obj1 === obj2) {
		finalret = true;
	} else if (typeof obj1 === 'string' && typeof obj2 === 'string') {
		if (obj1.trim() === obj2.trim()) {
			finalret = true;
		} else if (obj1.indexOf(" ") >= 0 || obj2.indexOf(" ") >= 0) {
			var spl1 = obj1.split("[ \t]+");
			var spl2 = obj2.split("[ \t]+");
			if (spl1.length === spl2.length) {
				for (var i = 0; i < spl1.length; i++) {
					if (myTrim(spl1[i]) != myTrim(spl2[i])) { 
						console.log(spl1[i], p1+"/"+i, "strings not equal", p2+"/"+i, spl2[i]);
						finalret = false;
						break;
					} else {
						finalret = true;
					}
				}
			} else {
				console.log(obj1, p1, "spaced strings same length", p2,  obj2);
				finalret = false;
			}
		} else if (parseFloat(obj1) == parseFloat(obj2)) {
			finalret = true;
		} else {
			console.log("'", obj1, "'", p1, "strings not equal", p2, "'", obj2, "'");
			finalret = false;
		}
	} else if (typeof obj1 === 'object' && typeof obj2 === 'object') {
		for (var key in obj1) {
			var p1key = p1+'/'+key;
			var p2key = p2+'/'+key;
			if (typeof obj2[key] !== 'undefined') {
				// both have key
				var ret;
				if (arrayKeys[key]) {
					ret = compare(obj1[key].split("[ \t]+"), p1key, obj2[key].split("[ \t]+"), p2key);
				} else {
					ret = compare(obj1[key], p1key, obj2[key], p2key);
				}
				if (ret === false) {
					finalret = false;
				}
			} else {
				// obj1 has key
				console.log(JSON.stringify(obj1[key]), "is only in left file at", p1key);
				finalret = false;
			}
		}
		for (var key in obj2) {
			var p2key = p2+'/'+key;
			if (typeof obj1[key] === 'undefined') {
				// obj2 has key
				console.log(JSON.stringify(obj2[key]), "is only in right file at ", p2key);
				finalret = false;
			}
		}
	} else if (!(typeof obj1 === 'undefined' && typeof obj2 === 'undefined')) {
		console.log(obj1, typeof obj1, p1, "differs from", p2,  typeof obj2, obj2);
		finalret = false;
	} else {
		console.log('both undefined');
		finalret = true;
	}
	return finalret;
		
}

var xml = fs.readFileSync(files[0]);
parseString(xml, function(err, result) {
	if (err) throw err;
	var xmlrt = fs.readFileSync(files[1]);
	parseString(xmlrt, function(err, resultrt) {
		if (err) throw err;
		if (compare(result, '', resultrt, '')) {
			console.log("Same");
		} else {
			console.log("Different");
		}
	});
});
