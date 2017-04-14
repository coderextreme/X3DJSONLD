'use strict';
/*
Copyright (c) 2017, John Carlson
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

* Neither the name of content nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE
*/


test();

/**
 * Override this to get rid of self-test code
 * proxyAction should be paired with a scenegraph exclusively
 */
function test() {
	let fromScenegraph = [ {d: { f: 7 , e: [1, 2, 3]}}, { c : [4]}]
	let toScenegraph = fromScenegraph;
	info("Scenegraph originally "+stringify(fromScenegraph));
	assert(fromScenegraph, toScenegraph);
	let proxyAction = {};
	let proxy = createProxy(proxyAction, fromScenegraph);

	// Create actionable fields in the fromScenegraph, that set
	// fields in the toScenegraph
	//
	// path are JSON objects which follw a path down the scenegraph, one
	// element at a time.
	route(proxyAction,
		fromScenegraph, '"0" "d" "e" "0"',
		toScenegraph, '"1" "c"');
	route(proxyAction,
		fromScenegraph, '"0" "d"',
		toScenegraph, '"1"');
	route(proxyAction,
		fromScenegraph, '"0" "A"',
		toScenegraph, '"0" "B"');
	// no changes to scenegraph yet
	assert(fromScenegraph, [{"d":{"f":7,"e":[1,2,3]}},{"c":[4]}]);

	setField(proxy, '"0" "d" "e" "0"', 5); 
	assert(fromScenegraph, [{"d":{"f":7,"e":[5,2,3]}},{"c":5}]);
	setField(proxy, '"0" "d" "e" "1"', 8); 
	assert(fromScenegraph, [{"d":{"f":7,"e":[5,8,3]}},{"c":5}]);
	setField(proxy, '"0" "d"', 6);
	assert(fromScenegraph, [{"d":6},6]);
	setField(proxy, '"0" "d"', 9);
	assert(fromScenegraph, [{"d":9},9]);
	// add field'
	setField(proxy, '"0" "A"',  10);
	assert(fromScenegraph, [{"d":9,"B":10,"A":10},9]);
	setField(proxy, '"0" "A"', [ "Test!" ]);
	assert(fromScenegraph, [{"d":9,"B":["Test!"],"A":["Test!"]},9]);
	setField(proxy, '"0" "B"', null);
	assert(fromScenegraph, [{"d":9,"B":null,"A":["Test!"]},9]);
	setField(proxy, '"0" "A" "0" "0"', ["Cr"]);  // set a part of a string
	assert(fromScenegraph, [{"d":9,"B":null,"A":["Crest!"]},9]);
	setField(proxy, '"0" "A"', { "/": "/" }); // now A and B point to same
	assert(fromScenegraph, [{"d":9,"B":{"/":"/"},"A":{"/":"/"}},9]);
	setField(proxy, '"0" "A" "/"', "\\");
	assert(fromScenegraph, [{"d":9,"B":{"/":"\\"},"A":{"/":"\\"}},9]);
	setField(proxy, '"0" "A"', { "\\": "\\" }); // now A and B point to same
	assert(fromScenegraph, [{"d":9,"B":{"\\":"\\"},"A":{"\\":"\\"}},9]);
	setField(proxy, '"0" "A" "\\"', "]");
	assert(fromScenegraph, [{"d":9,"B":{"\\":"]"},"A":{"\\":"]"}},9]);
	setField(proxy, '"0" "A"', { "]" : "]" }); // now A and B point to same
	assert(fromScenegraph, [{"d":9,"B":{"]":"]"},"A":{"]":"]"}},9]);
	setField(proxy, '"0" "A" "]"', "[");
	assert(fromScenegraph, [{"d":9,"B":{"]":"["},"A":{"]":"["}},9]);
	setField(proxy, '"0" "A"', { "[" : "[" }); // now A and B point to same
	assert(fromScenegraph, [{"d":9,"B":{"[":"["},"A":{"[":"["}},9]);
	setField(proxy, '"0" "A" "["', "][");
	assert(fromScenegraph, [{"d":9,"B":{"[":"]["},"A":{"[":"]["}},9]);
	setField(proxy, '"0" "A"', { "][" : "][" }); // now A and B point to same
	assert(fromScenegraph, [{"d":9,"B":{"][":"]["},"A":{"][":"]["}},9]);
	setField(proxy, '"0" "A" "]["', "][][" );
	assert(fromScenegraph, [{"d":9,"B":{"][":"][]["},"A":{"][":"][]["}},9]);
	setField(proxy, '"0" "A"', { "][][" : "][][" }); // now A and B point to same
	assert(fromScenegraph, [{"d":9,"B":{"][][":"][]["},"A":{"][][":"][]["}},9]);
	setField(proxy, '"0" "A" "][]["',   "[][]");
	assert(fromScenegraph, [{"d":9,"B":{"][][":"[][]"},"A":{"][][":"[][]"}},9]);
	setField(proxy, '"0" "A"', { "[][]" : "[][]" }); // now A and B point to same
	assert(fromScenegraph, [{"d":9,"B":{"[][]":"[][]"},"A":{"[][]":"[][]"}},9]);
	setField(proxy, '"0" "A" "[][]"', "C");
	assert(fromScenegraph, [{"d":9,"B":{"[][]":"C"},"A":{"[][]":"C"}},9]);
	assert(fromScenegraph, toScenegraph);
	info("Scenegraph finally "+stringify(fromScenegraph));
}

function setField(proxy, fromPath, value) {
	let selector = MFStringToProperty(fromPath);
	raw("\n");
	info("Storing "+fromPath+" = "+selector+" = "+stringify(value)+" in Proxy");
	proxy[selector] = value;
}

/**
 * Override this if you don't want test warnings about scenegraphs
 */

function assert(modifiedScenegraph, goldenScenegraph) {
	var mod = stringify(modifiedScenegraph);
	var testcase = stringify(goldenScenegraph);
	if (mod !== testcase) {
		fatal("Scenegraph "+mod)
		fatal("        != "+testcase);
	} else {
		debug("Scenegraph "+mod+" == "+testcase);
		info("TEST PASSED");
	}
}

/**
 * Pass in a JSON parseable object be stringified,
 * or a regular JSON object.  Or a string to be parsed.
 * selector returned the is the path into the proxy.
 *
 * This should normalize the string, but there may be issues
 * with ordering objects.
 */
function stringify(selectorPath) {
	if (typeof selectorPath === 'string') {
		debug("selector output "+selectorPath);
		return selectorPath;
	/*
		let indexes = parse(selectorPath);
		let selector = JSON.stringify(indexes);
		debug("selector output "+selector);
		return selector;
	*/
	} else {
		let selector = JSON.stringify(selectorPath);
		debug("selector output "+selector);
		return selector;
	}
}

/**
 * breaks up selectorPath into component pieces and returns them
 */
function parse(selectorPath) {
	debug("selector input "+selectorPath);
	if (typeof selectorPath === 'string') {
		let indexes = JSON.parse(selectorPath);
		return indexes;
	} else {
		return selectorPath;
	}
}

function MFStringToProperty(string) {
	debug("MFString input "+string+" "+typeof string);
	string = string.replace(/" "/g, ',');
	string = string.substr(1, string.length-2);
	return string;
}

/*
function JsonToMFString(json) {
	let str = stringify(json).split(/,/).join('" "')
	str = "'"+str.substr(1, str.length-2)+'"';
	return str;
}
*/

function PropertyToJson(string) {
	debug("property input "+string+" "+typeof string);
	return string.split(/,/);
}

/** override this function if you want a feature other than a raw message
 */
function raw(string) {
	console.log(string);
}

/** override this function if you want a feature other than a fatal message
 */
function fatal(string) {
	console.error("FATAL: "+string);
}

/** override this function if you want a feature other than a warning message
 */
function warning(string) {
	console.error("============ WARNING: "+string);
}

/** override this function if you want a feature other than console.log or to
 * disable this function
 */
function debug(string) {
	// raw(string);
}

/** override this function if you want a feature other than console.log or to
 * disable this function
 */
function info(string) {
	raw("****** "+string);
}

/**
 * setInternalField() --  set a field in a scenegraph internally.  Use
 * setField() and set up routes and the proxy object on the scenegraph so
 * events flow.
 * Override this if you want a different selector language.
 * The scenegraph is the javascript object to set the path to value on.
 * selectorPath is a JSON array path of keys and indexes into the scenegraph.
 * 	You may use quotes to backslashes to escape things
 * The value is set in the scenegraph at the selectorPath location
 *
 * The client may want the select to impact several objects.  That is up
 * to the implementer of setInternalField().  The selectorPath affects the
 * scenegraph.
 * Right now we just have a simple JavaScript implementation.  Something like
 * JSONPath is realizable in this framework I think.
 *
 * You should not use this method to set values on the proxy.
 *
 * Calls:
 * 	stringify: to return a string for viewing.
 * 	parse: to return javascript object indexes as a selector.
 */
function setInternalField(scenegraph, selectorPath, value) {
	debug("Scenegraph before "+ stringify(scenegraph));
	let skipDescendants = 0; // number of descendents to skip
	let selectedValue = scenegraph;
	let higherValue = selectedValue;
	var selector  = PropertyToJson(selectorPath);
	let depth = (selector.length - skipDescendants);
	debug("Trying to Set "+stringify(scenegraph)+stringify(selector)+" = "+
		stringify(value));
	for (var index = 0; index < depth - 1; index++) {
		debug("Index "+index+" is "+selector[index]);
		higherValue = selectedValue;
		debug("Previous downselected selectedValue === "+
			stringify(selectedValue));
		debug("Index "+index+" is "+selector[index]);
		debug("New Selected Value === "+selectedValue[selector[index]]);
		selectedValue = selectedValue[selector[index]];
		debug("Now downselected selectedValue === "+selectedValue);
	}
	if (typeof value === 'string') {
		value = value.replace(/\\\\/g, '\u005c');
	}
	debug("Index "+index+" is "+selector[index]);
	if (typeof selectedValue === 'string') {
	    var str = selectedValue.split('');
		    info("Setting "+ stringify(higherValue) +
			"[" + selector[depth-2] + "] = "+
			stringify(value));
		    str[selector[depth-1]] = value;
		    higherValue[selector[depth-2]] = str.join('');
		    // unless there's more than one
	} else {
		info("Setting "+
			stringify(selectedValue) +
			"[" + selector[depth-1] + "] = "+ stringify(value));
		selectedValue[selector[depth-1]] = value;
		// unless there's more than one
	}
	raw("RESULT scenegraph "+stringify(scenegraph));
	return true;
}


/**
 * This proxy works on individual values in a scenegraph, because a shadow
 * scenegraph is keep with fromPaths kept as proxy objects.
 *
 * If a route hasn't been set up yet, then the toScenegraph is not affected,
 * unless it's a part of the fromSceneGraph.
 */

function createProxy(proxyAction, fromScenegraph) {
	var proxy = new Proxy(proxyAction, {
		set : function(target, property, value, receiver) {
			debug("Value set is "+value);
			debug("property is "+ property);
			for (let action in proxyAction) {
				debug("	"+action+" "+typeof proxyAction[property]);
			}
			if (typeof proxyAction[property] === 'function') {
				// set the toScenegraph, act on the route
				proxyAction[property](property, value);
			} else {
				warning("Failed to set value on toScenegraph (no route)");
			}
			return setInternalField(fromScenegraph, property, value);
		}
	});
	return proxy;
}

/**
 * Proxy action, set on route.   This should only be called when a route
 * is in place.  It's private an should not be called by others.
 * Scenegraphs are JavaSCript objects
 * Paths are selectors into scenegraphs.
 * property is the property being set and should be equal to fromPath
 * value is the value being set on the toScenegraph.   To set the
 * fromScenegraph, use setField() on the proxy or setInternalField, if you don'
 * want to affect the toScenegraph.
 */
function proxySetAction(fromScenegraph, fromPath, toScenegraph, toPath, property, value) {
	let fromProperty = MFStringToProperty(fromPath);
	if (fromProperty != property) {
		fatal("from"+fromPath+" out of sync with property "+property+".  Did you forget to set a route?");
	}
	debug("fromPath is "+fromPath);
	debug("toPath is "+toPath);
	debug("property is "+property);
	let toProperty = MFStringToProperty(toPath);
	debug("toProperty is "+toProperty);
	if (toScenegraph == fromScenegraph && fromPath == toPath) {
		warning("We don't need to set the same value twice!");
	} else {
		setInternalField(toScenegraph, toProperty, value);
	}

	return true;
}

/**
 * Activate a proxy route from fromPath to toPath
 * The proxy map is a private object which must be passed around.  I will later
 * make it unaccessible.
 * Paths are selectors which can be used with setInternalField()
 * fromScenegraph and toScenegraph may be separate.  If they are the
 * same, be sure that fromField and toField are distinct, or else the
 * results may be undetermined.
 */
function route(proxyAction, fromScenegraph, fromPath, toScenegraph, toPath) {
	info("<ROUTE fromPath='"+ fromPath+ "' "+ "toPath='"+ toPath+ "'/>"
		);
	if (fromScenegraph === toScenegraph &&
		fromPath.startsWith(toPath) &&
		toPath.startsWith(fromPath) &&
		fromPath !== toPath) {
		warning("possible undetermined behavior, fromPath "+fromPath+" and toPath "+toPath+" overlap and the scenegraphs are the same");
	}
	proxyAction[MFStringToProperty(fromPath)] = function(property, value) {
		return proxySetAction(fromScenegraph, fromPath,
			toScenegraph, toPath,
			property, value);
	};
}
