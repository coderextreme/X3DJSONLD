package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Generic Heads Up Display (HUD) prototype to keep children on screen. </p>
 <p> Related links: <a href="../../../../Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.java">HeadsUpDisplayPrototype.java</a> source, <a href="../../../../Tools/HeadsUpDisplays/HeadsUpDisplayPrototypeIndex.html" target="_top">HeadsUpDisplayPrototype catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d">HeadsUpDisplayPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Generic Heads Up Display (HUD) prototype to keep children on screen. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 9 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 14 January 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> HUD Heads Up Display </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d" target="_blank">https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.2, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Tools/HeadsUpDisplays/../../license.html">../../license.html</a> </td>
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

	* @author Don Brutzman
 */

public class HeadsUpDisplayPrototype
{
	/** Default constructor to create this object. */
	public HeadsUpDisplayPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_0)
  .setHead(new headObject()
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE        ).setContent("HeadsUpDisplayPrototype.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION  ).setContent("Generic Heads Up Display (HUD) prototype to keep children on screen."))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR      ).setContent("Don Brutzman"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED      ).setContent("9 November 2003"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED     ).setContent("14 January 2014"))
    .addMeta(new metaObject().setName(metaObject.NAME_SUBJECT      ).setContent("HUD Heads Up Display"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER   ).setContent("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR    ).setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE      ).setContent("../../license.html")))
  .setScene(new SceneObject()
    .addChild(new ProtoDeclareObject().setName("HeadsUpDisplay").setAppinfo("HeadsUpDisplay positions child geometry in screen space, movable by the user")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode").setAppinfo("Displayed subscene positioned as a HUD.")
          .addComments(" default is null array of nodes "))
        .addField(new fieldObject().setAccessType("inputOutput").setName("dragChildren").setType("MFNode").setAppinfo("Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.")
          .addComments(" default is null array of nodes "))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("locationOffset").setType("SFVec3f").setValue("-2 -2 0").setAppinfo("Modified screen location and distance (for size)."))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool").setValue("false").setAppinfo("Enable/disable console output for troubleshooting.")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new GroupObject()
          .addChild(new ProximitySensorObject("WhereSensor").setSize(1000000000.0f,1000000000.0f,1000000000.0f)
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("center").setProtoField("locationOffset"))))
          .addChild(new TransformObject("FixedLocation")
            .addChild(new TransformObject("MovableLocation")
              .addChild(new TransformObject("LocationOffset")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("locationOffset")))
                .addChild(new TransformObject().setTranslation(0.0f,0.0f,-10.0f)
                  .addChild(new GroupObject()
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("children").setProtoField("children"))))
                  .addChild(new GroupObject("PlaneMovementSensorGroup")
                    .addChild(new GroupObject("DragGeometry")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("children").setProtoField("dragChildren"))))
                    .addChild(new PlaneSensorObject("PlaneMovementSensor").setDescription("click and drag to move interface")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("offset").setProtoField("locationOffset"))))
                    .addChild(new VisibilitySensorObject("MovementVisibilitySensor"))
                    .addChild(new ScriptObject("VisibilityControlScript").setSourceCode("\n" + 
"                      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function tracePrint (text)" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);" + "\n" + 
"}" + "\n" + 
"function setIsVisible (value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	isVisible = value;" + "\n" + 
"	tracePrint('isVisible=' + value);" + "\n" + 
"}" + "\n" + 
"function setPlaneSensorIsActive (value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	tracePrint('PlaneSensor isActive=' + value);" + "\n" + 
"\n" + 
"	if (value == false)" + "\n" + 
"	{" + "\n" + 
"		tracePrint('planeSensorTranslation=' + planeSensorTranslation);" + "\n" + 
"		if (isVisible)" + "\n" + 
"		{" + "\n" + 
"			translationChanged = planeSensorTranslation;" + "\n" + 
"		}" + "\n" + 
"		else" + "\n" + 
"		{" + "\n" + 
"			// fell off screen, reset to center" + "\n" + 
"			translationChanged = new SFVec3f(0, 0, 0);" + "\n" + 
"			translationOffsetChanged  = new SFVec3f(0, 0, 0);" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function setPlaneSensorTranslation (value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	planeSensorTranslation = value;" + "\n" + 
"	tracePrint('planeSensorTranslation=' + value);" + "\n" + 
"}" + "\n")
                      .addField(new fieldObject().setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool"))
                      .addField(new fieldObject().setAccessType("initializeOnly").setName("isVisible").setType("SFBool").setValue("true"))
                      .addField(new fieldObject().setAccessType("initializeOnly").setName("planeSensorTranslation").setType("SFVec3f").setValue("0 0 0"))
                      .addField(new fieldObject().setAccessType("inputOnly").setName("setIsVisible").setType("SFBool"))
                      .addField(new fieldObject().setAccessType("inputOnly").setName("setPlaneSensorIsActive").setType("SFBool"))
                      .addField(new fieldObject().setAccessType("inputOnly").setName("setPlaneSensorTranslation").setType("SFVec3f"))
                      .addField(new fieldObject().setAccessType("outputOnly").setName("translationChanged").setType("SFVec3f"))
                      .addField(new fieldObject().setAccessType("outputOnly").setName("translationOffsetChanged").setType("SFVec3f"))
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
                    .addChild(new ROUTEObject().setFromNode("PlaneMovementSensor").setFromField("isActive").setToNode("VisibilityControlScript").setToField("setPlaneSensorIsActive"))
                    .addChild(new ROUTEObject().setFromNode("PlaneMovementSensor").setFromField("translation_changed").setToNode("VisibilityControlScript").setToField("setPlaneSensorTranslation"))
                    .addChild(new ROUTEObject().setFromNode("MovementVisibilitySensor").setFromField("isActive").setToNode("VisibilityControlScript").setToField("setIsVisible")))))
              .addChild(new ROUTEObject().setFromNode("PlaneMovementSensor").setFromField("translation_changed").setToNode("MovableLocation").setToField("set_translation"))
              .addChild(new ROUTEObject().setFromNode("VisibilityControlScript").setFromField("translationChanged").setToNode("MovableLocation").setToField("set_translation"))
              .addChild(new ROUTEObject().setFromNode("VisibilityControlScript").setFromField("translationOffsetChanged").setToNode("PlaneMovementSensor").setToField("set_offset"))))
          .addChild(new ROUTEObject().setFromNode("WhereSensor").setFromField("position_changed").setToNode("FixedLocation").setToField("set_translation"))
          .addChild(new ROUTEObject().setFromNode("WhereSensor").setFromField("orientation_changed").setToNode("FixedLocation").setToField("set_rotation")))))
    .addComments(" ==================== ")
    .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new float[] {0.1f,0.1f,0.3f})).setSkyColor(new MFColorObject(new float[] {0.5f,0.5f,0.1f})))
    .addChild(new AnchorObject().setDescription("HeadsUpDisplayExample").setParameter(new MFStringObject("\"target=_blank\"")).setUrl(new MFStringObject("\"HeadsUpDisplayExample.x3d\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d\" \"HeadsUpDisplayExample.wrl\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl\""))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.0f,1.0f,1.0f).setEmissiveColor(0.0f,1.0f,1.0f)))
        .setGeometry(new TextObject().setString(new MFStringObject("\"HeadsUpDisplayPrototype.x3d\" \"is a Prototype definition file.\" \"\" \"To see an example scene using this node\" \"click this text to view\" \"HeadsUpDisplayExample.x3d\""))
          .setFontStyle(new FontStyleObject().setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE).setSize(0.8f))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return HeadsUpDisplayPrototype model
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
        X3DObject thisExampleX3dObject = new HeadsUpDisplayPrototype().getX3dModel();

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
			System.out.println("WARNING: \"HeadsUpDisplayPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"HeadsUpDisplayPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
