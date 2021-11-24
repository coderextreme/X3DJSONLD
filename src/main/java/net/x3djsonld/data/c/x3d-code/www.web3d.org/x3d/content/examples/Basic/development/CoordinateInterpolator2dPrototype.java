package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> CoordinateInterpolator2D prototype declaration, to interpolate across an array of Vector2FloatArray/MFVec2f values to produce an interpolated Vector2FloatArray - click text to see example. </p>
 <p> Related links: <a href="../../../development/CoordinateInterpolator2dPrototype.java">CoordinateInterpolator2dPrototype.java</a> source, <a href="../../../development/CoordinateInterpolator2dPrototypeIndex.html" target="_top">CoordinateInterpolator2dPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Don Brutzman, Jeff Weekley, Jane Wu
 */

public class CoordinateInterpolator2dPrototype
{
	/** Default constructor to create this object. */
	public CoordinateInterpolator2dPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CoordinateInterpolator2dPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("CoordinateInterpolator2D prototype declaration, to interpolate across an array of Vector2FloatArray/MFVec2f values to produce an interpolated Vector2FloatArray - click text to see example."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Jeff Weekley, Jane Wu"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("28 June 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 January 2020"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("CoordinateInterpolator2D"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CoordinateInterpolator2dPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("CoordinateInterpolator2dPrototype.x3d"))
    .addChild(new ProtoDeclare("CoordinateInterpolator2D").setName("CoordinateInterpolator2D").setAppinfo("Provide interpolation capability for Vector2FloatArray/MFVec2f values").setDocumentation("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Regular interpolator-style input, the set_fraction eventIn receives an SFFloat event and causes the interpolator function to evaluate resulting in a value_changed eventOut with the same timestamp as the set_fraction event."))
        .addField(new field().setName("set_key").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("key").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue holds the array of Vector2FloatArrays that match each animation key."))
        .addField(new field().setName("key_changed").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
        .addField(new field().setName("set_keyValue").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
        .addField(new field().setName("keyValue").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue holds the array of Vector2FloatArrays that match each animation key."))
        .addField(new field().setName("keyValue_changed").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
        .addField(new field().setName("value_changed").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Regular interpolator-style output, the interpolator function averages between respective keyValue Vector2FloatArrays resulting in a Vector2FloatArray value_changed eventOut with the same timestamp as the set_fraction event.")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Switch().setWhichChoice(-1)
            .addChild(new ScalarInterpolator("KeyHolder")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("key").setProtoField("key"))))
            .addChild(new Shape()
              .setGeometry(new IndexedFaceSet()
                .setTexCoord(new TextureCoordinate("KeyValueHolder")
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("point").setProtoField("keyValue")))))
              .setAppearance(new Appearance("DefaultAppearance")
                .setMaterial(new Material()))))
          .addChild(new Script("InterpolationScript").setDirectOutput(true).setSourceCode("\n" + 
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
            .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.0).setAppinfo("local variable"))
            .addField(new field().setName("set_key").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("keyHolderNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new ScalarInterpolator().setUSE("KeyHolder")))
            .addField(new field().setName("key_changed").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("set_keyValue").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("keyValueHolderNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new TextureCoordinate().setUSE("KeyValueHolder")))
            .addField(new field().setName("keyValue_changed").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("value_changed").setType(field.TYPE_MFVEC2F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))
              .addConnect(new connect().setNodeField("set_key").setProtoField("set_key"))
              .addConnect(new connect().setNodeField("key_changed").setProtoField("key_changed"))
              .addConnect(new connect().setNodeField("set_keyValue").setProtoField("set_keyValue"))
              .addConnect(new connect().setNodeField("keyValue_changed").setProtoField("keyValue_changed"))
              .addConnect(new connect().setNodeField("value_changed").setProtoField("value_changed")))))))
    .addComments(" ====================================== ")
    .addComments(" Example use ")
    .addChild(new Anchor().setDescription("CoordinateInterpolator2dExample").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"CoordinateInterpolator2dExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/CoordinateInterpolator2dExample.x3d","CoordinateInterpolator2dExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/CoordinateInterpolator2dExample.wrl"})
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"CoordinateInterpolator2dPrototype","defines a prototype","","Click on this text to see","CoordinateInterpolator2dExample"," scene"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.7)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.2))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CoordinateInterpolator2dPrototype model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
	 * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3D thisExampleX3dModel = new CoordinateInterpolator2dPrototype().getX3dModel();

		boolean hasArguments = (args != null) && (args.length > 0);
		boolean validate = true; // default
		boolean argumentsLoadNewModel = false;
		String  fileName = new String();

		if (args != null)
		{
			for (String arg : args)
			{
				if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
				{
					validate = true; // making sure
				}
				if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"net.x3djsonld.data.CoordinateInterpolator2dPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.CoordinateInterpolator2dPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
