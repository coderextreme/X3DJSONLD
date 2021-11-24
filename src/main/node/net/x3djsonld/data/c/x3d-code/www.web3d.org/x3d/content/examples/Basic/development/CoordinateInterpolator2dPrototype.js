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
 * <p> CoordinateInterpolator2D prototype declaration, to interpolate across an array of Vector2FloatArray/MFVec2f values to produce an interpolated Vector2FloatArray - click text to see example. </p>
 <p> Related links: <a href="../../../development/CoordinateInterpolator2dPrototype.java">CoordinateInterpolator2dPrototype.java</a> source, <a href="../../../development/CoordinateInterpolator2dPrototypeIndex.html" target="_top">CoordinateInterpolator2dPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/CoordinateInterpolator2dPrototype.x3d">CoordinateInterpolator2dPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> CoordinateInterpolator2D prototype declaration, to interpolate across an array of Vector2FloatArray/MFVec2f values to produce an interpolated Vector2FloatArray - click text to see example. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Jeff Weekley, Jane Wu </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 28 June 2001 </td>
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
			<td> CoordinateInterpolator2D </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/CoordinateInterpolator2dPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/CoordinateInterpolator2dPrototype.x3d</a> </td>
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

function CoordinateInterpolator2dPrototype
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CoordinateInterpolator2dPrototype.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: field appinfo field, scene-graph level=5, element #14, 30 total values */
	this.field_set_fraction_5_14_appinfo = new autoclass.SFString("Regular interpolator-style input, the set_fraction eventIn receives an SFFloat event and causes the interpolator function to evaluate resulting in a value_changed eventOut with the same timestamp as the set_fraction event.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #21, 25 total values */
	this.field_value_changed_5_21_appinfo = new autoclass.SFString("Regular interpolator-style output, the interpolator function averages between respective keyValue Vector2FloatArrays resulting in a Vector2FloatArray value_changed eventOut with the same timestamp as the set_fraction event.");

	/** Large attribute array: Text string field, scene-graph level=5, element #56, 14 total values */
	this.Text_5_56_string = new autoclass.MFString(new autoclass.MFString("\"CoordinateInterpolator2dPrototype\" \"defines a prototype\" \"\" \"Click on this text to see\" \"CoordinateInterpolator2dExample\" \" scene\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("CoordinateInterpolator2dPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("CoordinateInterpolator2D prototype declaration, to interpolate across an array of Vector2FloatArray/MFVec2f values to produce an interpolated Vector2FloatArray - click text to see example."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman, Jeff Weekley, Jane Wu"))
    .addMeta((new autoclass.meta()).setName("created").setContent("28 June 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 January 2020"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("CoordinateInterpolator2D"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CoordinateInterpolator2dPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("CoordinateInterpolator2dPrototype.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("CoordinateInterpolator2D").setAppinfo("Provide interpolation capability for Vector2FloatArray/MFVec2f values").setDocumentation("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_fraction").setType("SFFloat").setAppinfo(this.field_set_fraction_5_14_appinfo))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_key").setType("MFFloat"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("key").setType("MFFloat").setAppinfo("keyValue holds the array of Vector2FloatArrays that match each animation key."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("key_changed").setType("MFFloat").setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_keyValue").setType("MFVec2f").setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("keyValue").setType("MFVec2f").setAppinfo("keyValue holds the array of Vector2FloatArrays that match each animation key."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyValue_changed").setType("MFVec2f").setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("value_changed").setType("MFVec2f").setAppinfo(this.field_value_changed_5_21_appinfo)))
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
              .setAppearance((new autoclass.Appearance("DefaultAppearance"))
                .setMaterial((new autoclass.Material())))))
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
"function tracePrint (outputString)" + "\n" + 
"{" + "\n" + 
"	var traceEnabled = false;" + "\n" + 
"	if (traceEnabled) Browser.print ('[CoordinateInterpolator2D]' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint (outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[CoordinateInterpolator2D]' + outputString);" + "\n" + 
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
"	tracePrint ('key.length= ' + key.length);" + "\n" + 
"	tracePrint ('keyValue=   ' + keyValue);" + "\n" + 
"	tracePrint ('keyValue.length=' + keyValue.length);" + "\n" + 
"	blockSize =  keyValue.length/key.length;" + "\n" + 
"	tracePrint ('blockSize=' + blockSize);" + "\n" + 
"	if (blockSize != Math.round(blockSize))" + "\n" + 
"	{" + "\n" + 
"	  alwaysPrint ('*** warning:  blockSize not an integer multiple. check sizes of key and keyValue');" + "\n" + 
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
"	for (index = 0; index < blockSize; index++)" + "\n" + 
"	{" + "\n" + 
"		if ((key[index] < 0) || (key[index] > 1))" + "\n" + 
"		{" + "\n" + 
"		   alwaysPrint ('*** warning:  key[' + index + '] =' + key[index] + ', out of range [0..1]');" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"	// instantiate default array, later computations just update it" + "\n" + 
"	outputArray = new MFVec2f ();" + "\n" + 
"	for (index = 0; index < blockSize; index++)" + "\n" + 
"	{" + "\n" + 
"		// dynamically grow outputArray to match initial block" + "\n" + 
"		outputArray[index] = keyValue[index];" + "\n" + 
"	}" + "\n" + 
"	tracePrint ('initial outputArray=' + outputArray);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction (inputFloat, timestamp) {" + "\n" + 
"	fraction = inputFloat;" + "\n" + 
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
"		previousFractionIndex = blockSize - 1; // last" + "\n" + 
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
"		for (index = 0; index < blockSize; index++)" + "\n" + 
"		{" + "\n" + 
"			// update outputArray with final four keyValues" + "\n" + 
"			outputArray[4 - index] = keyValue[keyValue.length - index];" + "\n" + 
"		}" + "\n" + 
"		previousFractionIndex = -1; // setup for restart" + "\n" + 
"		tracePrint ('finished final fraction==1 block');" + "\n" + 
"	}" + "\n" + 
"	// when fraction matches index, calculate value_changed from corresponding keyValue array" + "\n" + 
"	else if (fraction == key[previousFractionIndex])" + "\n" + 
"	{" + "\n" + 
"		tracePrint ('(fraction == key[previousFractionIndex])');" + "\n" + 
"		for (index = 0; index < blockSize; index++)" + "\n" + 
"		{" + "\n" + 
"			// update outputArray - need to interpolate next" + "\n" + 
"			outputArray[index] = keyValue[blockSize * (previousFractionIndex) + index];" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"	else // calculate value_changed by interpolating between adjacent keyValue arrays" + "\n" + 
"	{" + "\n" + 
"		partialFraction = fraction                     - key[previousFractionIndex];" + "\n" + 
"		deltaFraction   = key[previousFractionIndex+1] - key[previousFractionIndex];" + "\n" + 
"		percentFraction = partialFraction / deltaFraction;" + "\n" + 
"	//	tracePrint ('deltaFraction   =' + deltaFraction);" + "\n" + 
"	//	tracePrint ('partialFraction =' + partialFraction);" + "\n" + 
"		tracePrint ('percentFraction =' + percentFraction);" + "\n" + 
"		for (index = 0; index < blockSize; index++)" + "\n" + 
"		{" + "\n" + 
"			// no arithmetic operators provided for SFVec2f, treat element by element" + "\n" + 
"			nextKeyValue  = keyValue[blockSize * (previousFractionIndex + 1) + index];" + "\n" + 
"			priorKeyValue = keyValue[blockSize * (previousFractionIndex)     + index];" + "\n" + 
"			deltaKeyValue = new SFVec2f (" + "\n" + 
"						nextKeyValue[0] - priorKeyValue[0]," + "\n" + 
"						nextKeyValue[1] - priorKeyValue[1]);" + "\n" + 
"		//	tracePrint ('deltaKeyValue =' + deltaKeyValue);" + "\n" + 
"			// update outputArray" + "\n" + 
"			outputArray[index][0] = keyValue[blockSize * (previousFractionIndex) + index][0]" + "\n" + 
"			   + percentFraction * deltaKeyValue[0];" + "\n" + 
"			outputArray[index][1] = keyValue[blockSize * (previousFractionIndex) + index][1]" + "\n" + 
"			   + percentFraction * deltaKeyValue[1];" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"	value_changed = outputArray;" + "\n" + 
"	previousFraction = fraction;" + "\n" + 
"	tracePrint ('value_changed=' + value_changed);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_key (inputArray, timestamp) {" + "\n" + 
"	key = inputArray;       // update key Vector2FloatArray" + "\n" + 
"	keyHolderNode.key = key; // update holder" + "\n" + 
"	initialize (timestamp); // reverify key, keyValue sizes" + "\n" + 
"	key_changed = key;	// eventOut" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_keyValue (inputArray, timestamp) {" + "\n" + 
"	keyValue = inputArray;  	// update keyValue Vector2FloatArray" + "\n" + 
"	keyValueHolderNode.point = keyValue; // update holder" + "\n" + 
"	initialize (timestamp); 	// reverify key, keyValue sizes" + "\n" + 
"	keyValue_changed = keyValue;	// eventOut" + "\n" + 
"}" + "\n")
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_fraction").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("fraction").setType("SFFloat").setValue("0.0").setAppinfo("local variable"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_key").setType("MFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("keyHolderNode").setType("SFNode")
              .addChild((new autoclass.ScalarInterpolator()).setUSE("KeyHolder")))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("key_changed").setType("MFFloat"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_keyValue").setType("MFVec2f"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("keyValueHolderNode").setType("SFNode")
              .addChild((new autoclass.TextureCoordinate()).setUSE("KeyValueHolder")))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyValue_changed").setType("MFVec2f"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("value_changed").setType("MFVec2f"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("set_fraction").setProtoField("set_fraction"))
              .addConnect((new autoclass.connect()).setNodeField("set_key").setProtoField("set_key"))
              .addConnect((new autoclass.connect()).setNodeField("key_changed").setProtoField("key_changed"))
              .addConnect((new autoclass.connect()).setNodeField("set_keyValue").setProtoField("set_keyValue"))
              .addConnect((new autoclass.connect()).setNodeField("keyValue_changed").setProtoField("keyValue_changed"))
              .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("value_changed")))))))
    .addComments(" ====================================== ")
    .addComments(" Example use ")
    .addChild((new autoclass.Anchor()).setDescription("CoordinateInterpolator2dExample").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"CoordinateInterpolator2dExample.x3d\" \"https://savage.nps.edu/Savage/Tools/Animation/CoordinateInterpolator2dExample.x3d\" \"CoordinateInterpolator2dExample.wrl\" \"https://savage.nps.edu/Savage/Tools/Animation/CoordinateInterpolator2dExample.wrl\""))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(this.Text_5_56_string)
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.7)))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.2))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CoordinateInterpolator2dPrototype model
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
		var testObject = new CoordinateInterpolator2dPrototype();
		console.log ("CoordinateInterpolator2dPrototype execution self-validation test results: " + testObject.validateSelf());
	}
}
new CoordinateInterpolator2dPrototype().main();
process.exit(0);