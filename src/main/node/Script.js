class LOG {
	constructor() {
		this.array = [];
	}
	join(s) {
		return this.array.join(s);
	}
	push(s) {
		this.array.push(s);
	}
	log(el) {
		this.array.push(el);
	}
}

class Packages {
        constructor () {
		this.packages = {};
	}
	setPackage(name, pkg) {
		this.packages[name] = pkg;
	}
	getPackage(name) {
		return this.packages[name];
	}
}



// there are multiple scripts per package

let packages = new Packages();

class Script {
	constructor (mypackage, name) {
		// this.setters = {};
		// this.getters = {};
		this.fields = {};
		this.functions = {};
		if (typeof mypackage === 'undefined' || mypackage.name === "") {
			if (typeof name === 'undefined') {
				this.name = "";
			} else {
				this.name = name;
			}
		} else {
			if (typeof name === 'undefined') {
				this.name = mypackage.name;
			} else {
				this.name = mypackage.name+'.'+(name.replace(/\./g, ":"));
			}
		}
		packages.setPackage(this.name, this);
	}

	find(name) {
		return packages.getPackage(name);
	}
}

var X3DJSON = {}; // global

class Scripts {
	runAllRoutes() {
		for (let r in X3DJSON.runRoutes) {
			X3DJSON.runRoutes[r]();
		}
	}

	constructor() {
		X3DJSON = {}; // global, overrite with each construction
		X3DJSON.runRoutes = [];
	}

	loadScripts(json, selector, url) {
		// Now generate JavaScript code for Scripts and Routes
		var classes = new LOG();
		var routecode = new LOG();
		var loopItems = new LOG();
		this.processScripts(json, classes, undefined, routecode, loopItems, selector, url);

		/*
		$("#scripts").remove();
		var scripts = document.createElement('script');
		*/
		var scripts = {};
		scripts.id = "scripts";
		scripts.type = 'text/javascript';
		scripts.text = classes.join("\n");
		   /*
		$('body').append(scripts);
		*/

		    /*
		$("#routes").remove();
		var routes =  document.createElement('script');
		*/
		var routes = {};
		routes.id = "routes";
		routes.type = 'text/javascript';
		routes.text = routecode.join("\n");
		    /*
		$('body').append(routes);
		*/

		var loop = {};
		loop.id = "loop";
		loop.type = "text/javascript";
		loop.text = loopItems.join("\n");
		// When we zap the source, we prevent animation
		// zapSource(json);

		
		// initialize json
		var __eventTime = 0;
		var jsonScript = "var myjson = "+JSON.stringify(json, null, 2);
		try {
			// TODO eval is evil
			if (typeof jsonScript !== 'undefined') {
				//console.log(jsonScript);
				eval(jsonScript);
			}
		} catch (e) {
			console.log(e);
			console.error(e);
		}

		// initialize scripts
		try {
			// TODO eval is evil
			if (typeof scripts.text !== 'undefined') {
				//console.log(scripts.text);
				eval(scripts.text);
			}
		} catch (e) {
			console.log(e);
			console.error(e);
		    
		}
		 
		// run initializers, initializeOnly routes, and eventHandler initialization, proxies
		try {
			// TODO eval is evil
			if (typeof routes.text !== 'undefined') {
				//console.log(routes.text);
				eval(routes.text);
			}
		} catch (e) {
			console.log(e);
			console.error(e);
		}
		/* event loop */
		X3DJSON.runRoutes[X3DJSON.runRoutes.length] = function() {
		    if ($('#scripting').is(':checked')) {
				try {
					/* TODO eval is evil */
					if (typeof loop.text !== 'undefined') {
						/* console.log(loop.text); */
						eval(loop.text);
					}
					if (typeof x3dom !== 'undefined') {
						x3dom.reload();  /* This may be necessary */
					} else {
						// console.log("Couldn't reload x3dom while running routes.");
					}
				} catch (e) {
					console.log(e);
					console.error(e);
				}
			}
			__eventTime += 1000 / 60;
		};
		if (typeof this.intervalId !== 'undefined') {
			// console.error("Interval", this.X3DJSON.intervalId, "cleared");
			clearInterval(this.intervalId);
		}
		this.intervalId = setInterval(this.runAllRoutes, 1000 / 60 );
	}

	zapSource(object) {
		if (typeof object === "object") {
			for (p in object) {
				if (p === '#sourceCode') {
					delete object[p];
				} else {
					zapSource(object[p]);
				}
			}
		}
	}

	processScripts(object, classes, mypackage, routecode, loopItems, selector, url) {
		// x3dom native
		classes.log("if (typeof x3dom !== 'undefined') {");
		classes.log("    var MFBool = x3dom.fields.MFBoolean;");
		classes.log("    var MFColor = x3dom.fields.MFColor;");
		classes.log("    var MFColorRGBA = x3dom.fields.MFColorRGBA;");
		classes.log("    var MFFloat = x3dom.fields.MFFloat;");
		classes.log("    var MFInt32 = x3dom.fields.MFInt32;");
		classes.log("    var MFNode = x3dom.fields.MFNode;");
		classes.log("    var MFRotation = x3dom.fields.MFRotation;");
		classes.log("    var MFString = x3dom.fields.MFString;");
		classes.log("    var MFVec2f = x3dom.fields.MFVec2f;");
		classes.log("    var MFVec3f = x3dom.fields.MFVec3f;");
		classes.log("    var Quaternion = x3dom.fields.Quaternion;");
		classes.log("    var SFColor = x3dom.fields.SFColor;");
		classes.log("    var SFColorRGBA = x3dom.fields.SFColorRGBA;");
		classes.log("    var SFImage = x3dom.fields.SFImage;");
		classes.log("    var SFMatrix4f = x3dom.fields.SFMatrix4f;");
		classes.log("    var SFNode = x3dom.fields.SFNode;");
		classes.log("    var SFRotation = x3dom.fields.SFRotation;");
		classes.log("    var SFVec2f = x3dom.fields.SFVec2f;");
		classes.log("    var SFVec3f = x3dom.fields.SFVec3f;");
		classes.log("    var SFVec4f = x3dom.fields.SFVec4f;");
		classes.log("} else {");
		classes.log("    var SFVec3f = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("}");

		// ECMA script native
		classes.log("var SFString = String;");
		classes.log("var SFTime = Number;");
		classes.log("var SFDouble = Number;");
		classes.log("var SFFloat = Number;");
		classes.log("var SFInt32 = Number;");
		classes.log("var SFBool = Boolean;");

		classes.log("var MFDouble = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var MFImage = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var MFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var MFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var MFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var MFMatrix4f = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var MFTime = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var MFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var MFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var MFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var MFVec4f = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var SFMatrix3d = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var SFMatrix3f = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var SFMatrix4d = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var SFVec2d = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var SFVec3d = function() { return Array.prototype.slice.call(arguments, 0); };");
		classes.log("var SFVec4d = function() { return Array.prototype.slice.call(arguments, 0); };");

		classes.log("if (typeof document === 'undefined') {");
		classes.log("	document = { querySelector : function() {;");
		classes.log("		return {");
		classes.log("			setAttribute : function(field, value) {");
		classes.log("				this[field] = value;");
		classes.log("				console.log('set '+ field+ '='+ value);");
		classes.log("			},");	
		classes.log("			getAttribute : function(field) {");
		classes.log("				var value = this[field];");
		classes.log("				console.log('get '+ field+ '='+ value);");
		classes.log("			}");	
		classes.log("		};");	
		classes.log("	}};");
		classes.log("}");
		classes.log("if (typeof $ !== 'function') {");
		classes.log("	$ = function() { return { attr : function() {}, 0 : null }; };");
		classes.log("}");
		classes.log(this.nodeUtil(selector, true)+" = function(selector, node, field, value) {");
		classes.log("		if (typeof selector === 'undefined') {");
		classes.log("			selector = \"\";");
		classes.log("		} else {");
		classes.log("			selector = selector+\" \";");
		classes.log("		}");
		classes.log("		selector = selector+\"[DEF='\"+node+\"']\";");
		/*
		classes.log("		var selector = \""+selector+" [DEF='\"+node+\"'], [name='\"+field+\"']\";");
		classes.log("		if (typeof field === 'undefined') {");
		classes.log("			selector = \""+selector+" [DEF='\"+node+\"']\";");
		classes.log("		}");
		*/
		classes.log("		var element = document.querySelector(selector);");
		classes.log("		if (element === null) {");
		classes.log("			console.error('unDEFed node', node, selector);");
		classes.log("		} else if (arguments.length > 3) {");
		classes.log("			/*");
		classes.log("			if (value && typeof value.toString === 'function') {");
		classes.log("				value = value.toString();");
		classes.log("			}");
		classes.log("			$(selector).attr(field, value);");
		classes.log("			// console.log('set', node, '.', field, '=', value);");
		classes.log("			*/");
		classes.log("			try {");
		classes.log("				if (typeof element.setFieldValue === 'function') {");
		classes.log("					element.setFieldValue(field, value);");
		classes.log("				} else {");
		classes.log("					element.setAttribute(field, value);");
		classes.log("				}");
		classes.log("			} catch (e) {");
		classes.log("				console.log(e);");
		classes.log("			}");
		classes.log("			return element;");
		classes.log("		} else if (arguments.length > 2) {");
		classes.log("			if (typeof element.getFieldValue === 'function') {");
		classes.log("				value = element.getFieldValue(field);");
		classes.log("			} else {");
		classes.log("				value = element.getAttribute(field);");
		classes.log("			}");
		classes.log("			/*");
		classes.log("			if (element &&");
		classes.log("				element._x3domNode &&");
		classes.log("				element._x3domNode._vf &&");
		classes.log("				element._x3domNode._vf[field] &&");
		classes.log("				element._x3domNode._vf[field].setValueByStr) {");
		classes.log("				value = element._x3domNode._vf[field].setValueByStr(value);");
		classes.log("			}");
		classes.log("			*/");
		classes.log("			// console.log('get', node, '.', field,'=',value);");
		classes.log("			return value;");
		classes.log("		} else if (arguments.length > 0) {");
		classes.log("			return $(selector)[0];");
		classes.log("		} else {");
		classes.log("			return;");
		classes.log("		}");
		classes.log("};");
		classes.log("X3DJSON.createProxy = function(action, scriptObject) {");
		classes.log("	var proxy = new Proxy(scriptObject, {");
		classes.log("		get: function(target, property, receiver) {");
		classes.log("			return Reflect.get(target, property, receiver);");
		classes.log("		},");
		classes.log("		set: function(target, property, value, receiver) {");
		classes.log("                 if (typeof action[property] === 'object') {");
		classes.log("                        for (var route in action[property]) {");
		classes.log("                                if (typeof action[property][route] === 'function') {");
		classes.log("                                        action[property][route](property, value);");
		classes.log("   		                     // console.log('Set',property,'to', value);");
		classes.log("                                }");
		classes.log("                        }");
		classes.log("                 }");

		classes.log("		      return Reflect.set(target, property, value, receiver);");
		classes.log("		}");
		classes.log("	});");
		classes.log("	return proxy;");
		classes.log("};");
		classes.log(this.declarenodeUtil(selector, url));
		this.realProcessScripts(object, classes, mypackage, routecode, loopItems, selector, url);
	}

	declarenodeUtil(selector, url) {
		var str = "if (typeof X3DJSON['"+selector+url+"'] === 'undefined') {\n";
		str += "	X3DJSON['"+selector+url+"'] = {};\n";
		str += "}\n";
		return str;
	}

	nodeUtil(selector, noTrail) {
		return "X3DJSON.nodeUtil"+(noTrail ? "" : "(\""+selector+"\",\"");
	}

	doRoute(mypackage, fromNode, fromField, toNode, toField, log, set, changed, selector, url) {
		var fromScript = mypackage.find(fromNode);
		var toScript = mypackage.find(toNode);
		// only add routes with scripts involved
		if (typeof fromScript !== 'undefined' || typeof toScript !== 'undefined') {
			var from =			 this.nodeUtil(selector)+fromNode+"\",\""+fromField+"\")";
			if (typeof fromScript !== 'undefined') {
				from = 'typeof '+this.useX3DJSON('Obj', selector, url, fromScript.name)+'.'+fromField+changed+' === "function" ? '+this.useX3DJSON('Obj', selector, url, fromScript.name) + '.'+fromField+changed+'() : '+this.useX3DJSON('Obj', selector, url, fromScript.name) + '.'+fromField;
			}
			var to = 			this.nodeUtil(selector)+toNode+"\",\""+toField+"\",";
			if (typeof toScript !== 'undefined') {
				to = this.useX3DJSON('Obj', selector, url, toScript.name) + '.'+set+toField+'(';
			}
			if (typeof fromScript !== 'undefined' && typeof toScript !== 'undefined') {
				log.log("		if ("+this.useX3DJSON('Obj', selector, url, toScript.name)+" && "+from+") {");
			}
			log.log("			"+to+from+", __eventTime);");
			if (typeof fromScript !== 'undefined' && typeof toScript !== 'undefined') {
				log.log("		}");
			}
		}
	}

	processRoute(route, routecode, mypackage, loopItems, selector, url) {
		var fromNode = route["@fromNode"];
		var fromField = route["@fromField"];
		var toNode = route["@toNode"];
		var toField = route["@toField"];

		var set = "";
		if (toField == null) {
			console.error("toField is null");
		} else if (toField.startsWith("set_")) {
			toField = toField.substring(4);
			set = "set_";
		}

		var changed = "";
		if (fromField == null) {
			console.error("fromField is null");
		} else if (fromField.endsWith("_changed")) {
			fromField = fromField.substring(0, fromField.length-8);
			changed = "_changed";
		}

		var fromScript = mypackage.find(fromNode);
		// var fromRoute = fromNode+":"+fromField+":"+toNode+":"+toField+":FROM";
		if (typeof fromScript === 'undefined') {
			routecode.log("    if ("+this.nodeUtil(selector)+fromNode+"\")) {")
				routecode.log(this.nodeUtil(selector)+fromNode+"\").addEventListener('outputchange', function(event) {");
				this.doRoute(mypackage, fromNode, fromField, toNode, toField, routecode, set, changed, selector, url);
				routecode.log("}, false);");	
			routecode.log("}");	
			/*
			routecode.log(this.declareX3DJSON('ROUTE', selector, url, fromRoute));
			routecode.log(this.useX3DJSON('ROUTE', selector, url, fromRoute)+" = new MutationObserver(function(mutations) {");
			routecode.log("		mutations.forEach(function(mutation) {");
			routecode.log("			console.log(mutation, '"+fromField+"');");	
			this.doRoute(mypackage, fromNode, fromField, toNode, toField, routecode, set, changed, selector, url);
			routecode.log("		});");	
			routecode.log("});");	
			routecode.log("var config = { attributes: true, childList: true, attributeFilter:['"+fromField+"'] };");	
			// it's a real node
			try {
				routecode.log(this.useX3DJSON('ROUTE', selector, url, fromRoute)+".observe("+this.nodeUtil(selector)+fromNode+"\"), config);");
			} catch (e) {
				console.error("Error creating observe", e);
			}
			*/
		} else {
			routecode.log(this.declareX3DJSON('Obj', selector, url, fromScript.name+":"+"ACTION"));
			var proxyAction = this.useX3DJSON('Obj', selector, url, fromScript.name+":"+"ACTION");
			routecode.log("if (typeof "+proxyAction+"['"+fromField+"'] === 'undefined') {");
			routecode.log(		proxyAction+"['"+fromField+"'] = [];");
			routecode.log("}");
			routecode.log(proxyAction+"['"+fromField+"'].push(function(property, value) {");
			routecode.log("		if (property === '"+fromField+"') {");
			this.doRoute(fromScript, fromNode, fromField, toNode, toField, routecode, set, changed, selector, url);
			routecode.log("		}");
			routecode.log("});");
			// TODO Proxy code goes here
		}

		// set routes that run every loop
		// if (toField === 'set_fraction' || changed) {
			this.doRoute(mypackage, fromNode, fromField, toNode, toField, loopItems, set, changed, selector, url);
		// }
		// run the route once for initializeOnly
		this.doRoute(mypackage, fromNode, fromField, toNode, toField, routecode, set, changed, selector, url);
	}

	realProcessScripts(object, classes, mypackage, routecode, loopItems, selector, url) {
		mypackage = mypackage || new Script();
		var p;
		if (typeof object === "object") {
			for (p in object) {
				if (typeof object[p] === 'undefined') {
					continue;
				}
				var name = object[p]["@name"];
				if (typeof name === 'undefined') {
					name = object[p]["@DEF"];
				}
				if (p.toLowerCase() === 'script') {
					var script = new Script(mypackage, name);
					// console.error("SCRIPT IS ",JSON.stringify(object[p]));
					this.registerFields(object[p]['field'], classes, script);
					this.processFields(object[p]['field'], classes, script, selector, url);
					this.processSource(object[p]['#sourceCode'], classes, script, selector, url);
					this.realProcessScripts(object[p], classes, script, routecode, loopItems, selector, url);
					// zap original source because we don't need it
					// delete object[p]['#sourceCode'];
				} else if (p.toLowerCase() === 'route') {
					this.processRoute(object[p], routecode, mypackage, loopItems, selector, url);
				} else if (p.toLowerCase() === '@use') {
					var name = object["@USE"];
					object["@USE"] = name;
					// object[p] is not an object
				} else if (p.toLowerCase() === '@def') {
					var name = object["@DEF"];
					object["@DEF"] = name;
					// object[p] is not an object
				} else {
					this.realProcessScripts(object[p], classes, mypackage, routecode, loopItems, selector, url);
				}
			}
		}
	}

	valueExpand(type, flat, children, selector, url) {
		// console.error("TYPE IS "+type);
		var str = JSON.stringify(flat);
		var num = 0; // this will cause an error below if not set
		if (type === 'SFNode') {
			if (typeof children !== 'undefined') {
				var firstNode = children[0];
				for (var key in firstNode) {
					var USE = firstNode[key]["@USE"];
				}
				if (typeof USE === 'string') {
					return this.nodeUtil(selector)+USE+"\")";
				} else {
					for (var key in firstNode) {
						var DEF = firstNode[key]["@DEF"];
					}
					return this.nodeUtil(selector)+DEF+"\")";
				}
			}
		}
		if (!str) {
			flat = "";
		} else if (type === 'SFBool') {
			flat = str;
		} else if (type === 'SFFloat') {
			flat = str;
		} else if (type === 'SFInt32') {
			flat = str;
		} else if (type === 'SFString'){
			flat = str;
		} else if (type === 'SFTime'){
			flat = str;
		} else if (type === 'SFNode'){
			flat = str;
		} else if (type === 'SFRotation'){
			flat = str.substring(1, str.length-1);
		} else if (type.indexOf('SFColor') === 0){
			flat = str.substring(1, str.length-1);
		} else if (type.indexOf('SFVec') === 0){
			flat = str.substring(1, str.length-1);
		} else if (type.indexOf('SFMatrix') === 0){
			flat = str.substring(1, str.length-1);
		} else if (type.indexOf("MFRotation") === 0) {
			num = 4;
		} else if (type.indexOf("MFColorRGBA") === 0) {
			num = 4;
		} else if (type.indexOf("MFColor") === 0) {
			num = 3;
		} else if (type.indexOf("MFVec2") === 0) {
			num = 2;
		} else if (type.indexOf("MFVec3") === 0) {
			num = 3;
		} else if (type.indexOf("MFVec4") === 0) {
			num = 4;
		} else if (type.indexOf("MFMatrix3") === 0) {
			num = 9;
		} else if (type.indexOf("MFMatrix4") === 0) {
			num = 16;
		} else if (flat !== null) {
			flat = str.substring(1, str.length-1);
			return "new "+type+"("+flat+")";  // THIS WILL THROW AN ERROR IF you don't have a value for an outputOnly.  Fill in the type case above
		}

		if (flat !== null && num > 0) {
			var value = [];
			var numvec = flat.length / num;
			for (var i = 0; i < numvec; i++) {
				var v = [];
				v.push("new");
				var sftype = "S"+type.substr(1);
				v.push(sftype);
				v.push("(");
				for (var j = 0; j < num; j++) {
					if (j > 0) {
						v.push(",");
					}
					v.push(flat[i*num+j]);
				}
				v.push(")");
				value.push(v.join(" "));
			}
			flat = value.join(",");
			flat = '['+flat+']';
		}
		return "new "+type+"("+flat+")";
	}

	registerFields(fields, classes, mypackage) {
		var f;
		for (f in fields) {
			var object = fields[f];
			var name = object["@name"];
			mypackage.fields[name] = object;
		}
	}

	processFields(fields, classes, mypackage, selector, url) {
		classes.log(this.declareX3DJSON('Script', selector, url, mypackage.name));
		classes.log(this.useX3DJSON('Script', selector, url, mypackage.name) +  ' = function() {');

		// console.error("0FIELDS IS "+JSON.stringify(fields));
		var f;
		var initializers = [];
		var values = {};
		var indent = '\t';
		var types = {};
		for (f in fields) {
			// console.error("FIELDS IS ",f, fields.length, JSON.stringify(fields));
			var object = fields[f];
			// console.error("OBJECT IS ",f, JSON.stringify(object));
			var name = object["@name"];
			// console.error("NAME IS ",f, JSON.stringify(name));
			types[name] = object["@type"];
			// console.error("TYPE IS ",f, object["@type"]);
			values[name] = this.valueExpand(types[name], object["@value"], object["-children"], selector, url);
			// console.error("VALUE IS ",f, object["@value"]);
			switch(object['@accessType']) {
			case 'initializeOnly':
				// these should be in order, so it's an array
				initializers.push(name);
				break;
			case 'inputOutput':
				// setters should be looked up by name
				// mypackage.setters[name] = object;
				// mypackage.getters[name] = object;
				break;
			case 'inputOnly':
				// setters should be looked up by name
				// mypackage.setters[name] = object;
				break;
			case 'outputOnly':
				// mypackage.getters[name] = object;
				break;
			default:
				break;
			}
		}

		for (var v in values) {
			// console.error("PROCESS FIELD", v, values[v]);
			var set = v.indexOf("set_");
			var changed = v.indexOf("_changed");
			if (changed > 0 && changed === v.length-8) {
				v = v.substr(0, changed);
			} else if (set === 0) {
				v = v.substr(4);
			}
			if (!v) {
				console.error("--------------------------------------undefined field", v);
			}
			// Don't override existing functions
			if (!mypackage.functions['set_'+v]) {
				// setter
				classes.log(indent.repeat(1) + "this.set_" + v + ' = function (value) {');
				classes.log(indent.repeat(2) + "try {");
				classes.log(indent.repeat(3) + "this.proxy."+v+" = (typeof value === 'string' && typeof value.indexOf === 'function' && value.indexOf(',') >= 0 ? value.split(/[ ,]+/) : value);");
				classes.log(indent.repeat(2) + "} catch (e) {");
				classes.log(indent.repeat(3) + "console.log('Problems setting "+v+" '+e);");
				classes.log(indent.repeat(3) + "console.error('Problems setting "+v+"',e);");
				classes.log(indent.repeat(2) + "}");
				classes.log(indent.repeat(1) + "};");
			}
			if (!mypackage.functions[v+'_changed']) {
				// getter
				classes.log(indent.repeat(1) + "this." + v + '_changed = function () {');
				classes.log(indent.repeat(2) + "var value = this."+v+";");
				classes.log(indent.repeat(2) + "return value;");
				classes.log(indent.repeat(1) + "};");
			}
			if (!mypackage.functions[v]) {
				// Initialization
				classes.log(indent.repeat(1) + "try {");
				classes.log(indent.repeat(2) + "this." + v + " = "+values[v]+";");
				classes.log(indent.repeat(1) + "} catch (e) {");
				classes.log(indent.repeat(2) + "console.log('Problems setting "+v+" '+e);");
				classes.log(indent.repeat(2) + "console.error('Problems setting "+v+"',e);");
				classes.log(indent.repeat(1) + "}");
			}
		}
	}

	declareX3DJSON(type, selector, url, mypackage) {
		var hier = (type+":"+selector+":"+url+":"+mypackage).split(/:/);
		var str = "";
		for (var h = 1; h < hier.length; h++) {
			var sub = "X3DJSON['"+hier.slice(0, h).join("']['")+"']";
			str += "if (typeof "+sub+" === 'undefined') {\n";
			str += sub + " = {};\n";
			str += "}\n";
		}
		return str;

	}

	useX3DJSON(type, selector, url, mypackage) {
		var hier = (type+":"+selector+":"+url+":"+mypackage).split(/:/);
		var str = "X3DJSON['"+hier.join("']['")+"']";
		return str;
	}

	processSource(lines, classes, mypackage, selector, url) {
		if (typeof lines !== 'undefined') {
			for (var l in lines) {
				lines[l] = lines[l].replace(/[\n\r]/g, "").replace(/\/\/(.*)function/g, '//$1functino');
			}
			var functions = lines.join("\n").replace(/Browser.println/g, "console.error").replace(/Browser.print/g, "console.error").replace(/Browser.createVrmlFromString[^;]*;/g, "new MFNode();").split(/[^"']function[^"']/);
			var f;

			var fxns = [];

			// everything before the first function
			classes.log(functions[0]);

			for (var f = 1; f < functions.length; f++) {  // skip ecmascript:
				var func = functions[f];
				var sp = func.indexOf('(');
				var end = func.lastIndexOf('}');

				fxns[f-1] = {
					name : func.substr(0, sp).trim(),
					body : func.substr(sp, end+1),
					trail : func.substr(end+1).trim()
				};
				mypackage.functions[fxns[f-1].name] = fxns[f-1].body;
			}

			for (var f1 = 0; f1 < fxns.length; f1++) {
				var name = fxns[f1].name;
				var body = fxns[f1].body;
				var trail = fxns[f1].rail;
				// replace fields in body
				for (var n in mypackage.fields) {
					var type = mypackage.fields[n]["@type"];
					var children = mypackage.fields[n]["-children"];
					if (type === "SFNode" && children) {
						var firstNode = children[0];
						for (var key in firstNode) {
							var USE = firstNode[key]["@USE"];
						}
						if (typeof USE !== 'string') {
							for (var key in firstNode) {
								USE = firstNode[key]["@DEF"];
							}
						}
						var pattern = '(\\b)'+n+'[ \t\r\n]*\.?[ \t\r\n]*([A-Za-z0-9_$]+)?[ \t\r\n]*=([^;]*);';
						body = body.replace(new RegExp(pattern, 'g'), "$1"+this.nodeUtil(selector)+USE+"\", \"$2\", $3);");
						pattern = '(\\b)'+n+'[ \t\r\n]*\.?[ \t\r\n]*([A-Za-z0-9_$]+)?(\\b)';
						body = body.replace(new RegExp(pattern, 'g'), "$1"+this.nodeUtil(selector)+USE+"\", \"$2\")$3");
					} else {
						var pattern = '((?!var).)(\\b)+('+n+')(\\b)';
						body = body.replace(new RegExp(pattern, 'g'), "$1$2this.proxy.$3$4");
					}
					/*
					var pattern = '(\\b)('+n+'[ \t\n\r]+)=([^=][^;]*);';
					body = body.replace(new RegExp(pattern, 'g'), "$1this.set_$2($3);");
					pattern = '(\\b)('+n+')[ \t]+([-\+\*\/\|\&\^])=([^;]*);';
					body = body.replace(new RegExp(pattern, 'g'), "$1this.set_$2(this.$2_changed() $3 $4);");
					pattern = "(\\b)("+n+")(\\b)";
					body = body.replace(new RegExp(pattern, 'g'), "$1this.$2_changed()$3");
					*/
			 
				}

				// replace function call names in body (not function declarations, see below)
				for (var fv in mypackage.functions) {
					var pattern = '(\\b)('+fv+')(\\b)';
					body = body.replace(new RegExp(pattern, 'g'), "$1this.$2$3");
				}

				// now take this this. of var decls in body
				body = body.replace(/\.this/g,  "");
				body = body.replace(/\svar\s+this\./g,  " var ");

				//body = body.replace(/&amp;/g, '&');
				//body = body.replace(/&lt;/g, '<');
				//body = body.replace(/&gt;/g, '>');
				classes.log('\tthis.'+name + ' = function ' + body + ';');
				classes.log(trail);
			}
		}
		classes.log('};');
		classes.log(this.declareX3DJSON('Obj', selector, url, mypackage.name));
		classes.log(this.useX3DJSON('Obj', selector, url, mypackage.name) + ' = new '+ this.useX3DJSON('Script', selector, url, mypackage.name) +'();');
		classes.log(this.declareX3DJSON('Obj', selector, url, mypackage.name+":"+"ACTION"));
		var proxyAction = this.useX3DJSON('Obj', selector, url, mypackage.name+":"+"ACTION");
		classes.log("if (typeof "+proxyAction+" === 'undefined') {");
		classes.log(	proxyAction + " = {};");
		classes.log(	this.useX3DJSON('Obj', selector, url,mypackage.name)+".proxy = X3DJSON.createProxy("+
				proxyAction+","+
				this.useX3DJSON('Obj', selector, url,mypackage.name)+");");
		classes.log("}");
		classes.log('if (typeof '+this.useX3DJSON('Obj', selector, url,mypackage.name)+'.initialize === "function") '+this.useX3DJSON('Obj', selector, url, mypackage.name) + '.initialize();');
	}

}

module.exports = {
	LOG:LOG,
	Packages:Packages,
	packages:packages,
	Script:Script,
	Scripts:Scripts,
	X3DJSON:X3DJSON
}
