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
 * <p> This proto, modeled after a ScalarInterpolator, generates an array of integer values based on the input fraction and keys. </p>
 <p> Related links: <a href="../../../development/IntegerSequencerPrototype.java">IntegerSequencerPrototype.java</a> source, <a href="../../../development/IntegerSequencerPrototypeIndex.html" target="_top">IntegerSequencerPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/IntegerSequencerPrototype.x3d">IntegerSequencerPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This proto, modeled after a ScalarInterpolator, generates an array of integer values based on the input fraction and keys. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> MFInt32 keyValue accessType is listed as initializeOnly/field, since inputOutput cannot be translated to exposedField in VRML97 scripting. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu, Matthew Braun </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 20 August 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 21 January 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> integer sequencer </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerPrototype.x3d</a> </td>
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

	* @author Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu, Matthew Braun
 */

function IntegerSequencerPrototype
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
IntegerSequencerPrototype.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Text string field, scene-graph level=5, element #59, 12 total values */
	this.Text_5_59_string = new autoclass.MFString(new autoclass.MFString("\"IntegerSequencerPrototype\" \"defines a prototype\" \"\" \"Click text to see example scene\" \"IntegerSequencerExample\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("IntegerSequencerPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("This proto, modeled after a ScalarInterpolator, generates an array of integer values based on the input fraction and keys."))
    .addMeta((new autoclass.meta()).setName("warning").setContent("MFInt32 keyValue accessType is listed as initializeOnly/field, since inputOutput cannot be translated to exposedField in VRML97 scripting."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu, Matthew Braun"))
    .addMeta((new autoclass.meta()).setName("created").setContent("20 August 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("21 January 2020"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("integer sequencer"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("IntegerSequencerPrototype.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("IntegerSequencer")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_fraction").setType("SFFloat").setAppinfo("Regular interpolator-style input, range [0..1]"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_key").setType("MFFloat").setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("key").setType("MFFloat").setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("key_changed").setType("MFFloat").setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_keyValue").setType("MFInt32").setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("keyValue").setType("MFInt32").setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyValue_changed").setType("MFInt32").setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("value_changed").setType("SFInt32").setAppinfo("Regular interpolator-style input"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("previous").setType("SFBool").setAppinfo("Utility method"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("next").setType("SFBool").setAppinfo("Utility method")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Switch()).setWhichChoice(-1)
            .addChild((new autoclass.ScalarInterpolator("KeyHolder"))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("key").setProtoField("key")))))
          .addChild((new autoclass.Script("SequencerScript")).setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"var leftToRight;" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"	key      = keyHolderNode.key;" + "\n" + 
"	tracePrint('Initializing a new IntegerSequencer.  key.length=' + key.length + '; keyValue.length=' + keyValue.length);" + "\n" + 
"	tracePrint('key =' + key);" + "\n" + 
"	tracePrint('keyValue =' + keyValue);" + "\n" + 
"\n" + 
"	validityCheck();" + "\n" + 
"	setHalfKeyRange();" + "\n" + 
"\n" + 
"	// assume we start at first key, going left to right" + "\n" + 
"	leftToRight = true;" + "\n" + 
"	previousFraction = key[0];" + "\n" + 
"	nextIndex = 1;  //validityCheck ensures minimum of 2 keys exist" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction(newFraction, timeStamp)" + "\n" + 
"{" + "\n" + 
"	if (recheckValidity) validityCheck();" + "\n" + 
"\n" + 
"	if (!isValid) return; //IntegerSequencer ignored" + "\n" + 
"\n" + 
"	//Bounds checking" + "\n" + 
"	if (newFraction < key[0])" + "\n" + 
"	{" + "\n" + 
"		tracePrint('*** warning: fraction is less than first key.  fraction set to first key ***');" + "\n" + 
"		newFraction = key[0];" + "\n" + 
"	}" + "\n" + 
"	else if (newFraction > key[key.length-1])" + "\n" + 
"	{" + "\n" + 
"		tracePrint('*** warning: fraction is greater than last key.  fraction set to last key ***');" + "\n" + 
"		newFraction = key[key.length -1];" + "\n" + 
"	}" + "\n" + 
"\n" + 
"	//Check animation direction" + "\n" + 
"	if (newFraction < previousFraction && leftToRight == true)" + "\n" + 
"	{" + "\n" + 
"		if ((previousFraction - newFraction) > halfKeyRange) //looped around" + "\n" + 
"		{" + "\n" + 
"			nextIndex = 1;" + "\n" + 
"		}" + "\n" + 
"		else //just changed direction" + "\n" + 
"		{" + "\n" + 
"			leftToRight = false;" + "\n" + 
"			nextIndex = nextIndex - 1;" + "\n" + 
"            }" + "\n" + 
"	}" + "\n" + 
"	else if (newFraction > previousFraction && leftToRight == false)" + "\n" + 
"	{" + "\n" + 
"		if ((newFraction - previousFraction) < halfKeyRange) //looped around" + "\n" + 
"		{" + "\n" + 
"			nextIndex = key.length - 2;" + "\n" + 
"		}" + "\n" + 
"		else //just changed direction" + "\n" + 
"		{" + "\n" + 
"			leftToRight = true;" + "\n" + 
"			nextIndex = nextIndex + 1;" + "\n" + 
"            }" + "\n" + 
"	}" + "\n" + 
"	else if (newFraction == previousFraction)" + "\n" + 
"	{ //no change, so no processing required" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"	previousFraction = newFraction;" + "\n" + 
"\n" + 
"	if (leftToRight) // moving left to right" + "\n" + 
"	{" + "\n" + 
"		while (newFraction > key[nextIndex]) nextIndex++;" + "\n" + 
"\n" + 
"		if (newFraction == key[nextIndex])" + "\n" + 
"			value_changed = keyValue[nextIndex];" + "\n" + 
"		else	value_changed = keyValue[nextIndex -1];" + "\n" + 
"\n" + 
"		tracePrint('forward animation, fraction =' + newFraction);" + "\n" + 
"		tracePrint('value_changed eventOut is:' + value_changed);" + "\n" + 
"	}" + "\n" + 
"	else // moving right to left" + "\n" + 
"	{" + "\n" + 
"		while (newFraction < key[nextIndex]) nextIndex--;" + "\n" + 
"\n" + 
"		if (newFraction == key[nextIndex])" + "\n" + 
"			value_changed = keyValue[nextIndex];" + "\n" + 
"		else	value_changed = keyValue[nextIndex + 1];" + "\n" + 
"\n" + 
"		tracePrint('backward animation, fraction =' + newFraction);" + "\n" + 
"		tracePrint('value_changed eventOut is:' + value_changed);" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_key(newKey, timeStamp)" + "\n" + 
"{" + "\n" + 
"	key = newKey;" + "\n" + 
"	keyHolderNode.key = newKey;" + "\n" + 
"	setHalfKeyWidth();" + "\n" + 
"	recheckValidity = true;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_keyValue(newKeyValue, timeStamp)" + "\n" + 
"{" + "\n" + 
"	keyValue = newKeyValue;" + "\n" + 
"	recheckValidity = true;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setHalfKeyRange()" + "\n" + 
"{" + "\n" + 
"	halfKeyRange = (key[key.length - 1] - key[0])/2.0;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function previous (value, timeStamp)" + "\n" + 
"{" + "\n" + 
"  if (value==true) // trigger on true events only" + "\n" + 
"  {" + "\n" + 
"	leftToRight = true;" + "\n" + 
"	nextIndex = nextIndex - 2; // reset to previous" + "\n" + 
"	if (nextIndex < 0) nextIndex = nextIndex + key.length;" + "\n" + 
"	value_changed = keyValue[nextIndex];" + "\n" + 
"	previousFraction = key[nextIndex];" + "\n" + 
"	nextIndex++; // setup for next time, leftToRight" + "\n" + 
"	if (nextIndex > key.length - 1) nextIndex = 0;" + "\n" + 
"  }" + "\n" + 
"}" + "\n" + 
"function next (value, timeStamp)" + "\n" + 
"{" + "\n" + 
"  if (value==true) // trigger on true events only" + "\n" + 
"  {" + "\n" + 
"	leftToRight = true;" + "\n" + 
"	value_changed = keyValue[nextIndex];" + "\n" + 
"	previousFraction = key[nextIndex];" + "\n" + 
"	nextIndex++; // setup for next time,leftToRight" + "\n" + 
"	if (nextIndex > key.length - 1) nextIndex = 0;" + "\n" + 
"  }" + "\n" + 
"}" + "\n" + 
"\n" + 
"function validityCheck()" + "\n" + 
"{" + "\n" + 
"	//Check if lengths of key & keyValue arrays match" + "\n" + 
"	if (key.length != keyValue.length)" + "\n" + 
"	{" + "\n" + 
"		alwaysPrint('*** error: key and keyValue arrays must be of the same length.  IntegerSequencer ignored ***');" + "\n" + 
"		isValid = false;" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"	//check to ensure minimum of 2 keys have been specified" + "\n" + 
"	if (key.length < 2)" + "\n" + 
"	{" + "\n" + 
"		alwaysPrint('*** error: must contain at least 2 keys.  IntegerSequencer ignored ***');" + "\n" + 
"		isValid = false;" + "\n" + 
"		return;" + "\n" + 
"	}" + "\n" + 
"\n" + 
"	//Check if key array has values in an non-decreasing order" + "\n" + 
"	for (i = 1; i < key.length; i++)" + "\n" + 
"	{" + "\n" + 
"		tracePrint('i=' + i);" + "\n" + 
"\n" + 
"		if (key[i] < key [i-1])" + "\n" + 
"		{" + "\n" + 
"			alwaysPrint('*** error: key array values must be listed in a non-decreasing order.  IntegerSequencer ignored ***');" + "\n" + 
"			isValid = false;" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"	isValid = true" + "\n" + 
"	recheckValidity = false;" + "\n" + 
"	key_changed = key;" + "\n" + 
"	keyValue_changed = keyValue;" + "\n" + 
"	return;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) Browser.print ('[IntegerSequencer]' + outputString);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[IntegerSequencer]' + outputString);" + "\n" + 
"}" + "\n")
            .addComments(" Regular interpolator-style input ")
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_fraction").setType("SFFloat").setAppinfo("range [0..1]"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_key").setType("MFFloat").setAppinfo("Array sequentially increasing [0..1]. Must have the same number of keys as keyValues."))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("keyHolderNode").setType("SFNode")
              .addChild((new autoclass.ScalarInterpolator()).setUSE("KeyHolder")))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("key_changed").setType("MFFloat").setAppinfo("Array sequentially increasing [0..1]. Must have the same number of keys as keyValues."))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_keyValue").setType("MFInt32").setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("keyValue").setType("MFInt32"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyValue_changed").setType("MFInt32").setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
            .addComments(" Regular interpolator-style output ")
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("value_changed").setType("SFInt32"))
            .addComments(" Utility methods ")
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("previous").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("next").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool").setValue("true").setAppinfo("For development use only not for inclusion in specification implementations."))
            .addComments(" Script-specific interfaces, not needed for node definition ")
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("previousFraction").setType("SFFloat").setValue("0.0"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("nextIndex").setType("SFInt32").setValue("0"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("isValid").setType("SFBool").setValue("true"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("recheckValidity").setType("SFBool").setValue("false"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("set_fraction").setProtoField("set_fraction"))
              .addConnect((new autoclass.connect()).setNodeField("set_key").setProtoField("set_key"))
              .addConnect((new autoclass.connect()).setNodeField("key_changed").setProtoField("key_changed"))
              .addConnect((new autoclass.connect()).setNodeField("set_keyValue").setProtoField("set_keyValue"))
              .addConnect((new autoclass.connect()).setNodeField("keyValue").setProtoField("keyValue"))
              .addConnect((new autoclass.connect()).setNodeField("keyValue_changed").setProtoField("keyValue_changed"))
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("value_changed"))
              .addConnect((new autoclass.connect()).setNodeField("previous").setProtoField("previous"))
              .addConnect((new autoclass.connect()).setNodeField("next").setProtoField("next")))))))
    .addComments(" ===============Example============== ")
    .addChild((new autoclass.Anchor()).setDescription("IntegerSequencerExample").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"IntegerSequencerExample.x3d\" \"https://savage.nps.edu/Savage/Tools/Animation/IntegerSequencerExample.x3d\" \"IntegerSequencerExample.wrl\" \"https://savage.nps.edu/Savage/Tools/Animation/IntegerSequencerExample.wrl\""))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(this.Text_5_59_string)
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.9)))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.2))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return IntegerSequencerPrototype model
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
		var testObject = new IntegerSequencerPrototype();
		console.log ("IntegerSequencerPrototype execution self-validation test results: " + testObject.validateSelf());
	}
}
new IntegerSequencerPrototype().main();
process.exit(0);