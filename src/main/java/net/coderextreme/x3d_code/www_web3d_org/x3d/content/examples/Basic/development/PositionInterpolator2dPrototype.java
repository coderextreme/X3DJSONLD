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
public class PositionInterpolator2dPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new PositionInterpolator2dPrototype().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/PositionInterpolator2dPrototype.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("PositionInterpolator2dPrototype.x3d"))
        .addMeta(new metaObject().setName("description").setContent("PositionInterpolator2D prototype declaration to pairwise interpolate across an array of Vector2Float/SFVec2f values to produce a single Vector2Float value - click text to see example."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman, Jeff Weekley, Jane Wu"))
        .addMeta(new metaObject().setName("created").setContent("16 October 2001"))
        .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator"))
        .addMeta(new metaObject().setName("subject").setContent("PositionInterpolator2D"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dPrototype.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("PositionInterpolator2dPrototype.x3d"))
        .addChild(new ProtoDeclareObject().setName("PositionInterpolator2D").setAppinfo("Provide interpolation capability for Vector2Float/SFVec2f values").setDocumentation("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFFloat").setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("The set_fraction eventIn receives an SFFloat event and causes the interpolator function to evaluate resulting in a value_changed eventOut with the same timestamp as the set_fraction event.")
              .addComments(new CommentsBlock("Regular interpolator-style input")))
            .addField(new fieldObject().setType("MFFloat").setName("set_key").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("MFFloat").setName("key").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue holds the array of Vector2FloatArrays that match each animation key.")
              .addComments(new CommentsBlock("initial value is [] null array")))
            .addField(new fieldObject().setType("MFFloat").setName("key_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Array sequentially increasing typically [0..1]. Must have the same number of keys as keyValues."))
            .addField(new fieldObject().setType("MFVec2f").setName("set_keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
            .addField(new fieldObject().setType("MFVec2f").setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("keyValue holds the array of Vector2Float values that match each animation key.")
              .addComments(new CommentsBlock("initial value is [] null array")))
            .addField(new fieldObject().setType("MFVec2f").setName("keyValue_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Array of integer values. Must have the same number of keys as keyValues."))
            .addField(new fieldObject().setType("SFVec2f").setName("value_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("The interpolator function averages between respective keyValue Vector2Floats resulting in a Vector2Float value_changed eventOut with the same timestamp as the set_fraction event.")
              .addComments(new CommentsBlock("Regular interpolator-style output"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new SwitchObject().setWhichChoice(-1)
                .addChild(new ScalarInterpolatorObject().setDEF("KeyHolder")
                  .setIS(new ISObject()
                    .addConnect(new connectObject().setNodeField("key").setProtoField("key"))))
                .addChild(new ShapeObject()
                  .setGeometry(new IndexedFaceSetObject()
                    .setTexCoord(new TextureCoordinateObject().setDEF("KeyValueHolder")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("point").setProtoField("keyValue")))))
                  .setAppearance(new AppearanceObject().setDEF("SilenceWarnings"))))
              .addChild(new ScriptObject().setDEF("InterpolationScript").setDirectOutput(true)
                .addComments(new CommentsBlock("Regular interpolator-style input"))
                .addComments(new CommentsBlock("Regular interpolator-style output"))
                .addField(new fieldObject().setType("SFFloat").setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFFloat").setName("fraction").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("local variable").setValue("0"))
                .addField(new fieldObject().setType("MFFloat").setName("set_key").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFNode").setName("keyHolderNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new ScalarInterpolatorObject().setUSE("KeyHolder")))
                .addField(new fieldObject().setType("MFFloat").setName("key_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("MFVec2f").setName("set_keyValue").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("SFNode").setName("keyValueHolderNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new TextureCoordinateObject().setUSE("KeyValueHolder")))
                .addField(new fieldObject().setType("MFVec2f").setName("keyValue_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .addField(new fieldObject().setType("SFVec2f").setName("value_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("set_fraction").setProtoField("set_fraction"))
                  .addConnect(new connectObject().setNodeField("set_key").setProtoField("set_key"))
                  .addConnect(new connectObject().setNodeField("key_changed").setProtoField("key_changed"))
                  .addConnect(new connectObject().setNodeField("set_keyValue").setProtoField("set_keyValue"))
                  .addConnect(new connectObject().setNodeField("keyValue_changed").setProtoField("keyValue_changed"))
                  .addConnect(new connectObject().setNodeField("value_changed").setProtoField("value_changed")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"// internal global persistent variables\n"+
"var previousFraction;\n"+
"var previousFractionIndex;\n"+
"var blockSize;\n"+
"var outputArray;\n"+
"\n"+
"var traceEnabled = false;\n"+
"\n"+
"function tracePrint (outputString)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[PositionInterpolator2d]' + outputString);\n"+
"}\n"+
"function alwaysPrint (outputString)\n"+
"{\n"+
"	Browser.print ('[PositionInterpolator2d]' + outputString);\n"+
"}\n"+
"function initialize ()\n"+
"{\n"+
"	key      = keyHolderNode.key;\n"+
"	keyValue = keyValueHolderNode.point;\n"+
"	previousFractionIndex = -1;\n"+
"	previousFraction = 0;\n"+
"	// check key array ranges [0..1] and is monotonically increasing\n"+
"	// check that size of keyValue array is integer multiple of size of key array\n"+
"	tracePrint ('key            =' + key);\n"+
"	tracePrint ('key.length=' + key.length);\n"+
"	tracePrint ('keyValue=  ' + keyValue);\n"+
"	tracePrint ('keyValue.length=' + keyValue.length);\n"+
"	blockSize =  keyValue.length/key.length;\n"+
"	tracePrint ('blockSize=' + blockSize);\n"+
"	if (blockSize != 1)\n"+
"	{\n"+
"	  alwaysPrint ('*** warning:  check sizes of key and keyValue, should be identical!');\n"+
"	}\n"+
"	if (key[0] != 0)\n"+
"	{\n"+
"	  alwaysPrint ('*** warning:  key[0] != 0');\n"+
"	}\n"+
"	if (key[key.length-1] != 1)\n"+
"	{\n"+
"	  alwaysPrint ('*** warning:  key[' + (key.length - 1) + '] != 1, reset from' + key[key.length-1] + ' to 1');\n"+
"	  key[key.length-1] = 1;\n"+
"	}\n"+
"	for (index = 0; index < key.length; index++)\n"+
"	{\n"+
"		if ((key[index] < 0) || (key[index] > 1))\n"+
"		{\n"+
"		   alwaysPrint ('*** warning:  key[' + index + '] =' + key[index] + ', out of range [0..1]');\n"+
"		}\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_fraction (inputFloat, timestamp) {\n"+
"	fraction = inputFloat;\n"+
"	outputResult = new SFVec2f ();\n"+
"	tracePrint ('previousFractionIndex=' + previousFractionIndex\n"+
"		 + ', fraction=' + fraction + ', previousFraction=' + previousFraction);\n"+
"\n"+
"	if (fraction < 0)\n"+
"	{\n"+
"		tracePrint ('*** illegal fraction' + fraction + ' set to 0');\n"+
"		fraction = 0;\n"+
"		previousFractionIndex = 0; // first\n"+
"	}\n"+
"	else if (fraction > 1)\n"+
"	{\n"+
"		alwaysPrint ('*** illegal fraction' + fraction + ' set to 1');\n"+
"		fraction = 1;\n"+
"		previousFractionIndex = key.length - 1; // last\n"+
"	}\n"+
"	else if (previousFractionIndex == -1)\n"+
"	{\n"+
"		previousFractionIndex = 0; // first\n"+
"		tracePrint ('previousFractionIndex initialized for first event');\n"+
"	}\n"+
"	else if ((fraction >= previousFraction) && (fraction >= key[previousFractionIndex+1]))\n"+
"	{\n"+
"		previousFractionIndex++;\n"+
"	}\n"+
"	else if (fraction < previousFraction) // regress, or loop repeat without reaching one\n"+
"	{\n"+
"		previousFractionIndex = 0;\n"+
"		while ((fraction >= key[previousFractionIndex+1]) && (previousFractionIndex < blockSize))\n"+
"		{\n"+
"			previousFractionIndex++;\n"+
"		}\n"+
"		tracePrint ('reset/reincrement previousFractionIndex to' + previousFractionIndex);\n"+
"	}\n"+
"\n"+
"	if (fraction == 1) // use final block\n"+
"	{\n"+
"		tracePrint ('(fraction == 1)');\n"+
"		// update outputResult with final keyValue\n"+
"		outputResult = keyValue[keyValue.length];\n"+
"\n"+
"		previousFractionIndex = -1; // setup for restart\n"+
"		tracePrint ('finished final fraction==1 block');\n"+
"	}\n"+
"	// when fraction matches index, calculate value_changed from corresponding keyValue array\n"+
"	else if (fraction == key[previousFractionIndex])\n"+
"	{\n"+
"		tracePrint ('(fraction == key[previousFractionIndex])');\n"+
"		// update outputResult with corresponding keyValue\n"+
"		outputResult = keyValue[previousFractionIndex];\n"+
"	}\n"+
"	else // calculate value_changed by interpolating between adjacent keyValue arrays\n"+
"	{\n"+
"		partialFraction = fraction                     - key[previousFractionIndex];\n"+
"		deltaFraction   = key[previousFractionIndex+1] - key[previousFractionIndex];\n"+
"		percentFraction = partialFraction / deltaFraction;\n"+
"	//	tracePrint ('deltaFraction   =' + deltaFraction);\n"+
"	//	tracePrint ('partialFraction =' + partialFraction);\n"+
"		tracePrint ('percentFraction =' + percentFraction);\n"+
"		// no arithmetic operators provided for SFVec2f, treat element by element\n"+
"		nextKeyValue  = keyValue[previousFractionIndex + 1];\n"+
"		priorKeyValue = keyValue[previousFractionIndex];\n"+
"		tracePrint (' nextKeyValue =' + nextKeyValue);\n"+
"		tracePrint ('priorKeyValue =' + priorKeyValue);\n"+
"		deltaKeyValue = new SFVec2f (	nextKeyValue[0] - priorKeyValue[0],\n"+
"						nextKeyValue[1] - priorKeyValue[1]);\n"+
"		//	tracePrint ('deltaKeyValue =' + deltaKeyValue);\n"+
"		// update outputResult\n"+
"		outputResult[0] = keyValue[previousFractionIndex][0]\n"+
"			        + percentFraction * deltaKeyValue[0];\n"+
"		outputResult[1] = keyValue[previousFractionIndex][1]\n"+
"			        + percentFraction * deltaKeyValue[1];\n"+
"	}\n"+
"	value_changed = outputResult;\n"+
"	previousFraction = fraction;\n"+
"	tracePrint ('value_changed=' + value_changed);\n"+
"}\n"+
"\n"+
"function set_key (inputArray, timestamp) {\n"+
"	key = inputArray;       // update key Vector2FloatArray\n"+
"	keyHolderNode.key = key; // update holder\n"+
"	initialize (timestamp); // reverify key, keyValue sizes\n"+
"}\n"+
"\n"+
"function set_keyValue (inputArray, timestamp) {\n"+
"	keyValue = inputArray;  // update keyValue Vector2FloatArray\n"+
"	keyValueHolderNode.point = keyValue; // update holder\n"+
"	initialize (timestamp); // reverify key, keyValue sizes\n"+
"}")))))
        .addComments(new CommentsBlock("======================================"))
        .addComments(new CommentsBlock("Example use"))
        .addChild(new AnchorObject().setDescription("PositionInterpolator2D Example").setUrl(new MFStringObject(new MFString0().getArray()))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString1().getArray()))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString2().getArray())).setSize(0.7f)))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0.2f}))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"PositionInterpolator2dExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dExample.x3d","PositionInterpolator2dExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dExample.wrl"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"PositionInterpolator2dPrototype","defines a prototype","","Click text to see","PositionInterpolator2dExample"," scene"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
