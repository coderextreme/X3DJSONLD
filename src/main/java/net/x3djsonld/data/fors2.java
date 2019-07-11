package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> beginnings of a force directed graph in 3D. </p>
 <p> Related links: fors2.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.fors2&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John W Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> December 13 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> April 18 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/fors2.x3d">fors2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/fors2.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/fors2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> beginnings of a force directed graph in 3D </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vim, X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author John W Carlson
 */

public class fors2
{
	/** Default constructor to create this object. */
	public fors2 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_3)
  .setHead(new headObject()
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("John W Carlson"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("December 13 2015"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("April 18 2017"))
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("fors2.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/fors2.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("beginnings of a force directed graph in 3D"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
  .setScene(new SceneObject()
    .addChild(new ProtoDeclareObject("node").setName("node")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("position").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3fObject(0.0f,0.0f,0.0f))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject("transform")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
          .addChild(new ShapeObject()
            .addComments("comment before Sphere")
            .addComments("comment after Sphere")
            .addComments("comment after Appearance")
            .setGeometry(new SphereObject())
            .setAppearance(new AppearanceObject()
              .addComments("comment before Material")
              .addComments("comment after Material")
              .setMaterial(new MaterialObject().setDiffuseColor(1.0f,0.0f,0.0f)))))
        .addChild(new PositionInterpolatorObject("NodePosition").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,5.0f,0.0f})))
        .addChild(new ScriptObject("MoveBall").setSourceCode("\n" + 
" ecmascript:" + "\n" + 
"					function set_cycle(value) {" + "\n" + 
"                                                old = translation;" + "\n" + 
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);" + "\n" + 
"                                                keyValue = new MFVec3f([old, translation]);" + "\n" + 
"						// Browser.println(translation);" + "\n" + 
"					}" + "\n")
          .addField(new fieldObject().setName("translation").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3fObject(50.0f,50.0f,0.0f)))
          .addField(new fieldObject().setName("old").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3fObject(0.0f,0.0f,0.0f)))
          .addField(new fieldObject().setName("set_cycle").setType(fieldObject.TYPE_SFTIME).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setName("keyValue").setType(fieldObject.TYPE_MFVEC3F).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new TimeSensorObject("nodeClock").setCycleInterval(3).setLoop(true))
        .addChild(new ROUTEObject().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle"))
        .addChild(new ROUTEObject().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue"))
        .addChild(new ROUTEObject().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation"))))
    .addChild(new ProtoDeclareObject("cylinder").setName("cylinder")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("positionA").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
        .addField(new fieldObject().setName("positionB").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ShapeObject()
          .setGeometry(new ExtrusionObject("extrusion").setCreaseAngle(0.785f).setCrossSection(new MFVec2fObject(new float[] {1.0f,0.0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0.0f,-1.0f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1.0f,0.0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0.0f,1.0f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1.0f,0.0f})).setSpine(new MFVec3fObject(new float[] {0.0f,-50.0f,0.0f,0.0f,0.0f,0.0f,0.0f,50.0f,0.0f})))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.0f,1.0f,0.0f))))
        .addChild(new ScriptObject("MoveCylinder").setSourceCode("\n" + 
" ecmascript:" + "\n" + 
"\n" + 
"                function set_endA(value) {" + "\n" + 
"		    if (typeof spine === \"undefined\") {" + "\n" + 
"		        spine = new MFVec3f([value, value]);" + "\n" + 
"		    } else {" + "\n" + 
"		        spine = new MFVec3f([value, spine[1]]);" + "\n" + 
"		    }" + "\n" + 
"                }" + "\n" + 
"                " + "\n" + 
"                function set_endB(value) {" + "\n" + 
"		    if (typeof spine === \"undefined\") {" + "\n" + 
"		        spine = new MFVec3f([value, value]);" + "\n" + 
"		    } else {" + "\n" + 
"		        spine = new MFVec3f([spine[0], value]);" + "\n" + 
"		    }" + "\n" + 
"                }" + "\n" + 
"                " + "\n" + 
"                function set_spine(value) {" + "\n" + 
"		    Browser.print('\\n'+'\"');" + "\n" + 
"                    spine = value;" + "\n" + 
"                }" + "\n")
          .addField(new fieldObject().setName("spine").setType(fieldObject.TYPE_MFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new MFVec3fObject(new MFVec3fObject(new float[] {0.0f,-50.0f,0.0f,0.0f,0.0f,0.0f,0.0f,50.0f,0.0f}))))
          .addField(new fieldObject().setName("set_endA").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setName("set_endB").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("set_endA").setProtoField("positionA"))
            .addConnect(new connectObject().setNodeField("set_endB").setProtoField("positionB"))))
        .addChild(new ROUTEObject().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine"))))
    .addChild(new TransformObject().setScale(0.1f,0.1f,0.1f)
      .addChild(new ProtoInstanceObject("node", "nodeA")
        .addFieldValue(new fieldValueObject().setName("position").setValue(new SFVec3fObject(-50.0f,-50.0f,-50.0f))))
      .addChild(new ProtoInstanceObject("node", "nodeB")
        .addFieldValue(new fieldValueObject().setName("position").setValue(new SFVec3fObject(50.0f,50.0f,50.0f))))
      .addChild(new ProtoInstanceObject("cylinder", "linkA")
        .addFieldValue(new fieldValueObject().setName("positionA").setValue(new SFVec3fObject(0.0f,0.0f,0.0f)))
        .addFieldValue(new fieldValueObject().setName("positionB").setValue(new SFVec3fObject(50.0f,50.0f,50.0f)))))
    .addChild(new ROUTEObject().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("positionA"))
    .addChild(new ROUTEObject().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("positionB")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return fors2 model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject thisExampleX3dObject = new fors2().getX3dModel();

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
				if (arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"fors2\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"fors2\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
