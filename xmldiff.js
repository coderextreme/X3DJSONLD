"use strict";

var parseString = require('xml2js').parseString;
var fs = require('fs');

process.argv.shift();
process.argv.shift();

var files = process.argv;

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
	} else if (typeof obj1 === 'string' && typeof obj2 === 'string') {
		if (obj1.trim() === obj2.trim()) {
		} else if (obj1.indexOf(" ") >= 0 || obj2.indexOf(" ") >= 0) {
			var spl1 = obj1.split(/[ \n\r]+/);
			var spl2 = obj2.split(/[ \n\r]+/);
			//console.log("array1", spl1);
			if (spl1.length === spl2.length) {
				for (var i = 0; i < spl1.length; i++) {
					if (myTrim(spl1[i]) != myTrim(spl2[i])) { 
						var p1key = p1+'/'+i;
						var p2key = p2+'/'+i;
						var dsp1 = spl1[i].split(/[ \n\r]+/);
						var dsp2 = spl2[i].split(/[ \n\r]+/);
						// console.log("array2", dsp1);
						for (var j = 0; j  < dsp1.length; j++) {
							var dsp1key = p1key+'/'+j;
							var dsp2key = p2key+'/'+j;
							var ret = compare(dsp1[j], p1key+"/"+j, dsp2[j], p2key+"/"+j);
							if (ret === false) {
								finalret = false;
							}
						}
					}
				}
			} else {
				console.log("@1", p1, p2);
				console.log("<", obj1);
				console.log(">", obj2);
				finalret = false;
			}
		} else if (parseFloat(obj1) == parseFloat(obj2)) {
		} else {
			console.log("@2", p1, p2);
			console.log("<", obj1);
			console.log(">", obj2);
			finalret = false;
		}
		if (finalret === true) {
			if (obj1 !== obj2) {
				console.log("@3", p1, p2);
				console.log("<", obj1);
				console.log(">", obj2);
				finalret = false;
			}
		}
	} else if (typeof obj1 === 'object' && typeof obj2 === 'object') {
		for (var key in obj1) {
			var p1key = p1+'/'+key;
			var p2key = p2+'/'+key;
			if (typeof obj2[key] !== 'undefined') {
				// both have key
				var ret;
				if (arrayKeys[key]) {
					ret = compare(obj1[key].split(/[ \n\r]+/), p1key, obj2[key].split(/[ \n\r]+/), p2key);
				} else {
					ret = compare(obj1[key], p1key, obj2[key], p2key);
				}
				if (ret === false) {
					finalret = false;
				}
			} else {
				// obj1 has key
				if (key === 'containerField') {
					console.log("@4", p1key);
					console.log("<", obj1[key]);
				} else {
					console.log("@5", p1key);
					console.log("<", obj1[key]);
					finalret = false;
				}
			}
		}
		for (var key in obj2) {
			// obj2 has key
			var p2key = p2+'/'+key;
			if (typeof obj1[key] === 'undefined') {
				if (key === 'containerField') {
					console.log("@6", p2key);
					console.log(">", obj2[key]);
				} else {
					console.log("@7", p2key);
					console.log(">", obj2[key]);
					finalret = false;
				}
			}
		}
	} else if (!(typeof obj1 === 'undefined' && typeof obj2 === 'undefined')) {
		console.log("@8", p1, p2);
		console.log("<", obj1);
		console.log(">", obj2);
		finalret = false;
	} else {
		console.log('both undefined');
	}
	return finalret;
		
}

var xml = fs.readFileSync(files[0]);
parseString(xml, function(err, result) {
	if (err) throw "LEFT FILE "+err;
	var xmlrt = fs.readFileSync(files[1]);
	parseString(xmlrt, function(err, resultrt) {
		if (err) throw "RIGHT FILE "+err;
		if (compare(result, '', resultrt, '')) {
			console.log("Same");
		} else {
			console.log("Different");
		}
	});
});
