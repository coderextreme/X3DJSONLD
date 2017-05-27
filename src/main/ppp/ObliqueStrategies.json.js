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

X3DJSON['Script']['TextScript'] = function() {
	this.set_index = function (value) {
		X3DJSON.nodeUtil('TextScript', 'index', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.index_changed = function () {
		return X3DJSON.nodeUtil('TextScript', 'index');
	};
	this.set_index(new SFInt32(0));
	this.set_string = function (value) {
		X3DJSON.nodeUtil('TextScript', 'string', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.string_changed = function () {
		return X3DJSON.nodeUtil('TextScript', 'string');
	};
	this.set_string(undefined);
	this.set_textToSpeechUrl = function (value) {
		X3DJSON.nodeUtil('TextScript', 'textToSpeechUrl', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.textToSpeechUrl_changed = function () {
		return X3DJSON.nodeUtil('TextScript', 'textToSpeechUrl');
	};
	this.set_textToSpeechUrl(new MFString());
	this.set_newCardTime = function (value) {
		X3DJSON.nodeUtil('TextScript', 'newCardTime', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.newCardTime_changed = function () {
		return X3DJSON.nodeUtil('TextScript', 'newCardTime');
	};
	this.set_newCardTime(new SFTime());
	this.set_selectPreviousCard = function (value) {
		X3DJSON.nodeUtil('TextScript', 'selectPreviousCard', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.selectPreviousCard_changed = function () {
		return X3DJSON.nodeUtil('TextScript', 'selectPreviousCard');
	};
	this.set_selectPreviousCard(new SFBool());
	this.set_selectNextCard = function (value) {
		X3DJSON.nodeUtil('TextScript', 'selectNextCard', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.selectNextCard_changed = function () {
		return X3DJSON.nodeUtil('TextScript', 'selectNextCard');
	};
	this.set_selectNextCard(new SFBool());
	this.set_selectRandomCard = function (value) {
		X3DJSON.nodeUtil('TextScript', 'selectRandomCard', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.selectRandomCard_changed = function () {
		return X3DJSON.nodeUtil('TextScript', 'selectRandomCard');
	};
	this.set_selectRandomCard(new SFBool());
	this.set_traceEnabled = function (value) {
		X3DJSON.nodeUtil('TextScript', 'traceEnabled', (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(',') : value));
	};
	this.traceEnabled_changed = function () {
		return X3DJSON.nodeUtil('TextScript', 'traceEnabled');
	};
	this.set_traceEnabled(new SFBool(true));
};
if (typeof X3DJSON['Obj'] === 'undefined') {
X3DJSON['Obj'] = {};
}

X3DJSON['Obj']['TextScript'] = new X3DJSON['Script']['TextScript']();
if (typeof X3DJSON['Obj']['TextScript'].initialize === "function") X3DJSON['Obj']['TextScript'].initialize();
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['string_changed'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['string_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['string_changed']['CardText'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['string_changed']['CardText'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['string_changed']['CardText']['string'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['string_changed']['CardText']['string'] = {};
}

X3DJSON['ROUTE']['TextScript']['string_changed']['CardText']['string']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'string_changed');
			X3DJSON.nodeUtil('CardText','string',X3DJSON.nodeUtil('TextScript','string_changed'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['string_changed'] };
X3DJSON['ROUTE']['TextScript']['string_changed']['CardText']['string']['FROM'].observe(X3DJSON.nodeUtil('TextScript'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['string_changed'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['string_changed'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['string_changed']['CardText'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['string_changed']['CardText'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['string_changed']['CardText']['string'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['string_changed']['CardText']['string'] = {};
}

X3DJSON['ROUTE']['TextScript']['string_changed']['CardText']['string']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'string');
			if (typeof X3DJSON['Obj']['CardText'].string === "function") X3DJSON['Obj']['CardText'].string(X3DJSON.nodeUtil('CardText','string'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['string'] };
X3DJSON['ROUTE']['TextScript']['string_changed']['CardText']['string']['TO'].observe(X3DJSON.nodeUtil('CardText'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['textToSpeechUrl'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAudioClip'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAudioClip'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAudioClip']['url'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAudioClip']['url'] = {};
}

X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAudioClip']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'textToSpeechUrl');
			X3DJSON.nodeUtil('TextToSpeechAudioClip','url',X3DJSON.nodeUtil('TextScript','textToSpeechUrl'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['textToSpeechUrl'] };
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAudioClip']['url']['FROM'].observe(X3DJSON.nodeUtil('TextScript'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['textToSpeechUrl'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAudioClip'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAudioClip'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAudioClip']['url'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAudioClip']['url'] = {};
}

X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAudioClip']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['TextToSpeechAudioClip'].url === "function") X3DJSON['Obj']['TextToSpeechAudioClip'].url(X3DJSON.nodeUtil('TextToSpeechAudioClip','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAudioClip']['url']['TO'].observe(X3DJSON.nodeUtil('TextToSpeechAudioClip'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['newCardTime'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['newCardTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['newCardTime']['TextToSpeechAudioClip'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['newCardTime']['TextToSpeechAudioClip'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['newCardTime']['TextToSpeechAudioClip']['startTime'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['newCardTime']['TextToSpeechAudioClip']['startTime'] = {};
}

X3DJSON['ROUTE']['TextScript']['newCardTime']['TextToSpeechAudioClip']['startTime']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'newCardTime');
			X3DJSON.nodeUtil('TextToSpeechAudioClip','startTime',X3DJSON.nodeUtil('TextScript','newCardTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['newCardTime'] };
X3DJSON['ROUTE']['TextScript']['newCardTime']['TextToSpeechAudioClip']['startTime']['FROM'].observe(X3DJSON.nodeUtil('TextScript'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['newCardTime'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['newCardTime'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['newCardTime']['TextToSpeechAudioClip'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['newCardTime']['TextToSpeechAudioClip'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['newCardTime']['TextToSpeechAudioClip']['startTime'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['newCardTime']['TextToSpeechAudioClip']['startTime'] = {};
}

X3DJSON['ROUTE']['TextScript']['newCardTime']['TextToSpeechAudioClip']['startTime']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'startTime');
			if (typeof X3DJSON['Obj']['TextToSpeechAudioClip'].startTime === "function") X3DJSON['Obj']['TextToSpeechAudioClip'].startTime(X3DJSON.nodeUtil('TextToSpeechAudioClip','startTime'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['startTime'] };
X3DJSON['ROUTE']['TextScript']['newCardTime']['TextToSpeechAudioClip']['startTime']['TO'].observe(X3DJSON.nodeUtil('TextToSpeechAudioClip'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['PreviousTextClickedSensor'] === 'undefined') {
X3DJSON['ROUTE']['PreviousTextClickedSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive']['TextScript']['selectPreviousCard'] === 'undefined') {
X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive']['TextScript']['selectPreviousCard'] = {};
}

X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive']['TextScript']['selectPreviousCard']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isActive');
			X3DJSON.nodeUtil('TextScript','selectPreviousCard',X3DJSON.nodeUtil('PreviousTextClickedSensor','isActive'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isActive'] };
X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive']['TextScript']['selectPreviousCard']['FROM'].observe(X3DJSON.nodeUtil('PreviousTextClickedSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['PreviousTextClickedSensor'] === 'undefined') {
X3DJSON['ROUTE']['PreviousTextClickedSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive']['TextScript']['selectPreviousCard'] === 'undefined') {
X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive']['TextScript']['selectPreviousCard'] = {};
}

X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive']['TextScript']['selectPreviousCard']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'selectPreviousCard');
			if (typeof X3DJSON['Obj']['TextScript'].selectPreviousCard === "function") X3DJSON['Obj']['TextScript'].selectPreviousCard(X3DJSON.nodeUtil('TextScript','selectPreviousCard'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['selectPreviousCard'] };
X3DJSON['ROUTE']['PreviousTextClickedSensor']['isActive']['TextScript']['selectPreviousCard']['TO'].observe(X3DJSON.nodeUtil('TextScript'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['NextTextClickedSensor'] === 'undefined') {
X3DJSON['ROUTE']['NextTextClickedSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['NextTextClickedSensor']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['NextTextClickedSensor']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['NextTextClickedSensor']['isActive']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['NextTextClickedSensor']['isActive']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['NextTextClickedSensor']['isActive']['TextScript']['selectNextCard'] === 'undefined') {
X3DJSON['ROUTE']['NextTextClickedSensor']['isActive']['TextScript']['selectNextCard'] = {};
}

X3DJSON['ROUTE']['NextTextClickedSensor']['isActive']['TextScript']['selectNextCard']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isActive');
			X3DJSON.nodeUtil('TextScript','selectNextCard',X3DJSON.nodeUtil('NextTextClickedSensor','isActive'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isActive'] };
X3DJSON['ROUTE']['NextTextClickedSensor']['isActive']['TextScript']['selectNextCard']['FROM'].observe(X3DJSON.nodeUtil('NextTextClickedSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['NextTextClickedSensor'] === 'undefined') {
X3DJSON['ROUTE']['NextTextClickedSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['NextTextClickedSensor']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['NextTextClickedSensor']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['NextTextClickedSensor']['isActive']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['NextTextClickedSensor']['isActive']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['NextTextClickedSensor']['isActive']['TextScript']['selectNextCard'] === 'undefined') {
X3DJSON['ROUTE']['NextTextClickedSensor']['isActive']['TextScript']['selectNextCard'] = {};
}

X3DJSON['ROUTE']['NextTextClickedSensor']['isActive']['TextScript']['selectNextCard']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'selectNextCard');
			if (typeof X3DJSON['Obj']['TextScript'].selectNextCard === "function") X3DJSON['Obj']['TextScript'].selectNextCard(X3DJSON.nodeUtil('TextScript','selectNextCard'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['selectNextCard'] };
X3DJSON['ROUTE']['NextTextClickedSensor']['isActive']['TextScript']['selectNextCard']['TO'].observe(X3DJSON.nodeUtil('TextScript'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTextClickedSensor'] === 'undefined') {
X3DJSON['ROUTE']['RandomTextClickedSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive']['TextScript']['selectRandomCard'] === 'undefined') {
X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive']['TextScript']['selectRandomCard'] = {};
}

X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive']['TextScript']['selectRandomCard']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'isActive');
			X3DJSON.nodeUtil('TextScript','selectRandomCard',X3DJSON.nodeUtil('RandomTextClickedSensor','isActive'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['isActive'] };
X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive']['TextScript']['selectRandomCard']['FROM'].observe(X3DJSON.nodeUtil('RandomTextClickedSensor'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTextClickedSensor'] === 'undefined') {
X3DJSON['ROUTE']['RandomTextClickedSensor'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive'] === 'undefined') {
X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive']['TextScript']['selectRandomCard'] === 'undefined') {
X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive']['TextScript']['selectRandomCard'] = {};
}

X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive']['TextScript']['selectRandomCard']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'selectRandomCard');
			if (typeof X3DJSON['Obj']['TextScript'].selectRandomCard === "function") X3DJSON['Obj']['TextScript'].selectRandomCard(X3DJSON.nodeUtil('TextScript','selectRandomCard'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['selectRandomCard'] };
X3DJSON['ROUTE']['RandomTextClickedSensor']['isActive']['TextScript']['selectRandomCard']['TO'].observe(X3DJSON.nodeUtil('TextScript'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['textToSpeechUrl'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAnchor'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAnchor'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAnchor']['url'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAnchor']['url'] = {};
}

X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAnchor']['url']['FROM'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'textToSpeechUrl');
			X3DJSON.nodeUtil('TextToSpeechAnchor','url',X3DJSON.nodeUtil('TextScript','textToSpeechUrl'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['textToSpeechUrl'] };
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAnchor']['url']['FROM'].observe(X3DJSON.nodeUtil('TextScript'), config);
if (typeof X3DJSON['ROUTE'] === 'undefined') {
X3DJSON['ROUTE'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript'] === 'undefined') {
X3DJSON['ROUTE']['TextScript'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['textToSpeechUrl'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAnchor'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAnchor'] = {};
}
if (typeof X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAnchor']['url'] === 'undefined') {
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAnchor']['url'] = {};
}

X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAnchor']['url']['TO'] = new MutationObserver(function(mutations) {
		mutations.forEach(function(mutation) {
			console.log(mutation, 'url');
			if (typeof X3DJSON['Obj']['TextToSpeechAnchor'].url === "function") X3DJSON['Obj']['TextToSpeechAnchor'].url(X3DJSON.nodeUtil('TextToSpeechAnchor','url'), __eventTime);
		});
});
var config = { attributes: true, childList: true, attributeFilter:['url'] };
X3DJSON['ROUTE']['TextScript']['textToSpeechUrl']['TextToSpeechAnchor']['url']['TO'].observe(X3DJSON.nodeUtil('TextToSpeechAnchor'), config);
