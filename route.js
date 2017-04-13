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
 */
function test() {
	let scenegraph = [ {d: { f: 7 , e: [1, 2, 3]}}, { c : [4]}]
	info("Scenegraph originally "+stringify(scenegraph));
	assert(scenegraph, [{"d":{"f":7,"e":[1,2,3]}},{"c":[4]}]);
	var fromProxyObject = routeAndSet(scenegraph, "0/d/e", "0", scenegraph, "1", "c", 5, proxySetAction);
	assert(scenegraph, [{"d":{"f":7,"e":[5,2,3]}},{"c":5}]);
	setProxyField(scenegraph, fromProxyObject, 1, 8);  // NON-WATCHED
	assert(scenegraph, [{"d":{"f":7,"e":[5,8,3]}},{"c":5}]);
	fromProxyObject = routeAndSet(scenegraph, "0", "d", scenegraph, "", "1", 6, proxySetAction);
	assert(scenegraph, [{"d":6},6]);
	setProxyField(scenegraph, fromProxyObject, "d", 9); // WATCHED
	assert(scenegraph, [{"d":9},9]);
	fromProxyObject = routeAndSet(scenegraph, "0", "A", scenegraph, "0", "B", 10, proxySetAction); // add fields
	assert(scenegraph, [{"d":9,"B":10,"A":10},9]);
	setProxyField(scenegraph, fromProxyObject, "A", [ "Test Goodbye!" ] ); // WATCHED
	assert(scenegraph, [{"d":9,"B":["Test Goodbye!"],"A":["Test Goodbye!"]},9]);
	setProxyField(scenegraph, fromProxyObject, "B", null); // WATCHED
	assert(scenegraph, [{"d":9,"B":null,"A":["Test Goodbye!"]},9]);
	info("Scenegraph finally "+stringify(scenegraph));
}

/**
 * Override this if you don't want test warnings about scenegraphs
 */

function assert(modifiedScenegraph, goldenScenegraph) {
	var mod = stringify(modifiedScenegraph);
	var testcase = stringify(goldenScenegraph);
	if (mod !== testcase) {
		fatal("Scenegraph "+mod+" != "+testcase);
	} else {
		debug("Scenegraph "+mod+" == "+testcase);
	}
}

/**
 * A proxy warning message.  Override if you want to proide another message.
 */

function proxyWarning(fromScenegraph, fromNode, fromField,
	toScenegraph, toNode, toField,
	property, value, target) {
	var from = JWCPathLikeSelector(fromScenegraph, fromNode);
	var to = JWCPathLikeSelector(toScenegraph, toNode);
	if (fromScenegraph !== toScenegraph || from != to) {
		warning("will set fromField "+stringify(from)+"["+property+"] = "+value+" but won't set "+stringify(to)+"["+toField+ "] = "+value+", but another proxy may.  The fromField will be set on the proxy object and in the scenegraph.  You may want to implement a multiproperty handler in your callback you pass to route()");
	} else {
		warning("Not setting to toNode "+stringify(to)+"["+toField+ "], even though the proxy is active on from object "+stringify(from)+".  You set up the proxy with fromField "+fromField+", not "+toField+". The fromField will be set on the proxy object.  You may want to implement a multiproperty handler in your callback you pass to route()");
	}
	return true;
}

/** override this function if you want a feature other than a fatal message
 */
function fatal(string) {
	console.error("============ FATAL: "+string);
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
	// console.log(string);
}

/** override this function if you want a feature other than console.log or to
 * disable this function
 */
function info(string) {
	console.log("****** "+string);
}

/**
 * override this if you want a different pretty printing function of
 * Scenegraph JavaScript data
 */
function stringify(json) {
	return JSON.stringify(json);
}

/**
 * Override this if you want a different selector language
 * Select an object to set a proxy on
 * scenegraph is a JavaScript object
 * selector is a / separated path of keys and indexes into the scenegraph
 * Returns the object in the the scenegraph that has the fromField or toField
 * of interest in it.
 *
 * A client may want to return a list of from this selector.  That is currently 
 * not implemented.  I am not sure if those would be live objects in the main
 * scenegraph or a whole new object.  It may be that JSON-LD (JSON linked
 * data-- not this project) will solve this problem, but I haven't investigated
 * it yet.  A solution is to provide several selectors, or wildcards.
 */
function JWCPathLikeSelector(scenegraph, selector) {
	debug("Selector scenegraph: "+stringify(scenegraph)+
		" selector is", selector );
	if (typeof(selector) !== 'undefined' && selector.trim() !== '') {
		var indexes = selector.split(/\//);
		for (var index in indexes) {
			if (indexes[index].trim() === '') {
				break;
			}
			scenegraph = scenegraph[indexes[index]];
			debug("Index was "+ indexes[index]+
				" Selected down to: "+
				stringify(scenegraph));
		}
	}
	if (typeof scenegraph !== 'object') {
		debug("Scenegraph "+scenegraph+" is not an object");
	}
	return scenegraph;
}

/**
 * Private proxy action
 * Typically not used by the client.
 * If fromField != property, then the toNode[toField] is left untouched
 */
function proxySetAction(fromScenegraph, fromNode, fromField,
			toScenegraph, toNode, toField,
			property, value, target) {
	debug("From Scenegraph before "+ stringify(fromScenegraph));
	debug("To Scenegraph before "+ stringify(toScenegraph));
	// TODO reorder setting of fields ????
	debug("In Proxy testing "+ property);
	let retval;
	// set toField to value
	if (fromField == property) {
	 	retval = setField(toScenegraph, toNode, toField, value);
	} else {
		retval = proxyWarning(fromScenegraph, fromNode, fromField,
					toScenegraph, toNode, toField,
					property, value, target);
	}
	// set fromField to value
	setField(fromScenegraph, fromNode, property, value);
	debug("From Scenegraph after "+ stringify(fromScenegraph));
	debug("To Scenegraph after "+ stringify(toScenegraph));
	return retval;
}

/**
 * Activate a proxy route from fromNode[fromField] to toNode[toField]
 * Nodes are selectors which can be used with JWCPathLikeSelector()
 * fromScenegraph and toScenegraph may be separate.  If they are the
 * same, be sure that fromField and toField are distinct, or else the
 * results may be undetermined.
 *
 * The callback function is similar to the set function, with added parameters
 * from the route call:
 *	boolean callback(
 *		fromScenegraph, fromNode, fromField,
 *		toScenegraph, toNode, toField,
 *		property, value, target, receiver)
 * You would use a callback function if you wanted to avoid warning messages
 * or if you wanted to implement a multiple property handler for your proxy
 * objects.
 *
 */
function route(fromScenegraph, fromNode, fromField,
		toScenegraph, toNode, toField, callback) {
	info("");
	info("<ROUTE fromNode='"+ fromNode+ "' "+
			  "fromField='"+fromField+ "' "+
			  "toNode='"+ toNode+ "' "+
			  "toField='"+ toField+ "' "+
			"/>"
		);
	if (fromScenegraph === toScenegraph &&
		fromNode.startsWith(toNode) &&
		toNode.startsWith(fromNode) &&
		fromNode !== toNode) {
		warning("possible undetermined behavior, fromNode and toNode overlap and the scenegraphs are the same");
	}
	var from = JWCPathLikeSelector(fromScenegraph, fromNode);
	debug("Selected from "+ stringify(from)+"["+fromField+"]");
	var to = JWCPathLikeSelector(toScenegraph, toNode);
	debug("Selected to "+stringify(to)+ "["+ toField+ "]");
	var fromProxyObject = new Proxy(from, {
		set : function(target, property, value, receiver) {
			if (typeof callback === 'function') {
				return callback(
					fromScenegraph, fromNode, fromField,
					toScenegraph, toNode, toField,
					property, value, target, receiver)
			} else {
				return proxySetAction(
					fromScenegraph, fromNode, fromField,
					toScenegraph, toNode, toField,
					property, value, target)
			}
		}
	});
	return fromProxyObject;
}

/**
 * get a field in a scenegraph
 * node are selectors which can be used with JWCPathLikeSelector() to select
 * an object n in the scenegraph.  The value of n[field] is returned.
 */
function getField(scenegraph, node, field) {
	var n = JWCPathLikeSelector(scenegraph, node);
	return n[field];
}

/**
 * set a field in a scenegraph
 * node are selectors which can be used with JWCPathLikeSelector() to select
 * an object n in the scenegraph.  The value of n[field] is set to value.  The
 * scenegraph is returned.
 */
function setField(scenegraph, node, field, value) {
	var n = JWCPathLikeSelector(scenegraph, node);
	info("Setting Field "+ stringify(n)+ "["+ field+ "] = "+ value);
	n[field] = value;
	return scenegraph;
}

/**
 * Activate a proxy route from fromNode[fromField] to toNode[toField]
 * Nodes are selectors which can be used with JWCPathLikeSelector()
 * fromScenegraph and toScenegraph may be separate.  If they are the
 * same, be sure that fromField and toField are distinct, or else the
 * results may be undetermined.  The proxy field is set to value.
 *
 * The callback function is similar to the set function, with added parameters
 * from the route call:
 *	callback(
 *		fromScenegraph, fromNode, fromField,
 *		toScenegraph, toNode, toField,
 *		property, value, target, receiver)
 * You would use a callback function if you wanted to avoid warning messages
 * or if you wanted to implement a multiple property handler for your proxy
 * objects.
 */
function routeAndSet(fromScenegraph, fromNode, fromField, toScenegraph, toNode, toField, value, callback) {
	debug("---------ROUTE AND SET----------------------------------");
	debug("To Scenegraph before "+ stringify(toScenegraph));
	debug("From field before "+ stringify(getField(fromScenegraph, fromNode, fromField)));
	debug("To field before "+ stringify(getField(toScenegraph, toNode, toField)));
	var fromProxyObject = route(fromScenegraph, fromNode, fromField, toScenegraph, toNode, toField, callback);
	setProxyField(fromScenegraph, fromProxyObject, fromField, value);
	debug("From field after "+ stringify(getField(fromScenegraph, fromNode, fromField)));
	debug("To field  after "+ stringify(getField(toScenegraph, toNode, toField)));
	debug("To Scenegraph after "+ stringify(toScenegraph));
	return fromProxyObject;
}

/**
 * The fromProxyObject[fromField] is set to value.
 */
function setProxyField(fromScenegraph, fromProxyObject, fromField, value) {
	debug("----------SETTING A PROXY FIELD-------------------------");
	debug("From Scenegraph before "+ stringify(fromScenegraph));
	info("");
	info("Proxy before "+ stringify(fromProxyObject));
	fromProxyObject[fromField] = value;
	info("Proxy after "+ stringify(fromProxyObject)+" : allowed.");
	debug("From Scenegraph after "+ stringify(fromScenegraph));
}
