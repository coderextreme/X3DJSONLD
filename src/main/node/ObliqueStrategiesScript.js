// description: Script methods to load and sequence cards, create text-to-speech url for online retrieval of audio
// title:       ObliqueStrategiesScript.js    
// creator:     Don Brutzman, John Kelly, Ben Cheng
// identifier:  http://X3dGraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js
// created:      3 November 2013
// revised:     18 October  2015
// reference:   https://www.web3d.org/x3d/content/X3dTooltips.html#Script
// reference:   https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scripts
// reference:   https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/scripting.html
// reference:   https://www.web3d.org/x3d/specifications/ISO-IEC-19777-1-X3DLanguageBindings-ECMAScript/Part1/X3D_ECMAScript.html
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

function forcePrint (stringValue)
{
    // Browser.print, println is the function to output text on the X3D player's console window
    if ((scriptName.length > 0) && (terseTrace === false))
    {
        Browser.print ('[' + scriptName + '] ' + stringValue + '\n');
    }
    else 
    {
        Browser.print (                          stringValue + '\n');
    }
}
function tracePrint (stringValue)
{
    if (traceEnabled)
    {
        forcePrint (stringValue);
    }
}
// ================================================================

var index;

function generateTextToSpeechUrl () // TODO add SFBool field to silence, SFString field to choose output language
{
  // http://stackoverflow.com/questions/12141251/how-can-i-replace-space-with-20-in-javascript
  textToSpeechUrl = new MFString ('http://translate.google.com/translate_tts?tl=en&q=' + encodeURIComponent(strategy[index]));
  tracePrint ('generateTextToSpeechUrl() ' + textToSpeechUrl);
}

function produceMFStringCard () // internal utility function
{
    tracePrint ('produceMFStringCard index = ' + index);
    // invoke MFString constructor based on input size
    if       (strategy[index].length === 1)
    {
        string_changed = new MFString (strategy[index]);
    }
    else  if (strategy[index].length === 2)
    {
        string_changed = new MFString (strategy[index][0], strategy[index][1]);
    }
    else  if (strategy[index].length >= 3)
    {
        string_changed = new MFString (strategy[index][0], strategy[index][1], strategy[index][2]);
    }
    tracePrint ('string_changed = ' + strategy[index]);
    if (strategy[index].length > 3)
    {
        forcePrint ('strategy[index].length > 3, omitted remainder of ' + strategy[index]);
    }
    
    generateTextToSpeechUrl ();
    tracePrint ('============================'); // done with this card
}

function selectRandomCard (eventValue, timestamp) // eventValue is routed into Script, timestamp parameter optional
{
  if (eventValue === true)
  {
    tracePrint ('selectRandomCard (' + eventValue + ')');
    index = Math.floor(Math.random() * strategy.length); // range [0..length)
    tracePrint('random index = ' + index);
    produceMFStringCard (); // returns string_changed to the scene, where it gets ROUTEd
    newCardTime = timestamp + 0.1;
  }
}

function selectPreviousCard (eventValue, timestamp) // TODO test
{
  if (eventValue === true)
  {
    tracePrint ('selectPreviousCard (' + eventValue + ')');
    if (index < 0) // if -1 then no value was previously chosen, so pick a random one
    {
        index = Math.floor(Math.random() * strategy.length);
    }
    if (index === 0)
    {
        index = strategy.length; // intentionally out of bounds, depend on next step:
    }
    index = (index-1) % strategy.length;
    produceMFStringCard ();
    newCardTime = timestamp + 0.1;
  }
}

function selectNextCard (eventValue, timestamp) // TODO test
{
  if (eventValue === true)
  {
    tracePrint ('selectNextCard (' + eventValue + ')');
    if (index < 0) // if -1 then no value was previously chosen, so pick a random one
    {
        index = Math.floor(Math.random() * strategy.length);
    }
    index = (index+1) % strategy.length; // % is modulus operator
    produceMFStringCard ();
    newCardTime = timestamp + 0.1;
  }
}

function printAllStrategies()
{
  var i;
  var saveTrace = terseTrace; // remember prior value
  terseTrace = true;
  Browser.println ('');
  Browser.println ('            Oblique Strategies');
  Browser.println ('  (Over One Hundred Worthwhile Dilemmas)');
  Browser.println ('      by Brian Eno and Peter Schmidt');
  Browser.println ('');
  for (i=0; i < strategy.length; i++)
  {
    forcePrint (strategy[i]); // to Browser console
  }
  Browser.println ('');
  terseTrace = saveTrace; // restore prior value
}
// ================================================================

function initialize() // no parameters allowed
{
  // The initialize() function is automatically invoked when the Script node is first activated, prior to other events
  
  printAllStrategies(); // output goes to browser console
  
  index = index % strategy.length; // sometimes modulo operator does not work on negative numbers
  tracePrint ('initial index = ' + index);
  
  if ((index >= 0) && (index < strategy.length))
  {
    // type conversion: Javascript string array to X3D MFString array
    string_changed = new MFString (strategy[index]); // expects length of one
    tracePrint ('initialize() string_changed=' + string_changed);
  }
  else if (index === -1)
  {
    tracePrint ('initialize() index = -1, no initial value chosen'); // report error to console
  }
  else
  {
    forcePrint ('initialize() index=' + index + ' out of bounds, reset to 0'); // report error to console
    index = 0;
  }
  generateTextToSpeechUrl ();
  tracePrint ('============================'); // done with initialize
}
// ================================================================
