(function(){function r(e,n,t){function o(i,f){if(!n[i]){if(!e[i]){var c="function"==typeof require&&require;if(!f&&c)return c(i,!0);if(u)return u(i,!0);var a=new Error("Cannot find module '"+i+"'");throw a.code="MODULE_NOT_FOUND",a}var p=n[i]={exports:{}};e[i][0].call(p.exports,function(r){var n=e[i][1][r];return o(n||r)},p,p.exports,r,e,n,t)}return n[i].exports}for(var u="function"==typeof require&&require,i=0;i<t.length;i++)o(t[i]);return o}return r})()({1:[function(require,module,exports){
// Regex from https://stackoverflow.com/questions/32044846/regex-for-iso-8601-durations
module.exports =
  /^P(?!$)(\d+(?:\.\d+)?Y)?(\d+(?:\.\d+)?M)?(\d+(?:\.\d+)?W)?(\d+(?:\.\d+)?D)?(T(?=\d)(\d+(?:\.\d+)?H)?(\d+(?:\.\d+)?M)?(\d+(?:\.\d+)?S)?)?$/;

},{}],2:[function(require,module,exports){
const { parse } = require('smtp-address-parser');

module.exports = (value) => {
  try {
    parse(value);
    return true;
  } catch (err) {
    return false;
  }
};

},{"smtp-address-parser":16}],3:[function(require,module,exports){
const { toASCII } = require('punycode');

const hostnameRegex =
  /^(?=.{1,253}\.?$)[a-z0-9](?:[a-z0-9-]{0,61}[a-z0-9])?(?:\.[a-z0-9](?:[-0-9a-z]{0,61}[0-9a-z])?)*\.?$/i;

module.exports = (value) => {
  const hostname = toASCII(value);
  return (
    hostname.replace(/\.$/, '').length <= 253 && hostnameRegex.test(hostname)
  );
};

},{"punycode":19}],4:[function(require,module,exports){
module.exports.iri = require('./iri');
module.exports.duration = require('./duration');
module.exports['idn-email'] = require('./idn-email');
module.exports['idn-hostname'] = require('./idn-hostname');
module.exports['iri-reference'] = require('./iri-reference');

},{"./duration":1,"./idn-email":2,"./idn-hostname":3,"./iri":6,"./iri-reference":5}],5:[function(require,module,exports){
const { parse } = require('uri-js');
const { addressParser } = require('smtp-address-parser');
const schemes = require('schemes');

function validate(address) {
  try {
    addressParser(address);
    return true;
  } catch (err) {
    return false;
  }
}

module.exports = (value) => {
  const iri = parse(value);
  // All valid IRIs are valid IRI-references
  if (iri.scheme === 'mailto' && iri.to.every(validate)) {
    return true;
  }

  if (
    iri.reference === 'absolute' &&
    iri.path !== undefined &&
    schemes.allByName[iri.scheme]
  ) {
    return true;
  }

  // Check for valid IRI-reference

  // If there is a scheme, it must be valid
  if (iri.scheme && !schemes.allByName[iri.scheme]) {
    return false;
  }

  // Check there's a path and for a proper type of reference
  return (
    iri.path !== undefined &&
    (iri.reference === 'relative' ||
      iri.reference === 'same-document' ||
      iri.reference === 'uri')
  );
};

},{"schemes":10,"smtp-address-parser":16,"uri-js":17}],6:[function(require,module,exports){
const { parse } = require('uri-js');
const { addressParser } = require('smtp-address-parser');
const schemes = require('schemes');

function validate(address) {
  try {
    addressParser(address);
    return true;
  } catch (err) {
    return false;
  }
}

module.exports = (value) => {
  const iri = parse(value);
  if (iri.scheme === 'mailto' && iri.to.every(validate)) {
    return true;
  }
  if (iri.reference === 'absolute' && schemes.allByName[iri.scheme]) {
    return true;
  }
  return false;
};

},{"schemes":10,"smtp-address-parser":16,"uri-js":17}],7:[function(require,module,exports){
const formats = require('./formats');

module.exports = (ajv, options = {}) => {
  const allFormats = Object.keys(formats);
  let formatsToInstall = allFormats;

  if (options.formats) {
    if (!Array.isArray(options.formats))
      throw new Error('options.formats must be an array');
    formatsToInstall = options.formats;
  }

  allFormats
    .filter((format) => formatsToInstall.includes(format))
    .forEach((key) => {
      ajv.addFormat(key, formats[key]);
    });

  return ajv;
};

},{"./formats":4}],8:[function(require,module,exports){
'use strict';

var hasOwn = Object.prototype.hasOwnProperty;
var toStr = Object.prototype.toString;
var defineProperty = Object.defineProperty;
var gOPD = Object.getOwnPropertyDescriptor;

var isArray = function isArray(arr) {
	if (typeof Array.isArray === 'function') {
		return Array.isArray(arr);
	}

	return toStr.call(arr) === '[object Array]';
};

var isPlainObject = function isPlainObject(obj) {
	if (!obj || toStr.call(obj) !== '[object Object]') {
		return false;
	}

	var hasOwnConstructor = hasOwn.call(obj, 'constructor');
	var hasIsPrototypeOf = obj.constructor && obj.constructor.prototype && hasOwn.call(obj.constructor.prototype, 'isPrototypeOf');
	// Not own constructor property must be Object
	if (obj.constructor && !hasOwnConstructor && !hasIsPrototypeOf) {
		return false;
	}

	// Own properties are enumerated firstly, so to speed up,
	// if last one is own, then all properties are own.
	var key;
	for (key in obj) { /**/ }

	return typeof key === 'undefined' || hasOwn.call(obj, key);
};

// If name is '__proto__', and Object.defineProperty is available, define __proto__ as an own property on target
var setProperty = function setProperty(target, options) {
	if (defineProperty && options.name === '__proto__') {
		defineProperty(target, options.name, {
			enumerable: true,
			configurable: true,
			value: options.newValue,
			writable: true
		});
	} else {
		target[options.name] = options.newValue;
	}
};

// Return undefined instead of __proto__ if '__proto__' is not an own property
var getProperty = function getProperty(obj, name) {
	if (name === '__proto__') {
		if (!hasOwn.call(obj, name)) {
			return void 0;
		} else if (gOPD) {
			// In early versions of node, obj['__proto__'] is buggy when obj has
			// __proto__ as an own property. Object.getOwnPropertyDescriptor() works.
			return gOPD(obj, name).value;
		}
	}

	return obj[name];
};

module.exports = function extend() {
	var options, name, src, copy, copyIsArray, clone;
	var target = arguments[0];
	var i = 1;
	var length = arguments.length;
	var deep = false;

	// Handle a deep copy situation
	if (typeof target === 'boolean') {
		deep = target;
		target = arguments[1] || {};
		// skip the boolean and the target
		i = 2;
	}
	if (target == null || (typeof target !== 'object' && typeof target !== 'function')) {
		target = {};
	}

	for (; i < length; ++i) {
		options = arguments[i];
		// Only deal with non-null/undefined values
		if (options != null) {
			// Extend the base object
			for (name in options) {
				src = getProperty(target, name);
				copy = getProperty(options, name);

				// Prevent never-ending loop
				if (target !== copy) {
					// Recurse if we're merging plain objects or arrays
					if (deep && copy && (isPlainObject(copy) || (copyIsArray = isArray(copy)))) {
						if (copyIsArray) {
							copyIsArray = false;
							clone = src && isArray(src) ? src : [];
						} else {
							clone = src && isPlainObject(src) ? src : {};
						}

						// Never move original objects, clone them
						setProperty(target, { name: name, newValue: extend(deep, clone, copy) });

					// Don't bring in undefined values
					} else if (typeof copy !== 'undefined') {
						setProperty(target, { name: name, newValue: copy });
					}
				}
			}
		}
	}

	// Return the modified object
	return target;
};

},{}],9:[function(require,module,exports){
(function(root, factory) {
    if (typeof module === 'object' && module.exports) {
        module.exports = factory();
    } else {
        root.nearley = factory();
    }
}(this, function() {

    function Rule(name, symbols, postprocess) {
        this.id = ++Rule.highestId;
        this.name = name;
        this.symbols = symbols;        // a list of literal | regex class | nonterminal
        this.postprocess = postprocess;
        return this;
    }
    Rule.highestId = 0;

    Rule.prototype.toString = function(withCursorAt) {
        var symbolSequence = (typeof withCursorAt === "undefined")
                             ? this.symbols.map(getSymbolShortDisplay).join(' ')
                             : (   this.symbols.slice(0, withCursorAt).map(getSymbolShortDisplay).join(' ')
                                 + " ● "
                                 + this.symbols.slice(withCursorAt).map(getSymbolShortDisplay).join(' ')     );
        return this.name + " → " + symbolSequence;
    }


    // a State is a rule at a position from a given starting point in the input stream (reference)
    function State(rule, dot, reference, wantedBy) {
        this.rule = rule;
        this.dot = dot;
        this.reference = reference;
        this.data = [];
        this.wantedBy = wantedBy;
        this.isComplete = this.dot === rule.symbols.length;
    }

    State.prototype.toString = function() {
        return "{" + this.rule.toString(this.dot) + "}, from: " + (this.reference || 0);
    };

    State.prototype.nextState = function(child) {
        var state = new State(this.rule, this.dot + 1, this.reference, this.wantedBy);
        state.left = this;
        state.right = child;
        if (state.isComplete) {
            state.data = state.build();
            // Having right set here will prevent the right state and its children
            // form being garbage collected
            state.right = undefined;
        }
        return state;
    };

    State.prototype.build = function() {
        var children = [];
        var node = this;
        do {
            children.push(node.right.data);
            node = node.left;
        } while (node.left);
        children.reverse();
        return children;
    };

    State.prototype.finish = function() {
        if (this.rule.postprocess) {
            this.data = this.rule.postprocess(this.data, this.reference, Parser.fail);
        }
    };


    function Column(grammar, index) {
        this.grammar = grammar;
        this.index = index;
        this.states = [];
        this.wants = {}; // states indexed by the non-terminal they expect
        this.scannable = []; // list of states that expect a token
        this.completed = {}; // states that are nullable
    }


    Column.prototype.process = function(nextColumn) {
        var states = this.states;
        var wants = this.wants;
        var completed = this.completed;

        for (var w = 0; w < states.length; w++) { // nb. we push() during iteration
            var state = states[w];

            if (state.isComplete) {
                state.finish();
                if (state.data !== Parser.fail) {
                    // complete
                    var wantedBy = state.wantedBy;
                    for (var i = wantedBy.length; i--; ) { // this line is hot
                        var left = wantedBy[i];
                        this.complete(left, state);
                    }

                    // special-case nullables
                    if (state.reference === this.index) {
                        // make sure future predictors of this rule get completed.
                        var exp = state.rule.name;
                        (this.completed[exp] = this.completed[exp] || []).push(state);
                    }
                }

            } else {
                // queue scannable states
                var exp = state.rule.symbols[state.dot];
                if (typeof exp !== 'string') {
                    this.scannable.push(state);
                    continue;
                }

                // predict
                if (wants[exp]) {
                    wants[exp].push(state);

                    if (completed.hasOwnProperty(exp)) {
                        var nulls = completed[exp];
                        for (var i = 0; i < nulls.length; i++) {
                            var right = nulls[i];
                            this.complete(state, right);
                        }
                    }
                } else {
                    wants[exp] = [state];
                    this.predict(exp);
                }
            }
        }
    }

    Column.prototype.predict = function(exp) {
        var rules = this.grammar.byName[exp] || [];

        for (var i = 0; i < rules.length; i++) {
            var r = rules[i];
            var wantedBy = this.wants[exp];
            var s = new State(r, 0, this.index, wantedBy);
            this.states.push(s);
        }
    }

    Column.prototype.complete = function(left, right) {
        var copy = left.nextState(right);
        this.states.push(copy);
    }


    function Grammar(rules, start) {
        this.rules = rules;
        this.start = start || this.rules[0].name;
        var byName = this.byName = {};
        this.rules.forEach(function(rule) {
            if (!byName.hasOwnProperty(rule.name)) {
                byName[rule.name] = [];
            }
            byName[rule.name].push(rule);
        });
    }

    // So we can allow passing (rules, start) directly to Parser for backwards compatibility
    Grammar.fromCompiled = function(rules, start) {
        var lexer = rules.Lexer;
        if (rules.ParserStart) {
          start = rules.ParserStart;
          rules = rules.ParserRules;
        }
        var rules = rules.map(function (r) { return (new Rule(r.name, r.symbols, r.postprocess)); });
        var g = new Grammar(rules, start);
        g.lexer = lexer; // nb. storing lexer on Grammar is iffy, but unavoidable
        return g;
    }


    function StreamLexer() {
      this.reset("");
    }

    StreamLexer.prototype.reset = function(data, state) {
        this.buffer = data;
        this.index = 0;
        this.line = state ? state.line : 1;
        this.lastLineBreak = state ? -state.col : 0;
    }

    StreamLexer.prototype.next = function() {
        if (this.index < this.buffer.length) {
            var ch = this.buffer[this.index++];
            if (ch === '\n') {
              this.line += 1;
              this.lastLineBreak = this.index;
            }
            return {value: ch};
        }
    }

    StreamLexer.prototype.save = function() {
      return {
        line: this.line,
        col: this.index - this.lastLineBreak,
      }
    }

    StreamLexer.prototype.formatError = function(token, message) {
        // nb. this gets called after consuming the offending token,
        // so the culprit is index-1
        var buffer = this.buffer;
        if (typeof buffer === 'string') {
            var lines = buffer
                .split("\n")
                .slice(
                    Math.max(0, this.line - 5), 
                    this.line
                );

            var nextLineBreak = buffer.indexOf('\n', this.index);
            if (nextLineBreak === -1) nextLineBreak = buffer.length;
            var col = this.index - this.lastLineBreak;
            var lastLineDigits = String(this.line).length;
            message += " at line " + this.line + " col " + col + ":\n\n";
            message += lines
                .map(function(line, i) {
                    return pad(this.line - lines.length + i + 1, lastLineDigits) + " " + line;
                }, this)
                .join("\n");
            message += "\n" + pad("", lastLineDigits + col) + "^\n";
            return message;
        } else {
            return message + " at index " + (this.index - 1);
        }

        function pad(n, length) {
            var s = String(n);
            return Array(length - s.length + 1).join(" ") + s;
        }
    }

    function Parser(rules, start, options) {
        if (rules instanceof Grammar) {
            var grammar = rules;
            var options = start;
        } else {
            var grammar = Grammar.fromCompiled(rules, start);
        }
        this.grammar = grammar;

        // Read options
        this.options = {
            keepHistory: false,
            lexer: grammar.lexer || new StreamLexer,
        };
        for (var key in (options || {})) {
            this.options[key] = options[key];
        }

        // Setup lexer
        this.lexer = this.options.lexer;
        this.lexerState = undefined;

        // Setup a table
        var column = new Column(grammar, 0);
        var table = this.table = [column];

        // I could be expecting anything.
        column.wants[grammar.start] = [];
        column.predict(grammar.start);
        // TODO what if start rule is nullable?
        column.process();
        this.current = 0; // token index
    }

    // create a reserved token for indicating a parse fail
    Parser.fail = {};

    Parser.prototype.feed = function(chunk) {
        var lexer = this.lexer;
        lexer.reset(chunk, this.lexerState);

        var token;
        while (true) {
            try {
                token = lexer.next();
                if (!token) {
                    break;
                }
            } catch (e) {
                // Create the next column so that the error reporter
                // can display the correctly predicted states.
                var nextColumn = new Column(this.grammar, this.current + 1);
                this.table.push(nextColumn);
                var err = new Error(this.reportLexerError(e));
                err.offset = this.current;
                err.token = e.token;
                throw err;
            }
            // We add new states to table[current+1]
            var column = this.table[this.current];

            // GC unused states
            if (!this.options.keepHistory) {
                delete this.table[this.current - 1];
            }

            var n = this.current + 1;
            var nextColumn = new Column(this.grammar, n);
            this.table.push(nextColumn);

            // Advance all tokens that expect the symbol
            var literal = token.text !== undefined ? token.text : token.value;
            var value = lexer.constructor === StreamLexer ? token.value : token;
            var scannable = column.scannable;
            for (var w = scannable.length; w--; ) {
                var state = scannable[w];
                var expect = state.rule.symbols[state.dot];
                // Try to consume the token
                // either regex or literal
                if (expect.test ? expect.test(value) :
                    expect.type ? expect.type === token.type
                                : expect.literal === literal) {
                    // Add it
                    var next = state.nextState({data: value, token: token, isToken: true, reference: n - 1});
                    nextColumn.states.push(next);
                }
            }

            // Next, for each of the rules, we either
            // (a) complete it, and try to see if the reference row expected that
            //     rule
            // (b) predict the next nonterminal it expects by adding that
            //     nonterminal's start state
            // To prevent duplication, we also keep track of rules we have already
            // added

            nextColumn.process();

            // If needed, throw an error:
            if (nextColumn.states.length === 0) {
                // No states at all! This is not good.
                var err = new Error(this.reportError(token));
                err.offset = this.current;
                err.token = token;
                throw err;
            }

            // maybe save lexer state
            if (this.options.keepHistory) {
              column.lexerState = lexer.save()
            }

            this.current++;
        }
        if (column) {
          this.lexerState = lexer.save()
        }

        // Incrementally keep track of results
        this.results = this.finish();

        // Allow chaining, for whatever it's worth
        return this;
    };

    Parser.prototype.reportLexerError = function(lexerError) {
        var tokenDisplay, lexerMessage;
        // Planning to add a token property to moo's thrown error
        // even on erroring tokens to be used in error display below
        var token = lexerError.token;
        if (token) {
            tokenDisplay = "input " + JSON.stringify(token.text[0]) + " (lexer error)";
            lexerMessage = this.lexer.formatError(token, "Syntax error");
        } else {
            tokenDisplay = "input (lexer error)";
            lexerMessage = lexerError.message;
        }
        return this.reportErrorCommon(lexerMessage, tokenDisplay);
    };

    Parser.prototype.reportError = function(token) {
        var tokenDisplay = (token.type ? token.type + " token: " : "") + JSON.stringify(token.value !== undefined ? token.value : token);
        var lexerMessage = this.lexer.formatError(token, "Syntax error");
        return this.reportErrorCommon(lexerMessage, tokenDisplay);
    };

    Parser.prototype.reportErrorCommon = function(lexerMessage, tokenDisplay) {
        var lines = [];
        lines.push(lexerMessage);
        var lastColumnIndex = this.table.length - 2;
        var lastColumn = this.table[lastColumnIndex];
        var expectantStates = lastColumn.states
            .filter(function(state) {
                var nextSymbol = state.rule.symbols[state.dot];
                return nextSymbol && typeof nextSymbol !== "string";
            });

        if (expectantStates.length === 0) {
            lines.push('Unexpected ' + tokenDisplay + '. I did not expect any more input. Here is the state of my parse table:\n');
            this.displayStateStack(lastColumn.states, lines);
        } else {
            lines.push('Unexpected ' + tokenDisplay + '. Instead, I was expecting to see one of the following:\n');
            // Display a "state stack" for each expectant state
            // - which shows you how this state came to be, step by step.
            // If there is more than one derivation, we only display the first one.
            var stateStacks = expectantStates
                .map(function(state) {
                    return this.buildFirstStateStack(state, []) || [state];
                }, this);
            // Display each state that is expecting a terminal symbol next.
            stateStacks.forEach(function(stateStack) {
                var state = stateStack[0];
                var nextSymbol = state.rule.symbols[state.dot];
                var symbolDisplay = this.getSymbolDisplay(nextSymbol);
                lines.push('A ' + symbolDisplay + ' based on:');
                this.displayStateStack(stateStack, lines);
            }, this);
        }
        lines.push("");
        return lines.join("\n");
    }
    
    Parser.prototype.displayStateStack = function(stateStack, lines) {
        var lastDisplay;
        var sameDisplayCount = 0;
        for (var j = 0; j < stateStack.length; j++) {
            var state = stateStack[j];
            var display = state.rule.toString(state.dot);
            if (display === lastDisplay) {
                sameDisplayCount++;
            } else {
                if (sameDisplayCount > 0) {
                    lines.push('    ^ ' + sameDisplayCount + ' more lines identical to this');
                }
                sameDisplayCount = 0;
                lines.push('    ' + display);
            }
            lastDisplay = display;
        }
    };

    Parser.prototype.getSymbolDisplay = function(symbol) {
        return getSymbolLongDisplay(symbol);
    };

    /*
    Builds a the first state stack. You can think of a state stack as the call stack
    of the recursive-descent parser which the Nearley parse algorithm simulates.
    A state stack is represented as an array of state objects. Within a
    state stack, the first item of the array will be the starting
    state, with each successive item in the array going further back into history.

    This function needs to be given a starting state and an empty array representing
    the visited states, and it returns an single state stack.

    */
    Parser.prototype.buildFirstStateStack = function(state, visited) {
        if (visited.indexOf(state) !== -1) {
            // Found cycle, return null
            // to eliminate this path from the results, because
            // we don't know how to display it meaningfully
            return null;
        }
        if (state.wantedBy.length === 0) {
            return [state];
        }
        var prevState = state.wantedBy[0];
        var childVisited = [state].concat(visited);
        var childResult = this.buildFirstStateStack(prevState, childVisited);
        if (childResult === null) {
            return null;
        }
        return [state].concat(childResult);
    };

    Parser.prototype.save = function() {
        var column = this.table[this.current];
        column.lexerState = this.lexerState;
        return column;
    };

    Parser.prototype.restore = function(column) {
        var index = column.index;
        this.current = index;
        this.table[index] = column;
        this.table.splice(index + 1);
        this.lexerState = column.lexerState;

        // Incrementally keep track of results
        this.results = this.finish();
    };

    // nb. deprecated: use save/restore instead!
    Parser.prototype.rewind = function(index) {
        if (!this.options.keepHistory) {
            throw new Error('set option `keepHistory` to enable rewinding')
        }
        // nb. recall column (table) indicies fall between token indicies.
        //        col 0   --   token 0   --   col 1
        this.restore(this.table[index]);
    };

    Parser.prototype.finish = function() {
        // Return the possible parsings
        var considerations = [];
        var start = this.grammar.start;
        var column = this.table[this.table.length - 1]
        column.states.forEach(function (t) {
            if (t.rule.name === start
                    && t.dot === t.rule.symbols.length
                    && t.reference === 0
                    && t.data !== Parser.fail) {
                considerations.push(t);
            }
        });
        return considerations.map(function(c) {return c.data; });
    };

    function getSymbolLongDisplay(symbol) {
        var type = typeof symbol;
        if (type === "string") {
            return symbol;
        } else if (type === "object") {
            if (symbol.literal) {
                return JSON.stringify(symbol.literal);
            } else if (symbol instanceof RegExp) {
                return 'character matching ' + symbol;
            } else if (symbol.type) {
                return symbol.type + ' token';
            } else if (symbol.test) {
                return 'token matching ' + String(symbol.test);
            } else {
                throw new Error('Unknown symbol type: ' + symbol);
            }
        }
    }

    function getSymbolShortDisplay(symbol) {
        var type = typeof symbol;
        if (type === "string") {
            return symbol;
        } else if (type === "object") {
            if (symbol.literal) {
                return JSON.stringify(symbol.literal);
            } else if (symbol instanceof RegExp) {
                return symbol.toString();
            } else if (symbol.type) {
                return '%' + symbol.type;
            } else if (symbol.test) {
                return '<' + String(symbol.test) + '>';
            } else {
                throw new Error('Unknown symbol type: ' + symbol);
            }
        }
    }

    return {
        Parser: Parser,
        Grammar: Grammar,
        Rule: Rule,
    };

}));

},{}],10:[function(require,module,exports){
'use strict';

var extend = require('extend');

var data = {
  permanent: require('./lib/iana-permanent.json'),
  provosional: require('./lib/iana-provisional.json'),
  historical: require('./lib/iana-historical.json')
};

var allByName = {};

Object.keys(data).forEach(function (type) {
  data[type].forEach(function (schemeObj) {
    allByName[schemeObj.scheme] = extend(schemeObj, { type: type });
  });
});

data.unofficial = require('./lib/unofficial.json').filter(function (item) {
  return !allByName[item.scheme];
});

data.unofficial.forEach(function (schemeObj) {
  allByName[schemeObj.scheme] = extend(schemeObj, { type: 'unofficial' });
});


module.exports = extend(data, { allByName: allByName });

},{"./lib/iana-historical.json":11,"./lib/iana-permanent.json":12,"./lib/iana-provisional.json":13,"./lib/unofficial.json":14,"extend":8}],11:[function(require,module,exports){
module.exports=[
  {
    "scheme": "fax",
    "description": "fax",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2806"
      },
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3966"
      }
    ]
  },
  {
    "scheme": "filesystem",
    "description": "filesystem",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/historic/filesystem"
  },
  {
    "scheme": "mailserver",
    "description": "Access to data available from mail servers",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6196"
      }
    ]
  },
  {
    "scheme": "modem",
    "description": "modem",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2806"
      },
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3966"
      }
    ]
  },
  {
    "scheme": "pack",
    "description": "pack",
    "reference": [
      {
        "type": "draft",
        "href": "http://www.iana.org/go/draft-shur-pack-uri-scheme"
      }
    ],
    "template": "http://www.iana.org/assignments/uri-schemes/historic/pack"
  },
  {
    "scheme": "prospero",
    "description": "Prospero Directory Service",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4157"
      }
    ]
  },
  {
    "scheme": "snews",
    "description": "NNTP over SSL/TLS",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc5538"
      }
    ]
  },
  {
    "scheme": "videotex",
    "description": "videotex",
    "reference": [
      {
        "type": "draft",
        "href": "http://www.iana.org/go/draft-mavrakis-videotex-url-spec"
      },
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2122"
      },
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3986"
      }
    ],
    "template": "http://www.iana.org/assignments/uri-schemes/historic/videotex"
  },
  {
    "scheme": "wais",
    "description": "Wide Area Information Servers",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4156"
      }
    ]
  },
  {
    "scheme": "z39.50",
    "description": "Z39.50 information access",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc1738"
      },
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2056"
      }
    ]
  }
]
},{}],12:[function(require,module,exports){
module.exports=[
  {
    "scheme": "aaa",
    "description": "Diameter Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6733"
      }
    ]
  },
  {
    "scheme": "aaas",
    "description": "Diameter Protocol with Secure Transport",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6733"
      }
    ]
  },
  {
    "scheme": "about",
    "description": "about",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6694"
      }
    ]
  },
  {
    "scheme": "acap",
    "description": "application configuration access protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2244"
      }
    ]
  },
  {
    "scheme": "acct",
    "description": "acct",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7565"
      }
    ]
  },
  {
    "scheme": "cap",
    "description": "Calendar Access Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4324"
      }
    ]
  },
  {
    "scheme": "cid",
    "description": "content identifier",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2392"
      }
    ]
  },
  {
    "scheme": "coap",
    "description": "coap",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7252"
      }
    ]
  },
  {
    "scheme": "coaps",
    "description": "coaps",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7252"
      }
    ]
  },
  {
    "scheme": "crid",
    "description": "TV-Anytime Content Reference Identifier",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4078"
      }
    ]
  },
  {
    "scheme": "data",
    "description": "data",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2397"
      }
    ]
  },
  {
    "scheme": "dav",
    "description": "dav",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4918"
      }
    ]
  },
  {
    "scheme": "dict",
    "description": "dictionary service protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2229"
      }
    ]
  },
  {
    "scheme": "dns",
    "description": "Domain Name System",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4501"
      }
    ]
  },
  {
    "scheme": "example",
    "description": "example",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7595"
      }
    ]
  },
  {
    "scheme": "file",
    "description": "Host-specific file names",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc1738"
      }
    ]
  },
  {
    "scheme": "ftp",
    "description": "File Transfer Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc1738"
      }
    ]
  },
  {
    "scheme": "geo",
    "description": "Geographic Locations",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc5870"
      }
    ]
  },
  {
    "scheme": "go",
    "description": "go",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3368"
      }
    ]
  },
  {
    "scheme": "gopher",
    "description": "The Gopher Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4266"
      }
    ]
  },
  {
    "scheme": "h323",
    "description": "H.323",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3508"
      }
    ]
  },
  {
    "scheme": "http",
    "description": "Hypertext Transfer Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7230"
      }
    ]
  },
  {
    "scheme": "https",
    "description": "Hypertext Transfer Protocol Secure",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7230"
      }
    ]
  },
  {
    "scheme": "iax",
    "description": "Inter-Asterisk eXchange Version 2",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc5456"
      }
    ]
  },
  {
    "scheme": "icap",
    "description": "Internet Content Adaptation Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3507"
      }
    ]
  },
  {
    "scheme": "im",
    "description": "Instant Messaging",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3860"
      }
    ]
  },
  {
    "scheme": "imap",
    "description": "internet message access protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc5092"
      }
    ]
  },
  {
    "scheme": "info",
    "description": "Information Assets with Identifiers in Public Namespaces. \n       (section 3) defines an \"info\" registry \n        of public namespaces, which is maintained by NISO and can be accessed \n        from .",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4452"
      }
    ]
  },
  {
    "scheme": "ipp",
    "description": "Internet Printing Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3510"
      }
    ]
  },
  {
    "scheme": "ipps",
    "description": "Internet Printing Protocol over HTTPS",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7472"
      }
    ]
  },
  {
    "scheme": "iris",
    "description": "Internet Registry Information Service",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3981"
      }
    ]
  },
  {
    "scheme": "iris.beep",
    "description": "iris.beep",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3983"
      }
    ]
  },
  {
    "scheme": "iris.lwz",
    "description": "iris.lwz",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4993"
      }
    ]
  },
  {
    "scheme": "iris.xpc",
    "description": "iris.xpc",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4992"
      }
    ]
  },
  {
    "scheme": "iris.xpcs",
    "description": "iris.xpcs",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4992"
      }
    ]
  },
  {
    "scheme": "jabber",
    "description": "jabber",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/perm/jabber"
  },
  {
    "scheme": "ldap",
    "description": "Lightweight Directory Access Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4516"
      }
    ]
  },
  {
    "scheme": "mailto",
    "description": "Electronic mail address",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6068"
      }
    ]
  },
  {
    "scheme": "mid",
    "description": "message identifier",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2392"
      }
    ]
  },
  {
    "scheme": "msrp",
    "description": "Message Session Relay Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4975"
      }
    ]
  },
  {
    "scheme": "msrps",
    "description": "Message Session Relay Protocol Secure",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4975"
      }
    ]
  },
  {
    "scheme": "mtqp",
    "description": "Message Tracking Query Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3887"
      }
    ]
  },
  {
    "scheme": "mupdate",
    "description": "Mailbox Update (MUPDATE) Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3656"
      }
    ]
  },
  {
    "scheme": "news",
    "description": "USENET news",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc5538"
      }
    ]
  },
  {
    "scheme": "nfs",
    "description": "network file system protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2224"
      }
    ]
  },
  {
    "scheme": "ni",
    "description": "ni",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6920"
      }
    ]
  },
  {
    "scheme": "nih",
    "description": "nih",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6920"
      }
    ]
  },
  {
    "scheme": "nntp",
    "description": "USENET news using NNTP access",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc5538"
      }
    ]
  },
  {
    "scheme": "opaquelocktoken",
    "description": "opaquelocktokent",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4918"
      }
    ]
  },
  {
    "scheme": "pkcs11",
    "description": "PKCS#11",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7512"
      }
    ]
  },
  {
    "scheme": "pop",
    "description": "Post Office Protocol v3",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2384"
      }
    ]
  },
  {
    "scheme": "pres",
    "description": "Presence",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3859"
      }
    ]
  },
  {
    "scheme": "reload",
    "description": "reload",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6940"
      }
    ]
  },
  {
    "scheme": "rtsp",
    "description": "Real-time Streaming Protocol (RTSP)",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2326"
      },
      {
        "type": "draft",
        "href": "http://www.iana.org/go/RFC-ietf-mmusic-rfc2326bis-40"
      }
    ]
  },
  {
    "scheme": "rtsps",
    "description": "Real-time Streaming Protocol (RTSP) over TLS",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2326"
      },
      {
        "type": "draft",
        "href": "http://www.iana.org/go/RFC-ietf-mmusic-rfc2326bis-40"
      }
    ]
  },
  {
    "scheme": "rtspu",
    "description": "Real-time Streaming Protocol (RTSP) over unreliable datagram transport",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2326"
      }
    ]
  },
  {
    "scheme": "service",
    "description": "service location",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2609"
      }
    ]
  },
  {
    "scheme": "session",
    "description": "session",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6787"
      }
    ]
  },
  {
    "scheme": "shttp",
    "description": "Secure Hypertext Transfer Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2660"
      }
    ]
  },
  {
    "scheme": "sieve",
    "description": "ManageSieve Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc5804"
      }
    ]
  },
  {
    "scheme": "sip",
    "description": "session initiation protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3261"
      }
    ]
  },
  {
    "scheme": "sips",
    "description": "secure session initiation protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3261"
      }
    ]
  },
  {
    "scheme": "sms",
    "description": "Short Message Service",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc5724"
      }
    ]
  },
  {
    "scheme": "snmp",
    "description": "Simple Network Management Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4088"
      }
    ]
  },
  {
    "scheme": "soap.beep",
    "description": "soap.beep",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4227"
      }
    ]
  },
  {
    "scheme": "soap.beeps",
    "description": "soap.beeps",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4227"
      }
    ]
  },
  {
    "scheme": "stun",
    "description": "stun",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7064"
      }
    ]
  },
  {
    "scheme": "stuns",
    "description": "stuns",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7064"
      }
    ]
  },
  {
    "scheme": "tag",
    "description": "tag",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4151"
      }
    ]
  },
  {
    "scheme": "tel",
    "description": "telephone",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3966"
      }
    ]
  },
  {
    "scheme": "telnet",
    "description": "Reference to interactive sessions",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc4248"
      }
    ]
  },
  {
    "scheme": "tftp",
    "description": "Trivial File Transfer Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3617"
      }
    ]
  },
  {
    "scheme": "thismessage",
    "description": "multipart/related relative reference resolution",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2557"
      }
    ],
    "template": "http://www.iana.org/assignments/uri-schemes/perm/thismessage"
  },
  {
    "scheme": "tip",
    "description": "Transaction Internet Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2371"
      }
    ]
  },
  {
    "scheme": "tn3270",
    "description": "Interactive 3270 emulation sessions",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6270"
      }
    ]
  },
  {
    "scheme": "turn",
    "description": "turn",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7065"
      }
    ]
  },
  {
    "scheme": "turns",
    "description": "turns",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7065"
      }
    ]
  },
  {
    "scheme": "tv",
    "description": "TV Broadcasts",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2838"
      }
    ]
  },
  {
    "scheme": "urn",
    "description": "Uniform Resource Names",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2141"
      },
      {
        "type": "registry",
        "href": "http://www.iana.org/assignments/urn-namespaces"
      }
    ]
  },
  {
    "scheme": "vemmi",
    "description": "versatile multimedia interface",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2122"
      }
    ]
  },
  {
    "scheme": "vnc",
    "description": "Remote Framebuffer Protocol",
    "reference": [
      {
        "type": "draft",
        "href": "http://www.iana.org/go/RFC-warden-appsawg-vnc-scheme-10"
      }
    ]
  },
  {
    "scheme": "ws",
    "description": "WebSocket connections",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6455"
      }
    ]
  },
  {
    "scheme": "wss",
    "description": "Encrypted WebSocket connections",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6455"
      }
    ]
  },
  {
    "scheme": "xcon",
    "description": "xcon",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6501"
      }
    ]
  },
  {
    "scheme": "xcon-userid",
    "description": "xcon-userid",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6501"
      }
    ]
  },
  {
    "scheme": "xmlrpc.beep",
    "description": "xmlrpc.beep",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3529"
      }
    ]
  },
  {
    "scheme": "xmlrpc.beeps",
    "description": "xmlrpc.beeps",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc3529"
      }
    ]
  },
  {
    "scheme": "xmpp",
    "description": "Extensible Messaging and Presence Protocol",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc5122"
      }
    ]
  },
  {
    "scheme": "z39.50r",
    "description": "Z39.50 Retrieval",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2056"
      }
    ]
  },
  {
    "scheme": "z39.50s",
    "description": "Z39.50 Session",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc2056"
      }
    ]
  }
]
},{}],13:[function(require,module,exports){
module.exports=[
  {
    "scheme": "acr",
    "description": "acr",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/acr"
  },
  {
    "scheme": "adiumxtra",
    "description": "adiumxtra",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/adiumxtra"
  },
  {
    "scheme": "afp",
    "description": "afp",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/afp"
  },
  {
    "scheme": "afs",
    "description": "Andrew File System global file names",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc1738"
      }
    ]
  },
  {
    "scheme": "aim",
    "description": "aim",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/aim"
  },
  {
    "scheme": "appdata",
    "description": "appdata",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/appdata"
  },
  {
    "scheme": "apt",
    "description": "apt",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/apt"
  },
  {
    "scheme": "attachment",
    "description": "attachment",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/attachment"
  },
  {
    "scheme": "aw",
    "description": "aw",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/aw"
  },
  {
    "scheme": "barion",
    "description": "barion",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/barion"
  },
  {
    "scheme": "beshare",
    "description": "beshare",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/beshare"
  },
  {
    "scheme": "bitcoin",
    "description": "bitcoin",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/bitcoin"
  },
  {
    "scheme": "blob",
    "description": "blob",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/blob"
  },
  {
    "scheme": "bolo",
    "description": "bolo",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/bolo"
  },
  {
    "scheme": "callto",
    "description": "callto",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/callto"
  },
  {
    "scheme": "chrome",
    "description": "chrome",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/chrome"
  },
  {
    "scheme": "chrome-extension",
    "description": "chrome-extension",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/chrome-extension"
  },
  {
    "scheme": "com-eventbrite-attendee",
    "description": "com-eventbrite-attendee",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/com-eventbrite-attendee"
  },
  {
    "scheme": "content",
    "description": "content",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/content"
  },
  {
    "scheme": "cvs",
    "description": "cvs",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/cvs"
  },
  {
    "scheme": "dis",
    "description": "dis",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/dis"
  },
  {
    "scheme": "dlna-playcontainer",
    "description": "dlna-playcontainer",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/dlna-playcontainer"
  },
  {
    "scheme": "dlna-playsingle",
    "description": "dlna-playsingle",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/dlna-playsingle"
  },
  {
    "scheme": "dntp",
    "description": "dntp",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/dntp"
  },
  {
    "scheme": "dtn",
    "description": "DTNRG research and development",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc5050"
      }
    ]
  },
  {
    "scheme": "dvb",
    "description": "dvb",
    "reference": [
      {
        "type": "draft",
        "href": "http://www.iana.org/go/draft-mcroberts-uri-dvb"
      }
    ]
  },
  {
    "scheme": "ed2k",
    "description": "ed2k",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ed2k"
  },
  {
    "scheme": "facetime",
    "description": "facetime",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/facetime"
  },
  {
    "scheme": "feed",
    "description": "feed",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/feed"
  },
  {
    "scheme": "feedready",
    "description": "feedready",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/feedready"
  },
  {
    "scheme": "finger",
    "description": "finger",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/finger"
  },
  {
    "scheme": "fish",
    "description": "fish",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/fish"
  },
  {
    "scheme": "gg",
    "description": "gg",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/gg"
  },
  {
    "scheme": "git",
    "description": "git",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/git"
  },
  {
    "scheme": "gizmoproject",
    "description": "gizmoproject",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/gizmoproject"
  },
  {
    "scheme": "gtalk",
    "description": "gtalk",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/gtalk"
  },
  {
    "scheme": "ham",
    "description": "ham",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7046"
      }
    ]
  },
  {
    "scheme": "hcp",
    "description": "hcp",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/hcp"
  },
  {
    "scheme": "icon",
    "description": "icon",
    "reference": [
      {
        "type": "draft",
        "href": "http://www.iana.org/go/draft-lafayette-icon-uri-scheme"
      }
    ]
  },
  {
    "scheme": "iotdisco",
    "description": "iotdisco",
    "reference": [
      {
        "type": "uri",
        "href": "http://www.iana.org/assignments/uri-schemes/prov/iotdisco.pdf"
      }
    ],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/iotdisco"
  },
  {
    "scheme": "ipn",
    "description": "ipn",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6260"
      }
    ]
  },
  {
    "scheme": "irc",
    "description": "irc",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/irc"
  },
  {
    "scheme": "irc6",
    "description": "irc6",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/irc6"
  },
  {
    "scheme": "ircs",
    "description": "ircs",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ircs"
  },
  {
    "scheme": "isostore",
    "description": "isostore",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/isostore"
  },
  {
    "scheme": "itms",
    "description": "itms",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/itms"
  },
  {
    "scheme": "jar",
    "description": "jar",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/jar"
  },
  {
    "scheme": "jms",
    "description": "Java Message Service",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc6167"
      }
    ]
  },
  {
    "scheme": "keyparc",
    "description": "keyparc",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/keyparc"
  },
  {
    "scheme": "lastfm",
    "description": "lastfm",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/lastfm"
  },
  {
    "scheme": "ldaps",
    "description": "ldaps",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ldaps"
  },
  {
    "scheme": "magnet",
    "description": "magnet",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/magnet"
  },
  {
    "scheme": "maps",
    "description": "maps",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/maps"
  },
  {
    "scheme": "market",
    "description": "market",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/market"
  },
  {
    "scheme": "message",
    "description": "message",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/message"
  },
  {
    "scheme": "mms",
    "description": "mms",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/mms"
  },
  {
    "scheme": "ms-access",
    "description": "ms-access",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-access"
  },
  {
    "scheme": "ms-drive-to",
    "description": "ms-drive-to",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-drive-to"
  },
  {
    "scheme": "ms-enrollment",
    "description": "ms-enrollment",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-enrollment"
  },
  {
    "scheme": "ms-excel",
    "description": "ms-excel",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-excel"
  },
  {
    "scheme": "ms-getoffice",
    "description": "ms-getoffice",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-getoffice"
  },
  {
    "scheme": "ms-help",
    "description": "ms-help",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-help"
  },
  {
    "scheme": "ms-infopath",
    "description": "ms-infopath",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-infopath"
  },
  {
    "scheme": "ms-media-stream-id",
    "description": "ms-media-stream-id",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-media-stream-id"
  },
  {
    "scheme": "ms-powerpoint",
    "description": "ms-powerpoint",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-powerpoint"
  },
  {
    "scheme": "ms-project",
    "description": "ms-project",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-project"
  },
  {
    "scheme": "ms-publisher",
    "description": "ms-publisher",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-publisher"
  },
  {
    "scheme": "ms-search-repair",
    "description": "ms-search-repair",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-search-repair"
  },
  {
    "scheme": "ms-secondary-screen-controller",
    "description": "ms-secondary-screen-controller",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-secondary-screen-controller"
  },
  {
    "scheme": "ms-secondary-screen-setup",
    "description": "ms-secondary-screen-setup",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-secondary-screen-setup"
  },
  {
    "scheme": "ms-settings",
    "description": "ms-settings",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings"
  },
  {
    "scheme": "ms-settings-airplanemode",
    "description": "ms-settings-airplanemode",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-airplanemode"
  },
  {
    "scheme": "ms-settings-bluetooth",
    "description": "ms-settings-bluetooth",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-bluetooth"
  },
  {
    "scheme": "ms-settings-camera",
    "description": "ms-settings-camera",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-camera"
  },
  {
    "scheme": "ms-settings-cellular",
    "description": "ms-settings-cellular",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-cellular"
  },
  {
    "scheme": "ms-settings-cloudstorage",
    "description": "ms-settings-cloudstorage",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-cloudstorage"
  },
  {
    "scheme": "ms-settings-connectabledevices",
    "description": "ms-settings-connectabledevices",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-connectabledevices"
  },
  {
    "scheme": "ms-settings-displays-topology",
    "description": "ms-settings-displays-topology",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-displays-topology"
  },
  {
    "scheme": "ms-settings-emailandaccounts",
    "description": "ms-settings-emailandaccounts",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-emailandaccounts"
  },
  {
    "scheme": "ms-settings-language",
    "description": "ms-settings-language",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-language"
  },
  {
    "scheme": "ms-settings-location",
    "description": "ms-settings-location",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-location"
  },
  {
    "scheme": "ms-settings-lock",
    "description": "ms-settings-lock",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-lock"
  },
  {
    "scheme": "ms-settings-nfctransactions",
    "description": "ms-settings-nfctransactions",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-nfctransactions"
  },
  {
    "scheme": "ms-settings-notifications",
    "description": "ms-settings-notifications",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-notifications"
  },
  {
    "scheme": "ms-settings-power",
    "description": "ms-settings-power",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-power"
  },
  {
    "scheme": "ms-settings-privacy",
    "description": "ms-settings-privacy",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-privacy"
  },
  {
    "scheme": "ms-settings-proximity",
    "description": "ms-settings-proximity",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-proximity"
  },
  {
    "scheme": "ms-settings-screenrotation",
    "description": "ms-settings-screenrotation",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-screenrotation"
  },
  {
    "scheme": "ms-settings-wifi",
    "description": "ms-settings-wifi",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-wifi"
  },
  {
    "scheme": "ms-settings-workplace",
    "description": "ms-settings-workplace",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-settings-workplace"
  },
  {
    "scheme": "ms-spd",
    "description": "ms-spd",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-spd"
  },
  {
    "scheme": "ms-transit-to",
    "description": "ms-transit-to",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-transit-to"
  },
  {
    "scheme": "ms-visio",
    "description": "ms-visio",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-visio"
  },
  {
    "scheme": "ms-walk-to",
    "description": "ms-walk-to",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-walk-to"
  },
  {
    "scheme": "ms-word",
    "description": "ms-word",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ms-word"
  },
  {
    "scheme": "msnim",
    "description": "msnim",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/msnim"
  },
  {
    "scheme": "mumble",
    "description": "mumble",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/mumble"
  },
  {
    "scheme": "mvn",
    "description": "mvn",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/mvn"
  },
  {
    "scheme": "notes",
    "description": "notes",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/notes"
  },
  {
    "scheme": "oid",
    "description": "oid",
    "reference": [
      {
        "type": "draft",
        "href": "http://www.iana.org/go/draft-larmouth-oid-iri"
      }
    ],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/oid"
  },
  {
    "scheme": "palm",
    "description": "palm",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/palm"
  },
  {
    "scheme": "paparazzi",
    "description": "paparazzi",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/paparazzi"
  },
  {
    "scheme": "platform",
    "description": "platform",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/platform"
  },
  {
    "scheme": "proxy",
    "description": "proxy",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/proxy"
  },
  {
    "scheme": "psyc",
    "description": "psyc",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/psyc"
  },
  {
    "scheme": "query",
    "description": "query",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/query"
  },
  {
    "scheme": "redis",
    "description": "redis",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/redis"
  },
  {
    "scheme": "rediss",
    "description": "rediss",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/rediss"
  },
  {
    "scheme": "res",
    "description": "res",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/res"
  },
  {
    "scheme": "resource",
    "description": "resource",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/resource"
  },
  {
    "scheme": "rmi",
    "description": "rmi",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/rmi"
  },
  {
    "scheme": "rsync",
    "description": "rsync",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc5781"
      }
    ]
  },
  {
    "scheme": "rtmfp",
    "description": "rtmfp",
    "reference": [
      {
        "type": "rfc",
        "href": "http://www.iana.org/go/rfc7425"
      }
    ],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/rtmfp"
  },
  {
    "scheme": "rtmp",
    "description": "rtmp",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/rtmp"
  },
  {
    "scheme": "secondlife",
    "description": "query",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/secondlife"
  },
  {
    "scheme": "sftp",
    "description": "query",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/sftp"
  },
  {
    "scheme": "sgn",
    "description": "sgn",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/sgn"
  },
  {
    "scheme": "skype",
    "description": "skype",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/skype"
  },
  {
    "scheme": "smb",
    "description": "smb",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/smb"
  },
  {
    "scheme": "smtp",
    "description": "smtp",
    "reference": [
      {
        "type": "draft",
        "href": "http://www.iana.org/go/draft-melnikov-smime-msa-to-mda"
      }
    ],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/smtp"
  },
  {
    "scheme": "soldat",
    "description": "soldat",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/soldat"
  },
  {
    "scheme": "spotify",
    "description": "spotify",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/spotify"
  },
  {
    "scheme": "ssh",
    "description": "ssh",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ssh"
  },
  {
    "scheme": "steam",
    "description": "steam",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/steam"
  },
  {
    "scheme": "submit",
    "description": "submit",
    "reference": [
      {
        "type": "draft",
        "href": "http://www.iana.org/go/draft-melnikov-smime-msa-to-mda"
      }
    ],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/submit"
  },
  {
    "scheme": "svn",
    "description": "svn",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/svn"
  },
  {
    "scheme": "teamspeak",
    "description": "teamspeak",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/teamspeak"
  },
  {
    "scheme": "teliaeid",
    "description": "teliaeid",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/teliaeid"
  },
  {
    "scheme": "things",
    "description": "things",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/things"
  },
  {
    "scheme": "tool",
    "description": "tool",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/tool"
  },
  {
    "scheme": "udp",
    "description": "udp",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/udp"
  },
  {
    "scheme": "unreal",
    "description": "unreal",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/unreal"
  },
  {
    "scheme": "ut2004",
    "description": "ut2004",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ut2004"
  },
  {
    "scheme": "v-event",
    "description": "v-event",
    "reference": [
      {
        "type": "draft",
        "href": "http://www.iana.org/go/draft-menderico-v-event-uri"
      }
    ],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/v-event"
  },
  {
    "scheme": "ventrilo",
    "description": "ventrilo",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ventrilo"
  },
  {
    "scheme": "view-source",
    "description": "view-source",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/view-source"
  },
  {
    "scheme": "webcal",
    "description": "webcal",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/webcal"
  },
  {
    "scheme": "wpid",
    "description": "wpid",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/wpid"
  },
  {
    "scheme": "wtai",
    "description": "wtai",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/wtai"
  },
  {
    "scheme": "wyciwyg",
    "description": "wyciwyg",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/wyciwyg"
  },
  {
    "scheme": "xfire",
    "description": "xfire",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/xfire"
  },
  {
    "scheme": "xri",
    "description": "xri",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/xri"
  },
  {
    "scheme": "ymsgr",
    "description": "ymsgr",
    "reference": [],
    "template": "http://www.iana.org/assignments/uri-schemes/prov/ymsgr"
  }
]
},{}],14:[function(require,module,exports){
module.exports=[
  {
    "scheme": "android-app"
  },
  {
    "scheme": "webpack"
  },
  {
    "scheme": "s3",
    "description": "Amazon Web Services S3 bucket"
  },
  {
    "scheme": "gs",
    "description": "Google Cloud Storage"
  },
  {
    "scheme": "mqtt",
    "description": "Message Queuing Telemetry Transport Protocol"
  },
  {
    "scheme": "modbus+tcp",
    "description": "Modbus over TCP"
  }
]

},{}],15:[function(require,module,exports){
"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
// Generated automatically by nearley, version 2.20.1
// http://github.com/Hardmath123/nearley
// Bypasses TS6133. Allow declared but unused functions.
// @ts-ignore
function id(d) { return d[0]; }
const deepFlatten = (arr) => [].concat(...arr.map((v) => (Array.isArray(v) ? deepFlatten(v) : v)));
function flat_string(d) {
    if (d) {
        if (Array.isArray(d))
            return deepFlatten(d).join("");
        return d;
    }
    return "";
}
;
;
;
;
const grammar = {
    Lexer: undefined,
    ParserRules: [
        { "name": "Reverse_path", "symbols": ["Path"] },
        { "name": "Reverse_path$string$1", "symbols": [{ "literal": "<" }, { "literal": ">" }], "postprocess": (d) => d.join('') },
        { "name": "Reverse_path", "symbols": ["Reverse_path$string$1"] },
        { "name": "Forward_path$subexpression$1$subexpression$1", "symbols": [{ "literal": "<" }, /[pP]/, /[oO]/, /[sS]/, /[tT]/, /[mM]/, /[aA]/, /[sS]/, /[tT]/, /[eE]/, /[rR]/, { "literal": "@" }], "postprocess": function (d) { return d.join(""); } },
        { "name": "Forward_path$subexpression$1", "symbols": ["Forward_path$subexpression$1$subexpression$1", "Domain", { "literal": ">" }] },
        { "name": "Forward_path", "symbols": ["Forward_path$subexpression$1"] },
        { "name": "Forward_path$subexpression$2", "symbols": [{ "literal": "<" }, /[pP]/, /[oO]/, /[sS]/, /[tT]/, /[mM]/, /[aA]/, /[sS]/, /[tT]/, /[eE]/, /[rR]/, { "literal": ">" }], "postprocess": function (d) { return d.join(""); } },
        { "name": "Forward_path", "symbols": ["Forward_path$subexpression$2"] },
        { "name": "Forward_path", "symbols": ["Path"] },
        { "name": "Path$ebnf$1$subexpression$1", "symbols": ["A_d_l", { "literal": ":" }] },
        { "name": "Path$ebnf$1", "symbols": ["Path$ebnf$1$subexpression$1"], "postprocess": id },
        { "name": "Path$ebnf$1", "symbols": [], "postprocess": () => null },
        { "name": "Path", "symbols": [{ "literal": "<" }, "Path$ebnf$1", "Mailbox", { "literal": ">" }] },
        { "name": "A_d_l$ebnf$1", "symbols": [] },
        { "name": "A_d_l$ebnf$1$subexpression$1", "symbols": [{ "literal": "," }, "At_domain"] },
        { "name": "A_d_l$ebnf$1", "symbols": ["A_d_l$ebnf$1", "A_d_l$ebnf$1$subexpression$1"], "postprocess": (d) => d[0].concat([d[1]]) },
        { "name": "A_d_l", "symbols": ["At_domain", "A_d_l$ebnf$1"] },
        { "name": "At_domain", "symbols": [{ "literal": "@" }, "Domain"] },
        { "name": "Domain$ebnf$1", "symbols": [] },
        { "name": "Domain$ebnf$1$subexpression$1", "symbols": [{ "literal": "." }, "sub_domain"] },
        { "name": "Domain$ebnf$1", "symbols": ["Domain$ebnf$1", "Domain$ebnf$1$subexpression$1"], "postprocess": (d) => d[0].concat([d[1]]) },
        { "name": "Domain", "symbols": ["sub_domain", "Domain$ebnf$1"] },
        { "name": "sub_domain", "symbols": ["U_label"] },
        { "name": "Let_dig", "symbols": ["ALPHA_DIGIT"], "postprocess": id },
        { "name": "Ldh_str$ebnf$1", "symbols": [] },
        { "name": "Ldh_str$ebnf$1", "symbols": ["Ldh_str$ebnf$1", "ALPHA_DIG_DASH"], "postprocess": (d) => d[0].concat([d[1]]) },
        { "name": "Ldh_str", "symbols": ["Ldh_str$ebnf$1", "Let_dig"] },
        { "name": "U_Let_dig", "symbols": ["ALPHA_DIGIT_U"], "postprocess": id },
        { "name": "U_Ldh_str$ebnf$1", "symbols": [] },
        { "name": "U_Ldh_str$ebnf$1", "symbols": ["U_Ldh_str$ebnf$1", "ALPHA_DIG_DASH_U"], "postprocess": (d) => d[0].concat([d[1]]) },
        { "name": "U_Ldh_str", "symbols": ["U_Ldh_str$ebnf$1", "U_Let_dig"] },
        { "name": "U_label$ebnf$1$subexpression$1", "symbols": ["U_Ldh_str"] },
        { "name": "U_label$ebnf$1", "symbols": ["U_label$ebnf$1$subexpression$1"], "postprocess": id },
        { "name": "U_label$ebnf$1", "symbols": [], "postprocess": () => null },
        { "name": "U_label", "symbols": ["U_Let_dig", "U_label$ebnf$1"] },
        { "name": "address_literal$subexpression$1", "symbols": ["IPv4_address_literal"] },
        { "name": "address_literal$subexpression$1", "symbols": ["IPv6_address_literal"] },
        { "name": "address_literal$subexpression$1", "symbols": ["General_address_literal"] },
        { "name": "address_literal", "symbols": [{ "literal": "[" }, "address_literal$subexpression$1", { "literal": "]" }] },
        { "name": "non_local_part", "symbols": ["Domain"], "postprocess": function (d) {
                return { DomainName: flat_string(d[0]) };
            }
        },
        { "name": "non_local_part", "symbols": ["address_literal"], "postprocess": function (d) {
                return { AddressLiteral: flat_string(d[0]) };
            }
        },
        { "name": "Mailbox", "symbols": ["Local_part", { "literal": "@" }, "non_local_part"], "postprocess": function (d) {
                return { localPart: flat_string(d[0]), domainPart: flat_string(d[2]) };
            }
        },
        { "name": "Local_part", "symbols": ["Dot_string"], "postprocess": function (d) {
                return { DotString: flat_string(d[0]) };
            }
        },
        { "name": "Local_part", "symbols": ["Quoted_string"], "postprocess": function (d) {
                return { QuotedString: flat_string(d[0]) };
            }
        },
        { "name": "Dot_string$ebnf$1", "symbols": [] },
        { "name": "Dot_string$ebnf$1$subexpression$1", "symbols": [{ "literal": "." }, "Atom"] },
        { "name": "Dot_string$ebnf$1", "symbols": ["Dot_string$ebnf$1", "Dot_string$ebnf$1$subexpression$1"], "postprocess": (d) => d[0].concat([d[1]]) },
        { "name": "Dot_string", "symbols": ["Atom", "Dot_string$ebnf$1"] },
        { "name": "Atom$ebnf$1", "symbols": [/[0-9A-Za-z!#$%&'*+\-/=?^_`{|}~\u0080-\uFFFF/]/] },
        { "name": "Atom$ebnf$1", "symbols": ["Atom$ebnf$1", /[0-9A-Za-z!#$%&'*+\-/=?^_`{|}~\u0080-\uFFFF/]/], "postprocess": (d) => d[0].concat([d[1]]) },
        { "name": "Atom", "symbols": ["Atom$ebnf$1"] },
        { "name": "Quoted_string$ebnf$1", "symbols": [] },
        { "name": "Quoted_string$ebnf$1", "symbols": ["Quoted_string$ebnf$1", "QcontentSMTP"], "postprocess": (d) => d[0].concat([d[1]]) },
        { "name": "Quoted_string", "symbols": ["DQUOTE", "Quoted_string$ebnf$1", "DQUOTE"] },
        { "name": "QcontentSMTP", "symbols": ["qtextSMTP"] },
        { "name": "QcontentSMTP", "symbols": ["quoted_pairSMTP"] },
        { "name": "quoted_pairSMTP", "symbols": [{ "literal": "\\" }, /[\x20-\x7e]/] },
        { "name": "qtextSMTP", "symbols": [/[\x20-\x21\x23-\x5b\x5d-\x7e\u0080-\uFFFF]/], "postprocess": id },
        { "name": "IPv4_address_literal$macrocall$2", "symbols": [{ "literal": "." }, "Snum"] },
        { "name": "IPv4_address_literal$macrocall$1", "symbols": ["IPv4_address_literal$macrocall$2", "IPv4_address_literal$macrocall$2", "IPv4_address_literal$macrocall$2"] },
        { "name": "IPv4_address_literal", "symbols": ["Snum", "IPv4_address_literal$macrocall$1"] },
        { "name": "IPv6_address_literal$subexpression$1", "symbols": [/[iI]/, /[pP]/, /[vV]/, { "literal": "6" }, { "literal": ":" }], "postprocess": function (d) { return d.join(""); } },
        { "name": "IPv6_address_literal", "symbols": ["IPv6_address_literal$subexpression$1", "IPv6_addr"] },
        { "name": "General_address_literal$ebnf$1", "symbols": ["dcontent"] },
        { "name": "General_address_literal$ebnf$1", "symbols": ["General_address_literal$ebnf$1", "dcontent"], "postprocess": (d) => d[0].concat([d[1]]) },
        { "name": "General_address_literal", "symbols": ["Standardized_tag", { "literal": ":" }, "General_address_literal$ebnf$1"] },
        { "name": "Standardized_tag", "symbols": ["Ldh_str"] },
        { "name": "dcontent", "symbols": [/[\x21-\x5a\x5e-\x7e]/], "postprocess": id },
        { "name": "Snum", "symbols": ["DIGIT"] },
        { "name": "Snum$subexpression$1", "symbols": [/[1-9]/, "DIGIT"] },
        { "name": "Snum", "symbols": ["Snum$subexpression$1"] },
        { "name": "Snum$subexpression$2", "symbols": [{ "literal": "1" }, "DIGIT", "DIGIT"] },
        { "name": "Snum", "symbols": ["Snum$subexpression$2"] },
        { "name": "Snum$subexpression$3", "symbols": [{ "literal": "2" }, /[0-4]/, "DIGIT"] },
        { "name": "Snum", "symbols": ["Snum$subexpression$3"] },
        { "name": "Snum$subexpression$4", "symbols": [{ "literal": "2" }, { "literal": "5" }, /[0-5]/] },
        { "name": "Snum", "symbols": ["Snum$subexpression$4"] },
        { "name": "IPv6_addr", "symbols": ["IPv6_full"] },
        { "name": "IPv6_addr", "symbols": ["IPv6_comp"] },
        { "name": "IPv6_addr", "symbols": ["IPv6v4_full"] },
        { "name": "IPv6_addr", "symbols": ["IPv6v4_comp"] },
        { "name": "IPv6_hex", "symbols": ["HEXDIG"] },
        { "name": "IPv6_hex$subexpression$1", "symbols": ["HEXDIG", "HEXDIG"] },
        { "name": "IPv6_hex", "symbols": ["IPv6_hex$subexpression$1"] },
        { "name": "IPv6_hex$subexpression$2", "symbols": ["HEXDIG", "HEXDIG", "HEXDIG"] },
        { "name": "IPv6_hex", "symbols": ["IPv6_hex$subexpression$2"] },
        { "name": "IPv6_hex$subexpression$3", "symbols": ["HEXDIG", "HEXDIG", "HEXDIG", "HEXDIG"] },
        { "name": "IPv6_hex", "symbols": ["IPv6_hex$subexpression$3"] },
        { "name": "IPv6_full$macrocall$2", "symbols": [{ "literal": ":" }, "IPv6_hex"] },
        { "name": "IPv6_full$macrocall$1", "symbols": ["IPv6_full$macrocall$2", "IPv6_full$macrocall$2", "IPv6_full$macrocall$2", "IPv6_full$macrocall$2", "IPv6_full$macrocall$2", "IPv6_full$macrocall$2", "IPv6_full$macrocall$2"] },
        { "name": "IPv6_full", "symbols": ["IPv6_hex", "IPv6_full$macrocall$1"] },
        { "name": "IPv6_comp$ebnf$1$subexpression$1$macrocall$2", "symbols": [{ "literal": ":" }, "IPv6_hex"] },
        { "name": "IPv6_comp$ebnf$1$subexpression$1$macrocall$1", "symbols": ["IPv6_comp$ebnf$1$subexpression$1$macrocall$2", "IPv6_comp$ebnf$1$subexpression$1$macrocall$2", "IPv6_comp$ebnf$1$subexpression$1$macrocall$2", "IPv6_comp$ebnf$1$subexpression$1$macrocall$2", "IPv6_comp$ebnf$1$subexpression$1$macrocall$2"] },
        { "name": "IPv6_comp$ebnf$1$subexpression$1", "symbols": ["IPv6_hex", "IPv6_comp$ebnf$1$subexpression$1$macrocall$1"] },
        { "name": "IPv6_comp$ebnf$1", "symbols": ["IPv6_comp$ebnf$1$subexpression$1"], "postprocess": id },
        { "name": "IPv6_comp$ebnf$1", "symbols": [], "postprocess": () => null },
        { "name": "IPv6_comp$string$1", "symbols": [{ "literal": ":" }, { "literal": ":" }], "postprocess": (d) => d.join('') },
        { "name": "IPv6_comp$ebnf$2$subexpression$1$macrocall$2", "symbols": [{ "literal": ":" }, "IPv6_hex"] },
        { "name": "IPv6_comp$ebnf$2$subexpression$1$macrocall$1", "symbols": ["IPv6_comp$ebnf$2$subexpression$1$macrocall$2", "IPv6_comp$ebnf$2$subexpression$1$macrocall$2", "IPv6_comp$ebnf$2$subexpression$1$macrocall$2", "IPv6_comp$ebnf$2$subexpression$1$macrocall$2", "IPv6_comp$ebnf$2$subexpression$1$macrocall$2"] },
        { "name": "IPv6_comp$ebnf$2$subexpression$1", "symbols": ["IPv6_hex", "IPv6_comp$ebnf$2$subexpression$1$macrocall$1"] },
        { "name": "IPv6_comp$ebnf$2", "symbols": ["IPv6_comp$ebnf$2$subexpression$1"], "postprocess": id },
        { "name": "IPv6_comp$ebnf$2", "symbols": [], "postprocess": () => null },
        { "name": "IPv6_comp", "symbols": ["IPv6_comp$ebnf$1", "IPv6_comp$string$1", "IPv6_comp$ebnf$2"] },
        { "name": "IPv6v4_full$macrocall$2", "symbols": [{ "literal": ":" }, "IPv6_hex"] },
        { "name": "IPv6v4_full$macrocall$1", "symbols": ["IPv6v4_full$macrocall$2", "IPv6v4_full$macrocall$2", "IPv6v4_full$macrocall$2", "IPv6v4_full$macrocall$2", "IPv6v4_full$macrocall$2"] },
        { "name": "IPv6v4_full", "symbols": ["IPv6_hex", "IPv6v4_full$macrocall$1", { "literal": ":" }, "IPv4_address_literal"] },
        { "name": "IPv6v4_comp$ebnf$1$subexpression$1$macrocall$2", "symbols": [{ "literal": ":" }, "IPv6_hex"] },
        { "name": "IPv6v4_comp$ebnf$1$subexpression$1$macrocall$1", "symbols": ["IPv6v4_comp$ebnf$1$subexpression$1$macrocall$2", "IPv6v4_comp$ebnf$1$subexpression$1$macrocall$2", "IPv6v4_comp$ebnf$1$subexpression$1$macrocall$2"] },
        { "name": "IPv6v4_comp$ebnf$1$subexpression$1", "symbols": ["IPv6_hex", "IPv6v4_comp$ebnf$1$subexpression$1$macrocall$1"] },
        { "name": "IPv6v4_comp$ebnf$1", "symbols": ["IPv6v4_comp$ebnf$1$subexpression$1"], "postprocess": id },
        { "name": "IPv6v4_comp$ebnf$1", "symbols": [], "postprocess": () => null },
        { "name": "IPv6v4_comp$string$1", "symbols": [{ "literal": ":" }, { "literal": ":" }], "postprocess": (d) => d.join('') },
        { "name": "IPv6v4_comp$ebnf$2$subexpression$1$macrocall$2", "symbols": [{ "literal": ":" }, "IPv6_hex"] },
        { "name": "IPv6v4_comp$ebnf$2$subexpression$1$macrocall$1", "symbols": ["IPv6v4_comp$ebnf$2$subexpression$1$macrocall$2", "IPv6v4_comp$ebnf$2$subexpression$1$macrocall$2", "IPv6v4_comp$ebnf$2$subexpression$1$macrocall$2"] },
        { "name": "IPv6v4_comp$ebnf$2$subexpression$1", "symbols": ["IPv6_hex", "IPv6v4_comp$ebnf$2$subexpression$1$macrocall$1", { "literal": ":" }] },
        { "name": "IPv6v4_comp$ebnf$2", "symbols": ["IPv6v4_comp$ebnf$2$subexpression$1"], "postprocess": id },
        { "name": "IPv6v4_comp$ebnf$2", "symbols": [], "postprocess": () => null },
        { "name": "IPv6v4_comp", "symbols": ["IPv6v4_comp$ebnf$1", "IPv6v4_comp$string$1", "IPv6v4_comp$ebnf$2", "IPv4_address_literal"] },
        { "name": "DIGIT", "symbols": [/[0-9]/], "postprocess": id },
        { "name": "ALPHA_DIGIT_U", "symbols": [/[0-9A-Za-z\u0080-\uFFFF]/], "postprocess": id },
        { "name": "ALPHA_DIGIT", "symbols": [/[0-9A-Za-z]/], "postprocess": id },
        { "name": "ALPHA_DIG_DASH", "symbols": [/[-0-9A-Za-z]/], "postprocess": id },
        { "name": "ALPHA_DIG_DASH_U", "symbols": [/[-0-9A-Za-z\u0080-\uFFFF]/], "postprocess": id },
        { "name": "HEXDIG", "symbols": [/[0-9A-Fa-f]/], "postprocess": id },
        { "name": "DQUOTE", "symbols": [{ "literal": "\"" }], "postprocess": id }
    ],
    ParserStart: "Reverse_path",
};
exports.default = grammar;

},{}],16:[function(require,module,exports){
"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
exports.canonicalize = exports.canonicalize_quoted_string = exports.normalize = exports.normalize_dot_string = exports.parse = void 0;
// const punycode = require('punycode');
const nearley = require("nearley");
const grammar_1 = __importDefault(require("./grammar"));
grammar_1.default.ParserStart = "Mailbox";
const grammar = nearley.Grammar.fromCompiled(grammar_1.default);
// <https://tools.ietf.org/html/rfc5321#section-4.1.2>
function parse(address) {
    // An insane length, to protect the parsing code from huge input. SMTP line limit, minus command size.
    const insane_length = 1000 - "MAIL FROM:<>\r\n".length;
    if (address.length > insane_length) {
        throw new Error("address too long");
    }
    const parser = new nearley.Parser(grammar);
    parser.feed(address);
    if (parser.results.length !== 1) {
        throw new Error("address parsing failed: ambiguous grammar");
    }
    // Domain checks
    const at_idx = address.lastIndexOf('@'); // must be found, since parse was successful
    const domain = address.substring(at_idx + 1);
    if (domain[0] !== '[') { // Not an address literal
        if (domain.length > 253) {
            throw new Error("domain too long");
        }
        const labels = domain.split(".");
        if (labels.length < 2) {
            throw new Error("domain not fully qualified");
        }
        if (labels[labels.length - 1].length < 2) {
            throw new Error("top level domain label too short");
        }
        labels.sort(function (a, b) {
            return b.length - a.length;
        });
        if (labels[0].length > 63) {
            throw new Error("domain label too long");
        }
    }
    return parser.results[0];
}
exports.parse = parse;
/** Strip +something, strip '.'s, and map to lower case.
 */
function normalize_dot_string(dot_string) {
    const tagless = (function () {
        const plus_loc = dot_string.indexOf("+");
        if (plus_loc === -1) {
            return dot_string;
        }
        return dot_string.substr(0, plus_loc);
    })();
    const dotless = tagless.replace(/\./g, "");
    return dotless.toLowerCase();
}
exports.normalize_dot_string = normalize_dot_string;
/** The G style address normalization.
 */
function normalize(address) {
    var _a, _b;
    const a = parse(address);
    const domain = (_a = a.domainPart.AddressLiteral) !== null && _a !== void 0 ? _a : a.domainPart.DomainName.toLowerCase();
    const local = (_b = a.localPart.QuotedString) !== null && _b !== void 0 ? _b : normalize_dot_string(a.localPart.DotString);
    return `${local}@${domain}`;
}
exports.normalize = normalize;
function canonicalize_quoted_string(quoted_string) {
    const unquoted = quoted_string.substr(1).substr(0, quoted_string.length - 2);
    const unescaped = unquoted.replace(/(?:\\(.))/g, "$1");
    const reescaped = unescaped.replace(/(?:(["\\]))/g, "\\$1");
    return `"${reescaped}"`; // re-quote
}
exports.canonicalize_quoted_string = canonicalize_quoted_string;
/**
 * Apply a canonicalization consistent with standards to support
 * comparison as a string.
 */
function canonicalize(address) {
    var _a;
    const a = parse(address);
    const domain = (_a = a.domainPart.AddressLiteral) !== null && _a !== void 0 ? _a : a.domainPart.DomainName.toLowerCase();
    const local = a.localPart.QuotedString
        ? canonicalize_quoted_string(a.localPart.QuotedString)
        : a.localPart.DotString;
    return `${local}@${domain}`;
}
exports.canonicalize = canonicalize;

},{"./grammar":15,"nearley":9}],17:[function(require,module,exports){
/** @license URI.js v4.4.1 (c) 2011 Gary Court. License: http://github.com/garycourt/uri-js */
(function (global, factory) {
	typeof exports === 'object' && typeof module !== 'undefined' ? factory(exports) :
	typeof define === 'function' && define.amd ? define(['exports'], factory) :
	(factory((global.URI = global.URI || {})));
}(this, (function (exports) { 'use strict';

function merge() {
    for (var _len = arguments.length, sets = Array(_len), _key = 0; _key < _len; _key++) {
        sets[_key] = arguments[_key];
    }

    if (sets.length > 1) {
        sets[0] = sets[0].slice(0, -1);
        var xl = sets.length - 1;
        for (var x = 1; x < xl; ++x) {
            sets[x] = sets[x].slice(1, -1);
        }
        sets[xl] = sets[xl].slice(1);
        return sets.join('');
    } else {
        return sets[0];
    }
}
function subexp(str) {
    return "(?:" + str + ")";
}
function typeOf(o) {
    return o === undefined ? "undefined" : o === null ? "null" : Object.prototype.toString.call(o).split(" ").pop().split("]").shift().toLowerCase();
}
function toUpperCase(str) {
    return str.toUpperCase();
}
function toArray(obj) {
    return obj !== undefined && obj !== null ? obj instanceof Array ? obj : typeof obj.length !== "number" || obj.split || obj.setInterval || obj.call ? [obj] : Array.prototype.slice.call(obj) : [];
}
function assign(target, source) {
    var obj = target;
    if (source) {
        for (var key in source) {
            obj[key] = source[key];
        }
    }
    return obj;
}

function buildExps(isIRI) {
    var ALPHA$$ = "[A-Za-z]",
        CR$ = "[\\x0D]",
        DIGIT$$ = "[0-9]",
        DQUOTE$$ = "[\\x22]",
        HEXDIG$$ = merge(DIGIT$$, "[A-Fa-f]"),
        //case-insensitive
    LF$$ = "[\\x0A]",
        SP$$ = "[\\x20]",
        PCT_ENCODED$ = subexp(subexp("%[EFef]" + HEXDIG$$ + "%" + HEXDIG$$ + HEXDIG$$ + "%" + HEXDIG$$ + HEXDIG$$) + "|" + subexp("%[89A-Fa-f]" + HEXDIG$$ + "%" + HEXDIG$$ + HEXDIG$$) + "|" + subexp("%" + HEXDIG$$ + HEXDIG$$)),
        //expanded
    GEN_DELIMS$$ = "[\\:\\/\\?\\#\\[\\]\\@]",
        SUB_DELIMS$$ = "[\\!\\$\\&\\'\\(\\)\\*\\+\\,\\;\\=]",
        RESERVED$$ = merge(GEN_DELIMS$$, SUB_DELIMS$$),
        UCSCHAR$$ = isIRI ? "[\\xA0-\\u200D\\u2010-\\u2029\\u202F-\\uD7FF\\uF900-\\uFDCF\\uFDF0-\\uFFEF]" : "[]",
        //subset, excludes bidi control characters
    IPRIVATE$$ = isIRI ? "[\\uE000-\\uF8FF]" : "[]",
        //subset
    UNRESERVED$$ = merge(ALPHA$$, DIGIT$$, "[\\-\\.\\_\\~]", UCSCHAR$$),
        SCHEME$ = subexp(ALPHA$$ + merge(ALPHA$$, DIGIT$$, "[\\+\\-\\.]") + "*"),
        USERINFO$ = subexp(subexp(PCT_ENCODED$ + "|" + merge(UNRESERVED$$, SUB_DELIMS$$, "[\\:]")) + "*"),
        DEC_OCTET$ = subexp(subexp("25[0-5]") + "|" + subexp("2[0-4]" + DIGIT$$) + "|" + subexp("1" + DIGIT$$ + DIGIT$$) + "|" + subexp("[1-9]" + DIGIT$$) + "|" + DIGIT$$),
        DEC_OCTET_RELAXED$ = subexp(subexp("25[0-5]") + "|" + subexp("2[0-4]" + DIGIT$$) + "|" + subexp("1" + DIGIT$$ + DIGIT$$) + "|" + subexp("0?[1-9]" + DIGIT$$) + "|0?0?" + DIGIT$$),
        //relaxed parsing rules
    IPV4ADDRESS$ = subexp(DEC_OCTET_RELAXED$ + "\\." + DEC_OCTET_RELAXED$ + "\\." + DEC_OCTET_RELAXED$ + "\\." + DEC_OCTET_RELAXED$),
        H16$ = subexp(HEXDIG$$ + "{1,4}"),
        LS32$ = subexp(subexp(H16$ + "\\:" + H16$) + "|" + IPV4ADDRESS$),
        IPV6ADDRESS1$ = subexp(subexp(H16$ + "\\:") + "{6}" + LS32$),
        //                           6( h16 ":" ) ls32
    IPV6ADDRESS2$ = subexp("\\:\\:" + subexp(H16$ + "\\:") + "{5}" + LS32$),
        //                      "::" 5( h16 ":" ) ls32
    IPV6ADDRESS3$ = subexp(subexp(H16$) + "?\\:\\:" + subexp(H16$ + "\\:") + "{4}" + LS32$),
        //[               h16 ] "::" 4( h16 ":" ) ls32
    IPV6ADDRESS4$ = subexp(subexp(subexp(H16$ + "\\:") + "{0,1}" + H16$) + "?\\:\\:" + subexp(H16$ + "\\:") + "{3}" + LS32$),
        //[ *1( h16 ":" ) h16 ] "::" 3( h16 ":" ) ls32
    IPV6ADDRESS5$ = subexp(subexp(subexp(H16$ + "\\:") + "{0,2}" + H16$) + "?\\:\\:" + subexp(H16$ + "\\:") + "{2}" + LS32$),
        //[ *2( h16 ":" ) h16 ] "::" 2( h16 ":" ) ls32
    IPV6ADDRESS6$ = subexp(subexp(subexp(H16$ + "\\:") + "{0,3}" + H16$) + "?\\:\\:" + H16$ + "\\:" + LS32$),
        //[ *3( h16 ":" ) h16 ] "::"    h16 ":"   ls32
    IPV6ADDRESS7$ = subexp(subexp(subexp(H16$ + "\\:") + "{0,4}" + H16$) + "?\\:\\:" + LS32$),
        //[ *4( h16 ":" ) h16 ] "::"              ls32
    IPV6ADDRESS8$ = subexp(subexp(subexp(H16$ + "\\:") + "{0,5}" + H16$) + "?\\:\\:" + H16$),
        //[ *5( h16 ":" ) h16 ] "::"              h16
    IPV6ADDRESS9$ = subexp(subexp(subexp(H16$ + "\\:") + "{0,6}" + H16$) + "?\\:\\:"),
        //[ *6( h16 ":" ) h16 ] "::"
    IPV6ADDRESS$ = subexp([IPV6ADDRESS1$, IPV6ADDRESS2$, IPV6ADDRESS3$, IPV6ADDRESS4$, IPV6ADDRESS5$, IPV6ADDRESS6$, IPV6ADDRESS7$, IPV6ADDRESS8$, IPV6ADDRESS9$].join("|")),
        ZONEID$ = subexp(subexp(UNRESERVED$$ + "|" + PCT_ENCODED$) + "+"),
        //RFC 6874
    IPV6ADDRZ$ = subexp(IPV6ADDRESS$ + "\\%25" + ZONEID$),
        //RFC 6874
    IPV6ADDRZ_RELAXED$ = subexp(IPV6ADDRESS$ + subexp("\\%25|\\%(?!" + HEXDIG$$ + "{2})") + ZONEID$),
        //RFC 6874, with relaxed parsing rules
    IPVFUTURE$ = subexp("[vV]" + HEXDIG$$ + "+\\." + merge(UNRESERVED$$, SUB_DELIMS$$, "[\\:]") + "+"),
        IP_LITERAL$ = subexp("\\[" + subexp(IPV6ADDRZ_RELAXED$ + "|" + IPV6ADDRESS$ + "|" + IPVFUTURE$) + "\\]"),
        //RFC 6874
    REG_NAME$ = subexp(subexp(PCT_ENCODED$ + "|" + merge(UNRESERVED$$, SUB_DELIMS$$)) + "*"),
        HOST$ = subexp(IP_LITERAL$ + "|" + IPV4ADDRESS$ + "(?!" + REG_NAME$ + ")" + "|" + REG_NAME$),
        PORT$ = subexp(DIGIT$$ + "*"),
        AUTHORITY$ = subexp(subexp(USERINFO$ + "@") + "?" + HOST$ + subexp("\\:" + PORT$) + "?"),
        PCHAR$ = subexp(PCT_ENCODED$ + "|" + merge(UNRESERVED$$, SUB_DELIMS$$, "[\\:\\@]")),
        SEGMENT$ = subexp(PCHAR$ + "*"),
        SEGMENT_NZ$ = subexp(PCHAR$ + "+"),
        SEGMENT_NZ_NC$ = subexp(subexp(PCT_ENCODED$ + "|" + merge(UNRESERVED$$, SUB_DELIMS$$, "[\\@]")) + "+"),
        PATH_ABEMPTY$ = subexp(subexp("\\/" + SEGMENT$) + "*"),
        PATH_ABSOLUTE$ = subexp("\\/" + subexp(SEGMENT_NZ$ + PATH_ABEMPTY$) + "?"),
        //simplified
    PATH_NOSCHEME$ = subexp(SEGMENT_NZ_NC$ + PATH_ABEMPTY$),
        //simplified
    PATH_ROOTLESS$ = subexp(SEGMENT_NZ$ + PATH_ABEMPTY$),
        //simplified
    PATH_EMPTY$ = "(?!" + PCHAR$ + ")",
        PATH$ = subexp(PATH_ABEMPTY$ + "|" + PATH_ABSOLUTE$ + "|" + PATH_NOSCHEME$ + "|" + PATH_ROOTLESS$ + "|" + PATH_EMPTY$),
        QUERY$ = subexp(subexp(PCHAR$ + "|" + merge("[\\/\\?]", IPRIVATE$$)) + "*"),
        FRAGMENT$ = subexp(subexp(PCHAR$ + "|[\\/\\?]") + "*"),
        HIER_PART$ = subexp(subexp("\\/\\/" + AUTHORITY$ + PATH_ABEMPTY$) + "|" + PATH_ABSOLUTE$ + "|" + PATH_ROOTLESS$ + "|" + PATH_EMPTY$),
        URI$ = subexp(SCHEME$ + "\\:" + HIER_PART$ + subexp("\\?" + QUERY$) + "?" + subexp("\\#" + FRAGMENT$) + "?"),
        RELATIVE_PART$ = subexp(subexp("\\/\\/" + AUTHORITY$ + PATH_ABEMPTY$) + "|" + PATH_ABSOLUTE$ + "|" + PATH_NOSCHEME$ + "|" + PATH_EMPTY$),
        RELATIVE$ = subexp(RELATIVE_PART$ + subexp("\\?" + QUERY$) + "?" + subexp("\\#" + FRAGMENT$) + "?"),
        URI_REFERENCE$ = subexp(URI$ + "|" + RELATIVE$),
        ABSOLUTE_URI$ = subexp(SCHEME$ + "\\:" + HIER_PART$ + subexp("\\?" + QUERY$) + "?"),
        GENERIC_REF$ = "^(" + SCHEME$ + ")\\:" + subexp(subexp("\\/\\/(" + subexp("(" + USERINFO$ + ")@") + "?(" + HOST$ + ")" + subexp("\\:(" + PORT$ + ")") + "?)") + "?(" + PATH_ABEMPTY$ + "|" + PATH_ABSOLUTE$ + "|" + PATH_ROOTLESS$ + "|" + PATH_EMPTY$ + ")") + subexp("\\?(" + QUERY$ + ")") + "?" + subexp("\\#(" + FRAGMENT$ + ")") + "?$",
        RELATIVE_REF$ = "^(){0}" + subexp(subexp("\\/\\/(" + subexp("(" + USERINFO$ + ")@") + "?(" + HOST$ + ")" + subexp("\\:(" + PORT$ + ")") + "?)") + "?(" + PATH_ABEMPTY$ + "|" + PATH_ABSOLUTE$ + "|" + PATH_NOSCHEME$ + "|" + PATH_EMPTY$ + ")") + subexp("\\?(" + QUERY$ + ")") + "?" + subexp("\\#(" + FRAGMENT$ + ")") + "?$",
        ABSOLUTE_REF$ = "^(" + SCHEME$ + ")\\:" + subexp(subexp("\\/\\/(" + subexp("(" + USERINFO$ + ")@") + "?(" + HOST$ + ")" + subexp("\\:(" + PORT$ + ")") + "?)") + "?(" + PATH_ABEMPTY$ + "|" + PATH_ABSOLUTE$ + "|" + PATH_ROOTLESS$ + "|" + PATH_EMPTY$ + ")") + subexp("\\?(" + QUERY$ + ")") + "?$",
        SAMEDOC_REF$ = "^" + subexp("\\#(" + FRAGMENT$ + ")") + "?$",
        AUTHORITY_REF$ = "^" + subexp("(" + USERINFO$ + ")@") + "?(" + HOST$ + ")" + subexp("\\:(" + PORT$ + ")") + "?$";
    return {
        NOT_SCHEME: new RegExp(merge("[^]", ALPHA$$, DIGIT$$, "[\\+\\-\\.]"), "g"),
        NOT_USERINFO: new RegExp(merge("[^\\%\\:]", UNRESERVED$$, SUB_DELIMS$$), "g"),
        NOT_HOST: new RegExp(merge("[^\\%\\[\\]\\:]", UNRESERVED$$, SUB_DELIMS$$), "g"),
        NOT_PATH: new RegExp(merge("[^\\%\\/\\:\\@]", UNRESERVED$$, SUB_DELIMS$$), "g"),
        NOT_PATH_NOSCHEME: new RegExp(merge("[^\\%\\/\\@]", UNRESERVED$$, SUB_DELIMS$$), "g"),
        NOT_QUERY: new RegExp(merge("[^\\%]", UNRESERVED$$, SUB_DELIMS$$, "[\\:\\@\\/\\?]", IPRIVATE$$), "g"),
        NOT_FRAGMENT: new RegExp(merge("[^\\%]", UNRESERVED$$, SUB_DELIMS$$, "[\\:\\@\\/\\?]"), "g"),
        ESCAPE: new RegExp(merge("[^]", UNRESERVED$$, SUB_DELIMS$$), "g"),
        UNRESERVED: new RegExp(UNRESERVED$$, "g"),
        OTHER_CHARS: new RegExp(merge("[^\\%]", UNRESERVED$$, RESERVED$$), "g"),
        PCT_ENCODED: new RegExp(PCT_ENCODED$, "g"),
        IPV4ADDRESS: new RegExp("^(" + IPV4ADDRESS$ + ")$"),
        IPV6ADDRESS: new RegExp("^\\[?(" + IPV6ADDRESS$ + ")" + subexp(subexp("\\%25|\\%(?!" + HEXDIG$$ + "{2})") + "(" + ZONEID$ + ")") + "?\\]?$") //RFC 6874, with relaxed parsing rules
    };
}
var URI_PROTOCOL = buildExps(false);

var IRI_PROTOCOL = buildExps(true);

var slicedToArray = function () {
  function sliceIterator(arr, i) {
    var _arr = [];
    var _n = true;
    var _d = false;
    var _e = undefined;

    try {
      for (var _i = arr[Symbol.iterator](), _s; !(_n = (_s = _i.next()).done); _n = true) {
        _arr.push(_s.value);

        if (i && _arr.length === i) break;
      }
    } catch (err) {
      _d = true;
      _e = err;
    } finally {
      try {
        if (!_n && _i["return"]) _i["return"]();
      } finally {
        if (_d) throw _e;
      }
    }

    return _arr;
  }

  return function (arr, i) {
    if (Array.isArray(arr)) {
      return arr;
    } else if (Symbol.iterator in Object(arr)) {
      return sliceIterator(arr, i);
    } else {
      throw new TypeError("Invalid attempt to destructure non-iterable instance");
    }
  };
}();













var toConsumableArray = function (arr) {
  if (Array.isArray(arr)) {
    for (var i = 0, arr2 = Array(arr.length); i < arr.length; i++) arr2[i] = arr[i];

    return arr2;
  } else {
    return Array.from(arr);
  }
};

/** Highest positive signed 32-bit float value */

var maxInt = 2147483647; // aka. 0x7FFFFFFF or 2^31-1

/** Bootstring parameters */
var base = 36;
var tMin = 1;
var tMax = 26;
var skew = 38;
var damp = 700;
var initialBias = 72;
var initialN = 128; // 0x80
var delimiter = '-'; // '\x2D'

/** Regular expressions */
var regexPunycode = /^xn--/;
var regexNonASCII = /[^\0-\x7E]/; // non-ASCII chars
var regexSeparators = /[\x2E\u3002\uFF0E\uFF61]/g; // RFC 3490 separators

/** Error messages */
var errors = {
	'overflow': 'Overflow: input needs wider integers to process',
	'not-basic': 'Illegal input >= 0x80 (not a basic code point)',
	'invalid-input': 'Invalid input'
};

/** Convenience shortcuts */
var baseMinusTMin = base - tMin;
var floor = Math.floor;
var stringFromCharCode = String.fromCharCode;

/*--------------------------------------------------------------------------*/

/**
 * A generic error utility function.
 * @private
 * @param {String} type The error type.
 * @returns {Error} Throws a `RangeError` with the applicable error message.
 */
function error$1(type) {
	throw new RangeError(errors[type]);
}

/**
 * A generic `Array#map` utility function.
 * @private
 * @param {Array} array The array to iterate over.
 * @param {Function} callback The function that gets called for every array
 * item.
 * @returns {Array} A new array of values returned by the callback function.
 */
function map(array, fn) {
	var result = [];
	var length = array.length;
	while (length--) {
		result[length] = fn(array[length]);
	}
	return result;
}

/**
 * A simple `Array#map`-like wrapper to work with domain name strings or email
 * addresses.
 * @private
 * @param {String} domain The domain name or email address.
 * @param {Function} callback The function that gets called for every
 * character.
 * @returns {Array} A new string of characters returned by the callback
 * function.
 */
function mapDomain(string, fn) {
	var parts = string.split('@');
	var result = '';
	if (parts.length > 1) {
		// In email addresses, only the domain name should be punycoded. Leave
		// the local part (i.e. everything up to `@`) intact.
		result = parts[0] + '@';
		string = parts[1];
	}
	// Avoid `split(regex)` for IE8 compatibility. See #17.
	string = string.replace(regexSeparators, '\x2E');
	var labels = string.split('.');
	var encoded = map(labels, fn).join('.');
	return result + encoded;
}

/**
 * Creates an array containing the numeric code points of each Unicode
 * character in the string. While JavaScript uses UCS-2 internally,
 * this function will convert a pair of surrogate halves (each of which
 * UCS-2 exposes as separate characters) into a single code point,
 * matching UTF-16.
 * @see `punycode.ucs2.encode`
 * @see <https://mathiasbynens.be/notes/javascript-encoding>
 * @memberOf punycode.ucs2
 * @name decode
 * @param {String} string The Unicode input string (UCS-2).
 * @returns {Array} The new array of code points.
 */
function ucs2decode(string) {
	var output = [];
	var counter = 0;
	var length = string.length;
	while (counter < length) {
		var value = string.charCodeAt(counter++);
		if (value >= 0xD800 && value <= 0xDBFF && counter < length) {
			// It's a high surrogate, and there is a next character.
			var extra = string.charCodeAt(counter++);
			if ((extra & 0xFC00) == 0xDC00) {
				// Low surrogate.
				output.push(((value & 0x3FF) << 10) + (extra & 0x3FF) + 0x10000);
			} else {
				// It's an unmatched surrogate; only append this code unit, in case the
				// next code unit is the high surrogate of a surrogate pair.
				output.push(value);
				counter--;
			}
		} else {
			output.push(value);
		}
	}
	return output;
}

/**
 * Creates a string based on an array of numeric code points.
 * @see `punycode.ucs2.decode`
 * @memberOf punycode.ucs2
 * @name encode
 * @param {Array} codePoints The array of numeric code points.
 * @returns {String} The new Unicode string (UCS-2).
 */
var ucs2encode = function ucs2encode(array) {
	return String.fromCodePoint.apply(String, toConsumableArray(array));
};

/**
 * Converts a basic code point into a digit/integer.
 * @see `digitToBasic()`
 * @private
 * @param {Number} codePoint The basic numeric code point value.
 * @returns {Number} The numeric value of a basic code point (for use in
 * representing integers) in the range `0` to `base - 1`, or `base` if
 * the code point does not represent a value.
 */
var basicToDigit = function basicToDigit(codePoint) {
	if (codePoint - 0x30 < 0x0A) {
		return codePoint - 0x16;
	}
	if (codePoint - 0x41 < 0x1A) {
		return codePoint - 0x41;
	}
	if (codePoint - 0x61 < 0x1A) {
		return codePoint - 0x61;
	}
	return base;
};

/**
 * Converts a digit/integer into a basic code point.
 * @see `basicToDigit()`
 * @private
 * @param {Number} digit The numeric value of a basic code point.
 * @returns {Number} The basic code point whose value (when used for
 * representing integers) is `digit`, which needs to be in the range
 * `0` to `base - 1`. If `flag` is non-zero, the uppercase form is
 * used; else, the lowercase form is used. The behavior is undefined
 * if `flag` is non-zero and `digit` has no uppercase form.
 */
var digitToBasic = function digitToBasic(digit, flag) {
	//  0..25 map to ASCII a..z or A..Z
	// 26..35 map to ASCII 0..9
	return digit + 22 + 75 * (digit < 26) - ((flag != 0) << 5);
};

/**
 * Bias adaptation function as per section 3.4 of RFC 3492.
 * https://tools.ietf.org/html/rfc3492#section-3.4
 * @private
 */
var adapt = function adapt(delta, numPoints, firstTime) {
	var k = 0;
	delta = firstTime ? floor(delta / damp) : delta >> 1;
	delta += floor(delta / numPoints);
	for (; /* no initialization */delta > baseMinusTMin * tMax >> 1; k += base) {
		delta = floor(delta / baseMinusTMin);
	}
	return floor(k + (baseMinusTMin + 1) * delta / (delta + skew));
};

/**
 * Converts a Punycode string of ASCII-only symbols to a string of Unicode
 * symbols.
 * @memberOf punycode
 * @param {String} input The Punycode string of ASCII-only symbols.
 * @returns {String} The resulting string of Unicode symbols.
 */
var decode = function decode(input) {
	// Don't use UCS-2.
	var output = [];
	var inputLength = input.length;
	var i = 0;
	var n = initialN;
	var bias = initialBias;

	// Handle the basic code points: let `basic` be the number of input code
	// points before the last delimiter, or `0` if there is none, then copy
	// the first basic code points to the output.

	var basic = input.lastIndexOf(delimiter);
	if (basic < 0) {
		basic = 0;
	}

	for (var j = 0; j < basic; ++j) {
		// if it's not a basic code point
		if (input.charCodeAt(j) >= 0x80) {
			error$1('not-basic');
		}
		output.push(input.charCodeAt(j));
	}

	// Main decoding loop: start just after the last delimiter if any basic code
	// points were copied; start at the beginning otherwise.

	for (var index = basic > 0 ? basic + 1 : 0; index < inputLength;) /* no final expression */{

		// `index` is the index of the next character to be consumed.
		// Decode a generalized variable-length integer into `delta`,
		// which gets added to `i`. The overflow checking is easier
		// if we increase `i` as we go, then subtract off its starting
		// value at the end to obtain `delta`.
		var oldi = i;
		for (var w = 1, k = base;; /* no condition */k += base) {

			if (index >= inputLength) {
				error$1('invalid-input');
			}

			var digit = basicToDigit(input.charCodeAt(index++));

			if (digit >= base || digit > floor((maxInt - i) / w)) {
				error$1('overflow');
			}

			i += digit * w;
			var t = k <= bias ? tMin : k >= bias + tMax ? tMax : k - bias;

			if (digit < t) {
				break;
			}

			var baseMinusT = base - t;
			if (w > floor(maxInt / baseMinusT)) {
				error$1('overflow');
			}

			w *= baseMinusT;
		}

		var out = output.length + 1;
		bias = adapt(i - oldi, out, oldi == 0);

		// `i` was supposed to wrap around from `out` to `0`,
		// incrementing `n` each time, so we'll fix that now:
		if (floor(i / out) > maxInt - n) {
			error$1('overflow');
		}

		n += floor(i / out);
		i %= out;

		// Insert `n` at position `i` of the output.
		output.splice(i++, 0, n);
	}

	return String.fromCodePoint.apply(String, output);
};

/**
 * Converts a string of Unicode symbols (e.g. a domain name label) to a
 * Punycode string of ASCII-only symbols.
 * @memberOf punycode
 * @param {String} input The string of Unicode symbols.
 * @returns {String} The resulting Punycode string of ASCII-only symbols.
 */
var encode = function encode(input) {
	var output = [];

	// Convert the input in UCS-2 to an array of Unicode code points.
	input = ucs2decode(input);

	// Cache the length.
	var inputLength = input.length;

	// Initialize the state.
	var n = initialN;
	var delta = 0;
	var bias = initialBias;

	// Handle the basic code points.
	var _iteratorNormalCompletion = true;
	var _didIteratorError = false;
	var _iteratorError = undefined;

	try {
		for (var _iterator = input[Symbol.iterator](), _step; !(_iteratorNormalCompletion = (_step = _iterator.next()).done); _iteratorNormalCompletion = true) {
			var _currentValue2 = _step.value;

			if (_currentValue2 < 0x80) {
				output.push(stringFromCharCode(_currentValue2));
			}
		}
	} catch (err) {
		_didIteratorError = true;
		_iteratorError = err;
	} finally {
		try {
			if (!_iteratorNormalCompletion && _iterator.return) {
				_iterator.return();
			}
		} finally {
			if (_didIteratorError) {
				throw _iteratorError;
			}
		}
	}

	var basicLength = output.length;
	var handledCPCount = basicLength;

	// `handledCPCount` is the number of code points that have been handled;
	// `basicLength` is the number of basic code points.

	// Finish the basic string with a delimiter unless it's empty.
	if (basicLength) {
		output.push(delimiter);
	}

	// Main encoding loop:
	while (handledCPCount < inputLength) {

		// All non-basic code points < n have been handled already. Find the next
		// larger one:
		var m = maxInt;
		var _iteratorNormalCompletion2 = true;
		var _didIteratorError2 = false;
		var _iteratorError2 = undefined;

		try {
			for (var _iterator2 = input[Symbol.iterator](), _step2; !(_iteratorNormalCompletion2 = (_step2 = _iterator2.next()).done); _iteratorNormalCompletion2 = true) {
				var currentValue = _step2.value;

				if (currentValue >= n && currentValue < m) {
					m = currentValue;
				}
			}

			// Increase `delta` enough to advance the decoder's <n,i> state to <m,0>,
			// but guard against overflow.
		} catch (err) {
			_didIteratorError2 = true;
			_iteratorError2 = err;
		} finally {
			try {
				if (!_iteratorNormalCompletion2 && _iterator2.return) {
					_iterator2.return();
				}
			} finally {
				if (_didIteratorError2) {
					throw _iteratorError2;
				}
			}
		}

		var handledCPCountPlusOne = handledCPCount + 1;
		if (m - n > floor((maxInt - delta) / handledCPCountPlusOne)) {
			error$1('overflow');
		}

		delta += (m - n) * handledCPCountPlusOne;
		n = m;

		var _iteratorNormalCompletion3 = true;
		var _didIteratorError3 = false;
		var _iteratorError3 = undefined;

		try {
			for (var _iterator3 = input[Symbol.iterator](), _step3; !(_iteratorNormalCompletion3 = (_step3 = _iterator3.next()).done); _iteratorNormalCompletion3 = true) {
				var _currentValue = _step3.value;

				if (_currentValue < n && ++delta > maxInt) {
					error$1('overflow');
				}
				if (_currentValue == n) {
					// Represent delta as a generalized variable-length integer.
					var q = delta;
					for (var k = base;; /* no condition */k += base) {
						var t = k <= bias ? tMin : k >= bias + tMax ? tMax : k - bias;
						if (q < t) {
							break;
						}
						var qMinusT = q - t;
						var baseMinusT = base - t;
						output.push(stringFromCharCode(digitToBasic(t + qMinusT % baseMinusT, 0)));
						q = floor(qMinusT / baseMinusT);
					}

					output.push(stringFromCharCode(digitToBasic(q, 0)));
					bias = adapt(delta, handledCPCountPlusOne, handledCPCount == basicLength);
					delta = 0;
					++handledCPCount;
				}
			}
		} catch (err) {
			_didIteratorError3 = true;
			_iteratorError3 = err;
		} finally {
			try {
				if (!_iteratorNormalCompletion3 && _iterator3.return) {
					_iterator3.return();
				}
			} finally {
				if (_didIteratorError3) {
					throw _iteratorError3;
				}
			}
		}

		++delta;
		++n;
	}
	return output.join('');
};

/**
 * Converts a Punycode string representing a domain name or an email address
 * to Unicode. Only the Punycoded parts of the input will be converted, i.e.
 * it doesn't matter if you call it on a string that has already been
 * converted to Unicode.
 * @memberOf punycode
 * @param {String} input The Punycoded domain name or email address to
 * convert to Unicode.
 * @returns {String} The Unicode representation of the given Punycode
 * string.
 */
var toUnicode = function toUnicode(input) {
	return mapDomain(input, function (string) {
		return regexPunycode.test(string) ? decode(string.slice(4).toLowerCase()) : string;
	});
};

/**
 * Converts a Unicode string representing a domain name or an email address to
 * Punycode. Only the non-ASCII parts of the domain name will be converted,
 * i.e. it doesn't matter if you call it with a domain that's already in
 * ASCII.
 * @memberOf punycode
 * @param {String} input The domain name or email address to convert, as a
 * Unicode string.
 * @returns {String} The Punycode representation of the given domain name or
 * email address.
 */
var toASCII = function toASCII(input) {
	return mapDomain(input, function (string) {
		return regexNonASCII.test(string) ? 'xn--' + encode(string) : string;
	});
};

/*--------------------------------------------------------------------------*/

/** Define the public API */
var punycode = {
	/**
  * A string representing the current Punycode.js version number.
  * @memberOf punycode
  * @type String
  */
	'version': '2.1.0',
	/**
  * An object of methods to convert from JavaScript's internal character
  * representation (UCS-2) to Unicode code points, and back.
  * @see <https://mathiasbynens.be/notes/javascript-encoding>
  * @memberOf punycode
  * @type Object
  */
	'ucs2': {
		'decode': ucs2decode,
		'encode': ucs2encode
	},
	'decode': decode,
	'encode': encode,
	'toASCII': toASCII,
	'toUnicode': toUnicode
};

/**
 * URI.js
 *
 * @fileoverview An RFC 3986 compliant, scheme extendable URI parsing/validating/resolving library for JavaScript.
 * @author <a href="mailto:gary.court@gmail.com">Gary Court</a>
 * @see http://github.com/garycourt/uri-js
 */
/**
 * Copyright 2011 Gary Court. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 *    1. Redistributions of source code must retain the above copyright notice, this list of
 *       conditions and the following disclaimer.
 *
 *    2. Redistributions in binary form must reproduce the above copyright notice, this list
 *       of conditions and the following disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY GARY COURT ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL GARY COURT OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those of the
 * authors and should not be interpreted as representing official policies, either expressed
 * or implied, of Gary Court.
 */
var SCHEMES = {};
function pctEncChar(chr) {
    var c = chr.charCodeAt(0);
    var e = void 0;
    if (c < 16) e = "%0" + c.toString(16).toUpperCase();else if (c < 128) e = "%" + c.toString(16).toUpperCase();else if (c < 2048) e = "%" + (c >> 6 | 192).toString(16).toUpperCase() + "%" + (c & 63 | 128).toString(16).toUpperCase();else e = "%" + (c >> 12 | 224).toString(16).toUpperCase() + "%" + (c >> 6 & 63 | 128).toString(16).toUpperCase() + "%" + (c & 63 | 128).toString(16).toUpperCase();
    return e;
}
function pctDecChars(str) {
    var newStr = "";
    var i = 0;
    var il = str.length;
    while (i < il) {
        var c = parseInt(str.substr(i + 1, 2), 16);
        if (c < 128) {
            newStr += String.fromCharCode(c);
            i += 3;
        } else if (c >= 194 && c < 224) {
            if (il - i >= 6) {
                var c2 = parseInt(str.substr(i + 4, 2), 16);
                newStr += String.fromCharCode((c & 31) << 6 | c2 & 63);
            } else {
                newStr += str.substr(i, 6);
            }
            i += 6;
        } else if (c >= 224) {
            if (il - i >= 9) {
                var _c = parseInt(str.substr(i + 4, 2), 16);
                var c3 = parseInt(str.substr(i + 7, 2), 16);
                newStr += String.fromCharCode((c & 15) << 12 | (_c & 63) << 6 | c3 & 63);
            } else {
                newStr += str.substr(i, 9);
            }
            i += 9;
        } else {
            newStr += str.substr(i, 3);
            i += 3;
        }
    }
    return newStr;
}
function _normalizeComponentEncoding(components, protocol) {
    function decodeUnreserved(str) {
        var decStr = pctDecChars(str);
        return !decStr.match(protocol.UNRESERVED) ? str : decStr;
    }
    if (components.scheme) components.scheme = String(components.scheme).replace(protocol.PCT_ENCODED, decodeUnreserved).toLowerCase().replace(protocol.NOT_SCHEME, "");
    if (components.userinfo !== undefined) components.userinfo = String(components.userinfo).replace(protocol.PCT_ENCODED, decodeUnreserved).replace(protocol.NOT_USERINFO, pctEncChar).replace(protocol.PCT_ENCODED, toUpperCase);
    if (components.host !== undefined) components.host = String(components.host).replace(protocol.PCT_ENCODED, decodeUnreserved).toLowerCase().replace(protocol.NOT_HOST, pctEncChar).replace(protocol.PCT_ENCODED, toUpperCase);
    if (components.path !== undefined) components.path = String(components.path).replace(protocol.PCT_ENCODED, decodeUnreserved).replace(components.scheme ? protocol.NOT_PATH : protocol.NOT_PATH_NOSCHEME, pctEncChar).replace(protocol.PCT_ENCODED, toUpperCase);
    if (components.query !== undefined) components.query = String(components.query).replace(protocol.PCT_ENCODED, decodeUnreserved).replace(protocol.NOT_QUERY, pctEncChar).replace(protocol.PCT_ENCODED, toUpperCase);
    if (components.fragment !== undefined) components.fragment = String(components.fragment).replace(protocol.PCT_ENCODED, decodeUnreserved).replace(protocol.NOT_FRAGMENT, pctEncChar).replace(protocol.PCT_ENCODED, toUpperCase);
    return components;
}

function _stripLeadingZeros(str) {
    return str.replace(/^0*(.*)/, "$1") || "0";
}
function _normalizeIPv4(host, protocol) {
    var matches = host.match(protocol.IPV4ADDRESS) || [];

    var _matches = slicedToArray(matches, 2),
        address = _matches[1];

    if (address) {
        return address.split(".").map(_stripLeadingZeros).join(".");
    } else {
        return host;
    }
}
function _normalizeIPv6(host, protocol) {
    var matches = host.match(protocol.IPV6ADDRESS) || [];

    var _matches2 = slicedToArray(matches, 3),
        address = _matches2[1],
        zone = _matches2[2];

    if (address) {
        var _address$toLowerCase$ = address.toLowerCase().split('::').reverse(),
            _address$toLowerCase$2 = slicedToArray(_address$toLowerCase$, 2),
            last = _address$toLowerCase$2[0],
            first = _address$toLowerCase$2[1];

        var firstFields = first ? first.split(":").map(_stripLeadingZeros) : [];
        var lastFields = last.split(":").map(_stripLeadingZeros);
        var isLastFieldIPv4Address = protocol.IPV4ADDRESS.test(lastFields[lastFields.length - 1]);
        var fieldCount = isLastFieldIPv4Address ? 7 : 8;
        var lastFieldsStart = lastFields.length - fieldCount;
        var fields = Array(fieldCount);
        for (var x = 0; x < fieldCount; ++x) {
            fields[x] = firstFields[x] || lastFields[lastFieldsStart + x] || '';
        }
        if (isLastFieldIPv4Address) {
            fields[fieldCount - 1] = _normalizeIPv4(fields[fieldCount - 1], protocol);
        }
        var allZeroFields = fields.reduce(function (acc, field, index) {
            if (!field || field === "0") {
                var lastLongest = acc[acc.length - 1];
                if (lastLongest && lastLongest.index + lastLongest.length === index) {
                    lastLongest.length++;
                } else {
                    acc.push({ index: index, length: 1 });
                }
            }
            return acc;
        }, []);
        var longestZeroFields = allZeroFields.sort(function (a, b) {
            return b.length - a.length;
        })[0];
        var newHost = void 0;
        if (longestZeroFields && longestZeroFields.length > 1) {
            var newFirst = fields.slice(0, longestZeroFields.index);
            var newLast = fields.slice(longestZeroFields.index + longestZeroFields.length);
            newHost = newFirst.join(":") + "::" + newLast.join(":");
        } else {
            newHost = fields.join(":");
        }
        if (zone) {
            newHost += "%" + zone;
        }
        return newHost;
    } else {
        return host;
    }
}
var URI_PARSE = /^(?:([^:\/?#]+):)?(?:\/\/((?:([^\/?#@]*)@)?(\[[^\/?#\]]+\]|[^\/?#:]*)(?:\:(\d*))?))?([^?#]*)(?:\?([^#]*))?(?:#((?:.|\n|\r)*))?/i;
var NO_MATCH_IS_UNDEFINED = "".match(/(){0}/)[1] === undefined;
function parse(uriString) {
    var options = arguments.length > 1 && arguments[1] !== undefined ? arguments[1] : {};

    var components = {};
    var protocol = options.iri !== false ? IRI_PROTOCOL : URI_PROTOCOL;
    if (options.reference === "suffix") uriString = (options.scheme ? options.scheme + ":" : "") + "//" + uriString;
    var matches = uriString.match(URI_PARSE);
    if (matches) {
        if (NO_MATCH_IS_UNDEFINED) {
            //store each component
            components.scheme = matches[1];
            components.userinfo = matches[3];
            components.host = matches[4];
            components.port = parseInt(matches[5], 10);
            components.path = matches[6] || "";
            components.query = matches[7];
            components.fragment = matches[8];
            //fix port number
            if (isNaN(components.port)) {
                components.port = matches[5];
            }
        } else {
            //IE FIX for improper RegExp matching
            //store each component
            components.scheme = matches[1] || undefined;
            components.userinfo = uriString.indexOf("@") !== -1 ? matches[3] : undefined;
            components.host = uriString.indexOf("//") !== -1 ? matches[4] : undefined;
            components.port = parseInt(matches[5], 10);
            components.path = matches[6] || "";
            components.query = uriString.indexOf("?") !== -1 ? matches[7] : undefined;
            components.fragment = uriString.indexOf("#") !== -1 ? matches[8] : undefined;
            //fix port number
            if (isNaN(components.port)) {
                components.port = uriString.match(/\/\/(?:.|\n)*\:(?:\/|\?|\#|$)/) ? matches[4] : undefined;
            }
        }
        if (components.host) {
            //normalize IP hosts
            components.host = _normalizeIPv6(_normalizeIPv4(components.host, protocol), protocol);
        }
        //determine reference type
        if (components.scheme === undefined && components.userinfo === undefined && components.host === undefined && components.port === undefined && !components.path && components.query === undefined) {
            components.reference = "same-document";
        } else if (components.scheme === undefined) {
            components.reference = "relative";
        } else if (components.fragment === undefined) {
            components.reference = "absolute";
        } else {
            components.reference = "uri";
        }
        //check for reference errors
        if (options.reference && options.reference !== "suffix" && options.reference !== components.reference) {
            components.error = components.error || "URI is not a " + options.reference + " reference.";
        }
        //find scheme handler
        var schemeHandler = SCHEMES[(options.scheme || components.scheme || "").toLowerCase()];
        //check if scheme can't handle IRIs
        if (!options.unicodeSupport && (!schemeHandler || !schemeHandler.unicodeSupport)) {
            //if host component is a domain name
            if (components.host && (options.domainHost || schemeHandler && schemeHandler.domainHost)) {
                //convert Unicode IDN -> ASCII IDN
                try {
                    components.host = punycode.toASCII(components.host.replace(protocol.PCT_ENCODED, pctDecChars).toLowerCase());
                } catch (e) {
                    components.error = components.error || "Host's domain name can not be converted to ASCII via punycode: " + e;
                }
            }
            //convert IRI -> URI
            _normalizeComponentEncoding(components, URI_PROTOCOL);
        } else {
            //normalize encodings
            _normalizeComponentEncoding(components, protocol);
        }
        //perform scheme specific parsing
        if (schemeHandler && schemeHandler.parse) {
            schemeHandler.parse(components, options);
        }
    } else {
        components.error = components.error || "URI can not be parsed.";
    }
    return components;
}

function _recomposeAuthority(components, options) {
    var protocol = options.iri !== false ? IRI_PROTOCOL : URI_PROTOCOL;
    var uriTokens = [];
    if (components.userinfo !== undefined) {
        uriTokens.push(components.userinfo);
        uriTokens.push("@");
    }
    if (components.host !== undefined) {
        //normalize IP hosts, add brackets and escape zone separator for IPv6
        uriTokens.push(_normalizeIPv6(_normalizeIPv4(String(components.host), protocol), protocol).replace(protocol.IPV6ADDRESS, function (_, $1, $2) {
            return "[" + $1 + ($2 ? "%25" + $2 : "") + "]";
        }));
    }
    if (typeof components.port === "number" || typeof components.port === "string") {
        uriTokens.push(":");
        uriTokens.push(String(components.port));
    }
    return uriTokens.length ? uriTokens.join("") : undefined;
}

var RDS1 = /^\.\.?\//;
var RDS2 = /^\/\.(\/|$)/;
var RDS3 = /^\/\.\.(\/|$)/;
var RDS5 = /^\/?(?:.|\n)*?(?=\/|$)/;
function removeDotSegments(input) {
    var output = [];
    while (input.length) {
        if (input.match(RDS1)) {
            input = input.replace(RDS1, "");
        } else if (input.match(RDS2)) {
            input = input.replace(RDS2, "/");
        } else if (input.match(RDS3)) {
            input = input.replace(RDS3, "/");
            output.pop();
        } else if (input === "." || input === "..") {
            input = "";
        } else {
            var im = input.match(RDS5);
            if (im) {
                var s = im[0];
                input = input.slice(s.length);
                output.push(s);
            } else {
                throw new Error("Unexpected dot segment condition");
            }
        }
    }
    return output.join("");
}

function serialize(components) {
    var options = arguments.length > 1 && arguments[1] !== undefined ? arguments[1] : {};

    var protocol = options.iri ? IRI_PROTOCOL : URI_PROTOCOL;
    var uriTokens = [];
    //find scheme handler
    var schemeHandler = SCHEMES[(options.scheme || components.scheme || "").toLowerCase()];
    //perform scheme specific serialization
    if (schemeHandler && schemeHandler.serialize) schemeHandler.serialize(components, options);
    if (components.host) {
        //if host component is an IPv6 address
        if (protocol.IPV6ADDRESS.test(components.host)) {}
        //TODO: normalize IPv6 address as per RFC 5952

        //if host component is a domain name
        else if (options.domainHost || schemeHandler && schemeHandler.domainHost) {
                //convert IDN via punycode
                try {
                    components.host = !options.iri ? punycode.toASCII(components.host.replace(protocol.PCT_ENCODED, pctDecChars).toLowerCase()) : punycode.toUnicode(components.host);
                } catch (e) {
                    components.error = components.error || "Host's domain name can not be converted to " + (!options.iri ? "ASCII" : "Unicode") + " via punycode: " + e;
                }
            }
    }
    //normalize encoding
    _normalizeComponentEncoding(components, protocol);
    if (options.reference !== "suffix" && components.scheme) {
        uriTokens.push(components.scheme);
        uriTokens.push(":");
    }
    var authority = _recomposeAuthority(components, options);
    if (authority !== undefined) {
        if (options.reference !== "suffix") {
            uriTokens.push("//");
        }
        uriTokens.push(authority);
        if (components.path && components.path.charAt(0) !== "/") {
            uriTokens.push("/");
        }
    }
    if (components.path !== undefined) {
        var s = components.path;
        if (!options.absolutePath && (!schemeHandler || !schemeHandler.absolutePath)) {
            s = removeDotSegments(s);
        }
        if (authority === undefined) {
            s = s.replace(/^\/\//, "/%2F"); //don't allow the path to start with "//"
        }
        uriTokens.push(s);
    }
    if (components.query !== undefined) {
        uriTokens.push("?");
        uriTokens.push(components.query);
    }
    if (components.fragment !== undefined) {
        uriTokens.push("#");
        uriTokens.push(components.fragment);
    }
    return uriTokens.join(""); //merge tokens into a string
}

function resolveComponents(base, relative) {
    var options = arguments.length > 2 && arguments[2] !== undefined ? arguments[2] : {};
    var skipNormalization = arguments[3];

    var target = {};
    if (!skipNormalization) {
        base = parse(serialize(base, options), options); //normalize base components
        relative = parse(serialize(relative, options), options); //normalize relative components
    }
    options = options || {};
    if (!options.tolerant && relative.scheme) {
        target.scheme = relative.scheme;
        //target.authority = relative.authority;
        target.userinfo = relative.userinfo;
        target.host = relative.host;
        target.port = relative.port;
        target.path = removeDotSegments(relative.path || "");
        target.query = relative.query;
    } else {
        if (relative.userinfo !== undefined || relative.host !== undefined || relative.port !== undefined) {
            //target.authority = relative.authority;
            target.userinfo = relative.userinfo;
            target.host = relative.host;
            target.port = relative.port;
            target.path = removeDotSegments(relative.path || "");
            target.query = relative.query;
        } else {
            if (!relative.path) {
                target.path = base.path;
                if (relative.query !== undefined) {
                    target.query = relative.query;
                } else {
                    target.query = base.query;
                }
            } else {
                if (relative.path.charAt(0) === "/") {
                    target.path = removeDotSegments(relative.path);
                } else {
                    if ((base.userinfo !== undefined || base.host !== undefined || base.port !== undefined) && !base.path) {
                        target.path = "/" + relative.path;
                    } else if (!base.path) {
                        target.path = relative.path;
                    } else {
                        target.path = base.path.slice(0, base.path.lastIndexOf("/") + 1) + relative.path;
                    }
                    target.path = removeDotSegments(target.path);
                }
                target.query = relative.query;
            }
            //target.authority = base.authority;
            target.userinfo = base.userinfo;
            target.host = base.host;
            target.port = base.port;
        }
        target.scheme = base.scheme;
    }
    target.fragment = relative.fragment;
    return target;
}

function resolve(baseURI, relativeURI, options) {
    var schemelessOptions = assign({ scheme: 'null' }, options);
    return serialize(resolveComponents(parse(baseURI, schemelessOptions), parse(relativeURI, schemelessOptions), schemelessOptions, true), schemelessOptions);
}

function normalize(uri, options) {
    if (typeof uri === "string") {
        uri = serialize(parse(uri, options), options);
    } else if (typeOf(uri) === "object") {
        uri = parse(serialize(uri, options), options);
    }
    return uri;
}

function equal(uriA, uriB, options) {
    if (typeof uriA === "string") {
        uriA = serialize(parse(uriA, options), options);
    } else if (typeOf(uriA) === "object") {
        uriA = serialize(uriA, options);
    }
    if (typeof uriB === "string") {
        uriB = serialize(parse(uriB, options), options);
    } else if (typeOf(uriB) === "object") {
        uriB = serialize(uriB, options);
    }
    return uriA === uriB;
}

function escapeComponent(str, options) {
    return str && str.toString().replace(!options || !options.iri ? URI_PROTOCOL.ESCAPE : IRI_PROTOCOL.ESCAPE, pctEncChar);
}

function unescapeComponent(str, options) {
    return str && str.toString().replace(!options || !options.iri ? URI_PROTOCOL.PCT_ENCODED : IRI_PROTOCOL.PCT_ENCODED, pctDecChars);
}

var handler = {
    scheme: "http",
    domainHost: true,
    parse: function parse(components, options) {
        //report missing host
        if (!components.host) {
            components.error = components.error || "HTTP URIs must have a host.";
        }
        return components;
    },
    serialize: function serialize(components, options) {
        var secure = String(components.scheme).toLowerCase() === "https";
        //normalize the default port
        if (components.port === (secure ? 443 : 80) || components.port === "") {
            components.port = undefined;
        }
        //normalize the empty path
        if (!components.path) {
            components.path = "/";
        }
        //NOTE: We do not parse query strings for HTTP URIs
        //as WWW Form Url Encoded query strings are part of the HTML4+ spec,
        //and not the HTTP spec.
        return components;
    }
};

var handler$1 = {
    scheme: "https",
    domainHost: handler.domainHost,
    parse: handler.parse,
    serialize: handler.serialize
};

function isSecure(wsComponents) {
    return typeof wsComponents.secure === 'boolean' ? wsComponents.secure : String(wsComponents.scheme).toLowerCase() === "wss";
}
//RFC 6455
var handler$2 = {
    scheme: "ws",
    domainHost: true,
    parse: function parse(components, options) {
        var wsComponents = components;
        //indicate if the secure flag is set
        wsComponents.secure = isSecure(wsComponents);
        //construct resouce name
        wsComponents.resourceName = (wsComponents.path || '/') + (wsComponents.query ? '?' + wsComponents.query : '');
        wsComponents.path = undefined;
        wsComponents.query = undefined;
        return wsComponents;
    },
    serialize: function serialize(wsComponents, options) {
        //normalize the default port
        if (wsComponents.port === (isSecure(wsComponents) ? 443 : 80) || wsComponents.port === "") {
            wsComponents.port = undefined;
        }
        //ensure scheme matches secure flag
        if (typeof wsComponents.secure === 'boolean') {
            wsComponents.scheme = wsComponents.secure ? 'wss' : 'ws';
            wsComponents.secure = undefined;
        }
        //reconstruct path from resource name
        if (wsComponents.resourceName) {
            var _wsComponents$resourc = wsComponents.resourceName.split('?'),
                _wsComponents$resourc2 = slicedToArray(_wsComponents$resourc, 2),
                path = _wsComponents$resourc2[0],
                query = _wsComponents$resourc2[1];

            wsComponents.path = path && path !== '/' ? path : undefined;
            wsComponents.query = query;
            wsComponents.resourceName = undefined;
        }
        //forbid fragment component
        wsComponents.fragment = undefined;
        return wsComponents;
    }
};

var handler$3 = {
    scheme: "wss",
    domainHost: handler$2.domainHost,
    parse: handler$2.parse,
    serialize: handler$2.serialize
};

var O = {};
var isIRI = true;
//RFC 3986
var UNRESERVED$$ = "[A-Za-z0-9\\-\\.\\_\\~" + (isIRI ? "\\xA0-\\u200D\\u2010-\\u2029\\u202F-\\uD7FF\\uF900-\\uFDCF\\uFDF0-\\uFFEF" : "") + "]";
var HEXDIG$$ = "[0-9A-Fa-f]"; //case-insensitive
var PCT_ENCODED$ = subexp(subexp("%[EFef]" + HEXDIG$$ + "%" + HEXDIG$$ + HEXDIG$$ + "%" + HEXDIG$$ + HEXDIG$$) + "|" + subexp("%[89A-Fa-f]" + HEXDIG$$ + "%" + HEXDIG$$ + HEXDIG$$) + "|" + subexp("%" + HEXDIG$$ + HEXDIG$$)); //expanded
//RFC 5322, except these symbols as per RFC 6068: @ : / ? # [ ] & ; =
//const ATEXT$$ = "[A-Za-z0-9\\!\\#\\$\\%\\&\\'\\*\\+\\-\\/\\=\\?\\^\\_\\`\\{\\|\\}\\~]";
//const WSP$$ = "[\\x20\\x09]";
//const OBS_QTEXT$$ = "[\\x01-\\x08\\x0B\\x0C\\x0E-\\x1F\\x7F]";  //(%d1-8 / %d11-12 / %d14-31 / %d127)
//const QTEXT$$ = merge("[\\x21\\x23-\\x5B\\x5D-\\x7E]", OBS_QTEXT$$);  //%d33 / %d35-91 / %d93-126 / obs-qtext
//const VCHAR$$ = "[\\x21-\\x7E]";
//const WSP$$ = "[\\x20\\x09]";
//const OBS_QP$ = subexp("\\\\" + merge("[\\x00\\x0D\\x0A]", OBS_QTEXT$$));  //%d0 / CR / LF / obs-qtext
//const FWS$ = subexp(subexp(WSP$$ + "*" + "\\x0D\\x0A") + "?" + WSP$$ + "+");
//const QUOTED_PAIR$ = subexp(subexp("\\\\" + subexp(VCHAR$$ + "|" + WSP$$)) + "|" + OBS_QP$);
//const QUOTED_STRING$ = subexp('\\"' + subexp(FWS$ + "?" + QCONTENT$) + "*" + FWS$ + "?" + '\\"');
var ATEXT$$ = "[A-Za-z0-9\\!\\$\\%\\'\\*\\+\\-\\^\\_\\`\\{\\|\\}\\~]";
var QTEXT$$ = "[\\!\\$\\%\\'\\(\\)\\*\\+\\,\\-\\.0-9\\<\\>A-Z\\x5E-\\x7E]";
var VCHAR$$ = merge(QTEXT$$, "[\\\"\\\\]");
var SOME_DELIMS$$ = "[\\!\\$\\'\\(\\)\\*\\+\\,\\;\\:\\@]";
var UNRESERVED = new RegExp(UNRESERVED$$, "g");
var PCT_ENCODED = new RegExp(PCT_ENCODED$, "g");
var NOT_LOCAL_PART = new RegExp(merge("[^]", ATEXT$$, "[\\.]", '[\\"]', VCHAR$$), "g");
var NOT_HFNAME = new RegExp(merge("[^]", UNRESERVED$$, SOME_DELIMS$$), "g");
var NOT_HFVALUE = NOT_HFNAME;
function decodeUnreserved(str) {
    var decStr = pctDecChars(str);
    return !decStr.match(UNRESERVED) ? str : decStr;
}
var handler$4 = {
    scheme: "mailto",
    parse: function parse$$1(components, options) {
        var mailtoComponents = components;
        var to = mailtoComponents.to = mailtoComponents.path ? mailtoComponents.path.split(",") : [];
        mailtoComponents.path = undefined;
        if (mailtoComponents.query) {
            var unknownHeaders = false;
            var headers = {};
            var hfields = mailtoComponents.query.split("&");
            for (var x = 0, xl = hfields.length; x < xl; ++x) {
                var hfield = hfields[x].split("=");
                switch (hfield[0]) {
                    case "to":
                        var toAddrs = hfield[1].split(",");
                        for (var _x = 0, _xl = toAddrs.length; _x < _xl; ++_x) {
                            to.push(toAddrs[_x]);
                        }
                        break;
                    case "subject":
                        mailtoComponents.subject = unescapeComponent(hfield[1], options);
                        break;
                    case "body":
                        mailtoComponents.body = unescapeComponent(hfield[1], options);
                        break;
                    default:
                        unknownHeaders = true;
                        headers[unescapeComponent(hfield[0], options)] = unescapeComponent(hfield[1], options);
                        break;
                }
            }
            if (unknownHeaders) mailtoComponents.headers = headers;
        }
        mailtoComponents.query = undefined;
        for (var _x2 = 0, _xl2 = to.length; _x2 < _xl2; ++_x2) {
            var addr = to[_x2].split("@");
            addr[0] = unescapeComponent(addr[0]);
            if (!options.unicodeSupport) {
                //convert Unicode IDN -> ASCII IDN
                try {
                    addr[1] = punycode.toASCII(unescapeComponent(addr[1], options).toLowerCase());
                } catch (e) {
                    mailtoComponents.error = mailtoComponents.error || "Email address's domain name can not be converted to ASCII via punycode: " + e;
                }
            } else {
                addr[1] = unescapeComponent(addr[1], options).toLowerCase();
            }
            to[_x2] = addr.join("@");
        }
        return mailtoComponents;
    },
    serialize: function serialize$$1(mailtoComponents, options) {
        var components = mailtoComponents;
        var to = toArray(mailtoComponents.to);
        if (to) {
            for (var x = 0, xl = to.length; x < xl; ++x) {
                var toAddr = String(to[x]);
                var atIdx = toAddr.lastIndexOf("@");
                var localPart = toAddr.slice(0, atIdx).replace(PCT_ENCODED, decodeUnreserved).replace(PCT_ENCODED, toUpperCase).replace(NOT_LOCAL_PART, pctEncChar);
                var domain = toAddr.slice(atIdx + 1);
                //convert IDN via punycode
                try {
                    domain = !options.iri ? punycode.toASCII(unescapeComponent(domain, options).toLowerCase()) : punycode.toUnicode(domain);
                } catch (e) {
                    components.error = components.error || "Email address's domain name can not be converted to " + (!options.iri ? "ASCII" : "Unicode") + " via punycode: " + e;
                }
                to[x] = localPart + "@" + domain;
            }
            components.path = to.join(",");
        }
        var headers = mailtoComponents.headers = mailtoComponents.headers || {};
        if (mailtoComponents.subject) headers["subject"] = mailtoComponents.subject;
        if (mailtoComponents.body) headers["body"] = mailtoComponents.body;
        var fields = [];
        for (var name in headers) {
            if (headers[name] !== O[name]) {
                fields.push(name.replace(PCT_ENCODED, decodeUnreserved).replace(PCT_ENCODED, toUpperCase).replace(NOT_HFNAME, pctEncChar) + "=" + headers[name].replace(PCT_ENCODED, decodeUnreserved).replace(PCT_ENCODED, toUpperCase).replace(NOT_HFVALUE, pctEncChar));
            }
        }
        if (fields.length) {
            components.query = fields.join("&");
        }
        return components;
    }
};

var URN_PARSE = /^([^\:]+)\:(.*)/;
//RFC 2141
var handler$5 = {
    scheme: "urn",
    parse: function parse$$1(components, options) {
        var matches = components.path && components.path.match(URN_PARSE);
        var urnComponents = components;
        if (matches) {
            var scheme = options.scheme || urnComponents.scheme || "urn";
            var nid = matches[1].toLowerCase();
            var nss = matches[2];
            var urnScheme = scheme + ":" + (options.nid || nid);
            var schemeHandler = SCHEMES[urnScheme];
            urnComponents.nid = nid;
            urnComponents.nss = nss;
            urnComponents.path = undefined;
            if (schemeHandler) {
                urnComponents = schemeHandler.parse(urnComponents, options);
            }
        } else {
            urnComponents.error = urnComponents.error || "URN can not be parsed.";
        }
        return urnComponents;
    },
    serialize: function serialize$$1(urnComponents, options) {
        var scheme = options.scheme || urnComponents.scheme || "urn";
        var nid = urnComponents.nid;
        var urnScheme = scheme + ":" + (options.nid || nid);
        var schemeHandler = SCHEMES[urnScheme];
        if (schemeHandler) {
            urnComponents = schemeHandler.serialize(urnComponents, options);
        }
        var uriComponents = urnComponents;
        var nss = urnComponents.nss;
        uriComponents.path = (nid || options.nid) + ":" + nss;
        return uriComponents;
    }
};

var UUID = /^[0-9A-Fa-f]{8}(?:\-[0-9A-Fa-f]{4}){3}\-[0-9A-Fa-f]{12}$/;
//RFC 4122
var handler$6 = {
    scheme: "urn:uuid",
    parse: function parse(urnComponents, options) {
        var uuidComponents = urnComponents;
        uuidComponents.uuid = uuidComponents.nss;
        uuidComponents.nss = undefined;
        if (!options.tolerant && (!uuidComponents.uuid || !uuidComponents.uuid.match(UUID))) {
            uuidComponents.error = uuidComponents.error || "UUID is not valid.";
        }
        return uuidComponents;
    },
    serialize: function serialize(uuidComponents, options) {
        var urnComponents = uuidComponents;
        //normalize UUID
        urnComponents.nss = (uuidComponents.uuid || "").toLowerCase();
        return urnComponents;
    }
};

SCHEMES[handler.scheme] = handler;
SCHEMES[handler$1.scheme] = handler$1;
SCHEMES[handler$2.scheme] = handler$2;
SCHEMES[handler$3.scheme] = handler$3;
SCHEMES[handler$4.scheme] = handler$4;
SCHEMES[handler$5.scheme] = handler$5;
SCHEMES[handler$6.scheme] = handler$6;

exports.SCHEMES = SCHEMES;
exports.pctEncChar = pctEncChar;
exports.pctDecChars = pctDecChars;
exports.parse = parse;
exports.removeDotSegments = removeDotSegments;
exports.serialize = serialize;
exports.resolveComponents = resolveComponents;
exports.resolve = resolve;
exports.normalize = normalize;
exports.equal = equal;
exports.escapeComponent = escapeComponent;
exports.unescapeComponent = unescapeComponent;

Object.defineProperty(exports, '__esModule', { value: true });

})));


},{}],18:[function(require,module,exports){
const addFormats = require("ajv-formats-draft2019");

if (typeof window !== 'undefined') {
	window.addFormats = addFormats;
}

module.exports = addFormats;

},{"ajv-formats-draft2019":7}],19:[function(require,module,exports){
(function (global){(function (){
/*! https://mths.be/punycode v1.4.1 by @mathias */
;(function(root) {

	/** Detect free variables */
	var freeExports = typeof exports == 'object' && exports &&
		!exports.nodeType && exports;
	var freeModule = typeof module == 'object' && module &&
		!module.nodeType && module;
	var freeGlobal = typeof global == 'object' && global;
	if (
		freeGlobal.global === freeGlobal ||
		freeGlobal.window === freeGlobal ||
		freeGlobal.self === freeGlobal
	) {
		root = freeGlobal;
	}

	/**
	 * The `punycode` object.
	 * @name punycode
	 * @type Object
	 */
	var punycode,

	/** Highest positive signed 32-bit float value */
	maxInt = 2147483647, // aka. 0x7FFFFFFF or 2^31-1

	/** Bootstring parameters */
	base = 36,
	tMin = 1,
	tMax = 26,
	skew = 38,
	damp = 700,
	initialBias = 72,
	initialN = 128, // 0x80
	delimiter = '-', // '\x2D'

	/** Regular expressions */
	regexPunycode = /^xn--/,
	regexNonASCII = /[^\x20-\x7E]/, // unprintable ASCII chars + non-ASCII chars
	regexSeparators = /[\x2E\u3002\uFF0E\uFF61]/g, // RFC 3490 separators

	/** Error messages */
	errors = {
		'overflow': 'Overflow: input needs wider integers to process',
		'not-basic': 'Illegal input >= 0x80 (not a basic code point)',
		'invalid-input': 'Invalid input'
	},

	/** Convenience shortcuts */
	baseMinusTMin = base - tMin,
	floor = Math.floor,
	stringFromCharCode = String.fromCharCode,

	/** Temporary variable */
	key;

	/*--------------------------------------------------------------------------*/

	/**
	 * A generic error utility function.
	 * @private
	 * @param {String} type The error type.
	 * @returns {Error} Throws a `RangeError` with the applicable error message.
	 */
	function error(type) {
		throw new RangeError(errors[type]);
	}

	/**
	 * A generic `Array#map` utility function.
	 * @private
	 * @param {Array} array The array to iterate over.
	 * @param {Function} callback The function that gets called for every array
	 * item.
	 * @returns {Array} A new array of values returned by the callback function.
	 */
	function map(array, fn) {
		var length = array.length;
		var result = [];
		while (length--) {
			result[length] = fn(array[length]);
		}
		return result;
	}

	/**
	 * A simple `Array#map`-like wrapper to work with domain name strings or email
	 * addresses.
	 * @private
	 * @param {String} domain The domain name or email address.
	 * @param {Function} callback The function that gets called for every
	 * character.
	 * @returns {Array} A new string of characters returned by the callback
	 * function.
	 */
	function mapDomain(string, fn) {
		var parts = string.split('@');
		var result = '';
		if (parts.length > 1) {
			// In email addresses, only the domain name should be punycoded. Leave
			// the local part (i.e. everything up to `@`) intact.
			result = parts[0] + '@';
			string = parts[1];
		}
		// Avoid `split(regex)` for IE8 compatibility. See #17.
		string = string.replace(regexSeparators, '\x2E');
		var labels = string.split('.');
		var encoded = map(labels, fn).join('.');
		return result + encoded;
	}

	/**
	 * Creates an array containing the numeric code points of each Unicode
	 * character in the string. While JavaScript uses UCS-2 internally,
	 * this function will convert a pair of surrogate halves (each of which
	 * UCS-2 exposes as separate characters) into a single code point,
	 * matching UTF-16.
	 * @see `punycode.ucs2.encode`
	 * @see <https://mathiasbynens.be/notes/javascript-encoding>
	 * @memberOf punycode.ucs2
	 * @name decode
	 * @param {String} string The Unicode input string (UCS-2).
	 * @returns {Array} The new array of code points.
	 */
	function ucs2decode(string) {
		var output = [],
		    counter = 0,
		    length = string.length,
		    value,
		    extra;
		while (counter < length) {
			value = string.charCodeAt(counter++);
			if (value >= 0xD800 && value <= 0xDBFF && counter < length) {
				// high surrogate, and there is a next character
				extra = string.charCodeAt(counter++);
				if ((extra & 0xFC00) == 0xDC00) { // low surrogate
					output.push(((value & 0x3FF) << 10) + (extra & 0x3FF) + 0x10000);
				} else {
					// unmatched surrogate; only append this code unit, in case the next
					// code unit is the high surrogate of a surrogate pair
					output.push(value);
					counter--;
				}
			} else {
				output.push(value);
			}
		}
		return output;
	}

	/**
	 * Creates a string based on an array of numeric code points.
	 * @see `punycode.ucs2.decode`
	 * @memberOf punycode.ucs2
	 * @name encode
	 * @param {Array} codePoints The array of numeric code points.
	 * @returns {String} The new Unicode string (UCS-2).
	 */
	function ucs2encode(array) {
		return map(array, function(value) {
			var output = '';
			if (value > 0xFFFF) {
				value -= 0x10000;
				output += stringFromCharCode(value >>> 10 & 0x3FF | 0xD800);
				value = 0xDC00 | value & 0x3FF;
			}
			output += stringFromCharCode(value);
			return output;
		}).join('');
	}

	/**
	 * Converts a basic code point into a digit/integer.
	 * @see `digitToBasic()`
	 * @private
	 * @param {Number} codePoint The basic numeric code point value.
	 * @returns {Number} The numeric value of a basic code point (for use in
	 * representing integers) in the range `0` to `base - 1`, or `base` if
	 * the code point does not represent a value.
	 */
	function basicToDigit(codePoint) {
		if (codePoint - 48 < 10) {
			return codePoint - 22;
		}
		if (codePoint - 65 < 26) {
			return codePoint - 65;
		}
		if (codePoint - 97 < 26) {
			return codePoint - 97;
		}
		return base;
	}

	/**
	 * Converts a digit/integer into a basic code point.
	 * @see `basicToDigit()`
	 * @private
	 * @param {Number} digit The numeric value of a basic code point.
	 * @returns {Number} The basic code point whose value (when used for
	 * representing integers) is `digit`, which needs to be in the range
	 * `0` to `base - 1`. If `flag` is non-zero, the uppercase form is
	 * used; else, the lowercase form is used. The behavior is undefined
	 * if `flag` is non-zero and `digit` has no uppercase form.
	 */
	function digitToBasic(digit, flag) {
		//  0..25 map to ASCII a..z or A..Z
		// 26..35 map to ASCII 0..9
		return digit + 22 + 75 * (digit < 26) - ((flag != 0) << 5);
	}

	/**
	 * Bias adaptation function as per section 3.4 of RFC 3492.
	 * https://tools.ietf.org/html/rfc3492#section-3.4
	 * @private
	 */
	function adapt(delta, numPoints, firstTime) {
		var k = 0;
		delta = firstTime ? floor(delta / damp) : delta >> 1;
		delta += floor(delta / numPoints);
		for (/* no initialization */; delta > baseMinusTMin * tMax >> 1; k += base) {
			delta = floor(delta / baseMinusTMin);
		}
		return floor(k + (baseMinusTMin + 1) * delta / (delta + skew));
	}

	/**
	 * Converts a Punycode string of ASCII-only symbols to a string of Unicode
	 * symbols.
	 * @memberOf punycode
	 * @param {String} input The Punycode string of ASCII-only symbols.
	 * @returns {String} The resulting string of Unicode symbols.
	 */
	function decode(input) {
		// Don't use UCS-2
		var output = [],
		    inputLength = input.length,
		    out,
		    i = 0,
		    n = initialN,
		    bias = initialBias,
		    basic,
		    j,
		    index,
		    oldi,
		    w,
		    k,
		    digit,
		    t,
		    /** Cached calculation results */
		    baseMinusT;

		// Handle the basic code points: let `basic` be the number of input code
		// points before the last delimiter, or `0` if there is none, then copy
		// the first basic code points to the output.

		basic = input.lastIndexOf(delimiter);
		if (basic < 0) {
			basic = 0;
		}

		for (j = 0; j < basic; ++j) {
			// if it's not a basic code point
			if (input.charCodeAt(j) >= 0x80) {
				error('not-basic');
			}
			output.push(input.charCodeAt(j));
		}

		// Main decoding loop: start just after the last delimiter if any basic code
		// points were copied; start at the beginning otherwise.

		for (index = basic > 0 ? basic + 1 : 0; index < inputLength; /* no final expression */) {

			// `index` is the index of the next character to be consumed.
			// Decode a generalized variable-length integer into `delta`,
			// which gets added to `i`. The overflow checking is easier
			// if we increase `i` as we go, then subtract off its starting
			// value at the end to obtain `delta`.
			for (oldi = i, w = 1, k = base; /* no condition */; k += base) {

				if (index >= inputLength) {
					error('invalid-input');
				}

				digit = basicToDigit(input.charCodeAt(index++));

				if (digit >= base || digit > floor((maxInt - i) / w)) {
					error('overflow');
				}

				i += digit * w;
				t = k <= bias ? tMin : (k >= bias + tMax ? tMax : k - bias);

				if (digit < t) {
					break;
				}

				baseMinusT = base - t;
				if (w > floor(maxInt / baseMinusT)) {
					error('overflow');
				}

				w *= baseMinusT;

			}

			out = output.length + 1;
			bias = adapt(i - oldi, out, oldi == 0);

			// `i` was supposed to wrap around from `out` to `0`,
			// incrementing `n` each time, so we'll fix that now:
			if (floor(i / out) > maxInt - n) {
				error('overflow');
			}

			n += floor(i / out);
			i %= out;

			// Insert `n` at position `i` of the output
			output.splice(i++, 0, n);

		}

		return ucs2encode(output);
	}

	/**
	 * Converts a string of Unicode symbols (e.g. a domain name label) to a
	 * Punycode string of ASCII-only symbols.
	 * @memberOf punycode
	 * @param {String} input The string of Unicode symbols.
	 * @returns {String} The resulting Punycode string of ASCII-only symbols.
	 */
	function encode(input) {
		var n,
		    delta,
		    handledCPCount,
		    basicLength,
		    bias,
		    j,
		    m,
		    q,
		    k,
		    t,
		    currentValue,
		    output = [],
		    /** `inputLength` will hold the number of code points in `input`. */
		    inputLength,
		    /** Cached calculation results */
		    handledCPCountPlusOne,
		    baseMinusT,
		    qMinusT;

		// Convert the input in UCS-2 to Unicode
		input = ucs2decode(input);

		// Cache the length
		inputLength = input.length;

		// Initialize the state
		n = initialN;
		delta = 0;
		bias = initialBias;

		// Handle the basic code points
		for (j = 0; j < inputLength; ++j) {
			currentValue = input[j];
			if (currentValue < 0x80) {
				output.push(stringFromCharCode(currentValue));
			}
		}

		handledCPCount = basicLength = output.length;

		// `handledCPCount` is the number of code points that have been handled;
		// `basicLength` is the number of basic code points.

		// Finish the basic string - if it is not empty - with a delimiter
		if (basicLength) {
			output.push(delimiter);
		}

		// Main encoding loop:
		while (handledCPCount < inputLength) {

			// All non-basic code points < n have been handled already. Find the next
			// larger one:
			for (m = maxInt, j = 0; j < inputLength; ++j) {
				currentValue = input[j];
				if (currentValue >= n && currentValue < m) {
					m = currentValue;
				}
			}

			// Increase `delta` enough to advance the decoder's <n,i> state to <m,0>,
			// but guard against overflow
			handledCPCountPlusOne = handledCPCount + 1;
			if (m - n > floor((maxInt - delta) / handledCPCountPlusOne)) {
				error('overflow');
			}

			delta += (m - n) * handledCPCountPlusOne;
			n = m;

			for (j = 0; j < inputLength; ++j) {
				currentValue = input[j];

				if (currentValue < n && ++delta > maxInt) {
					error('overflow');
				}

				if (currentValue == n) {
					// Represent delta as a generalized variable-length integer
					for (q = delta, k = base; /* no condition */; k += base) {
						t = k <= bias ? tMin : (k >= bias + tMax ? tMax : k - bias);
						if (q < t) {
							break;
						}
						qMinusT = q - t;
						baseMinusT = base - t;
						output.push(
							stringFromCharCode(digitToBasic(t + qMinusT % baseMinusT, 0))
						);
						q = floor(qMinusT / baseMinusT);
					}

					output.push(stringFromCharCode(digitToBasic(q, 0)));
					bias = adapt(delta, handledCPCountPlusOne, handledCPCount == basicLength);
					delta = 0;
					++handledCPCount;
				}
			}

			++delta;
			++n;

		}
		return output.join('');
	}

	/**
	 * Converts a Punycode string representing a domain name or an email address
	 * to Unicode. Only the Punycoded parts of the input will be converted, i.e.
	 * it doesn't matter if you call it on a string that has already been
	 * converted to Unicode.
	 * @memberOf punycode
	 * @param {String} input The Punycoded domain name or email address to
	 * convert to Unicode.
	 * @returns {String} The Unicode representation of the given Punycode
	 * string.
	 */
	function toUnicode(input) {
		return mapDomain(input, function(string) {
			return regexPunycode.test(string)
				? decode(string.slice(4).toLowerCase())
				: string;
		});
	}

	/**
	 * Converts a Unicode string representing a domain name or an email address to
	 * Punycode. Only the non-ASCII parts of the domain name will be converted,
	 * i.e. it doesn't matter if you call it with a domain that's already in
	 * ASCII.
	 * @memberOf punycode
	 * @param {String} input The domain name or email address to convert, as a
	 * Unicode string.
	 * @returns {String} The Punycode representation of the given domain name or
	 * email address.
	 */
	function toASCII(input) {
		return mapDomain(input, function(string) {
			return regexNonASCII.test(string)
				? 'xn--' + encode(string)
				: string;
		});
	}

	/*--------------------------------------------------------------------------*/

	/** Define the public API */
	punycode = {
		/**
		 * A string representing the current Punycode.js version number.
		 * @memberOf punycode
		 * @type String
		 */
		'version': '1.4.1',
		/**
		 * An object of methods to convert from JavaScript's internal character
		 * representation (UCS-2) to Unicode code points, and back.
		 * @see <https://mathiasbynens.be/notes/javascript-encoding>
		 * @memberOf punycode
		 * @type Object
		 */
		'ucs2': {
			'decode': ucs2decode,
			'encode': ucs2encode
		},
		'decode': decode,
		'encode': encode,
		'toASCII': toASCII,
		'toUnicode': toUnicode
	};

	/** Expose `punycode` */
	// Some AMD build optimizers, like r.js, check for specific condition patterns
	// like the following:
	if (
		typeof define == 'function' &&
		typeof define.amd == 'object' &&
		define.amd
	) {
		define('punycode', function() {
			return punycode;
		});
	} else if (freeExports && freeModule) {
		if (module.exports == freeExports) {
			// in Node.js, io.js, or RingoJS v0.8.0+
			freeModule.exports = punycode;
		} else {
			// in Narwhal or RingoJS v0.7.0-
			for (key in punycode) {
				punycode.hasOwnProperty(key) && (freeExports[key] = punycode[key]);
			}
		}
	} else {
		// in Rhino or a web browser
		root.punycode = punycode;
	}

}(this));

}).call(this)}).call(this,typeof global !== "undefined" ? global : typeof self !== "undefined" ? self : typeof window !== "undefined" ? window : {})
},{}]},{},[18]);
