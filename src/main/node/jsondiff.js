"use strict";

if (typeof window === 'undefined') {
  var fs = await import('fs');
}
import { glob, globSync } from 'glob';

function parseString(string, callback) {
	try {
		var result = JSON.parse(string);
		callback(false, result);
	} catch (e) {
		callback(e);
	}
}

var program = process.argv[1];

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
			//console.error("array1", spl1);
			if (spl1.length === spl2.length) {
				for (var i = 0; i < spl1.length; i++) {
					if (myTrim(spl1[i]) != myTrim(spl2[i])) { 
						var p1key = p1+'/'+i;
						var p2key = p2+'/'+i;
						var dsp1 = spl1[i].split(/[ \t\n\r]+/);
						var dsp2 = spl2[i].split(/[ \t\n\r]+/);
						// console.error("array2", dsp1);
						for (var j = 0; j  < dsp1.length; j++) {
							var dsp1key = p1key+'/'+j;
							var dsp2key = p2key+'/'+j;
							var ret;
							var s;
							[ ret, s ] = compare(dsp1[j], p1key+"/"+j, dsp2[j], p2key+"/"+j);
							str += s;
							if (ret === false) {
								finalret = false;
							}
						}
					}
				}
			} else {
				str += "@1 "+p1+" "+p2+"\n";
				str += "<"+JSON.stringify(obj1)+"\n";
				str += ">"+JSON.stringify(obj2)+"\n";
				finalret = false;
			}
		} else if (parseFloat(obj1) === parseFloat(obj2)) {
		} else {
			str += "@2 "+p1+" "+p2+"\n";
			str += "<"+JSON.stringify(obj1)+"\n";
			str += ">"+JSON.stringify(obj2)+"\n";
			finalret = false;
		}
		// this is a last gasp, and might be removed
		/*
		if (finalret === true) {
			if (obj1 !== obj2) {
				str += "@3 "+p1+" "+p2+"\n";
				str += "<"+JSON.stringify(obj1)+"\n";
				str += ">"+JSON.stringify(obj2)+"\n";
				finalret = false;
			}
		}
		*/
	} else if (typeof obj1 === 'object' && typeof obj2 === 'object') {
		for (var key in obj1) {
			var p1key = p1+'/'+key;
			var p2key = p2+'/'+key;
			if (typeof obj2[key] !== 'undefined') {
				// both have key
				var ret;
				var s;
				if (arrayKeys[key]) {
					[ ret, s ] = compare(obj1[key].split(/[ \t\n\r]+/), p1key, obj2[key].split(/[ \t\n\r]+/), p2key);
				} else {
					[ ret, s ] = compare(obj1[key], p1key, obj2[key], p2key);
				}
				str += s;
				if (ret === false) {
					finalret = false;
				}
			} else {
				// obj1 has key
				if (key === 'containerField') {
					str += "@4 "+p1key+"\n";
					str += "<"+JSON.stringify(obj1[key])+"\n";
				} else {
					str += "@5 "+p1key+"\n";
					str += "<"+JSON.stringify(obj1[key])+"\n";
					finalret = false;
				}
			}
		}
		for (var key in obj2) {
			// obj2 has key
			var p2key = p2+'/'+key;
			if (typeof obj1[key] === 'undefined') {
				if (key === 'containerField') {
					str += "@6 "+p2key+"\n";
					str += ">"+JSON.stringify(obj2[key])+"\n";
				} else {
					str += "@7 "+p2key+"\n";
					str += ">"+JSON.stringify(obj2[key])+"\n";
					finalret = false;
				}
			}
		}
	} else if (!(typeof obj1 === 'undefined' && typeof obj2 === 'undefined')) {
		if (parseFloat(obj1) === parseFloat(obj2)) {
		} else {
			str += "@8 "+p1+" "+p2+"\n";
			str += "<"+JSON.stringify(obj1)+"\n";
			str += ">"+JSON.stringify(obj2)+"\n";
			finalret = false;
		}
	} else {
		str += 'both undefined'+"\n";
	}
	return [ finalret, str ];
		
}

try {
	if (typeof fs === 'object') {
		var right = fs.readFileSync(files[1]);
		parseString(right, function(err, resultright) {
			if (err) throw "RIGHT FILE "+files[1]+" "+err;
			const filesglobs = globSync(files[0]);
			filesglobs.forEach(function(file) {
				var left = fs.readFileSync(file);
				parseString(left, function(err, resultleft) {
					if (err) throw "LEFT FILE "+file+" "+err;
					var ret;
					var str;
					[ ret, str ] = compare(resultleft, '', resultright, '');
					if (!ret) {
						try {
							console.log("================================================================================");
							console.log(program, files[0], files[1]);
							console.log(str);
							console.log("Different");
						} catch (e) {
							console.error("Quit pipe");
						}
						/*
					} else {
						console.log("Same");
						*/
					}
					process.exit();
				});
			});
		});
	}
} catch (e) {
	console.error(e, files[0], files[1]);
}
