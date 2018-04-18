var x3dom = require('../node/fields.js');
if (typeof X3DJSON === 'undefined') {
	var X3DJSON = {};
}
if (typeof __eventTime === 'undefined') {
	var __eventTime = 0;
}
if (typeof X3DJSON['../data/ObliqueStrategies.jsonundefined'] === 'undefined') {
	X3DJSON['../data/ObliqueStrategies.jsonundefined'] = {};
}

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
var SFBool = Boolean;
var SFColor = x3dom.fields.SFColor;
var SFColorRGBA = x3dom.fields.SFColorRGBA;
var SFDouble = Number;
var SFFloat = Number;
var SFInt32 = Number;
var SFImage = x3dom.fields.SFImage;
var SFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFMatrix4f = x3dom.fields.SFMatrix4f;
var SFNode = x3dom.fields.SFNode;
var Quaternion = x3dom.fields.Quaternion;
var SFString = String;
var SFTime = Number;
var SFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec2f = x3dom.fields.SFVec2f;
var SFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec3f = x3dom.fields.SFVec3f;
var SFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };
var SFVec4f = x3dom.fields.SFVec4f;
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
if (typeof $ !== 'function') {
	$ = function() { return { attr : function() {}, 0 : null }; };
}
X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil = function(node, field, value) {
		var selector = "../data/ObliqueStrategies.json [DEF='"+node+"']";
		var element = document.querySelector(selector);
		if (element === null) {
			console.error('unDEFed node',node);
		} else if (arguments.length > 2) {
			/*
			if (value && typeof value.toString === 'function') {
				value = value.toString();
			}
			$(selector).attr(field, value);
			// console.log('set', node, '.', field, '=', value);
			*/
			try {
				if (typeof element.setFieldValue === 'function') {
					element.setFieldValue(field, value);
				} else {
					element.setAttribute(field, value);
				}
			} catch (e) {
				console.log(e);
			}
			return element;
		} else if (arguments.length > 1) {
			if (typeof element.getFieldValue === 'function') {
				value = element.getFieldValue(field);
			} else {
				value = element.getAttribute(field);
			}
			/*
			if (element &&
				element._x3domNode &&
				element._x3domNode._vf &&
				element._x3domNode._vf[field] &&
				element._x3domNode._vf[field].setValueByStr) {
				value = element._x3domNode._vf[field].setValueByStr(value);
			}
			*/
			// console.log('get', node, '.', field,'=',value);
			return value;
		} else {
			return $(selector)[0];
		}
};
X3DJSON.createProxy = function(action, scriptObject) {
	var proxy = new Proxy(scriptObject, {
		get: function(target, property, receiver) {
			return Reflect.get(target, property, receiver);
		},
		set: function(target, property, value, receiver) {
                 if (typeof action[property] === 'object') {
                        for (var route in action[property]) {
                                if (typeof action[property][route] === 'function') {
                                        action[property][route](property, value);
   		                     // console.log('Set',property,'to', value);
                                }
                        }
                 }
		      return Reflect.set(target, property, value, receiver);
		}
	});
	return proxy;
};
if (typeof X3DJSON['Script../data/ObliqueStrategies.jsonundefined'] === 'undefined') {
X3DJSON['Script../data/ObliqueStrategies.jsonundefined'] = {};
}

X3DJSON['Script../data/ObliqueStrategies.jsonundefined']['TextScript'] = function() {
	this.set_index = function (value) {
		this.proxy.index = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.index_changed = function () {
		var value = this.index;
		return value;
	};
	this.index = new SFInt32(0);
	this.set_string = function (value) {
		this.proxy.string = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.string_changed = function () {
		var value = this.string;
		return value;
	};
	this.string = undefined;
	this.set_textToSpeechUrl = function (value) {
		this.proxy.textToSpeechUrl = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.textToSpeechUrl_changed = function () {
		var value = this.textToSpeechUrl;
		return value;
	};
	this.textToSpeechUrl = new MFString();
	this.set_newCardTime = function (value) {
		this.proxy.newCardTime = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.newCardTime_changed = function () {
		var value = this.newCardTime;
		return value;
	};
	this.newCardTime = new SFTime();
	this.set_selectPreviousCard = function (value) {
		this.proxy.selectPreviousCard = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.selectPreviousCard_changed = function () {
		var value = this.selectPreviousCard;
		return value;
	};
	this.selectPreviousCard = new SFBool();
	this.set_selectNextCard = function (value) {
		this.proxy.selectNextCard = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.selectNextCard_changed = function () {
		var value = this.selectNextCard;
		return value;
	};
	this.selectNextCard = new SFBool();
	this.set_selectRandomCard = function (value) {
		this.proxy.selectRandomCard = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.selectRandomCard_changed = function () {
		var value = this.selectRandomCard;
		return value;
	};
	this.selectRandomCard = new SFBool();
	this.set_traceEnabled = function (value) {
		this.proxy.traceEnabled = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);
	};
	this.traceEnabled_changed = function () {
		var value = this.traceEnabled;
		return value;
	};
	this.traceEnabled = new SFBool(true);
// description: Script methods to load and sequence cards, create text-to-speech url for online retrieval of audio
// title:       ObliqueStrategiesScript.js    
// creator:     Don Brutzman, John Kelly, Ben Cheng
// identifier:  http://X3dGraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js
// created:      3 November 2013
// revised:     18 October  2015
// reference:   http://www.web3d.org/x3d/content/X3dTooltips.html#Script
// reference:   http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scripts
// reference:   http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/scripting.html
// reference:   http://www.web3d.org/x3d/specifications/ISO-IEC-19777-1-X3DLanguageBindings-ECMAScript/Part1/X3D_ECMAScript.html
// license:     ../license.html

// ================================================================
// Data initialization - global variables within this script
// initialize array of arrays; TODO note which version of ecmascript is this new syntax (best practice)

var strategy = []; // TODO BS Contact not supporting this preferred construct
  strategy[  0]=['Remove specifics and convert to ambiguities'];
  strategy[  1]=['Don\'t be frightened of cliches'];
  strategy[  2]=['What is the reality of the situation?'];
  strategy[  3]=['Are there sections?', 'Consider transitions'];
  strategy[  4]=['Turn it upside down'];
  strategy[  5]=['Think of the radio'];
  strategy[  6]=['Allow an easement', '(an easement is the abandonment of a stricture)'];
  strategy[  7]=['Simple subtraction'];
  strategy[  8]=['Be dirty'];
  strategy[  9]=['Go slowly all the way round the outside'];
  strategy[ 10]=['A line has two sides'];
  strategy[ 11]=['Make an exhaustive list of everything you might do', 'do the last thing on the list'];
  strategy[ 12]=['Into the impossible'];
  strategy[ 13]=['Towards the insignificant'];
  strategy[ 14]=['Ask people to work against their better judgement'];
  strategy[ 15]=['Take away the elements in order of apparent non-importance'];
  strategy[ 16]=['Infinitesimal gradations'];
  strategy[ 17]=['Change instrument roles'];
  strategy[ 18]=['Accretion'];
  strategy[ 19]=['Disconnect from desire'];
  strategy[ 20]=['Emphasize repetitions'];
  strategy[ 21]=['Faced with a choice, do both'];
  strategy[ 22]=['Children', '-speaking', '-singing'];
  strategy[ 23]=['Lost in useless territory'];
  strategy[ 24]=['A very small object', 'Its center'];
  strategy[ 25]=['Dont be afraid of things because they\'re easy to do'];
  strategy[ 26]=['Dont be frightened to display your talents'];
  strategy[ 27]=['Breathe more deeply'];
  strategy[ 28]=['Honor thy error as a hidden intention'];
  strategy[ 29]=['What are the sections sections of?', 'Imagine a caterpillar moving'];
  strategy[ 30]=['Only one element of each kind'];
  strategy[ 31]=['Is there something missing'];
  strategy[ 32]=['Use \'unqualified\' people'];
  strategy[ 33]=['How would you have done it?'];
  strategy[ 34]=['Emphasize differences'];
  strategy[ 35]=['Do nothing for as long as possible'];
  strategy[ 36]=['Bridges', '-build', '-burn'];
  strategy[ 37]=['Always give yourself credit for having more than personality'];
  strategy[ 38]=['You don\'t have to be ashamed of using your own ideas'];
  strategy[ 39]=['Tidy up'];
  strategy[ 40]=['Do the words need changing?'];
  strategy[ 41]=['Ask your body'];
  strategy[ 42]=['Tape your mouth'];
  strategy[ 43]=['Water'];
  strategy[ 44]=['Simply a matter of work'];
  strategy[ 45]=['Make a sudden, destructive unpredictable action; incorporate'];
  strategy[ 46]=['Consult other sources', '-promising', '-unpromising'];
  strategy[ 47]=['Use an unacceptable color'];
  strategy[ 48]=['Humanize something free of error'];
  strategy[ 49]=['Use filters'];
  strategy[ 50]=['Fill every beat with something'];
  strategy[ 51]=['Discard an axiom'];
  strategy[ 52]=['Not building a wall but making a brick'];
  strategy[ 53]=['What wouldn\'t you do?'];
  strategy[ 54]=['Lowest common denominator'];
  strategy[ 55]=['Decorate, decorate'];
  strategy[ 56]=['Balance the consistency principle with the inconsistency principle'];
  strategy[ 57]=['Get your neck massaged'];
  strategy[ 58]=['Listen to the quiet voice'];
  strategy[ 59]=['Do the washing up'];
  strategy[ 60]=['Is it finished?'];
  strategy[ 61]=['Put in earplugs'];
  strategy[ 62]=['Reevaluation (a warm feeling)'];
  strategy[ 63]=['Give the name away'];
  strategy[ 64]=['Intentions', '-nobility of', '-humility of', '-credibility of'];
  strategy[ 65]=['Abandon normal instruments'];
  strategy[ 66]=['Use fewer notes'];
  strategy[ 67]=['Repetition is a form of change'];
  strategy[ 68]=['Give way to your worst impulse'];
  strategy[ 69]=['Reverse'];
  strategy[ 70]=['Trust in the you of now'];
  strategy[ 71]=['Imagine the piece as a set of disconnected events'];
  strategy[ 72]=['What would your closest friend do?'];
  strategy[ 73]=['Distorting time'];
  strategy[ 74]=['Make a blank valuable by putting it in an exquisite frame'];
  strategy[ 75]=['Feed the recording back out of the medium'];
  strategy[ 76]=['Convert a melodic element', 'into a rhythmic element'];
  strategy[ 77]=['The most important thing', 'is the thing most easily forgotten'];
  strategy[ 78]=['  ']; // empty line
  strategy[ 79]=['Ghost echoes'];
  strategy[ 80]=['You can only make one dot at a time'];
  strategy[ 81]=['Just carry on'];
  strategy[ 82]=['(Organic) machinery'];
  strategy[ 83]=['The inconsistency principle'];
  strategy[ 84]=['Don\'t break the silence'];
  strategy[ 85]=['Idiot glee (?)'];
  strategy[ 86]=['Discover the recipes you are using', 'and abandon them'];
  strategy[ 87]=['Cascades'];
  strategy[ 88]=['Courage!'];
  strategy[ 89]=['Spectrum analysis'];
  strategy[ 90]=['What mistakes did you make last time?'];
  strategy[ 91]=['Consider different fading systems'];
  strategy[ 92]=['Mute and continue'];
  strategy[ 93]=['Be extravagant'];
  strategy[ 94]=['It is quite possible (after all)'];
  strategy[ 95]=['What are you really thinking about just now?'];
  strategy[ 96]=['Don\'t stress on thing more than another [sic]'];
  strategy[ 97]=['State the problem in words', 'as clearly as possible'];
  strategy[ 98]=['Assemble some of the elements', 'in a group and treat the group'];
  strategy[ 99]=['You are an engineer'];
  strategy[100]=['Remove ambiguities and', 'convert to specifics'];
  strategy[101]=['Look at the order', 'in which you do things'];
  strategy[102]=['Go outside.', 'Shut the door.'];
  strategy[103]=['Disciplined self-indulgence'];
  strategy[104]=['Do we need holes?'];
  strategy[105]=['Cluster analysis'];
  strategy[106]=['Always first steps'];
  strategy[107]=['Cut a vital connection'];
  strategy[108]=['Do something boring'];
  strategy[109]=['Define an area as \'safe\'', 'and use it as an anchor'];
  strategy[110]=['Is the information correct?'];
  strategy[111]=['Overtly resist change'];
  strategy[112]=['Question the heroic approach'];
  strategy[113]=['Accept advice'];
  strategy[114]=['Twist the spine'];
  strategy[115]=['Work at a different speed'];
  strategy[116]=['Look closely at the most embarrassing details and amplify them'];
  strategy[117]=['Mechanicalize something idiosyncratic'];
  strategy[118]=['Emphasize the flaws'];
  strategy[119]=['Remember those quiet evenings'];
  strategy[120]=['Take a break'];
  strategy[121]=['Short circuit', '(example: a man eating peas', 'with the idea that they will improve his virility', 'shovels them straight into his lap)'];
  strategy[122]=['Left channel, right channel, center channel'];
  strategy[123]=['Use an old idea'];
  strategy[124]=['Destroy', '-nothing', '-the most important thing'];
  strategy[125]=['Change nothing and continue with immaculate consistency'];
  strategy[126]=['The tape is now the music'];

// utility methods ======================================================

// These variable declarations may be hidden or removed if defined in parent X3D Script node:
//var traceEnabled = true; // local variable
var scriptName   = 'ObliqueStrategiesScript.js';
var terseTrace   = false;


	this.forcePrint = function (stringValue)
{
    // console.error, println is the functino to output text on the X3D player's console window
    if ((scriptName.length > 0) && (terseTrace === false))
    {
        console.error ('[' + scriptName + '] ' + stringValue + '\n');
    }
    else 
    {
        console.error (                          stringValue + '\n');
    }
}
;

	this.tracePrint = function (stringValue)
{
    if (this.proxy.traceEnabled)
    {
        this.forcePrint (stringValue);
    }
}
// ========;

	this.generateTextToSpeechUrl = function () // TODO add SFBool field to silence, SFString field to choose output language
{
  // http://stackoverflow.com/questions/12141251/how-can-i-replace-space-with-20-in-javascript
  this.proxy.textToSpeechUrl = new MFString ('http://translate.google.com/translate_tts?tl=en&q=' + encodeURIComponent(strategy[this.proxy.index]));
  this.tracePrint ('this.generateTextToSpeechUrl() ' + this.proxy.textToSpeechUrl);
}

;

	this.produceMFStringCard = function () // internal utility functino
{
    this.tracePrint ('this.produceMFStringCard this.proxy.index = ' + this.proxy.index);
    // invoke MFString constructor based on input size
    if       (strategy[this.proxy.index].length === 1)
    {
        this.proxy.string_changed = new MFString (strategy[this.proxy.index]);
    }
    else  if (strategy[this.proxy.index].length === 2)
    {
        this.proxy.string_changed = new MFString (strategy[this.proxy.index][0], strategy[this.proxy.index][1]);
    }
    else  if (strategy[this.proxy.index].length >= 3)
    {
        this.proxy.string_changed = new MFString (strategy[this.proxy.index][0], strategy[this.proxy.index][1], strategy[this.proxy.index][2]);
    }
    this.tracePrint ('this.proxy.string_changed = ' + strategy[this.proxy.index]);
    if (strategy[this.proxy.index].length > 3)
    {
        this.forcePrint ('strategy[this.proxy.index].length > 3, omitted remainder of ' + strategy[this.proxy.index]);
    }
    
    this.generateTextToSpeechUrl ();
    this.tracePrint ('============================'); // done with this card
}

;

	this.selectRandomCard = function (eventValue, timestamp) // eventValue is routed into Script, timestamp parameter optional
{
  if (eventValue === true)
  {
    this.tracePrint ('this.proxy.selectRandomCard (' + eventValue + ')');
    this.proxy.index = Math.floor(Math.random() * strategy.length); // range [0..length)
    this.tracePrint('random this.proxy.index = ' + this.proxy.index);
    this.produceMFStringCard (); // returns this.proxy.string_changed to the scene, where it gets ROUTEd
    this.proxy.newCardTime = timestamp + 0.1;
  }
}

;

	this.selectPreviousCard = function (eventValue, timestamp) // TODO test
{
  if (eventValue === true)
  {
    this.tracePrint ('this.proxy.selectPreviousCard (' + eventValue + ')');
    if (this.proxy.index < 0) // if -1 then no value was previously chosen, so pick a random one
    {
        this.proxy.index = Math.floor(Math.random() * strategy.length);
    }
    if (this.proxy.index === 0)
    {
        this.proxy.index = strategy.length; // intentionally out of bounds, depend on next step:
    }
    this.proxy.index = (this.proxy.index-1) % strategy.length;
    this.produceMFStringCard ();
    this.proxy.newCardTime = timestamp + 0.1;
  }
}

;

	this.selectNextCard = function (eventValue, timestamp) // TODO test
{
  if (eventValue === true)
  {
    this.tracePrint ('this.proxy.selectNextCard (' + eventValue + ')');
    if (this.proxy.index < 0) // if -1 then no value was previously chosen, so pick a random one
    {
        this.proxy.index = Math.floor(Math.random() * strategy.length);
    }
    this.proxy.index = (this.proxy.index+1) % strategy.length; // % is modulus operator
    this.produceMFStringCard ();
    this.proxy.newCardTime = timestamp + 0.1;
  }
}

;

	this.printAllStrategies = function ()
{
  var i;
  var saveTrace = terseTrace; // remember prior value
  terseTrace = true;
  console.error ('');
  console.error ('            Oblique Strategies');
  console.error ('  (Over One Hundred Worthwhile Dilemmas)');
  console.error ('      by Brian Eno and Peter Schmidt');
  console.error ('');
  for (i=0; i < strategy.length; i++)
  {
    this.forcePrint (strategy[i]); // to Browser console
  }
  console.error ('');
  terseTrace = saveTrace; // restore prior value
}
// ===============;

	this.initialize = function () // no parameters allowed
{
  // The this.initialize() functino is automatically invoked when the Script node is first activated, prior to other events
  
  this.printAllStrategies(); // output goes to browser console
  
  this.proxy.index = this.proxy.index % strategy.length; // sometimes modulo operator does not work on negative numbers
  this.tracePrint ('initial this.proxy.index = ' + this.proxy.index);
  
  if ((this.proxy.index >= 0) && (this.proxy.index < strategy.length))
  {
    // type conversion: Javascript string array to X3D MFString array
    this.proxy.string_changed = new MFString (strategy[this.proxy.index]); // expects length of one
    this.tracePrint ('this.initialize() this.proxy.string_changed=' + this.proxy.string_changed);
  }
  else if (this.proxy.index === -1)
  {
    this.tracePrint ('this.initialize() this.proxy.index = -1, no initial value chosen'); // report error to console
  }
  else
  {
    this.forcePrint ('this.initialize() this.proxy.index=' + this.proxy.index + ' out of bounds, reset to 0'); // report error to console
    this.proxy.index = 0;
  }
  this.generateTextToSpeechUrl ();
  this.tracePrint ('============================'); // done with this.initialize
}
// =======;

};
if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined'] = {};
}

X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'] = new X3DJSON['Script../data/ObliqueStrategies.jsonundefined']['TextScript']();
if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined'] = {};
}
if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'] = {};
}

if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION'] = {};
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].proxy = X3DJSON.createProxy(X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION'],X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']);
}
if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].initialize === "function") X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].initialize();
if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined'] = {};
}
if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'] = {};
}

if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION']['string'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION']['string'] = [];
}
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION']['string'].push(function(property, value) {
		if (property === 'string') {
			X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('CardText','string',typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].string_changed === "function" ? X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].string_changed() : X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].string, __eventTime);
		}
});
			X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('CardText','string',typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].string_changed === "function" ? X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].string_changed() : X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].string, __eventTime);
if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined'] = {};
}
if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'] = {};
}

if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION']['textToSpeechUrl'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION']['textToSpeechUrl'] = [];
}
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION']['textToSpeechUrl'].push(function(property, value) {
		if (property === 'textToSpeechUrl') {
			X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('TextToSpeechAudioClip','url',typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl() : X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl, __eventTime);
		}
});
			X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('TextToSpeechAudioClip','url',typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl() : X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl, __eventTime);
if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined'] = {};
}
if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'] = {};
}

if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION']['newCardTime'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION']['newCardTime'] = [];
}
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION']['newCardTime'].push(function(property, value) {
		if (property === 'newCardTime') {
			X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('TextToSpeechAudioClip','startTime',typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].newCardTime === "function" ? X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].newCardTime() : X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].newCardTime, __eventTime);
		}
});
			X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('TextToSpeechAudioClip','startTime',typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].newCardTime === "function" ? X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].newCardTime() : X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].newCardTime, __eventTime);
X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('PreviousTextClickedSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].selectPreviousCard(X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('PreviousTextClickedSensor','isActive'), __eventTime);
}, false);
			X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].selectPreviousCard(X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('PreviousTextClickedSensor','isActive'), __eventTime);
X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('NextTextClickedSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].selectNextCard(X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('NextTextClickedSensor','isActive'), __eventTime);
}, false);
			X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].selectNextCard(X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('NextTextClickedSensor','isActive'), __eventTime);
X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('RandomTextClickedSensor').addEventListener('outputchange', function(event) {
			X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].selectRandomCard(X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('RandomTextClickedSensor','isActive'), __eventTime);
}, false);
			X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].selectRandomCard(X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('RandomTextClickedSensor','isActive'), __eventTime);
if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined'] = {};
}
if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'] = {};
}

if (typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION']['textToSpeechUrl'] === 'undefined') {
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION']['textToSpeechUrl'] = [];
}
X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript']['ACTION']['textToSpeechUrl'].push(function(property, value) {
		if (property === 'textToSpeechUrl') {
			X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('TextToSpeechAnchor','url',typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl() : X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl, __eventTime);
		}
});
			X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('TextToSpeechAnchor','url',typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl() : X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl, __eventTime);
			X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('CardText','string',typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].string_changed === "function" ? X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].string_changed() : X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].string, __eventTime);
			X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('TextToSpeechAudioClip','url',typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl() : X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl, __eventTime);
			X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('TextToSpeechAudioClip','startTime',typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].newCardTime === "function" ? X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].newCardTime() : X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].newCardTime, __eventTime);
			X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].selectPreviousCard(X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('PreviousTextClickedSensor','isActive'), __eventTime);
			X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].selectNextCard(X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('NextTextClickedSensor','isActive'), __eventTime);
			X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].selectRandomCard(X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('RandomTextClickedSensor','isActive'), __eventTime);
			X3DJSON['../data/ObliqueStrategies.jsonundefined'].nodeUtil('TextToSpeechAnchor','url',typeof X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl === "function" ? X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl() : X3DJSON['Obj../data/ObliqueStrategies.jsonundefined']['TextScript'].textToSpeechUrl, __eventTime);