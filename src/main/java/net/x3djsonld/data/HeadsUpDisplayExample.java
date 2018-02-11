package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen. </p>
 <p> Related links: <a href="../../../Chapter14Prototypes/HeadsUpDisplayExample.java">HeadsUpDisplayExample.java</a> source, <a href="../../../Chapter14Prototypes/HeadsUpDisplayExampleIndex.html" target="_top">HeadsUpDisplayExample catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter14Prototypes/HeadsUpDisplayExample.x3d">HeadsUpDisplayExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Leonard Daly and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 15 July 2006 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 24 October 2016 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Chapter14Prototypes/HeadsUpDisplayPrototype.x3d">HeadsUpDisplayPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://X3dGraphics.com" target="_blank">http://X3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">http://www.web3d.org/x3d/content/examples/X3dResources.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> Copyright 2006, Daly Realism and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D book, X3D graphics, X3D-Edit, <a href="http://www.x3dGraphics.com" target="_blank">http://www.x3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Chapter14Prototypes/../license.html">../license.html</a> </td>
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

	* @author Leonard Daly and Don Brutzman
 */

public class HeadsUpDisplayExample
{
	/** Default constructor to create this object. */
	public HeadsUpDisplayExample ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("HeadsUpDisplayExample.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen."))
    .addMeta(new metaObject().setName("creator").setContent("Leonard Daly and Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("15 July 2006"))
    .addMeta(new metaObject().setName("modified").setContent("24 October 2016"))
    .addMeta(new metaObject().setName("reference").setContent("HeadsUpDisplayPrototype.x3d"))
    .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
    .addMeta(new metaObject().setName("rights").setContent("Copyright 2006, Daly Realism and Don Brutzman"))
    .addMeta(new metaObject().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
    .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addComments(" Simple Heads-Up Display (HUD) Prototype\\n \\n Manages the display of a HUD and maintains its position on the screen.\\n Changes to fieldOfView (in Viewpoint node) will change screen position\\n \\n Fields:\\n hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\\n hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\\n position_changed Current viewer location (outputOnly - SFVec3f)\\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\\n \\n \\n ")
    .addChild(new ExternProtoDeclareObject().setName("HeadsUpDisplay").setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrl(new MFStringObject("\"HeadsUpDisplayPrototype.x3d#HeadsUpDisplay\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay\" \"HeadsUpDisplayPrototype.wrl#HeadsUpDisplay\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay\""))
      .addField(new fieldObject().setAccessType("inputOutput").setName("screenOffset").setType("SFVec3f").setAppinfo("offset position for HUD relative to current view location, default 0 0 -5"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode").setAppinfo("X3D content positioned at HUD offset"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("position_changed").setType("SFVec3f").setAppinfo("HUD position update (in world coordinates) relative to original location"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("orientation_changed").setType("SFRotation").setAppinfo("HUD orientation update relative to original location")))
    .addChild(new BackgroundObject("SandyShallowBottom").setSkyAngle(new float[] {0.04f,0.05f,0.1f,1.309f,1.570f}).setGroundAngle(new float[] {0.05f,1.52f,1.56f,1.5707f}).setGroundColor(new MFColorObject(new float[] {0.2f,0.2f,0.0f,0.3f,0.3f,0.0f,0.5f,0.5f,0.3f,0.1f,0.3f,0.4f,0.0f,0.2f,0.4f})).setSkyColor(new MFColorObject(new float[] {0.8f,0.8f,0.2f,0.8f,0.8f,0.2f,0.1f,0.1f,0.6f,0.1f,0.1f,0.6f,0.1f,0.25f,0.8f,0.6f,0.6f,0.9f})))
    .addChild(new ViewpointObject().setDescription("Heads-up display (HUD)"))
    .addComments(" ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence ")
    .addChild(new ProtoInstanceObject("HeadsUpDisplayInstance", "HeadsUpDisplay").setDEF("HeadsUpDisplayInstance").setName("HeadsUpDisplay")
      .addComments(" example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view ")
      .addFieldValue(new fieldValueObject().setName("screenOffset").setValue("-0.75 1 -5"))
      .addFieldValue(new fieldValueObject().setName("children")
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"HUD text stays fixed\" \"while user navigates\""))
            .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setSize(0.3f)))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.894118f,0.819608f,1.0f))))))
    .addChild(new InlineObject().setUrl(new MFStringObject("\"../HelloWorld.x3d\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d\" \"../HelloWorld.wrl\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl\""))));
  }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return HeadsUpDisplayExample model
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
        X3DObject exampleObject = new HeadsUpDisplayExample().getX3dModel();

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
			System.out.print("HeadsUpDisplayExample self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
