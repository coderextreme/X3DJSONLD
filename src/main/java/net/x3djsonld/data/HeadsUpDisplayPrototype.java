package net.x3djsonld.data;

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
 <p> Related links: <a href="../../../../Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.java">HeadsUpDisplayPrototype.java</a> source, <a href="../../../../Tools/HeadsUpDisplays/HeadsUpDisplayPrototypeIndex.html" target="_top">HeadsUpDisplayPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
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
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
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
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("HeadsUpDisplayPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Generic Heads Up Display (HUD) prototype to keep children on screen."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("9 November 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("14 January 2014"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("HUD Heads Up Display"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare("HeadsUpDisplay").setName("HeadsUpDisplay").setAppinfo("HeadsUpDisplay positions child geometry in screen space, movable by the user")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Displayed subscene positioned as a HUD.")
          .addComments(" default is null array of nodes "))
        .addField(new field().setName("dragChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.")
          .addComments(" default is null array of nodes "))
        .addField(new field().setName("locationOffset").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-2.0,-2.0,0.0)).setAppinfo("Modified screen location and distance (for size)."))
        .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("Enable/disable console output for troubleshooting.")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new ProximitySensor("WhereSensor").setSize(1000000000.0,1000000000.0,1000000000.0)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("center").setProtoField("locationOffset"))))
          .addChild(new Transform("FixedLocation")
            .addChild(new Transform("MovableLocation")
              .addChild(new Transform("LocationOffset")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("locationOffset")))
                .addChild(new Transform().setTranslation(0.0,0.0,-10.0)
                  .addChild(new Group()
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("children").setProtoField("children"))))
                  .addChild(new Group("PlaneMovementSensorGroup")
                    .addChild(new Group("DragGeometry")
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("children").setProtoField("dragChildren"))))
                    .addChild(new PlaneSensor("PlaneMovementSensor").setDescription("click and drag to move interface")
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("offset").setProtoField("locationOffset"))))
                    .addChild(new VisibilitySensor("MovementVisibilitySensor"))
                    .addChild(new Script("VisibilityControlScript").setSourceCode("""
                      
ecmascript:

function tracePrint (text)
{
	if (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);
}
function setIsVisible (value, timeStamp)
{
	isVisible = value;
	tracePrint('isVisible=' + value);
}
function setPlaneSensorIsActive (value, timeStamp)
{
	tracePrint('PlaneSensor isActive=' + value);

	if (value == false)
	{
		tracePrint('planeSensorTranslation=' + planeSensorTranslation);
		if (isVisible)
		{
			translationChanged = planeSensorTranslation;
		}
		else
		{
			// fell off screen, reset to center
			translationChanged = new SFVec3f(0, 0, 0);
			translationOffsetChanged  = new SFVec3f(0, 0, 0);
		}
	}
}
function setPlaneSensorTranslation (value, timeStamp)
{
	planeSensorTranslation = value;
	tracePrint('planeSensorTranslation=' + value);
}

                    """)
                      .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                      .addField(new field().setName("isVisible").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
                      .addField(new field().setName("planeSensorTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
                      .addField(new field().setName("setIsVisible").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
                      .addField(new field().setName("setPlaneSensorIsActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
                      .addField(new field().setName("setPlaneSensorTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
                      .addField(new field().setName("translationChanged").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                      .addField(new field().setName("translationOffsetChanged").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
                    .addChild(new ROUTE().setFromNode("PlaneMovementSensor").setFromField("isActive").setToNode("VisibilityControlScript").setToField("setPlaneSensorIsActive"))
                    .addChild(new ROUTE().setFromNode("PlaneMovementSensor").setFromField("translation_changed").setToNode("VisibilityControlScript").setToField("setPlaneSensorTranslation"))
                    .addChild(new ROUTE().setFromNode("MovementVisibilitySensor").setFromField("isActive").setToNode("VisibilityControlScript").setToField("setIsVisible")))))
              .addChild(new ROUTE().setFromNode("PlaneMovementSensor").setFromField("translation_changed").setToNode("MovableLocation").setToField("set_translation"))
              .addChild(new ROUTE().setFromNode("VisibilityControlScript").setFromField("translationChanged").setToNode("MovableLocation").setToField("set_translation"))
              .addChild(new ROUTE().setFromNode("VisibilityControlScript").setFromField("translationOffsetChanged").setToNode("PlaneMovementSensor").setToField("set_offset"))))
          .addChild(new ROUTE().setFromNode("WhereSensor").setFromField("position_changed").setToNode("FixedLocation").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("WhereSensor").setFromField("orientation_changed").setToNode("FixedLocation").setToField("set_rotation")))))
    .addComments(" ==================== ")
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.1,0.1,0.3})).setSkyColor(new MFColor(new double[] {0.5,0.5,0.1})))
    .addChild(new Anchor().setDescription("HeadsUpDisplayExample").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"HeadsUpDisplayExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d","HeadsUpDisplayExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl"})
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0).setEmissiveColor(0.0,1.0,1.0)))
        .setGeometry(new Text().setString(new String[] {"HeadsUpDisplayPrototype.x3d","is a Prototype definition file.","","To see an example scene using this node","click this text to view","HeadsUpDisplayExample.x3d"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.8))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return HeadsUpDisplayPrototype model
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
        X3D thisExampleX3dModel = new HeadsUpDisplayPrototype().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.HeadsUpDisplayPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.HeadsUpDisplayPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
