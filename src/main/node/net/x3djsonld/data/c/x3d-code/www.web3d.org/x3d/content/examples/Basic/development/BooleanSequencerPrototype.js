var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('./X3Dautoclass');

// Javadoc annotations follow, see below for source.
/**
 * <p> BooleanSequencer is modeled after ScalarInterpolator and generates true or false values. </p>
 <p> Related links: <a href="../../../development/BooleanSequencerPrototype.java">BooleanSequencerPrototype.java</a> source, <a href="../../../development/BooleanSequencerPrototypeIndex.html" target="_top">BooleanSequencerPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/BooleanSequencerPrototype.x3d">BooleanSequencerPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> BooleanSequencer is modeled after ScalarInterpolator and generates true or false values. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 7 August 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 January 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> boolean sequencer </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu
 */

function BooleanSequencerPrototype
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
BooleanSequencerPrototype.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Text string field, scene-graph level=5, element #64, 14 total values */
	this.Text_5_64_string = new autoclass.MFString(new autoclass.MFString("\"BooleanSequencerPrototype\" \"defines a prototype\" \"\" \"Click on this text to see\" \"BooleanSequencerExample\" \" scene\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("BooleanSequencerPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("BooleanSequencer is modeled after ScalarInterpolator and generates true or false values."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu"))
    .addMeta((new autoclass.meta()).setName("created").setContent("7 August 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 January 2020"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("boolean sequencer"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("BooleanSequencerPrototype.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("BooleanSequencer")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_fraction").setType("SFFloat").setAppinfo("Regular interpolator-style input, typical range [0..1]"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_key").setType("MFFloat"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("key").setType("MFFloat").setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.")
          .addComments(" NULL initialization value "))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("key_changed").setType("MFFloat"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_keyValue").setType("MFBool"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("keyValue").setType("MFBool").setAppinfo("Array of true|false values. Must have the same number of keys as keyValues.")
          .addComments(" NULL initialization value "))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyValue_changed").setType("MFBool").setAppinfo("Regular interpolator-style input"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("value_changed").setType("SFBool").setAppinfo("Regular interpolator-style input"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("previous").setType("SFBool").setAppinfo("Utility method"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("next").setType("SFBool").setAppinfo("Utility method")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.ScalarInterpolator("KeyHolder"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("key").setProtoField("key"))))
          .addChild((new autoclass.Anchor("KeyValueHolder"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("keyValue"))))
          .addChild((new autoclass.Script("SequencerScript")).setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"var key, keyValue;" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"	key      = keyHolderNode.key;" + "\n" + 
"	keyValue = keyValueHolderNode.description;" + "\n" + 
"	tracePrint('key =' + key);" + "\n" + 
"	tracePrint('keyValue =' + keyValue);" + "\n" + 
"	keyValueToKeyValueArray ();" + "\n" + 
"	tracePrint('keyValueArray =' + keyValueArray);" + "\n" + 
"\n" + 
"	forward = true;" + "\n" + 
"	tracePrint('Initializing a new BooleanSequencer.  key.length=' + key.length + '; keyValueArray.length=' + keyValueArray.length);" + "\n" + 
"	validityCheck();" + "\n" + 
"}" + "\n" + 
"\n" + 
"function keyValueToKeyValueArray ()" + "\n" + 
"{" + "\n" + 
"	tracePrint('keyValueToKeyValueArray starting');" + "\n" + 
"	index = 0;" + "\n" + 
"	complete = false;" + "\n" + 
"	nextString = keyValue.toLowerCase();" + "\n" + 
"	tracePrint('initial nextString=' + nextString);" + "\n" + 
"	tokenCount=0;" + "\n" + 
"	while ((complete != true) && (nextString.length > 0))" + "\n" + 
"	{" + "\n" + 
"		tracePrint('nextString=' + nextString);" + "\n" + 
"		while ((nextString.substring(0,1) == ' ') || (nextString.substring(0,1) == ','))" + "\n" + 
"		       nextString = nextString.slice(1);" + "\n" + 
"		tracePrint('deblanked nextString=' + nextString);" + "\n" + 
"		if (nextString.length == 0)" + "\n" + 
"		{" + "\n" + 
"			tracePrint ('nextString.length == 0');" + "\n" + 
"			complete = true;" + "\n" + 
"		}" + "\n" + 
"		if (nextString.length < 4)" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint ('*** illegal keyValue input=' + nextString);" + "\n" + 
"			valid = false;" + "\n" + 
"			complete = true;" + "\n" + 
"		}" + "\n" + 
"		else if (nextString.substring(0,4) =='true')" + "\n" + 
"		{" + "\n" + 
"			keyValueArray[keyValueArray.length] = 1; // append" + "\n" + 
"			newString = nextString.slice(4);" + "\n" + 
"			nextString = newString;" + "\n" + 
"			tokenCount++;" + "\n" + 
"			tracePrint('found true, nextString=' + nextString + ', tokenCount=' + tokenCount);" + "\n" + 
"		}" + "\n" + 
"		else if (nextString.length < 5)" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint ('*** illegal keyValue input=' + nextString);" + "\n" + 
"			valid = false;" + "\n" + 
"			complete = true;" + "\n" + 
"		}" + "\n" + 
"		else if (nextString.substring(0,5) =='false')" + "\n" + 
"		{" + "\n" + 
"			keyValueArray[keyValueArray.length] = 0; // append" + "\n" + 
"			newString = nextString.slice(5);" + "\n" + 
"			nextString = newString;" + "\n" + 
"			tokenCount++;" + "\n" + 
"			tracePrint('found false, nextString=' + nextString + ', tokenCount=' + tokenCount);" + "\n" + 
"		}" + "\n" + 
"		tracePrint('  intermediate keyValueArray=' + keyValueArray);" + "\n" + 
"	}" + "\n" + 
"	tracePrint('keyValueToKeyValueArray complete');" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	if (recheckValidity) validityCheck();" + "\n" + 
"\n" + 
"	if (!valid) return; //BooleanSequencer ignored" + "\n" + 
"\n" + 
"	tracePrint('fraction =' + value);" + "\n" + 
"	//Bounds checking" + "\n" + 
"	if (value < 0)" + "\n" + 
"	{" + "\n" + 
"		alwaysPrint('*** warning: fraction is less than 0.  fraction reset to 0 ***');" + "\n" + 
"		value = 0;" + "\n" + 
"	}" + "\n" + 
"	else if (value > 1)" + "\n" + 
"	{" + "\n" + 
"		alwaysPrint('*** warning: fraction is greater than 1.  fraction reset to 1 ***');" + "\n" + 
"		value = 1;" + "\n" + 
"	}" + "\n" + 
"\n" + 
"	//Check animation direction" + "\n" + 
"	if (value < previousFraction && forward == true)" + "\n" + 
"	{" + "\n" + 
"		forward = false;" + "\n" + 
"		nextIndex = nextIndex - 1;" + "\n" + 
"		tracePrint('Animate backward');" + "\n" + 
"	}" + "\n" + 
"	else if (value > previousFraction && forward == false)" + "\n" + 
"	{" + "\n" + 
"		forward = true;" + "\n" + 
"		//nextIndex = 0;" + "\n" + 
"		tracePrint('Animate forward');" + "\n" + 
"	}" + "\n" + 
"\n" + 
"	previousFraction = value;" + "\n" + 
"\n" + 
"	if (forward == true)" + "\n" + 
"	{" + "\n" + 
"		for (i = nextIndex; i < key.length; i++)" + "\n" + 
"		{" + "\n" + 
"			if (value < key[i])" + "\n" + 
"				return;" + "\n" + 
"\n" + 
"			nextIndex = i + 1;" + "\n" + 
"			tracePrint('nextIndex =' + nextIndex);" + "\n" + 
"			if (nextIndex < key.length)" + "\n" + 
"			{" + "\n" + 
"				if (value <= key[nextIndex])" + "\n" + 
"				{" + "\n" + 
"					//Fire event" + "\n" + 
"					if (keyValueArray[nextIndex-1] == 0)" + "\n" + 
"						value_changed = false;" + "\n" + 
"					else" + "\n" + 
"						value_changed = true;" + "\n" + 
"					tracePrint('value_changed eventOut is:' + value_changed);" + "\n" + 
"				}" + "\n" + 
"			}" + "\n" + 
"			else if (nextIndex == key.length)" + "\n" + 
"			{" + "\n" + 
"				//Fire event" + "\n" + 
"				if (keyValueArray[nextIndex-1] == 0)" + "\n" + 
"					value_changed = false;" + "\n" + 
"				else" + "\n" + 
"					value_changed = true;" + "\n" + 
"				tracePrint('value_changed eventOut is:' + value_changed);" + "\n" + 
"			}" + "\n" + 
"			else //nextIndex > key.length" + "\n" + 
"			{" + "\n" + 
"				//nextIndex = 0;" + "\n" + 
"				break;" + "\n" + 
"			}" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"	else //backward" + "\n" + 
"	{" + "\n" + 
"		for (i = nextIndex; i > 0; i--)" + "\n" + 
"		{" + "\n" + 
"			if (value >= key[i])" + "\n" + 
"				return;" + "\n" + 
"\n" + 
"			nextIndex = i - 1;" + "\n" + 
"			tracePrint('nextIndex =' + nextIndex);" + "\n" + 
"			if (nextIndex >= 0)" + "\n" + 
"			{" + "\n" + 
"				if (value >= key[nextIndex])" + "\n" + 
"				{" + "\n" + 
"					//Fire event" + "\n" + 
"					if (keyValueArray[nextIndex] == 0)" + "\n" + 
"						value_changed = false;" + "\n" + 
"					else" + "\n" + 
"						value_changed = true;" + "\n" + 
"					tracePrint('value_changed eventOut is:' + value_changed);" + "\n" + 
"				}" + "\n" + 
"			}" + "\n" + 
"			else //nextIndex < 0" + "\n" + 
"			{" + "\n" + 
"				//nextIndex = key.length;" + "\n" + 
"				break;" + "\n" + 
"			}" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_key(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	key = value;" + "\n" + 
"	keyHolderNode.key  = key;" + "\n" + 
"	recheckValidity = true;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_keyValue(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	keyValue = value;" + "\n" + 
"	keyValueHolderNode.description = keyValue;" + "\n" + 
"	recheckValidity = true;" + "\n" + 
"	keyValueToKeyValueArray ();" + "\n" + 
"	keyValue_changed = keyValue;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function validityCheck()" + "\n" + 
"{" + "\n" + 
"	//Check if key & keyValueArray array length matches" + "\n" + 
"	if (key.length != keyValueArray.length)" + "\n" + 
"	{" + "\n" + 
"		alwaysPrint('*** error: key and keyValue arrays must be of the same length.  BooleanSequencer ignored ***');" + "\n" + 
"		valid = false;" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"\n" + 
"	//Check if key array has values in the range of [0..1] in an increasing order" + "\n" + 
"	if (key[0] < 0 || key[0] > 1)" + "\n" + 
"	{" + "\n" + 
"		alwaysPrint('*** error: key[0] value is NOT in the range of [0..1].  BooleanSequencer ignored ***');" + "\n" + 
"		valid = false;" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"	for (i = 1; i < key.length; i++)" + "\n" + 
"	{" + "\n" + 
"		if (key[i] < 0 || key[i] > 1)" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint('*** error: key[' + i + '] value is NOT in the range of [0..1].  BooleanSequencer ignored ***');" + "\n" + 
"			valid = false;" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"\n" + 
"		if (key[i] <= key [i-1])" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint('*** error: values for key[] array must be listed in an increasing order.  BooleanSequencer ignored ***');" + "\n" + 
"			valid = false;" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"	recheckValidity = false;" + "\n" + 
"	key_changed = key;" + "\n" + 
"	return;" + "\n" + 
"}" + "\n" + 
"function previous (SFBoolValue, timestamp)" + "\n" + 
"{" + "\n" + 
"	nextIndex = nextIndex - 1;" + "\n" + 
"	if (nextIndex == 0) nextIndex = key.length - 1;" + "\n" + 
"}" + "\n" + 
"function next (SFBoolValue, timestamp)" + "\n" + 
"{" + "\n" + 
"	nextIndex = nextIndex + 1;" + "\n" + 
"	if (nextIndex == key.length) nextIndex = 0;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) Browser.print ('[ BooleanSequencer ]' + outputString);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[ BooleanSequencer ]' + outputString);" + "\n" + 
"}" + "\n")
            .addComments(" Regular interpolator-style input ")
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_fraction").setType("SFFloat").setAppinfo("typical range [0..1]"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_key").setType("MFFloat").setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("keyHolderNode").setType("SFNode")
              .addChild((new autoclass.ScalarInterpolator()).setUSE("KeyHolder")))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("key_changed").setType("MFFloat"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_keyValue").setType("MFBool").setAppinfo("Array of true or false values. Must have the same number of keys as keyValues."))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("keyValueHolderNode").setType("SFNode")
              .addChild((new autoclass.Anchor()).setUSE("KeyValueHolder")))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyValue_changed").setType("MFBool"))
            .addComments(" Regular interpolator-style output ")
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("value_changed").setType("SFBool"))
            .addComments(" Utility methods ")
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("previous").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("next").setType("SFBool"))
            .addComments(" Script-specific interfaces, not needed for node definition ")
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool").setValue("false"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("keyValueArray").setType("MFInt32")
              .addComments(" NULL initialization value "))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("previousFraction").setType("SFFloat").setValue("0.0"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("nextIndex").setType("SFInt32").setValue("0"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("valid").setType("SFBool").setValue("true"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("recheckValidity").setType("SFBool").setValue("false"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("forward").setType("SFBool").setValue("true").setAppinfo("leftToRight"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("key").setType("MFFloat")
              .addComments(" NULL initialization value "))
            .addField((new autoclass.field()).setAccessType("inputOutput").setName("keyValue").setType("MFInt32")
              .addComments(" NULL initialization value "))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("set_fraction").setProtoField("set_fraction"))
              .addConnect((new autoclass.connect()).setNodeField("set_key").setProtoField("set_key"))
              .addConnect((new autoclass.connect()).setNodeField("key_changed").setProtoField("key_changed"))
              .addConnect((new autoclass.connect()).setNodeField("set_keyValue").setProtoField("set_keyValue"))
              .addConnect((new autoclass.connect()).setNodeField("keyValue_changed").setProtoField("keyValue_changed"))
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("value_changed"))
              .addConnect((new autoclass.connect()).setNodeField("previous").setProtoField("previous"))
              .addConnect((new autoclass.connect()).setNodeField("next").setProtoField("next")))))))
    .addComments(" ===============Example============== ")
    .addChild((new autoclass.Anchor()).setDescription("BooleanSequencerExample").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"BooleanSequencerExample.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d\" \"BooleanSequencerExample.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.wrl\""))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(this.Text_5_64_string)
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.2))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return BooleanSequencerPrototype model
   */
  getX3dModel : function()
  {	  
	  return this.x3dModel;
  },
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf : function()
  {
	var validationResult = "";
	var  exceptionResult = "";
	try
	{
		this.initialize();
		
		if ((this.getX3dModel() == null) || (this.getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + this.x3dModel.validate();
			return validationResult;
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = "";
		if  (exceptionResult !== "" && validationResult !== "")
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult === "" && validationResult !== "")
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  },
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main : function (argv)
    {
		var testObject = new BooleanSequencerPrototype();
		console.log ("BooleanSequencerPrototype execution self-validation test results: " + testObject.validateSelf());
	}
}
new BooleanSequencerPrototype().main();
process.exit(0);