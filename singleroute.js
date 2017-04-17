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
 * proxyAction should be paired with a node exclusively
 */
function test() {
	let fromNode = {"d":0,"f":0};
	let toNode = {"a":0};
	info("fromNode originally "+stringify(fromNode));
	info("toNode originally "+stringify(toNode));
	let fromProxyAction = {};
	let fromProxy = createProxy(fromProxyAction, fromNode);
	let toProxyAction = {};
	let toProxy = createProxy(toProxyAction, toNode);

	route(fromProxyAction, fromProxy, 'd', toProxy, 'a');
	route(toProxyAction, toProxy, 'a', fromProxy, 'f');

	fromProxy["d"] = 5;
	assert(fromProxy,{"d":5,"f":5});
	fromProxy["f"] = 6;
	assert(fromProxy,{"d":5,"f":6});
	assert(fromNode,{"d":5,"f":6});
	assert(toProxy,{"a":5});
	assert(toNode,{"a":5});
}

function setField(proxy, fromField, value) {
	let selector = MFStringToProperty(fromField);
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
		let indexes = parse(selectorField);
		let selector = JSON.stringify(indexes);
		debug("selector output "+selector);
		return selector;
	*/
	} else {
		let selector = JSON.stringify(selectorField);
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
		let indexes = JSON.parse(selectorField);
		return indexes;
	} else {
		return selectorField;
	}
}

function MFStringToProperty(string) {
	/*
	debug("MFString input "+string+" "+typeof string);
	string = string.replace(/" "/g, ',');
	string = string.substr(1, string.length-2);
	*/
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
	/*
	debug("property input "+string+" "+typeof string);
	return string.split(/,/);
	*/
	return string;
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
	let skipDescendants = 0; // number of descendents to skip
	let selectedValue = node;
	let higherValue = selectedValue;
	var selector  = PropertyToJson(selectorField);
	let depth = (selector.length - skipDescendants);
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
			for (let action in proxyAction) {
				debug("	"+action+" "+typeof proxyAction[action]);
			}
			if (typeof proxyAction[property] === 'function') {
				// set the toNode, act on the route
				proxyAction[property](property, value);
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
	let fromProperty = MFStringToProperty(fromField);
	if (fromProperty != property) {
		fatal("from"+fromField+" out of sync with property "+property+".  Did you forget to set a route?");
	}
	debug("fromField is "+fromField);
	debug("toField is "+toField);
	debug("property is "+property);
	let toProperty = MFStringToProperty(toField);
	debug("toProperty is "+toProperty);
	if (toNode == fromNode && fromField == toField) {
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
	proxyAction[MFStringToProperty(fromField)] = function(property, value) {
		return proxySetAction(fromNode, fromField,
			toNode, toField,
			property, value);
	};
}
