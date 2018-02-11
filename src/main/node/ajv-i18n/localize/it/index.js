'use strict';
module.exports = function localize_it(errors) {
  if (!(errors && errors.length)) return;
  for (var i = 0; i < errors.length; i++) {
    var e = errors[i];
    var out;
    switch (e.keyword) {
      case '$ref':
        out = 'non può risolvere il riferimento ' + (e.params.ref);
        break;
      case 'additionalItems':
        out = '';
        var n = e.params.limit;
        out += 'non dovrebbe avere più di ' + (n) + ' element';
        if (n == 1) {
          out += 'o';
        } else {
          out += 'i';
        }
        break;
      case 'additionalProperties':
        out = 'non dovrebbe avere attributi aggiuntive';
        break;
      case 'anyOf':
        out = 'deve corrispondere qualche schema in "anyOf"';
        break;
      case 'const':
        out = 'should be equal to constant';
        break;
      case 'contains':
        out = 'should contain a valid item';
        break;
      case 'custom':
        out = 'should pass "' + (e.keyword) + '" keyword validation';
        break;
      case 'dependencies':
        out = '';
        var n = e.params.depsCount;
        out += 'dovrebbe avere attribut';
        if (n == 1) {
          out += 'o';
        } else {
          out += 'i';
        }
        out += ' ' + (e.params.deps) + ' quando attributo ' + (e.params.property) + ' è presente';
        break;
      case 'enum':
        out = 'dovrebbe essere pari ad uno dei valori predefiniti';
        break;
      case 'exclusiveMaximum':
        out = '';
        var cond = e.params.comparison + " " + e.params.limit;
        out += 'dovrebbe essere ' + (cond);
        break;
      case 'exclusiveMinimum':
        out = '';
        var cond = e.params.comparison + " " + e.params.limit;
        out += 'dovrebbe essere ' + (cond);
        break;
      case 'false schema':
        out = 'boolean schema is false';
        break;
      case 'format':
        out = 'deve corrispondere formato "' + (e.params.format) + '"';
        break;
      case 'formatExclusiveMaximum':
        out = 'formatExclusiveMaximum should be boolean';
        break;
      case 'formatExclusiveMinimum':
        out = 'formatExclusiveMinimum should be boolean';
        break;
      case 'formatMaximum':
        out = '';
        var cond = e.params.comparison + " " + e.params.limit;
        out += 'should be ' + (cond);
        break;
      case 'formatMinimum':
        out = '';
        var cond = e.params.comparison + " " + e.params.limit;
        out += 'should be ' + (cond);
        break;
      case 'if':
        out = 'should match "' + (e.params.failingKeyword) + '" schema';
        break;
      case 'maximum':
        out = '';
        var cond = e.params.comparison + " " + e.params.limit;
        out += 'dovrebbe essere ' + (cond);
        break;
      case 'maxItems':
        out = '';
        var n = e.params.limit;
        out += 'non dovrebbe avere più di ' + (n) + ' element';
        if (n == 1) {
          out += 'o';
        } else {
          out += 'i';
        }
        break;
      case 'maxLength':
        out = '';
        var n = e.params.limit;
        out += 'non dovrebbe essere più lungo di ' + (n) + ' caratter';
        if (n == 1) {
          out += 'e';
        } else {
          out += 'i';
        }
        break;
      case 'maxProperties':
        out = '';
        var n = e.params.limit;
        out += 'non dovrebbe avere più ' + (n) + ' attribut';
        if (n == 1) {
          out += 'o';
        } else {
          out += 'i';
        }
        break;
      case 'minimum':
        out = '';
        var cond = e.params.comparison + " " + e.params.limit;
        out += 'dovrebbe essere ' + (cond);
        break;
      case 'minItems':
        out = '';
        var n = e.params.limit;
        out += 'non dovrebbe avere meno di ' + (n) + ' element';
        if (n == 1) {
          out += 'o';
        } else {
          out += 'i';
        }
        break;
      case 'minLength':
        out = '';
        var n = e.params.limit;
        out += 'non dovrebbe essere meno lungo di ' + (n) + ' caratter';
        if (n == 1) {
          out += 'e';
        } else {
          out += 'i';
        }
        break;
      case 'minProperties':
        out = '';
        var n = e.params.limit;
        out += 'non dovrebbe avere meno ' + (n) + ' attribut';
        if (n == 1) {
          out += 'o';
        } else {
          out += 'i';
        }
        break;
      case 'multipleOf':
        out = 'dovrebbe essere un multiplo di ' + (e.params.multipleOf);
        break;
      case 'not':
        out = 'non dovrebbe essere valida in base allo schema di "non"';
        break;
      case 'oneOf':
        out = 'dovrebbe corrispondere esattamente uno schema in "oneOf"';
        break;
      case 'pattern':
        out = 'deve corrispondere al modello "' + (e.params.pattern) + '"';
        break;
      case 'patternRequired':
        out = 'should have property matching pattern "' + (e.params.missingPattern) + '"';
        break;
      case 'propertyNames':
        out = 'property name \'' + (e.params.propertyName) + '\' is invalid';
        break;
      case 'required':
        out = 'dovrebbe avere attributo richiesta ' + (e.params.missingProperty);
        break;
      case 'switch':
        out = 'should pass "switch" keyword validation, case ' + (e.params.caseIndex) + ' fails';
        break;
      case 'type':
        out = 'dovrebbe essere ' + (e.params.type);
        break;
      case 'uniqueItems':
        out = 'non dovrebbe avere elementi duplicati (elementi ## ' + (e.params.j) + ' e ' + (e.params.i) + ' sono uguali)';
        break;
      default:
        continue;
    }
    e.message = out;
  }
};
