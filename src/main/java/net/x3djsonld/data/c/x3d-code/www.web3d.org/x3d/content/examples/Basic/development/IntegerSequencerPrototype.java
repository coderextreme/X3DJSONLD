package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This proto, modeled after a ScalarInterpolator, generates an array of integer values based on the input fraction and keys. </p>
 <p> Related links: <a href="../../../development/IntegerSequencerPrototype.java">IntegerSequencerPrototype.java</a> source, <a href="../../../development/IntegerSequencerPrototypeIndex.html" target="_top">IntegerSequencerPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu, Matthew Braun
 */

public class IntegerSequencerPrototype
{
	/** Default constructor to create this object. */
	public IntegerSequencerPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("IntegerSequencerPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This proto, modeled after a ScalarInterpolator, generates an array of integer values based on the input fraction and keys."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("MFInt32 keyValue accessType is listed as initializeOnly/field, since inputOutput cannot be translated to exposedField in VRML97 scripting."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu, Matthew Braun"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("20 August 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("21 January 2020"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("integer sequencer"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("IntegerSequencerPrototype.x3d"))
    .addChild(new ProtoDeclare("IntegerSequencer").setName("IntegerSequencer")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Regular interpolator-style input, range [0..1]"))
        .addField(new field().setName("set_key").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
        .addField(new field().setName("key").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
        .addField(new field().setName("key_changed").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
        .addField(new field().setName("set_keyValue").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
        .addField(new field().setName("keyValue").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
        .addField(new field().setName("keyValue_changed").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
        .addField(new field().setName("value_changed").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Regular interpolator-style input"))
        .addField(new field().setName("previous").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Utility method"))
        .addField(new field().setName("next").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Utility method")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Switch().setWhichChoice(-1)
            .addChild(new ScalarInterpolator("KeyHolder")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("key").setProtoField("key")))))
          .addChild(new Script("SequencerScript").setDirectOutput(true).setSourceCode("\n" + 
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
            .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("range [0..1]"))
            .addField(new field().setName("set_key").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Array sequentially increasing [0..1]. Must have the same number of keys as keyValues."))
            .addField(new field().setName("keyHolderNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new ScalarInterpolator().setUSE("KeyHolder")))
            .addField(new field().setName("key_changed").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Array sequentially increasing [0..1]. Must have the same number of keys as keyValues."))
            .addField(new field().setName("set_keyValue").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
            .addField(new field().setName("keyValue").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("keyValue_changed").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
            .addComments(" Regular interpolator-style output ")
            .addField(new field().setName("value_changed").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addComments(" Utility methods ")
            .addField(new field().setName("previous").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("next").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true).setAppinfo("For development use only not for inclusion in specification implementations."))
            .addComments(" Script-specific interfaces, not needed for node definition ")
            .addField(new field().setName("previousFraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.0))
            .addField(new field().setName("nextIndex").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
            .addField(new field().setName("isValid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
            .addField(new field().setName("recheckValidity").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))
              .addConnect(new connect().setNodeField("set_key").setProtoField("set_key"))
              .addConnect(new connect().setNodeField("key_changed").setProtoField("key_changed"))
              .addConnect(new connect().setNodeField("set_keyValue").setProtoField("set_keyValue"))
              .addConnect(new connect().setNodeField("keyValue").setProtoField("keyValue"))
              .addConnect(new connect().setNodeField("keyValue_changed").setProtoField("keyValue_changed"))
              .addConnect(new connect().setNodeField("value_changed").setProtoField("value_changed"))
              .addConnect(new connect().setNodeField("previous").setProtoField("previous"))
              .addConnect(new connect().setNodeField("next").setProtoField("next")))))))
    .addComments(" ===============Example============== ")
    .addChild(new Anchor().setDescription("IntegerSequencerExample").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"IntegerSequencerExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/IntegerSequencerExample.x3d","IntegerSequencerExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/IntegerSequencerExample.wrl"})
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"IntegerSequencerPrototype","defines a prototype","","Click text to see example scene","IntegerSequencerExample"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.9)))
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
	 * @return IntegerSequencerPrototype model
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
        X3D thisExampleX3dModel = new IntegerSequencerPrototype().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.IntegerSequencerPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.IntegerSequencerPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
