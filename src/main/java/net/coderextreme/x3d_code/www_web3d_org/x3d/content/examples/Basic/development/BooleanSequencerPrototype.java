package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.development;
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.Followers.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Layout.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.ParticleSystems.*;
import org.web3d.x3d.jsail.Picking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;
import org.web3d.x3d.jsail.VolumeRendering.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class BooleanSequencerPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new BooleanSequencerPrototype().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/BooleanSequencerPrototype.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("BooleanSequencerPrototype.x3d"))
        .addMeta(new metaObject().setName("description").setContent("BooleanSequencer is modeled after ScalarInterpolator and generates true or false values."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu"))
        .addMeta(new metaObject().setName("created").setContent("7 August 2001"))
        .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator"))
        .addMeta(new metaObject().setName("subject").setContent("boolean sequencer"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerPrototype.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("BooleanSequencerPrototype.x3d"))
        .addChild(new ProtoDeclareObject().setName("BooleanSequencer")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFFloat").setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Regular interpolator-style input, typical range [0..1]"))
            .addField(new fieldObject().setType("MFFloat").setName("set_key").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("MFFloat").setName("key").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues.")
              .addComments(new CommentsBlock("NULL initialization value")))
            .addField(new fieldObject().setType("MFFloat").setName("key_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("MFBool").setName("set_keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("MFBool").setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array of true|false values. Must have the same number of keys as keyValues.")
              .addComments(new CommentsBlock("NULL initialization value")))
            .addField(new fieldObject().setType("MFBool").setName("keyValue_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Regular interpolator-style input"))
            .addField(new fieldObject().setType("SFBool").setName("value_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Regular interpolator-style input"))
            .addField(new fieldObject().setType("SFBool").setName("previous").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Utility method"))
            .addField(new fieldObject().setType("SFBool").setName("next").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Utility method")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new ScalarInterpolatorObject().setDEF("KeyHolder")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("key").setProtoField("key"))))
              .addChild(new AnchorObject().setDEF("KeyValueHolder")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("description").setProtoField("keyValue"))))
              .addChild(new ScriptObject().setDEF("SequencerScript").setDirectOutput(true)
                .addComments(new CommentsBlock("Regular interpolator-style input"))
                .addComments(new CommentsBlock("Regular interpolator-style output"))
                .addComments(new CommentsBlock("Utility methods"))
                .addComments(new CommentsBlock("Script-specific interfaces, not needed for node definition"))
                .addField(new fieldObject().setType("SFFloat").setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("typical range [0..1]"))
                .addField(new fieldObject().setType("MFFloat").setName("set_key").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
                .addField(new fieldObject().setType("SFNode").setName("keyHolderNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new ScalarInterpolatorObject().setUSE("KeyHolder")))
                .addField(new fieldObject().setType("MFFloat").setName("key_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("MFBool").setName("set_keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Array of true or false values. Must have the same number of keys as keyValues."))
                .addField(new fieldObject().setType("SFNode").setName("keyValueHolderNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new AnchorObject().setUSE("KeyValueHolder")))
                .addField(new fieldObject().setType("MFBool").setName("keyValue_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("value_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("previous").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("next").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
                .addField(new fieldObject().setType("MFInt32").setName("keyValueArray").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addComments(new CommentsBlock("NULL initialization value")))
                .addField(new fieldObject().setType("SFFloat").setName("previousFraction").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0"))
                .addField(new fieldObject().setType("SFInt32").setName("nextIndex").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0"))
                .addField(new fieldObject().setType("SFBool").setName("valid").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("true"))
                .addField(new fieldObject().setType("SFBool").setName("recheckValidity").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
                .addField(new fieldObject().setType("SFBool").setName("forward").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("leftToRight").setValue("true"))
                .addField(new fieldObject().setType("MFFloat").setName("key").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)
                  .addComments(new CommentsBlock("NULL initialization value")))
                .addField(new fieldObject().setType("MFInt32").setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
                  .addComments(new CommentsBlock("NULL initialization value")))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("set_fraction").setProtoField("set_fraction"))
                  .addConnect(new connectObject().setNodeField("set_key").setProtoField("set_key"))
                  .addConnect(new connectObject().setNodeField("key_changed").setProtoField("key_changed"))
                  .addConnect(new connectObject().setNodeField("set_keyValue").setProtoField("set_keyValue"))
                  .addConnect(new connectObject().setNodeField("keyValue_changed").setProtoField("keyValue_changed"))
                  .addConnect(new connectObject().setNodeField("value_changed").setProtoField("value_changed"))
                  .addConnect(new connectObject().setNodeField("previous").setProtoField("previous"))
                  .addConnect(new connectObject().setNodeField("next").setProtoField("next")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"var key, keyValue;\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"	key      = keyHolderNode.key;\n"+
"	keyValue = keyValueHolderNode.description;\n"+
"	tracePrint('key =' + key);\n"+
"	tracePrint('keyValue =' + keyValue);\n"+
"	keyValueToKeyValueArray ();\n"+
"	tracePrint('keyValueArray =' + keyValueArray);\n"+
"\n"+
"	forward = true;\n"+
"	tracePrint('Initializing a new BooleanSequencer.  key.length=' + key.length + '; keyValueArray.length=' + keyValueArray.length);\n"+
"	validityCheck();\n"+
"}\n"+
"\n"+
"function keyValueToKeyValueArray ()\n"+
"{\n"+
"	tracePrint('keyValueToKeyValueArray starting');\n"+
"	index = 0;\n"+
"	complete = false;\n"+
"	nextString = keyValue.toLowerCase();\n"+
"	tracePrint('initial nextString=' + nextString);\n"+
"	tokenCount=0;\n"+
"	while ((complete != true) && (nextString.length > 0))\n"+
"	{\n"+
"		tracePrint('nextString=' + nextString);\n"+
"		while ((nextString.substring(0,1) == ' ') || (nextString.substring(0,1) == ','))\n"+
"		       nextString = nextString.slice(1);\n"+
"		tracePrint('deblanked nextString=' + nextString);\n"+
"		if (nextString.length == 0)\n"+
"		{\n"+
"			tracePrint ('nextString.length == 0');\n"+
"			complete = true;\n"+
"		}\n"+
"		if (nextString.length < 4)\n"+
"		{\n"+
"			alwaysPrint ('*** illegal keyValue input=' + nextString);\n"+
"			valid = false;\n"+
"			complete = true;\n"+
"		}\n"+
"		else if (nextString.substring(0,4) =='true')\n"+
"		{\n"+
"			keyValueArray[keyValueArray.length] = 1; // append\n"+
"			newString = nextString.slice(4);\n"+
"			nextString = newString;\n"+
"			tokenCount++;\n"+
"			tracePrint('found true, nextString=' + nextString + ', tokenCount=' + tokenCount);\n"+
"		}\n"+
"		else if (nextString.length < 5)\n"+
"		{\n"+
"			alwaysPrint ('*** illegal keyValue input=' + nextString);\n"+
"			valid = false;\n"+
"			complete = true;\n"+
"		}\n"+
"		else if (nextString.substring(0,5) =='false')\n"+
"		{\n"+
"			keyValueArray[keyValueArray.length] = 0; // append\n"+
"			newString = nextString.slice(5);\n"+
"			nextString = newString;\n"+
"			tokenCount++;\n"+
"			tracePrint('found false, nextString=' + nextString + ', tokenCount=' + tokenCount);\n"+
"		}\n"+
"		tracePrint('  intermediate keyValueArray=' + keyValueArray);\n"+
"	}\n"+
"	tracePrint('keyValueToKeyValueArray complete');\n"+
"}\n"+
"\n"+
"function set_fraction(value, timeStamp)\n"+
"{\n"+
"	if (recheckValidity) validityCheck();\n"+
"\n"+
"	if (!valid) return; //BooleanSequencer ignored\n"+
"\n"+
"	tracePrint('fraction =' + value);\n"+
"	//Bounds checking\n"+
"	if (value < 0)\n"+
"	{\n"+
"		alwaysPrint('*** warning: fraction is less than 0.  fraction reset to 0 ***');\n"+
"		value = 0;\n"+
"	}\n"+
"	else if (value > 1)\n"+
"	{\n"+
"		alwaysPrint('*** warning: fraction is greater than 1.  fraction reset to 1 ***');\n"+
"		value = 1;\n"+
"	}\n"+
"\n"+
"	//Check animation direction\n"+
"	if (value < previousFraction && forward == true)\n"+
"	{\n"+
"		forward = false;\n"+
"		nextIndex = nextIndex - 1;\n"+
"		tracePrint('Animate backward');\n"+
"	}\n"+
"	else if (value > previousFraction && forward == false)\n"+
"	{\n"+
"		forward = true;\n"+
"		//nextIndex = 0;\n"+
"		tracePrint('Animate forward');\n"+
"	}\n"+
"\n"+
"	previousFraction = value;\n"+
"\n"+
"	if (forward == true)\n"+
"	{\n"+
"		for (i = nextIndex; i < key.length; i++)\n"+
"		{\n"+
"			if (value < key[i])\n"+
"				return;\n"+
"\n"+
"			nextIndex = i + 1;\n"+
"			tracePrint('nextIndex =' + nextIndex);\n"+
"			if (nextIndex < key.length)\n"+
"			{\n"+
"				if (value <= key[nextIndex])\n"+
"				{\n"+
"					//Fire event\n"+
"					if (keyValueArray[nextIndex-1] == 0)\n"+
"						value_changed = false;\n"+
"					else\n"+
"						value_changed = true;\n"+
"					tracePrint('value_changed eventOut is:' + value_changed);\n"+
"				}\n"+
"			}\n"+
"			else if (nextIndex == key.length)\n"+
"			{\n"+
"				//Fire event\n"+
"				if (keyValueArray[nextIndex-1] == 0)\n"+
"					value_changed = false;\n"+
"				else\n"+
"					value_changed = true;\n"+
"				tracePrint('value_changed eventOut is:' + value_changed);\n"+
"			}\n"+
"			else //nextIndex > key.length\n"+
"			{\n"+
"				//nextIndex = 0;\n"+
"				break;\n"+
"			}\n"+
"		}\n"+
"	}\n"+
"	else //backward\n"+
"	{\n"+
"		for (i = nextIndex; i > 0; i--)\n"+
"		{\n"+
"			if (value >= key[i])\n"+
"				return;\n"+
"\n"+
"			nextIndex = i - 1;\n"+
"			tracePrint('nextIndex =' + nextIndex);\n"+
"			if (nextIndex >= 0)\n"+
"			{\n"+
"				if (value >= key[nextIndex])\n"+
"				{\n"+
"					//Fire event\n"+
"					if (keyValueArray[nextIndex] == 0)\n"+
"						value_changed = false;\n"+
"					else\n"+
"						value_changed = true;\n"+
"					tracePrint('value_changed eventOut is:' + value_changed);\n"+
"				}\n"+
"			}\n"+
"			else //nextIndex < 0\n"+
"			{\n"+
"				//nextIndex = key.length;\n"+
"				break;\n"+
"			}\n"+
"		}\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_key(value, timeStamp)\n"+
"{\n"+
"	key = value;\n"+
"	keyHolderNode.key  = key;\n"+
"	recheckValidity = true;\n"+
"}\n"+
"\n"+
"function set_keyValue(value, timeStamp)\n"+
"{\n"+
"	keyValue = value;\n"+
"	keyValueHolderNode.description = keyValue;\n"+
"	recheckValidity = true;\n"+
"	keyValueToKeyValueArray ();\n"+
"	keyValue_changed = keyValue;\n"+
"}\n"+
"\n"+
"function validityCheck()\n"+
"{\n"+
"	//Check if key & keyValueArray array length matches\n"+
"	if (key.length != keyValueArray.length)\n"+
"	{\n"+
"		alwaysPrint('*** error: key and keyValue arrays must be of the same length.  BooleanSequencer ignored ***');\n"+
"		valid = false;\n"+
"		return;\n"+
"	}\n"+
"\n"+
"	//Check if key array has values in the range of [0..1] in an increasing order\n"+
"	if (key[0] < 0 || key[0] > 1)\n"+
"	{\n"+
"		alwaysPrint('*** error: key[0] value is NOT in the range of [0..1].  BooleanSequencer ignored ***');\n"+
"		valid = false;\n"+
"		return;\n"+
"	}\n"+
"	for (i = 1; i < key.length; i++)\n"+
"	{\n"+
"		if (key[i] < 0 || key[i] > 1)\n"+
"		{\n"+
"			alwaysPrint('*** error: key[' + i + '] value is NOT in the range of [0..1].  BooleanSequencer ignored ***');\n"+
"			valid = false;\n"+
"			return;\n"+
"		}\n"+
"\n"+
"		if (key[i] <= key [i-1])\n"+
"		{\n"+
"			alwaysPrint('*** error: values for key[] array must be listed in an increasing order.  BooleanSequencer ignored ***');\n"+
"			valid = false;\n"+
"			return;\n"+
"		}\n"+
"	}\n"+
"	recheckValidity = false;\n"+
"	key_changed = key;\n"+
"	return;\n"+
"}\n"+
"function previous (SFBoolValue, timestamp)\n"+
"{\n"+
"	nextIndex = nextIndex - 1;\n"+
"	if (nextIndex == 0) nextIndex = key.length - 1;\n"+
"}\n"+
"function next (SFBoolValue, timestamp)\n"+
"{\n"+
"	nextIndex = nextIndex + 1;\n"+
"	if (nextIndex == key.length) nextIndex = 0;\n"+
"}\n"+
"\n"+
"function tracePrint(outputString)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[ BooleanSequencer ]' + outputString);\n"+
"}\n"+
"\n"+
"function alwaysPrint(outputString)\n"+
"{\n"+
"	Browser.print ('[ BooleanSequencer ]' + outputString);\n"+
"}")))))
        .addComments(new CommentsBlock("===============Example=============="))
        .addChild(new AnchorObject().setDescription("BooleanSequencerExample").setParameter(new MFStringObject(new MFString0().getArray())).setUrl(new MFStringObject(new MFString1().getArray()))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString2().getArray()))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString3().getArray()))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0.2f}))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"BooleanSequencerExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d","BooleanSequencerExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.wrl"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"BooleanSequencerPrototype","defines a prototype","","Click on this text to see","BooleanSequencerExample"," scene"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
