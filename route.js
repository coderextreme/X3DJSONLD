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
	important("Scenegraph originally "+stringify(scenegraph));
	assert(scenegraph, [{"d":{"f":7,"e":[1,2,3]}},{"c":[4]}]);
	var fromProxyObject = routeAndSet(scenegraph, "0/d/e", "0", scenegraph, "1", "c", 5);
	assert(scenegraph, [{"d":{"f":7,"e":[5,2,3]}},{"c":5}]);
	setProxyField(scenegraph, fromProxyObject, 1, 8);  // NON-WATCHED
	assert(scenegraph, [{"d":{"f":7,"e":[5,8,3]}},{"c":5}]);
	fromProxyObject = routeAndSet(scenegraph, "0", "d", scenegraph, "", "1", 6);
	assert(scenegraph, [{"d":6},6]);
	setProxyField(scenegraph, fromProxyObject, "d", 9); // WATCHED
	assert(scenegraph, [{"d":9},9]);
	fromProxyObject = routeAndSet(scenegraph, "0", "A", scenegraph, "0", "B", 10); // add fields
	assert(scenegraph, [{"d":9,"B":10,"A":10},9]);
	setProxyField(scenegraph, fromProxyObject, "A", [ "Test Goodbye!" ] ); // WATCHED
	assert(scenegraph, [{"d":9,"B":["Test Goodbye!"],"A":["Test Goodbye!"]},9]);
	setProxyField(scenegraph, fromProxyObject, "B", null); // WATCHED
	assert(scenegraph, [{"d":9,"B":null,"A":["Test Goodbye!"]},9]);
	important("Scenegraph finally "+stringify(scenegraph));
}

/**
 * Override this if you don't want test warnings about scenegraphs
 */

function assert(modifiedScenegraph, goldenScenegraph) {
	var mod = stringify(modifiedScenegraph);
	var testcase = stringify(goldenScenegraph);
	if (mod !== testcase) {
		warning("Scenegraph "+mod+" != "+testcase);
	} else {
		log("Scenegraph "+mod+" == "+testcase);
	}
}

/** override this function if you want a feature other than a warning message,
 * or to disable it
 */

function proxyWarning(fromScenegraph, fromNode, fromField,
	toScenegraph, toNode, toField,
	property, value, target) {
	var from = JWCPathLikeSelector(fromScenegraph, fromNode);
	var to = JWCPathLikeSelector(toScenegraph, toNode);
	if (fromScenegraph !== toScenegraph || from != to) {
		warning("will set fromField "+stringify(from)+"["+property+"] = "+value+" but won't set "+stringify(to)+"["+toField+ "] = "+value+", but another proxy may.  The fromField will be set on the proxy object.");
	} else {
		warning("Not setting to toNode "+stringify(to)+"["+toField+ "].  The fromField will be set on the proxy object.");
	}
}

/** override this function if you want a feature other than a warning message
 */
function warning(string) {
	important(" * * * WARNING: "+string);
}

/** override this function if you want a feature other than console.log or to
 * disable this function
 */
function log(string) {
	// console.log(string);
}

/** override this function if you want a feature other than console.error
 */
function important(string) {
	console.error("****** "+string);
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
 */
function JWCPathLikeSelector(scenegraph, selector) {
	log("Selector scenegraph: "+stringify(scenegraph)+
		" selector is", selector );
	if (typeof(selector) !== 'undefined' && selector.trim() !== '') {
		var indexes = selector.split(/\//);
		for (var index in indexes) {
			if (indexes[index].trim() === '') {
				break;
			}
			scenegraph = scenegraph[indexes[index]];
			log("Index was "+ indexes[index]+
				" Selected down to: "+
				stringify(scenegraph));
		}
	}
	if (typeof scenegraph !== 'object') {
		log("Scenegraph "+scenegraph+" is not an object");
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
	log("From Scenegraph before "+ stringify(fromScenegraph));
	log("To Scenegraph before "+ stringify(toScenegraph));
	// TODO reorder setting of fields ????
	log("In Proxy testing "+ property);
	// set toField to value
	if (fromField == property) {
	 	setField(toScenegraph, toNode, toField, value);
	} else {
		proxyWarning(fromScenegraph, fromNode, fromField,
					toScenegraph, toNode, toField,
					property, value, target);
	}
	// set fromField to value
	setField(fromScenegraph, fromNode, property, value);
	log("From Scenegraph after "+ stringify(fromScenegraph));
	log("To Scenegraph after "+ stringify(toScenegraph));
}

/**
 * Activate a proxy route from fromNode[fromField] to toNode[toField]
 * Nodes are selectors which can be used with JWCPathLikeSelector()
 * fromScenegraph and toScenegraph may be separate.  If they are the
 * same, be sure that fromField and toField are distinct, or else the
 * results may be undetermined.
 */
function route(fromScenegraph, fromNode, fromField,
		toScenegraph, toNode, toField) {
	if (fromScenegraph === toScenegraph &&
		fromNode.startsWith(toNode) &&
		toNode.startsWith(fromNode) &&
		fromNode !== toNode) {
		warning("possible undetermined behavior, fromNode and toNode overlap and the scenegraphs are the same");
	}
	var from = JWCPathLikeSelector(fromScenegraph, fromNode);
	log("Selected from "+ stringify(from)+"["+fromField+"]");
	var to = JWCPathLikeSelector(toScenegraph, toNode);
	log("Selected to "+stringify(to)+ "["+ toField+ "]");
	var fromProxyObject = new Proxy(from, {
		set : function(target, property, value, receiver) {
			proxySetAction(
				fromScenegraph, fromNode, fromField,
				toScenegraph, toNode, toField,
				property, value, target)
			return true;
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
	important("Setting Field "+ stringify(n)+ "["+ field+ "] = "+ value);
	n[field] = value;
	return scenegraph;
}

/**
 * Activate a proxy route from fromNode[fromField] to toNode[toField]
 * Nodes are selectors which can be used with JWCPathLikeSelector()
 * fromScenegraph and toScenegraph may be separate.  If they are the
 * same, be sure that fromField and toField are distinct, or else the
 * results may be undetermined.  The proxy field is set to value
 */
function routeAndSet(fromScenegraph, fromNode, fromField, toScenegraph, toNode, toField, value) {
	log("---------ROUTE AND SET----------------------------------");
	log("To Scenegraph before "+ stringify(toScenegraph));
	important("");
	important("<ROUTE fromNode='"+ fromNode+ "' "+
			  "fromField='"+fromField+ "' "+
			  "toNode='"+ toNode+ "' "+
			  "toField='"+ toField+ "' "+
			"/>"
		);
	log("From field before "+ stringify(getField(fromScenegraph, fromNode, fromField)));
	log("To field before "+ stringify(getField(toScenegraph, toNode, toField)));
	var fromProxyObject = route(fromScenegraph, fromNode, fromField, toScenegraph, toNode, toField);
	setProxyField(fromScenegraph, fromProxyObject, fromField, value);
	log("From field after "+ stringify(getField(fromScenegraph, fromNode, fromField)));
	log("To field  after "+ stringify(getField(toScenegraph, toNode, toField)));
	log("To Scenegraph after "+ stringify(toScenegraph));
	return fromProxyObject;
}

/**
 * The fromProxyObject[fromField] is set to value.
 */
function setProxyField(fromScenegraph, fromProxyObject, fromField, value) {
	log("----------SETTING A PROXY FIELD-------------------------");
	log("From Scenegraph before "+ stringify(fromScenegraph));
	important("");
	important("Proxy before "+ stringify(fromProxyObject));
	fromProxyObject[fromField] = value;
	important("Proxy after "+ stringify(fromProxyObject)+" : allowed.");
	log("From Scenegraph after "+ stringify(fromScenegraph));
}
