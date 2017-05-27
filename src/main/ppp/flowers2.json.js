var x3dom = require('../node/fields.js');
var MFBool = x3dom.fields.MFBoolean;
var MFColor = x3dom.fields.MFColor;
var MFColorRGBA = x3dom.fields.MFColorRGBA;
var MFDouble = function() { return Array.prototype.slice.call(arguments, 0); };
var MFFloat = x3dom.fields.MFFloat;
var MFImage = function() { return Array.prototype.slice.call(arguments, 0); };
var MFInt32 = x3dom.fields.MFInt32;
var MFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFMatrix4f = function() { return Array.prototype.slice.call(arguments, 0); };
var MFNode = x3dom.fields.MFNode;
var MFRotation = x3dom.fields.MFRotation;
var MFString = x3dom.fields.MFString;
var MFTime = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec2f = x3dom.fields.MFVec2f;
var MFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec3f = x3dom.fields.MFVec3f;
var MFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };
var MFVec4f = function() { return Array.prototype.slice.call(arguments, 0); };
SFBool = Boolean;
var SFColor = x3dom.fields.SFColor;
var SFColorRGBA = x3dom.fields.SFColorRGBA;
SFDouble = Number;
SFFloat = Number;
SFInt32 = Number;
var SFImage = x3dom.fields.SFImage;
var SFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix4f = x3dom.fields.SFMatrix4f;
var SFNode = x3dom.fields.SFNode;
var SFRotation = x3dom.fields.Quaternion;
SFString = String;
SFTime = Number;
var SFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec2f = x3dom.fields.SFVec2f;
var SFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec3f = x3dom.fields.SFVec3f;
var SFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFvec4f = x3dom.fields.SFvec4f;
var X3DJSON = {};
if (typeof document === 'undefined') {
	document = { querySelector : function() {;
		return {
			setAttribute : function(field, value) {
				this[field] = value;
				console.log('set '+ field+ '='+ value);
			},
			getAttribute : function(field) {
				var value = this[field];
				console.log('get '+ field+ '='+ value);
			}
		};
	}};
}
X3DJSON.nodeUtil = function(node, field, value) {
		var element = document.querySelector("[DEF='"+node+"'], [name='"+node+"']");
		if (element === null) {
			console.error('unDEFed node',node);
		} else if (arguments.length > 2) {
			element.setAttribute(field, value);
			console.log('set '+ field+ '='+ value);
			return element;
		} else if (arguments.length > 1) {
			var value = element.getAttribute(field)
			console.log('get', field,'=',value);
			return value;
		} else {
			return element;
		}
};
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['OrbitScript'] = function() {
	this.set_fraction = function (value) {
		X3DJSON.nodeUtil('OrbitScript', 'fraction', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.fraction_changed = function () {
		return X3DJSON.nodeUtil('OrbitScript', 'fraction');
	};
	this.set_fraction(undefined);
	this.set_coordinates = function (value) {
		X3DJSON.nodeUtil('OrbitScript', 'coordinates', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.coordinates_changed = function () {
		return X3DJSON.nodeUtil('OrbitScript', 'coordinates');
	};
	this.set_coordinates(new MFVec3f());
	this.set_coordIndexes = function (value) {
		X3DJSON.nodeUtil('OrbitScript', 'coordIndexes', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.coordIndexes_changed = function () {
		return X3DJSON.nodeUtil('OrbitScript', 'coordIndexes');
	};
	this.set_coordIndexes(new MFInt32());


ecmascript:

var e = 5;
var f = 5;
var g = 5;
var h = 5;


	this.initialize = function () {
     resolution = 100;
     var localci = new MFInt32();
     this.generateCoordinates(resolution);
     var ci = 0;
     for ( i = 0; i < resolution-1; i++) {
     	for ( j = 0; j < resolution-1; j++) {
	     localci[ci] = i*resolution+j;
	     localci[ci++] = i*resolution+j+1;
	     localci[ci++] = (i+1)*resolution+j+1;
	     localci[ci++] = (i+1)*resolution+j;
	     localci[ci++] = -1;
	}
    }
    this.set_coordIndexes ( localci);
}

;

	this.generateCoordinates = function (resolution) {
     theta = 0.0;
     phi = 0.0;
     delta = (2 * 3.141592653) / (resolution-1);
     var localc = new MFVec3f();
     for ( i = 0; i < resolution; i++) {
     	for ( j = 0; j < resolution; j++) {
		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
		localc[i*resolution+j] = new SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		);
		theta += delta;
	}
	phi += delta;
     }
     this.set_coordinates ( localc);
}

;

	this.set_fraction = function (fraction, eventTime) {
	choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		e += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 1:
		f += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 2:
		g += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 3:
		h += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	}
	if (f < 1) {
		f = 10;
	}
	if (g < 1) {
		g = 4;
	}
	if (h < 1) {
		h = 4;
	}
	resolution = 100;
	this.generateCoordinates(resolution);
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['OrbitScript'] = new X3DJSON['Script']['OrbitScript']();
if (typeof X3DJSON['Obj']['OrbitScript'].initialize === "function") X3DJSON['Obj']['OrbitScript'].initialize();
if (typeof X3DJSON['Script'] === 'undefined') {
X3DJSON['Script'] = {};
}

X3DJSON['Script']['OrbitScript2'] = function() {
	this.set_fraction = function (value) {
		X3DJSON.nodeUtil('OrbitScript2', 'fraction', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.fraction_changed = function () {
		return X3DJSON.nodeUtil('OrbitScript2', 'fraction');
	};
	this.set_fraction(undefined);
	this.set_coordinates = function (value) {
		X3DJSON.nodeUtil('OrbitScript2', 'coordinates', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.coordinates_changed = function () {
		return X3DJSON.nodeUtil('OrbitScript2', 'coordinates');
	};
	this.set_coordinates(new MFVec3f());
	this.set_coordIndexes = function (value) {
		X3DJSON.nodeUtil('OrbitScript2', 'coordIndexes', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.coordIndexes_changed = function () {
		return X3DJSON.nodeUtil('OrbitScript2', 'coordIndexes');
	};
	this.set_coordIndexes(new MFInt32());


ecmascript:

var e = 5;
var f = 5;
var g = 5;
var h = 5;


	this.initialize = function () {
     resolution = 100;
     var localci = new MFInt32();
     this.generateCoordinates(resolution);
     ci = 0;
     for ( i = 0; i < resolution-1; i++) {
     	for ( j = 0; j < resolution-1; j++) {
	     localci[ci] = i*resolution+j;
	     localci[ci+1] = i*resolution+j+1;
	     localci[ci+2] = (i+1)*resolution+j+1;
	     localci[ci+3] = (i+1)*resolution+j;
	     localci[ci+4] = -1;
	     ci += 5;
	}
    }
    this.set_coordIndexes ( localci);
}

;

	this.generateCoordinates = function (resolution) {
     theta = 0.0;
     phi = 0.0;
     delta = (2 * 3.141592653) / (resolution-1);
     var localc = new MFVec3f();
     for ( i = 0; i < resolution; i++) {
     	for ( j = 0; j < resolution; j++) {
		rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);
		localc[i*resolution+j] = new SFVec3f();
		localc[i*resolution+j][0] = rho * Math.cos(phi) * Math.cos(theta);
		localc[i*resolution+j][1] = rho * Math.cos(phi) * Math.sin(theta);
		localc[i*resolution+j][2] = rho * Math.sin(phi);
		theta += delta;
	}
	phi += delta;
     }
     this.set_coordinates ( localc);
}

;

	this.set_fraction = function (fraction, eventTime) {
	choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		e += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 1:
		f += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 2:
		g += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 3:
		h += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	}
	if (f < 1) {
		f = 10;
	}
	if (g < 1) {
		g = 4;
	}
	if (h < 1) {
		h = 4;
	}
	resolution = 100;
	this.generateCoordinates(resolution);
};

};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['OrbitScript2'] = new X3DJSON['Script']['OrbitScript2']();
if (typeof X3DJSON['Obj']['OrbitScript2'].initialize === "function") X3DJSON['Obj']['OrbitScript2'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript']['coordIndexes'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript']['coordIndexes'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript']['coordIndexes']['Orbit'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript']['coordIndexes']['Orbit'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript']['coordIndexes']['Orbit']['set_coordIndex'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript']['coordIndexes']['Orbit']['set_coordIndex'] = {};
}

X3DJSON['ROUTE']['OrbitScript']['coordIndexes']['Orbit']['set_coordIndex']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'coordIndexes');
			X3DJSON.nodeUtil('Orbit','set_coordIndex',X3DJSON.nodeUtil('OrbitScript','coordIndexes'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['coordIndexes'] };
X3DJSON['ROUTE']['OrbitScript']['coordIndexes']['Orbit']['set_coordIndex']['FROM'].observe(X3DJSON.nodeUtil('OrbitScript'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript']['coordIndexes'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript']['coordIndexes'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript']['coordIndexes']['Orbit'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript']['coordIndexes']['Orbit'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript']['coordIndexes']['Orbit']['set_coordIndex'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript']['coordIndexes']['Orbit']['set_coordIndex'] = {};
}

X3DJSON['ROUTE']['OrbitScript']['coordIndexes']['Orbit']['set_coordIndex']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_coordIndex');
			if (typeof X3DJSON['Obj']['Orbit'].set_coordIndex === "function") X3DJSON['Obj']['Orbit'].set_coordIndex(X3DJSON.nodeUtil('Orbit','set_coordIndex'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_coordIndex'] };
X3DJSON['ROUTE']['OrbitScript']['coordIndexes']['Orbit']['set_coordIndex']['TO'].observe(X3DJSON.nodeUtil('Orbit'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript']['coordinates'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript']['coordinates'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript']['coordinates']['OrbitCoordinates'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript']['coordinates']['OrbitCoordinates'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript']['coordinates']['OrbitCoordinates']['set_point'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript']['coordinates']['OrbitCoordinates']['set_point'] = {};
}

X3DJSON['ROUTE']['OrbitScript']['coordinates']['OrbitCoordinates']['set_point']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'coordinates');
			X3DJSON.nodeUtil('OrbitCoordinates','set_point',X3DJSON.nodeUtil('OrbitScript','coordinates'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['coordinates'] };
X3DJSON['ROUTE']['OrbitScript']['coordinates']['OrbitCoordinates']['set_point']['FROM'].observe(X3DJSON.nodeUtil('OrbitScript'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript']['coordinates'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript']['coordinates'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript']['coordinates']['OrbitCoordinates'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript']['coordinates']['OrbitCoordinates'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript']['coordinates']['OrbitCoordinates']['set_point'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript']['coordinates']['OrbitCoordinates']['set_point'] = {};
}

X3DJSON['ROUTE']['OrbitScript']['coordinates']['OrbitCoordinates']['set_point']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_point');
			if (typeof X3DJSON['Obj']['OrbitCoordinates'].set_point === "function") X3DJSON['Obj']['OrbitCoordinates'].set_point(X3DJSON.nodeUtil('OrbitCoordinates','set_point'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_point'] };
X3DJSON['ROUTE']['OrbitScript']['coordinates']['OrbitCoordinates']['set_point']['TO'].observe(X3DJSON.nodeUtil('OrbitCoordinates'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2']['coordIndexes'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2']['coordIndexes'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2']['coordIndexes']['Orbit2'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2']['coordIndexes']['Orbit2'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2']['coordIndexes']['Orbit2']['set_coordIndex'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2']['coordIndexes']['Orbit2']['set_coordIndex'] = {};
}

X3DJSON['ROUTE']['OrbitScript2']['coordIndexes']['Orbit2']['set_coordIndex']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'coordIndexes');
			X3DJSON.nodeUtil('Orbit2','set_coordIndex',X3DJSON.nodeUtil('OrbitScript2','coordIndexes'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['coordIndexes'] };
X3DJSON['ROUTE']['OrbitScript2']['coordIndexes']['Orbit2']['set_coordIndex']['FROM'].observe(X3DJSON.nodeUtil('OrbitScript2'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2']['coordIndexes'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2']['coordIndexes'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2']['coordIndexes']['Orbit2'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2']['coordIndexes']['Orbit2'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2']['coordIndexes']['Orbit2']['set_coordIndex'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2']['coordIndexes']['Orbit2']['set_coordIndex'] = {};
}

X3DJSON['ROUTE']['OrbitScript2']['coordIndexes']['Orbit2']['set_coordIndex']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_coordIndex');
			if (typeof X3DJSON['Obj']['Orbit2'].set_coordIndex === "function") X3DJSON['Obj']['Orbit2'].set_coordIndex(X3DJSON.nodeUtil('Orbit2','set_coordIndex'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_coordIndex'] };
X3DJSON['ROUTE']['OrbitScript2']['coordIndexes']['Orbit2']['set_coordIndex']['TO'].observe(X3DJSON.nodeUtil('Orbit2'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2']['coordinates'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2']['coordinates'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2']['coordinates']['OrbitCoordinates2'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2']['coordinates']['OrbitCoordinates2'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2']['coordinates']['OrbitCoordinates2']['set_point'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2']['coordinates']['OrbitCoordinates2']['set_point'] = {};
}

X3DJSON['ROUTE']['OrbitScript2']['coordinates']['OrbitCoordinates2']['set_point']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'coordinates');
			X3DJSON.nodeUtil('OrbitCoordinates2','set_point',X3DJSON.nodeUtil('OrbitScript2','coordinates'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['coordinates'] };
X3DJSON['ROUTE']['OrbitScript2']['coordinates']['OrbitCoordinates2']['set_point']['FROM'].observe(X3DJSON.nodeUtil('OrbitScript2'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2']['coordinates'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2']['coordinates'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2']['coordinates']['OrbitCoordinates2'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2']['coordinates']['OrbitCoordinates2'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitScript2']['coordinates']['OrbitCoordinates2']['set_point'] === 'undefined') {
X3DJSON['ROUTE']['OrbitScript2']['coordinates']['OrbitCoordinates2']['set_point'] = {};
}

X3DJSON['ROUTE']['OrbitScript2']['coordinates']['OrbitCoordinates2']['set_point']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_point');
			if (typeof X3DJSON['Obj']['OrbitCoordinates2'].set_point === "function") X3DJSON['Obj']['OrbitCoordinates2'].set_point(X3DJSON.nodeUtil('OrbitCoordinates2','set_point'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_point'] };
X3DJSON['ROUTE']['OrbitScript2']['coordinates']['OrbitCoordinates2']['set_point']['TO'].observe(X3DJSON.nodeUtil('OrbitCoordinates2'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('OrbitScript','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('Clock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['OrbitScript'].set_fraction === "function") X3DJSON['Obj']['OrbitScript'].set_fraction(X3DJSON.nodeUtil('OrbitScript','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('OrbitScript'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript2'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript2'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript2']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript2']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript2']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('OrbitScript2','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript2']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('Clock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript2'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript2'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript2']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript2']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript2']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['OrbitScript2'].set_fraction === "function") X3DJSON['Obj']['OrbitScript2'].set_fraction(X3DJSON.nodeUtil('OrbitScript2','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitScript2']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('OrbitScript2'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitPath'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitPath'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitPath']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitPath']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitPath']['set_fraction']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'fraction_changed');
			X3DJSON.nodeUtil('OrbitPath','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['fraction_changed'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitPath']['set_fraction']['FROM'].observe(X3DJSON.nodeUtil('Clock'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock'] === 'undefined') {
X3DJSON['ROUTE']['Clock'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitPath'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitPath'] = {};
}
if (typeof X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitPath']['set_fraction'] === 'undefined') {
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitPath']['set_fraction'] = {};
}

X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitPath']['set_fraction']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_fraction');
			if (typeof X3DJSON['Obj']['OrbitPath'].set_fraction === "function") X3DJSON['Obj']['OrbitPath'].set_fraction(X3DJSON.nodeUtil('OrbitPath','set_fraction'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_fraction'] };
X3DJSON['ROUTE']['Clock']['fraction_changed']['OrbitPath']['set_fraction']['TO'].observe(X3DJSON.nodeUtil('OrbitPath'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform']['set_rotation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('OrbitTransform','set_rotation',X3DJSON.nodeUtil('OrbitPath','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform']['set_rotation']['FROM'].observe(X3DJSON.nodeUtil('OrbitPath'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform']['set_rotation'] = {};
}

X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform']['set_rotation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_rotation');
			if (typeof X3DJSON['Obj']['OrbitTransform'].set_rotation === "function") X3DJSON['Obj']['OrbitTransform'].set_rotation(X3DJSON.nodeUtil('OrbitTransform','set_rotation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_rotation'] };
X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform']['set_rotation']['TO'].observe(X3DJSON.nodeUtil('OrbitTransform'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform2'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform2'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform2']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform2']['set_rotation'] = {};
}

X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform2']['set_rotation']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'value_changed');
			X3DJSON.nodeUtil('OrbitTransform2','set_rotation',X3DJSON.nodeUtil('OrbitPath','value_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['value_changed'] };
X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform2']['set_rotation']['FROM'].observe(X3DJSON.nodeUtil('OrbitPath'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath']['value_changed'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath']['value_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform2'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform2'] = {};
}
if (typeof X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform2']['set_rotation'] === 'undefined') {
X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform2']['set_rotation'] = {};
}

X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform2']['set_rotation']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'set_rotation');
			if (typeof X3DJSON['Obj']['OrbitTransform2'].set_rotation === "function") X3DJSON['Obj']['OrbitTransform2'].set_rotation(X3DJSON.nodeUtil('OrbitTransform2','set_rotation'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['set_rotation'] };
X3DJSON['ROUTE']['OrbitPath']['value_changed']['OrbitTransform2']['set_rotation']['TO'].observe(X3DJSON.nodeUtil('OrbitTransform2'), config);
			X3DJSON.nodeUtil('OrbitScript','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('OrbitScript2','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);
			X3DJSON.nodeUtil('OrbitPath','set_fraction',X3DJSON.nodeUtil('Clock','fraction_changed'), __eventTime);