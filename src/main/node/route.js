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


/**
 **************************************************************************
 * NOTE:  Fields may not have commas.  Also, quotes in individual SFStrings in
 * fields are questionable, and may not work.
 **************************************************************************
 */
test2();
test3();
test();
test4();

/**
 * Override this to get rid of self-test code
 * proxyAction should be paired with a node exclusively
 *
 */
function test4() {
	raw("================================================================================");
	var fromNode = {"d":0,"f":0};
	var toNode = {"a":0};
	info("fromNode originally "+stringify(fromNode));
	info("toNode originally "+stringify(toNode));
	var fromProxyAction = {};
	var fromProxy = createProxy(fromProxyAction, fromNode);
	var toProxyAction = {};
	var toProxy = createProxy(toProxyAction, toNode);

	route(fromProxyAction, fromProxy, '"d"', toProxy, '"a"');
	route(fromProxyAction, fromProxy, '"d"', fromProxy, '"f"');

	setField(fromProxy, '"d"', 5);
	assert(fromNode,{"d":5,"f":5});
	assert(toNode,{"a":5});
	assert(fromProxy,{"d":5});

}

/**
 * Override this to get rid of self-test code
 * proxyAction should be paired with a node exclusively
 *
 * This test case implements chaining
 */
function test3() {
	raw("================================================================================");
	var fromNode = {"d":0,"f":0};
	var toNode = {"a":0};
	info("fromNode originally "+stringify(fromNode));
	info("toNode originally "+stringify(toNode));
	var fromProxyAction = {};
	var fromProxy = createProxy(fromProxyAction, fromNode);
	var toProxyAction = {};
	var toProxy = createProxy(toProxyAction, toNode);

	route(fromProxyAction, fromProxy, '"d"', toProxy, '"a"');
	route(toProxyAction, toProxy, '"a"', fromProxy, '"f"');

	setField(fromProxy, '"d"', 5);
	assert(fromNode,{"d":5,"f":5});
	setField(fromProxy, '"f"', 6);
	assert(fromNode,{"d":5,"f":6});

	assert(toProxy,{"a":5});
	assert(fromProxy,{"d":5});

	assert(toNode,{"a":5});
}

/**
 * Override this to get rid of self-test code
 * proxyAction should be paired with a node exclusively
 *
 *
 * This test case implements chaining
 */
function test2() {
	raw("================================================================================");
	var fromNode = [ {d: { f: 7 , e: [1, 2, 3]}}, { c : [4]}]
	var toNode = fromNode;
	info("Node originally "+stringify(fromNode));
	assert(fromNode, toNode);
	var fromProxyAction = {};
	var fromProxy = createProxy(fromProxyAction, fromNode);
	var toProxyAction = {};
	var toProxy = createProxy(toProxyAction, toNode);

	// Create actionable fields in the fromNode, that set
	// fields in the toNode
	//
	// fields are MFStrings which follow a path down the node, one
	// element at a time.  The final SFSTring is thei field to modify.
	//
	// This does not handle script nodes yet (both getting and setting
	// values, but could possibly be handled by modifying SetInternalField.
	//
	route(fromProxyAction, fromProxy, '"0" "d" "e" "0"', toProxy, '"1" "c"');
	route(toProxyAction, toProxy, '"1" "c"', fromProxy, '"0"');
	// no changes to node yet
	assert(fromNode, [{"d":{"f":7,"e":[1,2,3]}},{"c":[4]}]);

	setField(fromProxy, '"0" "d" "e" "0"', 5); 
	assert(fromNode, [5,{"c":5}]);

	info("Node finally "+stringify(fromNode));
}

/**
 * Override this to get rid of self-test code
 * proxyAction should be paired with a node exclusively
 *
 * WARNING!!!!!  this test case does not implement chaining.  See above
 */
function test() {
	raw("================================================================================");
	var fromNode = [ {d: { f: 7 , e: [1, 2, 3]}}, { c : [4]}]
	var toNode = fromNode;
	info("Node originally "+stringify(fromNode));
	assert(fromNode, toNode);
	var proxyAction = {};
	var proxy = createProxy(proxyAction, fromNode);

	// Create actionable fields in the fromNode, that set
	// fields in the toNode
	//
	// fields are MFStrings which follow a path down the node, one
	// element at a time.  The final SFSTring is thei field to modify.
	//
	// This does not handle script nodes yet (both getting and setting
	// values, but could possibly be handled by modifying SetInternalField.
	//
	route(proxyAction, proxy, '"0" "d" "e" "0"', toNode, '"1" "c"');
	route(proxyAction, proxy, '"0" "d"', toNode, '"1"');
	route(proxyAction, proxy, '"0" "A"', toNode, '"0" "B"');
	// no changes to node yet
	assert(fromNode, [{"d":{"f":7,"e":[1,2,3]}},{"c":[4]}]);

	setField(proxy, '"0" "d" "e" "0"', 5); 
	assert(fromNode, [{"d":{"f":7,"e":[5,2,3]}},{"c":5}]);
	setField(proxy, '"0" "d" "e" "1"', 8); 
	assert(fromNode, [{"d":{"f":7,"e":[5,8,3]}},{"c":5}]);
	setField(proxy, '"0" "d"', 6);
	assert(fromNode, [{"d":6},6]);
	setField(proxy, '"0" "d"', 9);
	assert(fromNode, [{"d":9},9]);
	// add field'
	setField(proxy, '"0" "A"',  10);
	assert(fromNode, [{"d":9,"B":10,"A":10},9]);
	setField(proxy, '"0" "A"', [ "Test!" ]);
	assert(fromNode, [{"d":9,"B":["Test!"],"A":["Test!"]},9]);
	setField(proxy, '"0" "B"', null);
	assert(fromNode, [{"d":9,"B":null,"A":["Test!"]},9]);
	setField(proxy, '"0" "A" "0" "0"', ["Cr"]);  // set a part of a string
	assert(fromNode, [{"d":9,"B":null,"A":["Crest!"]},9]);
	setField(proxy, '"0" "A"', { "/": "/" }); // now A and B point to same
	assert(fromNode, [{"d":9,"B":{"/":"/"},"A":{"/":"/"}},9]);
	setField(proxy, '"0" "A" "/"', "\\");
	assert(fromNode, [{"d":9,"B":{"/":"\\"},"A":{"/":"\\"}},9]);
	setField(proxy, '"0" "A"', { "\\": "\\" }); // now A and B point to same
	assert(fromNode, [{"d":9,"B":{"\\":"\\"},"A":{"\\":"\\"}},9]);
	setField(proxy, '"0" "A" "\\"', "]");
	assert(fromNode, [{"d":9,"B":{"\\":"]"},"A":{"\\":"]"}},9]);
	setField(proxy, '"0" "A"', { "]" : "]" }); // now A and B point to same
	assert(fromNode, [{"d":9,"B":{"]":"]"},"A":{"]":"]"}},9]);
	setField(proxy, '"0" "A" "]"', "[");
	assert(fromNode, [{"d":9,"B":{"]":"["},"A":{"]":"["}},9]);
	setField(proxy, '"0" "A"', { "[" : "[" }); // now A and B point to same
	assert(fromNode, [{"d":9,"B":{"[":"["},"A":{"[":"["}},9]);
	setField(proxy, '"0" "A" "["', "][");
	assert(fromNode, [{"d":9,"B":{"[":"]["},"A":{"[":"]["}},9]);
	setField(proxy, '"0" "A"', { "][" : "][" }); // now A and B point to same
	assert(fromNode, [{"d":9,"B":{"][":"]["},"A":{"][":"]["}},9]);
	setField(proxy, '"0" "A" "]["', "][][" );
	assert(fromNode, [{"d":9,"B":{"][":"][]["},"A":{"][":"][]["}},9]);
	setField(proxy, '"0" "A"', { "][][" : "][][" }); // now A and B point to same
	assert(fromNode, [{"d":9,"B":{"][][":"][]["},"A":{"][][":"][]["}},9]);
	setField(proxy, '"0" "A" "][]["',   "[][]");
	assert(fromNode, [{"d":9,"B":{"][][":"[][]"},"A":{"][][":"[][]"}},9]);
	setField(proxy, '"0" "A"', { "[][]" : "[][]" }); // now A and B point to same
	assert(fromNode, [{"d":9,"B":{"[][]":"[][]"},"A":{"[][]":"[][]"}},9]);
	setField(proxy, '"0" "A" "[][]"', "C");
	assert(fromNode, [{"d":9,"B":{"[][]":"C"},"A":{"[][]":"C"}},9]);
	assert(fromNode, toNode);
	info("Node finally "+stringify(fromNode));
}

function setField(proxy, fromField, value) {
	var selector = MFStringToProperty(fromField);
	raw("\n");
	info("Storing "+fromField+" = "+selector+" = "+stringify(value)+" in Proxy");
	proxy[selector] = value;
}

/**
 * Override this if you don't want test warnings about node
 */

function assert(modifiedNode, goldenNode) {
	var mod = stringify(modifiedNode);
	var testcase = stringify(goldenNode);
	if (mod !== testcase) {
		fatal("Node "+mod)
		fatal("        != "+testcase);
	} else {
		info("Node "+mod+" == "+testcase);
		info("TEST PASSED");
	}
}

/**
 * Pass in a JSON parseable object be stringified,
 * or a regular JSON object.  Or a string to be parsed.
 * selector returned the is the field into the proxy.
 *
 * This should normalize the string, but there may be issues
 * with ordering objects.
 */
function stringify(selectorField) {
	if (typeof selectorField === 'string') {
		debug("selector output "+selectorField);
		return selectorField;
	/*
		var indexes = parse(selectorField);
		var selector = JSON.stringify(indexes);
		debug("selector output "+selector);
		return selector;
	*/
	} else {
		var selector = JSON.stringify(selectorField);
		debug("selector output "+selector);
		return selector;
	}
}

/**
 * breaks up selectorField into component pieces and returns them
 */
function parse(selectorField) {
	debug("selector input "+selectorField);
	if (typeof selectorField === 'string') {
		var indexes = JSON.parse(selectorField);
		return indexes;
	} else {
		return selectorField;
	}
}

/**
 * return a valid Property
 *
 * change this to do something else if you also change PropertyToJson()
 */
function MFStringToProperty(string) {
	debug("MFString input "+string+" "+typeof string);
	string = string.replace(/" "/g, ',');
	string = string.substr(1, string.length-2);
	return string;
}

/*
function JsonToMFString(json) {
	var str = stringify(json).split(/,/).join('" "')
	str = "'"+str.substr(1, str.length-2)+'"';
	return str;
}
*/

/**
 * convert a property to JSON
 * 
 * change this to return string if you also modify MFStringToProperty()
 *
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
 * setInternalField() --  set a field in a node internally.  Use
 * setField() and set up routes and the proxy object on the node so
 * events flow.
 * Override this if you want a different selector language.
 * The node is the javascript object to set the field to value on.
 * selectorField is a JSON array path of keys and indexes into the node.
 * 	You may use quotes to backslashes to escape things
 * The value is set in the node at the selectorField location
 *
 * The client may want the select to impact several objects.  That is up
 * to the implementer of setInternalField().  The selectorField affects the
 * node.
 * Right now we just have a simple JavaScript implementation.  Something like
 * JSONField is realizable in this framework I think.
 *
 * You should not use this method to set values on the proxy.
 *
 * Calls:
 * 	stringify: to return a string for viewing.
 * 	parse: to return javascript object indexes as a selector.
 */
function setInternalField(node, selectorField, value) {
	debug("Node before "+ stringify(node));
	var skipDescendants = 0; // number of descendents to skip
	var selectedValue = node;
	var higherValue = selectedValue;
	var selector  = PropertyToJson(selectorField);
	var depth = (selector.length - skipDescendants);
	debug("Trying to Set "+stringify(node)+stringify(selector)+" = "+
		stringify(value));
	for (var index = 0; index < depth - 1; index++) {
		debug("Index "+index+" is "+selector[index]);
		higherValue = selectedValue;
		debug("Previous downselected selectedValue === "+
			stringify(selectedValue));
		debug("Index "+index+" is "+selector[index]);
		debug("New Selected Value === "+selectedValue[selector[index]]);
		selectedValue = selectedValue[selector[index]];
		if (typeof selectedValue === 'undefined') {
			// not sure how we got here, but let's bail
			warning("I think we just wiped something out. "+selectorField+" is unavailable.");
			return true;
		}
		debug("Now downselected selectedValue === "+selectedValue);
	}
	if (typeof value === 'string') {
		value = value.replace(/\\\\/g, '\u005c');
	}
	debug("Index "+index+" is "+selector[index]);
	/**
	 * This is the code that has to change to call functions in X3D Scripts
	 * fields.   For toField, I would check to make sure the LHS is a
	 * function, and pass a value to the function (along with a timestamp),
	 * for From Field, I would make sure value is a function, and call it
	 * with a timestamp.
	 */
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
	raw("RESULT node "+stringify(node));
	return true;
}


/**
 * This proxy works on individual values in a node, because a shadow
 * node is keep with fromField kept as proxy objects.
 *
 * If a route hasn't been set up yet, then the toNode is not affected,
 * unless it's a part of the fromSceneGraph.
 */

function createProxy(proxyAction, fromNode) {
	var proxy = new Proxy(proxyAction, {
		get : function(target, property, receiver) {
			return fromNode[property];
		},
		set : function(target, property, value, receiver) {
			debug("Value set is "+value);
			debug("property is "+ property);
			if (typeof proxyAction[property] === 'object') {
				for (var route in proxyAction[property]) {
					// set the toNode, act on the route
					debug("route"+route+" "+typeof proxyAction[property][route]);
					if (typeof proxyAction[property][route] === 'function') {
						proxyAction[property][route](property, value);
					}
				}
			} else {
				warning("Failed to set value on toNode (no route for "+property+")");
			}
			return setInternalField(fromNode, property, value);
		}
	});
	return proxy;
}

/**
 * Proxy action, set on route.   This should only be called when a route
 * is in place.  It's private an should not be called by others.
 * Node are JavaSCript objects
 * Field are selectors into node.
 * property is the property being set and should be equal to fromField
 * value is the value being set on the toNode.   To set the
 * fromNode, use setField() on the proxy or setInternalField, if you don'
 * want to affect the toNode.
 */
function proxySetAction(fromNode, fromField, toNode, toField, property, value) {
	var fromProperty = MFStringToProperty(fromField);
	if (fromProperty != property) {
		fatal("from"+fromField+" out of sync with property "+property+".  Did you forget to set a route?");
	}
	debug("fromField is "+fromField);
	debug("toField is "+toField);
	debug("property is "+property);
	var toProperty = MFStringToProperty(toField);
	debug("toProperty is "+toProperty);
	if (toNode === fromNode && fromField === toField) {
		warning("We don't need to set the same value twice!");
	} else {
		setInternalField(toNode, toProperty, value);
		// set the proxy too
		setField(toNode, toField, value);
	}

	return true;
}

/**
 * Activate a proxy route from fromField to toField
 * The proxy map is a private object which must be passed around.  I will later
 * make it unaccessible.
 * Field are selectors which can be used with setInternalField()
 * fromNode and toNode may be separate.  If they are the
 * same, be sure that fromField and toField are distinct, or else the
 * results may be undetermined.
 */
function route(proxyAction, fromNode, fromField, toNode, toField) {
	info("<ROUTE fromField='"+ fromField+ "' "+ "toField='"+ toField+ "'/>"
		);
	if (fromNode === toNode &&
		fromField.startsWith(toField) &&
		toField.startsWith(fromField) &&
		fromField !== toField) {
		warning("possible undetermined behavior, fromField "+fromField+" and toField "+toField+" overlap and the node are the same");
	}
	if (typeof proxyAction[MFStringToProperty(fromField)] === 'undefined') {
		proxyAction[MFStringToProperty(fromField)] = [];
	}
	proxyAction[MFStringToProperty(fromField)].push(function(property, value) {
		return proxySetAction(fromNode, fromField,
			toNode, toField,
			property, value);
	});
}
