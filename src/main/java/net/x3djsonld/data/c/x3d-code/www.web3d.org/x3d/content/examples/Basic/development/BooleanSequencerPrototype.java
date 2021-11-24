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
 * <p> BooleanSequencer is modeled after ScalarInterpolator and generates true or false values. </p>
 <p> Related links: <a href="../../../development/BooleanSequencerPrototype.java">BooleanSequencerPrototype.java</a> source, <a href="../../../development/BooleanSequencerPrototypeIndex.html" target="_top">BooleanSequencerPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu
 */

public class BooleanSequencerPrototype
{
	/** Default constructor to create this object. */
	public BooleanSequencerPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("BooleanSequencerPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("BooleanSequencer is modeled after ScalarInterpolator and generates true or false values."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("7 August 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 January 2020"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("boolean sequencer"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("BooleanSequencerPrototype.x3d"))
    .addChild(new ProtoDeclare("BooleanSequencer").setName("BooleanSequencer")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Regular interpolator-style input, typical range [0..1]"))
        .addField(new field().setName("set_key").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("key").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.")
          .addComments(" NULL initialization value "))
        .addField(new field().setName("key_changed").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("set_keyValue").setType(field.TYPE_MFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("keyValue").setType(field.TYPE_MFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of true|false values. Must have the same number of keys as keyValues.")
          .addComments(" NULL initialization value "))
        .addField(new field().setName("keyValue_changed").setType(field.TYPE_MFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Regular interpolator-style input"))
        .addField(new field().setName("value_changed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Regular interpolator-style input"))
        .addField(new field().setName("previous").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Utility method"))
        .addField(new field().setName("next").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Utility method")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new ScalarInterpolator("KeyHolder")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("key").setProtoField("key"))))
          .addChild(new Anchor("KeyValueHolder")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("keyValue"))))
          .addChild(new Script("SequencerScript").setDirectOutput(true).setSourceCode("\n" + 
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
            .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("typical range [0..1]"))
            .addField(new field().setName("set_key").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
            .addField(new field().setName("keyHolderNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new ScalarInterpolator().setUSE("KeyHolder")))
            .addField(new field().setName("key_changed").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("set_keyValue").setType(field.TYPE_MFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Array of true or false values. Must have the same number of keys as keyValues."))
            .addField(new field().setName("keyValueHolderNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Anchor().setUSE("KeyValueHolder")))
            .addField(new field().setName("keyValue_changed").setType(field.TYPE_MFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addComments(" Regular interpolator-style output ")
            .addField(new field().setName("value_changed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addComments(" Utility methods ")
            .addField(new field().setName("previous").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("next").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addComments(" Script-specific interfaces, not needed for node definition ")
            .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
            .addField(new field().setName("keyValueArray").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addComments(" NULL initialization value "))
            .addField(new field().setName("previousFraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.0))
            .addField(new field().setName("nextIndex").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
            .addField(new field().setName("valid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue(true))
            .addField(new field().setName("recheckValidity").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
            .addField(new field().setName("forward").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true).setAppinfo("leftToRight"))
            .addField(new field().setName("key").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY)
              .addComments(" NULL initialization value "))
            .addField(new field().setName("keyValue").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addComments(" NULL initialization value "))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))
              .addConnect(new connect().setNodeField("set_key").setProtoField("set_key"))
              .addConnect(new connect().setNodeField("key_changed").setProtoField("key_changed"))
              .addConnect(new connect().setNodeField("set_keyValue").setProtoField("set_keyValue"))
              .addConnect(new connect().setNodeField("keyValue_changed").setProtoField("keyValue_changed"))
              .addConnect(new connect().setNodeField("value_changed").setProtoField("value_changed"))
              .addConnect(new connect().setNodeField("previous").setProtoField("previous"))
              .addConnect(new connect().setNodeField("next").setProtoField("next")))))))
    .addComments(" ===============Example============== ")
    .addChild(new Anchor().setDescription("BooleanSequencerExample").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"BooleanSequencerExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d","BooleanSequencerExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.wrl"})
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"BooleanSequencerPrototype","defines a prototype","","Click on this text to see","BooleanSequencerExample"," scene"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
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
	 * @return BooleanSequencerPrototype model
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
        X3D thisExampleX3dModel = new BooleanSequencerPrototype().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.BooleanSequencerPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.BooleanSequencerPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
