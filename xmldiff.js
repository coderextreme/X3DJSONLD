"use strict";

var parseString = require('xml2js').parseString;
var fs = require('fs');

process.argv.shift();
process.argv.shift();

var files = process.argv;

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
	var str = "";
	var finalret = true;
	if (obj1 === obj2) {
	} else if (typeof obj1 === 'string' && typeof obj2 === 'string') {
		if (obj1.trim() === obj2.trim()) {
		} else if (obj1.indexOf(" ") >= 0 || obj2.indexOf(" ") >= 0) {
			var spl1 = obj1.split(/[ \t\n\r]+/);
			var spl2 = obj2.split(/[ \t\n\r]+/);
			//console.log("array1", spl1);
			if (spl1.length === spl2.length) {
				for (var i = 0; i < spl1.length; i++) {
					if (myTrim(spl1[i]) != myTrim(spl2[i])) { 
						var p1key = p1+'/'+i;
						var p2key = p2+'/'+i;
						var dsp1 = spl1[i].split(/[ \t\n\r]+/);
						var dsp2 = spl2[i].split(/[ \t\n\r]+/);
						// console.log("array2", dsp1);
						for (var j = 0; j  < dsp1.length; j++) {
							var dsp1key = p1key+'/'+j;
							var dsp2key = p2key+'/'+j;
							let ret;
							let s;
							[ ret, str ] = compare(dsp1[j], p1key+"/"+j, dsp2[j], p2key+"/"+j);
							str += s;
							if (ret === false) {
								finalret = false;
							}
						}
					}
				}
			} else {
				str += "@1 "+p1+" "+p2+"\n";
				str += "< "+obj1+"\n";
				str += "> "+obj2+"\n";
				finalret = false;
			}
		} else if (parseFloat(obj1) == parseFloat(obj2)) {
		} else {
			str += "@2 "+p1+" "+p2+"\n";
			str += "< "+obj1+"\n";
			str += "> "+obj2+"\n";
			finalret = false;
		}
		if (finalret === true) {
			if (obj1 !== obj2) {
				str += "@3 "+p1+" "+p2+"\n";
				str += "< "+obj1+"\n";
				str += "> "+obj2+"\n";
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
					let ret;
					let s;
					[ ret, str ] = compare(obj1[key].split(/[ \t\n\r]+/), p1key, obj2[key].split(/[ \t\n\r]+/), p2key);
					str += s;
				} else {
					let ret;
					let s;
					[ ret, str ] = compare(obj1[key], p1key, obj2[key], p2key);
					str += s;
				}
				if (ret === false) {
					finalret = false;
				}
			} else {
				// obj1 has key
				if (key === 'containerField') {
					str += "@4 "+p1key+"\n";
					str += "< "+obj1[key]+"\n";
				} else {
					str += "@5 "+p1key+"\n";
					str += "< "+obj1[key]+"\n";
					finalret = false;
				}
			}
		}
		for (var key in obj2) {
			// obj2 has key
			var p2key = p2+'/'+key;
			if (typeof obj1[key] === 'undefined') {
				if (key === 'containerField') {
					str += "@6"+p2key+"\n";
					str += ">"+obj2[key]+"\n";
				} else {
					str += "@7"+p2key+"\n";
					str += ">"+obj2[key]+"\n";
					finalret = false;
				}
			}
		}
	} else if (!(typeof obj1 === 'undefined' && typeof obj2 === 'undefined')) {
		str += "@8 "+p1+p2+"\n";
		str += "< "+obj1+"\n";
		str += "> "+obj2+"\n";
		finalret = false;
	} else {
		str += 'both undefined'+"\n";
	}
	return [ finalret, str ];
		
}

var glob = require('glob');
try {
	var xmlrt = fs.readFileSync(files[1]);
	parseString(xmlrt, function(err, resultrt) {
		if (err) throw "RIGHT FILE "+err;
		glob(files[0], function(err, filesglobs) {
			if (err) {
				console.log(err);
			}
			filesglobs.forEach(function(file) {
				var xml = fs.readFileSync(file);
				parseString(xml, function(err, result) {
					if (err) throw "LEFT FILE "+err;
					let ret = true;
					let str = "";
					[ ret, str ] = compare(result, '', resultrt, '');
					if (!ret) {
						console.log("================================================================================");
						console.log("diff", files[0], files[1]);
						console.log("Different");
						/*
					} else {
						console.log("Same");
						*/
					}
				});
			});
		});
	});
} catch (e) {
	console.log(e, files[1]);
}
