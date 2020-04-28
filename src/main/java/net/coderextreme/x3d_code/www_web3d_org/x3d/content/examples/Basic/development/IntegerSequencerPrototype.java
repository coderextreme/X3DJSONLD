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
public class IntegerSequencerPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new IntegerSequencerPrototype().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/IntegerSequencerPrototype.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("IntegerSequencerPrototype.x3d"))
        .addMeta(new metaObject().setName("description").setContent("This proto, modeled after a ScalarInterpolator, generates an array of integer values based on the input fraction and keys."))
        .addMeta(new metaObject().setName("warning").setContent("MFInt32 keyValue accessType is listed as initializeOnly/field, since inputOutput cannot be translated to exposedField in VRML97 scripting."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu, Matthew Braun"))
        .addMeta(new metaObject().setName("created").setContent("20 August 2001"))
        .addMeta(new metaObject().setName("modified").setContent("21 January 2020"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator"))
        .addMeta(new metaObject().setName("subject").setContent("integer sequencer"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerPrototype.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("IntegerSequencerPrototype.x3d"))
        .addChild(new ProtoDeclareObject().setName("IntegerSequencer")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFFloat").setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Regular interpolator-style input, range [0..1]"))
            .addField(new fieldObject().setType("MFFloat").setName("set_key").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
            .addField(new fieldObject().setType("MFFloat").setName("key").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
            .addField(new fieldObject().setType("MFFloat").setName("key_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
            .addField(new fieldObject().setType("MFInt32").setName("set_keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
            .addField(new fieldObject().setType("MFInt32").setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
            .addField(new fieldObject().setType("MFInt32").setName("keyValue_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
            .addField(new fieldObject().setType("SFInt32").setName("value_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Regular interpolator-style input"))
            .addField(new fieldObject().setType("SFBool").setName("previous").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Utility method"))
            .addField(new fieldObject().setType("SFBool").setName("next").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Utility method")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new SwitchObject().setWhichChoice(-1)
                .addChild(new ScalarInterpolatorObject().setDEF("KeyHolder")
                  .setIS(new ISObject()
                    .addConnect(new connectObject().setNodeField("key").setProtoField("key")))))
              .addChild(new ScriptObject().setDEF("SequencerScript").setDirectOutput(true)
                .addComments(new CommentsBlock("Regular interpolator-style input"))
                .addComments(new CommentsBlock("Regular interpolator-style output"))
                .addComments(new CommentsBlock("Utility methods"))
                .addComments(new CommentsBlock("Script-specific interfaces, not needed for node definition"))
                .addField(new fieldObject().setType("SFFloat").setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("range [0..1]"))
                .addField(new fieldObject().setType("MFFloat").setName("set_key").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Array sequentially increasing [0..1]. Must have the same number of keys as keyValues."))
                .addField(new fieldObject().setType("SFNode").setName("keyHolderNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new ScalarInterpolatorObject().setUSE("KeyHolder")))
                .addField(new fieldObject().setType("MFFloat").setName("key_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Array sequentially increasing [0..1]. Must have the same number of keys as keyValues."))
                .addField(new fieldObject().setType("MFInt32").setName("set_keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
                .addField(new fieldObject().setType("MFInt32").setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
                .addField(new fieldObject().setType("MFInt32").setName("keyValue_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
                .addField(new fieldObject().setType("SFInt32").setName("value_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("previous").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("next").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("For development use only not for inclusion in specification implementations.").setValue("true"))
                .addField(new fieldObject().setType("SFFloat").setName("previousFraction").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0"))
                .addField(new fieldObject().setType("SFInt32").setName("nextIndex").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0"))
                .addField(new fieldObject().setType("SFBool").setName("isValid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
                .addField(new fieldObject().setType("SFBool").setName("recheckValidity").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("set_fraction").setProtoField("set_fraction"))
                  .addConnect(new connectObject().setNodeField("set_key").setProtoField("set_key"))
                  .addConnect(new connectObject().setNodeField("key_changed").setProtoField("key_changed"))
                  .addConnect(new connectObject().setNodeField("set_keyValue").setProtoField("set_keyValue"))
                  .addConnect(new connectObject().setNodeField("keyValue").setProtoField("keyValue"))
                  .addConnect(new connectObject().setNodeField("keyValue_changed").setProtoField("keyValue_changed"))
                  .addConnect(new connectObject().setNodeField("value_changed").setProtoField("value_changed"))
                  .addConnect(new connectObject().setNodeField("previous").setProtoField("previous"))
                  .addConnect(new connectObject().setNodeField("next").setProtoField("next")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"var leftToRight;\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"	key      = keyHolderNode.key;\n"+
"	tracePrint('Initializing a new IntegerSequencer.  key.length=' + key.length + '; keyValue.length=' + keyValue.length);\n"+
"	tracePrint('key =' + key);\n"+
"	tracePrint('keyValue =' + keyValue);\n"+
"\n"+
"	validityCheck();\n"+
"	setHalfKeyRange();\n"+
"\n"+
"	// assume we start at first key, going left to right\n"+
"	leftToRight = true;\n"+
"	previousFraction = key[0];\n"+
"	nextIndex = 1;  //validityCheck ensures minimum of 2 keys exist\n"+
"}\n"+
"\n"+
"function set_fraction(newFraction, timeStamp)\n"+
"{\n"+
"	if (recheckValidity) validityCheck();\n"+
"\n"+
"	if (!isValid) return; //IntegerSequencer ignored\n"+
"\n"+
"	//Bounds checking\n"+
"	if (newFraction < key[0])\n"+
"	{\n"+
"		tracePrint('*** warning: fraction is less than first key.  fraction set to first key ***');\n"+
"		newFraction = key[0];\n"+
"	}\n"+
"	else if (newFraction > key[key.length-1])\n"+
"	{\n"+
"		tracePrint('*** warning: fraction is greater than last key.  fraction set to last key ***');\n"+
"		newFraction = key[key.length -1];\n"+
"	}\n"+
"\n"+
"	//Check animation direction\n"+
"	if (newFraction < previousFraction && leftToRight == true)\n"+
"	{\n"+
"		if ((previousFraction - newFraction) > halfKeyRange) //looped around\n"+
"		{\n"+
"			nextIndex = 1;\n"+
"		}\n"+
"		else //just changed direction\n"+
"		{\n"+
"			leftToRight = false;\n"+
"			nextIndex = nextIndex - 1;\n"+
"            }\n"+
"	}\n"+
"	else if (newFraction > previousFraction && leftToRight == false)\n"+
"	{\n"+
"		if ((newFraction - previousFraction) < halfKeyRange) //looped around\n"+
"		{\n"+
"			nextIndex = key.length - 2;\n"+
"		}\n"+
"		else //just changed direction\n"+
"		{\n"+
"			leftToRight = true;\n"+
"			nextIndex = nextIndex + 1;\n"+
"            }\n"+
"	}\n"+
"	else if (newFraction == previousFraction)\n"+
"	{ //no change, so no processing required\n"+
"		return;\n"+
"	}\n"+
"	previousFraction = newFraction;\n"+
"\n"+
"	if (leftToRight) // moving left to right\n"+
"	{\n"+
"		while (newFraction > key[nextIndex]) nextIndex++;\n"+
"\n"+
"		if (newFraction == key[nextIndex])\n"+
"			value_changed = keyValue[nextIndex];\n"+
"		else	value_changed = keyValue[nextIndex -1];\n"+
"\n"+
"		tracePrint('forward animation, fraction =' + newFraction);\n"+
"		tracePrint('value_changed eventOut is:' + value_changed);\n"+
"	}\n"+
"	else // moving right to left\n"+
"	{\n"+
"		while (newFraction < key[nextIndex]) nextIndex--;\n"+
"\n"+
"		if (newFraction == key[nextIndex])\n"+
"			value_changed = keyValue[nextIndex];\n"+
"		else	value_changed = keyValue[nextIndex + 1];\n"+
"\n"+
"		tracePrint('backward animation, fraction =' + newFraction);\n"+
"		tracePrint('value_changed eventOut is:' + value_changed);\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_key(newKey, timeStamp)\n"+
"{\n"+
"	key = newKey;\n"+
"	keyHolderNode.key = newKey;\n"+
"	setHalfKeyWidth();\n"+
"	recheckValidity = true;\n"+
"}\n"+
"\n"+
"function set_keyValue(newKeyValue, timeStamp)\n"+
"{\n"+
"	keyValue = newKeyValue;\n"+
"	recheckValidity = true;\n"+
"}\n"+
"\n"+
"function setHalfKeyRange()\n"+
"{\n"+
"	halfKeyRange = (key[key.length - 1] - key[0])/2.0;\n"+
"}\n"+
"\n"+
"function previous (value, timeStamp)\n"+
"{\n"+
"  if (value==true) // trigger on true events only\n"+
"  {\n"+
"	leftToRight = true;\n"+
"	nextIndex = nextIndex - 2; // reset to previous\n"+
"	if (nextIndex < 0) nextIndex = nextIndex + key.length;\n"+
"	value_changed = keyValue[nextIndex];\n"+
"	previousFraction = key[nextIndex];\n"+
"	nextIndex++; // setup for next time, leftToRight\n"+
"	if (nextIndex > key.length - 1) nextIndex = 0;\n"+
"  }\n"+
"}\n"+
"function next (value, timeStamp)\n"+
"{\n"+
"  if (value==true) // trigger on true events only\n"+
"  {\n"+
"	leftToRight = true;\n"+
"	value_changed = keyValue[nextIndex];\n"+
"	previousFraction = key[nextIndex];\n"+
"	nextIndex++; // setup for next time,leftToRight\n"+
"	if (nextIndex > key.length - 1) nextIndex = 0;\n"+
"  }\n"+
"}\n"+
"\n"+
"function validityCheck()\n"+
"{\n"+
"	//Check if lengths of key & keyValue arrays match\n"+
"	if (key.length != keyValue.length)\n"+
"	{\n"+
"		alwaysPrint('*** error: key and keyValue arrays must be of the same length.  IntegerSequencer ignored ***');\n"+
"		isValid = false;\n"+
"		return;\n"+
"	}\n"+
"	//check to ensure minimum of 2 keys have been specified\n"+
"	if (key.length < 2)\n"+
"	{\n"+
"		alwaysPrint('*** error: must contain at least 2 keys.  IntegerSequencer ignored ***');\n"+
"		isValid = false;\n"+
"		return;\n"+
"	}\n"+
"\n"+
"	//Check if key array has values in an non-decreasing order\n"+
"	for (i = 1; i < key.length; i++)\n"+
"	{\n"+
"		tracePrint('i=' + i);\n"+
"\n"+
"		if (key[i] < key [i-1])\n"+
"		{\n"+
"			alwaysPrint('*** error: key array values must be listed in a non-decreasing order.  IntegerSequencer ignored ***');\n"+
"			isValid = false;\n"+
"			return;\n"+
"		}\n"+
"	}\n"+
"	isValid = true\n"+
"	recheckValidity = false;\n"+
"	key_changed = key;\n"+
"	keyValue_changed = keyValue;\n"+
"	return;\n"+
"}\n"+
"\n"+
"function tracePrint(outputString)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[IntegerSequencer]' + outputString);\n"+
"}\n"+
"\n"+
"function alwaysPrint(outputString)\n"+
"{\n"+
"	Browser.print ('[IntegerSequencer]' + outputString);\n"+
"}")))))
        .addComments(new CommentsBlock("===============Example=============="))
        .addChild(new AnchorObject().setDescription("IntegerSequencerExample").setParameter(new MFStringObject(new MFString0().getArray())).setUrl(new MFStringObject(new MFString1().getArray()))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString2().getArray()))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString3().getArray())).setSize(0.9f)))
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
    return new MFStringObject(new java.lang.String[] {"IntegerSequencerExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/IntegerSequencerExample.x3d","IntegerSequencerExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/IntegerSequencerExample.wrl"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"IntegerSequencerPrototype","defines a prototype","","Click text to see example scene","IntegerSequencerExample"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
