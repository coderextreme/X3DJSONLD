package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A process pipeline between three spheres (try typing on spheres and blue. </p>
 <p> Related links: pp3.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.pp3&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/x3d/pp3.x3d">pp3.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 5 May 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 05 May 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A process pipeline between three spheres (try typing on spheres and blue </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/x3d/pp3.x3d" target="_blank">https://coderextreme.net/x3d/pp3.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
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

	* @author John Carlson
 */

public class pp3
{
	/** Default constructor to create this object. */
	public pp3 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_3)
  .setHead(new headObject()
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("pp3.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("John Carlson"))
    .addMeta(new metaObject().setName(metaObject.NAME_TRANSLATOR ).setContent("John Carlson"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("5 May 2015"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("05 May 2017"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("A process pipeline between three spheres (try typing on spheres and blue"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("https://coderextreme.net/x3d/pp3.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("manual")))
  .setScene(new SceneObject()
    .addChild(new ProtoDeclareObject("Process").setName("Process")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new GroupObject()
          .addComments("left")
          .addChild(new TransformObject().setScale(0.5f,0.5f,0.5f)
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(0.7f,1.0f,0.0f).setTransparency(0.5f)))
              .setGeometry(new ExtrusionObject().setCreaseAngle(0.785f).setCrossSection(new MFVec2fObject(new float[] {1.0f,0.0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0.0f,-1.0f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1.0f,0.0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0.0f,1.0f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1.0f,0.0f})).setSpine(new MFVec3fObject(new float[] {-2.5f,0.0f,0.0f,-1.5f,0.0f,0.0f}))))
            .addComments("<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>"))
          .addComments("right")
          .addChild(new TransformObject().setScale(0.5f,0.5f,0.5f)
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(0.0f,0.7f,1.0f).setTransparency(0.5f)))
              .setGeometry(new ExtrusionObject().setCreaseAngle(0.785f).setCrossSection(new MFVec2fObject(new float[] {1.0f,0.0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0.0f,-1.0f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1.0f,0.0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0.0f,1.0f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1.0f,0.0f})).setSpine(new MFVec3fObject(new float[] {1.5f,0.0f,0.0f,2.5f,0.0f,0.0f}))))
            .addChild(new TransformObject().setTranslation(2.0f,0.0f,0.0f)
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject("MaterialLightBlue").setDiffuseColor(1.0f,1.0f,1.0f)))
                .setGeometry(new TextObject("RightString").setString(new String[] {"r"}))))
            .addChild(new StringSensorObject("RightSensor").setEnabled(false))
            .addChild(new TouchSensorObject("RightTouch").setDescription("touch to activate")))
          .addComments("up")
          .addChild(new TransformObject().setScale(0.5f,0.5f,0.5f)
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(0.0f,0.7f,1.0f).setTransparency(0.5f)))
              .setGeometry(new ExtrusionObject().setCreaseAngle(0.785f).setCrossSection(new MFVec2fObject(new float[] {1.0f,0.0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0.0f,-1.0f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1.0f,0.0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0.0f,1.0f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1.0f,0.0f})).setSpine(new MFVec3fObject(new float[] {0.0f,1.5f,0.0f,0.0f,2.5f,0.0f}))))
            .addChild(new TransformObject().setTranslation(-0.5f,2.0f,0.0f)
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setUSE("MaterialLightBlue")))
                .setGeometry(new TextObject("UpString").setString(new String[] {"u"}))))
            .addChild(new StringSensorObject("UpSensor").setEnabled(false))
            .addChild(new TouchSensorObject("UpTouch").setDescription("touch to activate")))
          .addComments("down")
          .addChild(new TransformObject().setScale(0.5f,0.5f,0.5f)
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(0.7f,1.0f,0.0f).setTransparency(0.5f)))
              .setGeometry(new ExtrusionObject().setCreaseAngle(0.785f).setCrossSection(new MFVec2fObject(new float[] {1.0f,0.0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0.0f,-1.0f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1.0f,0.0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0.0f,1.0f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1.0f,0.0f})).setSpine(new MFVec3fObject(new float[] {0.0f,-2.5f,0.0f,0.0f,-1.5f,0.0f}))))
            .addComments("<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>"))
          .addComments("center")
          .addChild(new TransformObject()
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(1.0f,0.0f,0.7f)))
              .setGeometry(new SphereObject()))
            .addChild(new TransformObject().setScale(0.5f,0.5f,0.5f).setTranslation(-0.5f,0.0f,1.0f)
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setUSE("MaterialLightBlue")))
                .setGeometry(new TextObject("CenterString"))))
            .addChild(new StringSensorObject("CenterSensor").setEnabled(false))
            .addChild(new TouchSensorObject("CenterTouch").setDescription("touch to activate"))))
        .addChild(new ScriptObject("RightSingleToMultiString").setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"	rightlines = new MFString(\"\");" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_rightstring(rightstr) {" + "\n" + 
"	rightlines = new MFString(rightstr);" + "\n" + 
"}" + "\n")
          .addField(new fieldObject().setName("set_rightstring").setType(fieldObject.TYPE_SFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setName("rightlines").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new ScriptObject("UpSingleToMultiString").setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"	uplines = new MFString(\"\");" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_upstring(upstr) {" + "\n" + 
"	uplines = new MFString(upstr);" + "\n" + 
"}" + "\n")
          .addField(new fieldObject().setName("set_upstring").setType(fieldObject.TYPE_SFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setName("uplines").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new ScriptObject("CenterSingleToMultiString").setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"	centerlines = new MFString(\"\");" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_centerstring(centerstr) {" + "\n" + 
"	centerlines = new MFString(centerstr);" + "\n" + 
"}" + "\n")
          .addField(new fieldObject().setName("set_centerstring").setType(fieldObject.TYPE_SFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setName("centerlines").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new ROUTEObject().setFromNode("CenterSensor").setFromField("enteredText").setToNode("CenterSingleToMultiString").setToField("set_centerstring"))
        .addChild(new ROUTEObject().setFromNode("CenterSingleToMultiString").setFromField("centerlines").setToNode("CenterString").setToField("set_string"))
        .addChild(new ROUTEObject().setFromNode("CenterTouch").setFromField("isOver").setToNode("CenterSensor").setToField("set_enabled"))
        .addChild(new ROUTEObject().setFromNode("RightSensor").setFromField("enteredText").setToNode("RightSingleToMultiString").setToField("set_rightstring"))
        .addChild(new ROUTEObject().setFromNode("RightSingleToMultiString").setFromField("rightlines").setToNode("RightString").setToField("set_string"))
        .addChild(new ROUTEObject().setFromNode("RightTouch").setFromField("isOver").setToNode("RightSensor").setToField("set_enabled"))
        .addChild(new ROUTEObject().setFromNode("UpSensor").setFromField("enteredText").setToNode("UpSingleToMultiString").setToField("set_upstring"))
        .addChild(new ROUTEObject().setFromNode("UpSingleToMultiString").setFromField("uplines").setToNode("UpString").setToField("set_string"))
        .addChild(new ROUTEObject().setFromNode("UpTouch").setFromField("isOver").setToNode("UpSensor").setToField("set_enabled"))))
    .addChild(new NavigationInfoObject())
    .addChild(new ViewpointObject().setDescription("Process pipes").setOrientation(1.0f,0.0f,0.0f,-0.4f).setPosition(0.0f,5.0f,12.0f))
    .addChild(new TransformObject().setTranslation(0.0f,-2.5f,0.0f)
      .addChild(new ProtoInstanceObject("Process")))
    .addChild(new TransformObject()
      .addChild(new ProtoInstanceObject("Process")))
    .addChild(new TransformObject().setTranslation(0.0f,2.5f,0.0f)
      .addChild(new ProtoInstanceObject("Process"))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return pp3 model
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
        X3DObject thisExampleX3dObject = new pp3().getX3dModel();

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
			System.out.println("WARNING: \"pp3\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"pp3\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
