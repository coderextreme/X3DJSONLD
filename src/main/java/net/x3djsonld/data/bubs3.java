package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Tour around a prismatic sphere. </p>
 <p> Related links: bubs3.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.bubs3&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/bubs.x3d">bubs.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Tour around a prismatic sphere </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/bubs.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/bubs.x3d</a> </td>
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

public class bubs3
{
	/** Default constructor to create this object. */
	public bubs3 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("bubs.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("description").setContent("Tour around a prismatic sphere"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/bubs.x3d")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject().setType(new MFStringObject("\"EXAMINE\"")))
    .addChild(new ViewpointObject().setDescription("Bubbles in action").setPosition(0.0f,0.0f,4.0f).setOrientation(1.0f,0.0f,0.0f,0.0f))
    .addChild(new BackgroundObject().setBackUrl(new MFStringObject("\"../resources/images/BK.png\" \"https://coderextreme.net/X3DJSONLD/images/BK.png\"")).setBottomUrl(new MFStringObject("\"../resources/images/BT.png\" \"https://coderextreme.net/X3DJSONLD/images/BT.png\"")).setFrontUrl(new MFStringObject("\"../resources/images/FR.png\" \"https://coderextreme.net/X3DJSONLD/images/FR.png\"")).setLeftUrl(new MFStringObject("\"../resources/images/LF.png\" \"https://coderextreme.net/X3DJSONLD/images/LF.png\"")).setRightUrl(new MFStringObject("\"../resources/images/RT.png\" \"https://coderextreme.net/X3DJSONLD/images/RT.png\"")).setTopUrl(new MFStringObject("\"../resources/images/TP.png\" \"https://coderextreme.net/X3DJSONLD/images/TP.png\"")))
    .addChild(new TransformObject("DECLBubble_bubbleA")
      .addChild(new ShapeObject()
        .setGeometry(new SphereObject().setRadius(0.25f))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setTransparency(0.2f).setDiffuseColor(1.0f,0.0f,0.0f))))
      .addChild(new ScriptObject("DECLBubble_bubbleA_bounce").setSourceCode("\n" + 
" " + "\n" + 
"ecmascript:" + "\n" + 
"function initialize() {" + "\n" + 
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);" + "\n" + 
"\n" + 
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction(value) {" + "\n" + 
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);" + "\n" + 
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);" + "\n" + 
"    // if you get to far away or too big, explode" + "\n" + 
"    if ( Math.abs(translation.x) > 256) {" + "\n" + 
"	translation.x = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if ( Math.abs(translation.y) > 256) {" + "\n" + 
"	translation.y = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if ( Math.abs(translation.z) > 256) {" + "\n" + 
"	translation.z = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.x) > 20) {" + "\n" + 
"	scale.x = scale.x/20;" + "\n" + 
"	translation.x = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.y) > 20) {" + "\n" + 
"	scale.y = scale.y/20;" + "\n" + 
"	translation.y = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.z) > 20) {" + "\n" + 
"	scale.z = scale.z/20;" + "\n" + 
"	translation.z = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"}" + "\n")
        .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("velocity").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scalvel").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat")))
      .addChild(new TimeSensorObject("DECLBubble_bubbleA_bubbleClock").setCycleInterval(10).setLoop(true))
      .addChild(new ROUTEObject().setFromNode("DECLBubble_bubbleA_bounce").setFromField("translation_changed").setToNode("DECLBubble_transform").setToField("set_translation"))
      .addChild(new ROUTEObject().setFromNode("DECLBubble_bubbleA_bounce").setFromField("scale_changed").setToNode("DECLBubble_transform").setToField("set_scale"))
      .addChild(new ROUTEObject().setFromNode("DECLBubble_bubbleA_bubbleClock").setFromField("fraction_changed").setToNode("DECLBubble_bubbleA_bounce").setToField("set_fraction")))
    .addChild(new TransformObject("DECLBubble_bubbleB")
      .addChild(new ShapeObject()
        .setGeometry(new SphereObject().setRadius(0.25f))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setTransparency(0.2f).setDiffuseColor(1.0f,0.0f,0.0f))))
      .addChild(new ScriptObject("DECLBubble_bubbleB_bounce").setSourceCode("\n" + 
" " + "\n" + 
"ecmascript:" + "\n" + 
"function initialize() {" + "\n" + 
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);" + "\n" + 
"\n" + 
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction(value) {" + "\n" + 
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);" + "\n" + 
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);" + "\n" + 
"    // if you get to far away or too big, explode" + "\n" + 
"    if ( Math.abs(translation.x) > 256) {" + "\n" + 
"	translation.x = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if ( Math.abs(translation.y) > 256) {" + "\n" + 
"	translation.y = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if ( Math.abs(translation.z) > 256) {" + "\n" + 
"	translation.z = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.x) > 20) {" + "\n" + 
"	scale.x = scale.x/20;" + "\n" + 
"	translation.x = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.y) > 20) {" + "\n" + 
"	scale.y = scale.y/20;" + "\n" + 
"	translation.y = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.z) > 20) {" + "\n" + 
"	scale.z = scale.z/20;" + "\n" + 
"	translation.z = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"}" + "\n")
        .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("velocity").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scalvel").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat")))
      .addChild(new TimeSensorObject("DECLBubble_bubbleB_bubbleClock").setCycleInterval(10).setLoop(true))
      .addChild(new ROUTEObject().setFromNode("DECLBubble_bubbleB_bounce").setFromField("translation_changed").setToNode("DECLBubble_transform").setToField("set_translation"))
      .addChild(new ROUTEObject().setFromNode("DECLBubble_bubbleB_bounce").setFromField("scale_changed").setToNode("DECLBubble_transform").setToField("set_scale"))
      .addChild(new ROUTEObject().setFromNode("DECLBubble_bubbleB_bubbleClock").setFromField("fraction_changed").setToNode("DECLBubble_bubbleB_bounce").setToField("set_fraction")))
    .addChild(new TransformObject("DECLBubble_bubbleC")
      .addChild(new ShapeObject()
        .setGeometry(new SphereObject().setRadius(0.25f))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setTransparency(0.2f).setDiffuseColor(1.0f,0.0f,0.0f))))
      .addChild(new ScriptObject("DECLBubble_bubbleC_bounce").setSourceCode("\n" + 
" " + "\n" + 
"ecmascript:" + "\n" + 
"function initialize() {" + "\n" + 
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);" + "\n" + 
"\n" + 
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction(value) {" + "\n" + 
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);" + "\n" + 
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);" + "\n" + 
"    // if you get to far away or too big, explode" + "\n" + 
"    if ( Math.abs(translation.x) > 256) {" + "\n" + 
"	translation.x = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if ( Math.abs(translation.y) > 256) {" + "\n" + 
"	translation.y = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if ( Math.abs(translation.z) > 256) {" + "\n" + 
"	translation.z = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.x) > 20) {" + "\n" + 
"	scale.x = scale.x/20;" + "\n" + 
"	translation.x = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.y) > 20) {" + "\n" + 
"	scale.y = scale.y/20;" + "\n" + 
"	translation.y = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.z) > 20) {" + "\n" + 
"	scale.z = scale.z/20;" + "\n" + 
"	translation.z = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"}" + "\n")
        .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("velocity").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scalvel").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat")))
      .addChild(new TimeSensorObject("DECLBubble_bubbleC_bubbleClock").setCycleInterval(10).setLoop(true))
      .addChild(new ROUTEObject().setFromNode("DECLBubble_bubbleC_bounce").setFromField("translation_changed").setToNode("DECLBubble_transform").setToField("set_translation"))
      .addChild(new ROUTEObject().setFromNode("DECLBubble_bubbleC_bounce").setFromField("scale_changed").setToNode("DECLBubble_transform").setToField("set_scale"))
      .addChild(new ROUTEObject().setFromNode("DECLBubble_bubbleC_bubbleClock").setFromField("fraction_changed").setToNode("DECLBubble_bubbleC_bounce").setToField("set_fraction")))
    .addChild(new TransformObject("DECLBubble_bubbleD")
      .addChild(new ShapeObject()
        .setGeometry(new SphereObject().setRadius(0.25f))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setTransparency(0.2f).setDiffuseColor(1.0f,0.0f,0.0f))))
      .addChild(new ScriptObject("DECLBubble_bubbleD_bounce").setSourceCode("\n" + 
" " + "\n" + 
"ecmascript:" + "\n" + 
"function initialize() {" + "\n" + 
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);" + "\n" + 
"\n" + 
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction(value) {" + "\n" + 
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);" + "\n" + 
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);" + "\n" + 
"    // if you get to far away or too big, explode" + "\n" + 
"    if ( Math.abs(translation.x) > 256) {" + "\n" + 
"	translation.x = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if ( Math.abs(translation.y) > 256) {" + "\n" + 
"	translation.y = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if ( Math.abs(translation.z) > 256) {" + "\n" + 
"	translation.z = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.x) > 20) {" + "\n" + 
"	scale.x = scale.x/20;" + "\n" + 
"	translation.x = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.y) > 20) {" + "\n" + 
"	scale.y = scale.y/20;" + "\n" + 
"	translation.y = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.z) > 20) {" + "\n" + 
"	scale.z = scale.z/20;" + "\n" + 
"	translation.z = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"}" + "\n")
        .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("velocity").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scalvel").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat")))
      .addChild(new TimeSensorObject("DECLBubble_bubbleD_bubbleClock").setCycleInterval(10).setLoop(true))
      .addChild(new ROUTEObject().setFromNode("DECLBubble_bubbleD_bounce").setFromField("translation_changed").setToNode("DECLBubble_transform").setToField("set_translation"))
      .addChild(new ROUTEObject().setFromNode("DECLBubble_bubbleD_bounce").setFromField("scale_changed").setToNode("DECLBubble_transform").setToField("set_scale"))
      .addChild(new ROUTEObject().setFromNode("DECLBubble_bubbleD_bubbleClock").setFromField("fraction_changed").setToNode("DECLBubble_bubbleD_bounce").setToField("set_fraction"))));
  }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return bubs3 model
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
        X3DObject exampleObject = new bubs3().getX3dModel();

        exampleObject.handleArguments(args);
		boolean validate = (args.length == 0);
		for (String arg : args)
		{
			if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
			{
				validate = true;
				break;
			}
		}
		if (validate)
		{
			System.out.print("bubs3 self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}