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
 * <p> PositionInterpolator2D prototype declaration to pairwise interpolate across an array of Vector2Float/SFVec2f values to produce a single Vector2Float value - click text to see example. </p>
 <p> Related links: <a href="../../../development/PositionInterpolator2dPrototype.java">PositionInterpolator2dPrototype.java</a> source, <a href="../../../development/PositionInterpolator2dPrototypeIndex.html" target="_top">PositionInterpolator2dPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/PositionInterpolator2dPrototype.x3d">PositionInterpolator2dPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> PositionInterpolator2D prototype declaration to pairwise interpolate across an array of Vector2Float/SFVec2f values to produce a single Vector2Float value - click text to see example. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Jeff Weekley, Jane Wu </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 16 October 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 January 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> PositionInterpolator2D </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dPrototype.x3d</a> </td>
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

	* @author Don Brutzman, Jeff Weekley, Jane Wu
 */

function PositionInterpolator2dPrototype
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
PositionInterpolator2dPrototype.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: field appinfo field, scene-graph level=5, element #14, 27 total values */
	this.field_set_fraction_5_14_appinfo = new autoclass.SFString("The set_fraction eventIn receives an SFFloat event and causes the interpolator function to evaluate resulting in a value_changed eventOut with the same timestamp as the set_fraction event.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #21, 22 total values */
	this.field_value_changed_5_21_appinfo = new autoclass.SFString("The interpolator function averages between respective keyValue Vector2Floats resulting in a Vector2Float value_changed eventOut with the same timestamp as the set_fraction event.");

	/** Large attribute array: Text string field, scene-graph level=5, element #55, 12 total values */
	this.Text_5_55_string = new autoclass.MFString(new autoclass.MFString("\"PositionInterpolator2dPrototype\" \"defines a prototype\" \"\" \"Click text to see\" \"PositionInterpolator2dExample\" \" scene\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("PositionInterpolator2dPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("PositionInterpolator2D prototype declaration to pairwise interpolate across an array of Vector2Float/SFVec2f values to produce a single Vector2Float value - click text to see example."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman, Jeff Weekley, Jane Wu"))
    .addMeta((new autoclass.meta()).setName("created").setContent("16 October 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 January 2020"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("PositionInterpolator2D"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("PositionInterpolator2dPrototype.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("PositionInterpolator2D").setAppinfo("Provide interpolation capability for Vector2Float/SFVec2f values").setDocumentation("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_fraction").setType("SFFloat").setAppinfo(this.field_set_fraction_5_14_appinfo)
          .addComments(" Regular interpolator-style input "))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_key").setType("MFFloat"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("key").setType("MFFloat").setAppinfo("keyValue holds the array of Vector2FloatArrays that match each animation key.")
          .addComments(" initial value is [] null array "))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("key_changed").setType("MFFloat").setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_keyValue").setType("MFVec2f").setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("keyValue").setType("MFVec2f").setAppinfo("keyValue holds the array of Vector2Float values that match each animation key.")
          .addComments(" initial value is [] null array "))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyValue_changed").setType("MFVec2f").setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("value_changed").setType("SFVec2f").setAppinfo(this.field_value_changed_5_21_appinfo)
          .addComments(" Regular interpolator-style output ")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Switch()).setWhichChoice(-1)
            .addChild((new autoclass.ScalarInterpolator("KeyHolder"))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("key").setProtoField("key"))))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.IndexedFaceSet())
                .setTexCoord((new autoclass.TextureCoordinate("KeyValueHolder"))
                  .setIS((new autoclass.IS())
                    .addConnect((new autoclass.connect()).setNodeField("point").setProtoField("keyValue")))))
              .setAppearance((new autoclass.Appearance("SilenceWarnings")))))
          .addChild((new autoclass.Script("InterpolationScript")).setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"// internal global persistent variables" + "\n" + 
"var previousFraction;" + "\n" + 
"var previousFractionIndex;" + "\n" + 
"var blockSize;" + "\n" + 
"var outputArray;" + "\n" + 
"\n" + 
"var traceEnabled = false;" + "\n" + 
"\n" + 
"function tracePrint (outputString)" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) Browser.print ('[PositionInterpolator2d]' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint (outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[PositionInterpolator2d]' + outputString);" + "\n" + 
"}" + "\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	key      = keyHolderNode.key;" + "\n" + 
"	keyValue = keyValueHolderNode.point;" + "\n" + 
"	previousFractionIndex = -1;" + "\n" + 
"	previousFraction = 0;" + "\n" + 
"	// check key array ranges [0..1] and is monotonically increasing" + "\n" + 
"	// check that size of keyValue array is integer multiple of size of key array" + "\n" + 
"	tracePrint ('key            =' + key);" + "\n" + 
"	tracePrint ('key.length=' + key.length);" + "\n" + 
"	tracePrint ('keyValue=  ' + keyValue);" + "\n" + 
"	tracePrint ('keyValue.length=' + keyValue.length);" + "\n" + 
"	blockSize =  keyValue.length/key.length;" + "\n" + 
"	tracePrint ('blockSize=' + blockSize);" + "\n" + 
"	if (blockSize != 1)" + "\n" + 
"	{" + "\n" + 
"	  alwaysPrint ('*** warning:  check sizes of key and keyValue, should be identical!');" + "\n" + 
"	}" + "\n" + 
"	if (key[0] != 0)" + "\n" + 
"	{" + "\n" + 
"	  alwaysPrint ('*** warning:  key[0] != 0');" + "\n" + 
"	}" + "\n" + 
"	if (key[key.length-1] != 1)" + "\n" + 
"	{" + "\n" + 
"	  alwaysPrint ('*** warning:  key[' + (key.length - 1) + '] != 1, reset from' + key[key.length-1] + ' to 1');" + "\n" + 
"	  key[key.length-1] = 1;" + "\n" + 
"	}" + "\n" + 
"	for (index = 0; index < key.length; index++)" + "\n" + 
"	{" + "\n" + 
"		if ((key[index] < 0) || (key[index] > 1))" + "\n" + 
"		{" + "\n" + 
"		   alwaysPrint ('*** warning:  key[' + index + '] =' + key[index] + ', out of range [0..1]');" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction (inputFloat, timestamp) {" + "\n" + 
"	fraction = inputFloat;" + "\n" + 
"	outputResult = new SFVec2f ();" + "\n" + 
"	tracePrint ('previousFractionIndex=' + previousFractionIndex" + "\n" + 
"		 + ', fraction=' + fraction + ', previousFraction=' + previousFraction);" + "\n" + 
"\n" + 
"	if (fraction < 0)" + "\n" + 
"	{" + "\n" + 
"		tracePrint ('*** illegal fraction' + fraction + ' set to 0');" + "\n" + 
"		fraction = 0;" + "\n" + 
"		previousFractionIndex = 0; // first" + "\n" + 
"	}" + "\n" + 
"	else if (fraction > 1)" + "\n" + 
"	{" + "\n" + 
"		alwaysPrint ('*** illegal fraction' + fraction + ' set to 1');" + "\n" + 
"		fraction = 1;" + "\n" + 
"		previousFractionIndex = key.length - 1; // last" + "\n" + 
"	}" + "\n" + 
"	else if (previousFractionIndex == -1)" + "\n" + 
"	{" + "\n" + 
"		previousFractionIndex = 0; // first" + "\n" + 
"		tracePrint ('previousFractionIndex initialized for first event');" + "\n" + 
"	}" + "\n" + 
"	else if ((fraction >= previousFraction) && (fraction >= key[previousFractionIndex+1]))" + "\n" + 
"	{" + "\n" + 
"		previousFractionIndex++;" + "\n" + 
"	}" + "\n" + 
"	else if (fraction < previousFraction) // regress, or loop repeat without reaching one" + "\n" + 
"	{" + "\n" + 
"		previousFractionIndex = 0;" + "\n" + 
"		while ((fraction >= key[previousFractionIndex+1]) && (previousFractionIndex < blockSize))" + "\n" + 
"		{" + "\n" + 
"			previousFractionIndex++;" + "\n" + 
"		}" + "\n" + 
"		tracePrint ('reset/reincrement previousFractionIndex to' + previousFractionIndex);" + "\n" + 
"	}" + "\n" + 
"\n" + 
"	if (fraction == 1) // use final block" + "\n" + 
"	{" + "\n" + 
"		tracePrint ('(fraction == 1)');" + "\n" + 
"		// update outputResult with final keyValue" + "\n" + 
"		outputResult = keyValue[keyValue.length];" + "\n" + 
"\n" + 
"		previousFractionIndex = -1; // setup for restart" + "\n" + 
"		tracePrint ('finished final fraction==1 block');" + "\n" + 
"	}" + "\n" + 
"	// when fraction matches index, calculate value_changed from corresponding keyValue array" + "\n" + 
"	else if (fraction == key[previousFractionIndex])" + "\n" + 
"	{" + "\n" + 
"		tracePrint ('(fraction == key[previousFractionIndex])');" + "\n" + 
"		// update outputResult with corresponding keyValue" + "\n" + 
"		outputResult = keyValue[previousFractionIndex];" + "\n" + 
"	}" + "\n" + 
"	else // calculate value_changed by interpolating between adjacent keyValue arrays" + "\n" + 
"	{" + "\n" + 
"		partialFraction = fraction                     - key[previousFractionIndex];" + "\n" + 
"		deltaFraction   = key[previousFractionIndex+1] - key[previousFractionIndex];" + "\n" + 
"		percentFraction = partialFraction / deltaFraction;" + "\n" + 
"	//	tracePrint ('deltaFraction   =' + deltaFraction);" + "\n" + 
"	//	tracePrint ('partialFraction =' + partialFraction);" + "\n" + 
"		tracePrint ('percentFraction =' + percentFraction);" + "\n" + 
"		// no arithmetic operators provided for SFVec2f, treat element by element" + "\n" + 
"		nextKeyValue  = keyValue[previousFractionIndex + 1];" + "\n" + 
"		priorKeyValue = keyValue[previousFractionIndex];" + "\n" + 
"		tracePrint (' nextKeyValue =' + nextKeyValue);" + "\n" + 
"		tracePrint ('priorKeyValue =' + priorKeyValue);" + "\n" + 
"		deltaKeyValue = new SFVec2f (	nextKeyValue[0] - priorKeyValue[0]," + "\n" + 
"						nextKeyValue[1] - priorKeyValue[1]);" + "\n" + 
"		//	tracePrint ('deltaKeyValue =' + deltaKeyValue);" + "\n" + 
"		// update outputResult" + "\n" + 
"		outputResult[0] = keyValue[previousFractionIndex][0]" + "\n" + 
"			        + percentFraction * deltaKeyValue[0];" + "\n" + 
"		outputResult[1] = keyValue[previousFractionIndex][1]" + "\n" + 
"			        + percentFraction * deltaKeyValue[1];" + "\n" + 
"	}" + "\n" + 
"	value_changed = outputResult;" + "\n" + 
"	previousFraction = fraction;" + "\n" + 
"	tracePrint ('value_changed=' + value_changed);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_key (inputArray, timestamp) {" + "\n" + 
"	key = inputArray;       // update key Vector2FloatArray" + "\n" + 
"	keyHolderNode.key = key; // update holder" + "\n" + 
"	initialize (timestamp); // reverify key, keyValue sizes" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_keyValue (inputArray, timestamp) {" + "\n" + 
"	keyValue = inputArray;  // update keyValue Vector2FloatArray" + "\n" + 
"	keyValueHolderNode.point = keyValue; // update holder" + "\n" + 
"	initialize (timestamp); // reverify key, keyValue sizes" + "\n" + 
"}" + "\n")
            .addComments(" Regular interpolator-style input ")
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_fraction").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("fraction").setType("SFFloat").setValue("0").setAppinfo("local variable"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_key").setType("MFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("keyHolderNode").setType("SFNode")
              .addChild((new autoclass.ScalarInterpolator()).setUSE("KeyHolder")))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("key_changed").setType("MFFloat"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_keyValue").setType("MFVec2f"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("keyValueHolderNode").setType("SFNode")
              .addChild((new autoclass.TextureCoordinate()).setUSE("KeyValueHolder")))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyValue_changed").setType("MFVec2f"))
            .addComments(" Regular interpolator-style output ")
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("value_changed").setType("SFVec2f"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("set_fraction").setProtoField("set_fraction"))
              .addConnect((new autoclass.connect()).setNodeField("set_key").setProtoField("set_key"))
              .addConnect((new autoclass.connect()).setNodeField("key_changed").setProtoField("key_changed"))
              .addConnect((new autoclass.connect()).setNodeField("set_keyValue").setProtoField("set_keyValue"))
              .addConnect((new autoclass.connect()).setNodeField("keyValue_changed").setProtoField("keyValue_changed"))
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("value_changed")))))))
    .addComments(" ====================================== ")
    .addComments(" Example use ")
    .addChild((new autoclass.Anchor()).setDescription("PositionInterpolator2D Example").setUrl(new autoclass.MFString("\"PositionInterpolator2dExample.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dExample.x3d\" \"PositionInterpolator2dExample.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dExample.wrl\""))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(this.Text_5_55_string)
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.7)))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.2))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return PositionInterpolator2dPrototype model
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
		var testObject = new PositionInterpolator2dPrototype();
		console.log ("PositionInterpolator2dPrototype execution self-validation test results: " + testObject.validateSelf());
	}
}
new PositionInterpolator2dPrototype().main();
process.exit(0);