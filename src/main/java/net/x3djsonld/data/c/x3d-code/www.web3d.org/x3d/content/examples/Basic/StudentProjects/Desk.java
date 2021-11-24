package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A reusable desk prototype - click on drawers to open/shut. </p>
 <p> Related links: <a href="../../../StudentProjects/Desk.java">Desk.java</a> source, <a href="../../../StudentProjects/DeskIndex.html" target="_top">Desk catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/Desk.x3d">Desk.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A reusable desk prototype - click on drawers to open/shut. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Frederic Roussille </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 April 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Desk.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Desk.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../StudentProjects/../license.html">../license.html</a> </td>
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

	* @author Frederic Roussille
 */

public class Desk
{
	/** Default constructor to create this object. */
	public Desk ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Desk.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A reusable desk prototype - click on drawers to open/shut."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Frederic Roussille"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 April 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Desk.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Desk.x3d"))
    .addChild(new ProtoDeclare("Desk").setName("Desk")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("diffuseColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(0.5,0.4,0.2))))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addComments(" top of the desk ")
          .addChild(new Shape()
            .setAppearance(new Appearance("desk_color")
              .setMaterial(new Material("color")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor")))))
            .setGeometry(new Box().setSize(20.0,1.0,13.0)))
          .addChild(new Transform().setTranslation(0.0,-5.0,-6.0)
            .addComments(" back of the desk ")
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("desk_color"))
              .setGeometry(new Box().setSize(20.0,10.0,1.0))))
          .addComments(" left box ")
          .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(-10.0,-10.0,-6.5)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("desk_color"))
              .setGeometry(new IndexedFaceSet("box").setDEF("box").setCoordIndex(new int[] {0,1,2,3,-1,1,5,6,2,-1,5,4,7,6,-1,4,0,3,7,-1,4,5,1,0,-1,9,8,11,10,-1,13,9,10,14,-1,12,13,14,15,-1,8,12,15,3,-1,9,13,12,8,-1,3,2,10,11,-1,2,6,14,10,-1,6,7,15,14,-1,7,3,11,15,-1})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,5.0,0.0,0.0,5.0,12.5,0.0,0.0,12.5,0.0,0.0,0.0,-9.5,5.0,0.0,-9.5,5.0,12.5,-9.5,0.0,12.5,-9.5,0.5,0.5,-0.5,4.5,0.5,-0.5,4.5,12.5,-0.5,0.5,12.5,-0.5,0.5,0.5,-9.0,4.5,0.5,-9.0,4.5,12.5,-9.0,0.5,12.5,-9.0}))))))
          .addComments(" right box ")
          .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(5.0,-10.0,-6.5)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("desk_color"))
              .setGeometry(new IndexedFaceSet().setUSE("box"))))
          .addComments(" drawers ")
          .addChild(new Transform("drawer1").setTranslation(-9.5,-5.25,6.0)
            .addChild(new Group("drawer")
              .addChild(new Transform().setScale(0.8,0.34,1.2105)
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("desk_color"))
                  .setGeometry(new IndexedFaceSet().setUSE("box"))))
              .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(1.0,2.125,-0.05)
                .addChild(new Shape()
                  .setAppearance(new Appearance("gray")
                    .setMaterial(new Material().setDiffuseColor(0.5,0.5,0.5)))
                  .setGeometry(new Extrusion().setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {0.1,0.0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0.0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0.0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0.0})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.5,0.5,0.0,1.5,0.5,0.0,2.0,0.0,0.0}))))))
            .addChild(new TouchSensor("touch_drawer1").setDescription("touch to open close")))
          .addChild(new Transform("drawer2").setTranslation(-9.5,-9.5,6.0)
            .addChild(new Group().setUSE("drawer"))
            .addChild(new TouchSensor("touch_drawer2").setDescription("touch to open close")))
          .addChild(new Transform("drawer3").setTranslation(5.5,-5.25,6.0)
            .addChild(new Group().setUSE("drawer"))
            .addChild(new TouchSensor("touch_drawer3").setDescription("touch to open close")))
          .addChild(new Transform("drawer4").setTranslation(5.5,-9.5,6.0)
            .addChild(new Group().setUSE("drawer"))
            .addChild(new TouchSensor("touch_drawer4").setDescription("touch to open close")))
          .addChild(new Group("AnimationGroup")
            .addComments(" path for drawer 1 ")
            .addChild(new TimeSensor("clock1"))
            .addChild(new PositionInterpolator("drawer1_path").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0})))
            .addChild(new Script("drawer1_path_js").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"function set_path() {" + "\n" + 
"  keyValue_changed[0][0]= -9.5;" + "\n" + 
"  keyValue_changed[0][1]= -5.25;" + "\n" + 
"  keyValue_changed[1][0]= -9.5;" + "\n" + 
"  keyValue_changed[1][1]= -5.25;" + "\n" + 
"  if (open==false) {" + "\n" + 
"    keyValue_changed[0][2]= 6;" + "\n" + 
"    keyValue_changed[1][2]= 12;" + "\n" + 
"    open = true;" + "\n" + 
"  } else {" + "\n" + 
"     if (open==true) {" + "\n" + 
"       keyValue_changed[0][2]= 12;" + "\n" + 
"       keyValue_changed[1][2]= 6;" + "\n" + 
"       open = false;" + "\n" + 
"     }" + "\n" + 
"    }" + "\n" + 
"}" + "\n")
              .addField(new field().setName("set_path").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("keyValue_changed").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("open").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false)))
            .addComments(" path for drawer 3 ")
            .addChild(new TimeSensor("clock3"))
            .addChild(new PositionInterpolator("drawer3_path").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0})))
            .addChild(new Script("drawer3_path_js").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"function set_path() {" + "\n" + 
"  keyValue_changed[0][0]= 5.5;" + "\n" + 
"  keyValue_changed[0][1]= -5.25;" + "\n" + 
"  keyValue_changed[1][0]= 5.5;" + "\n" + 
"  keyValue_changed[1][1]= -5.25;" + "\n" + 
"  if (open==false) {" + "\n" + 
"    keyValue_changed[0][2]= 6;" + "\n" + 
"    keyValue_changed[1][2]= 12;" + "\n" + 
"    open = true;" + "\n" + 
"  } else {" + "\n" + 
"     if (open==true) {" + "\n" + 
"       keyValue_changed[0][2]= 12;" + "\n" + 
"       keyValue_changed[1][2]= 6;" + "\n" + 
"       open = false;" + "\n" + 
"     }" + "\n" + 
"    }" + "\n" + 
"}" + "\n")
              .addField(new field().setName("set_path").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("keyValue_changed").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("open").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false)))
            .addComments(" path for drawer 2 ")
            .addChild(new TimeSensor("clock2"))
            .addChild(new PositionInterpolator("drawer2_path").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0})))
            .addChild(new Script("drawer2_path_js").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"function set_path() {" + "\n" + 
"  keyValue_changed[0][0]= -9.5;" + "\n" + 
"  keyValue_changed[0][1]= -9.5;" + "\n" + 
"  keyValue_changed[1][0]= -9.5;" + "\n" + 
"  keyValue_changed[1][1]= -9.5;" + "\n" + 
"  if (open==false) {" + "\n" + 
"    keyValue_changed[0][2]= 6;" + "\n" + 
"    keyValue_changed[1][2]= 12;" + "\n" + 
"    open = true;" + "\n" + 
"  } else {" + "\n" + 
"     if (open==true) {" + "\n" + 
"       keyValue_changed[0][2]= 12;" + "\n" + 
"       keyValue_changed[1][2]= 6;" + "\n" + 
"       open = false;" + "\n" + 
"     }" + "\n" + 
"    }" + "\n" + 
"}" + "\n")
              .addField(new field().setName("set_path").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("keyValue_changed").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("open").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false)))
            .addComments(" path for drawer 4 ")
            .addChild(new TimeSensor("clock4"))
            .addChild(new PositionInterpolator("drawer4_path").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0})))
            .addChild(new Script("drawer4_path_js").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"function set_path() {" + "\n" + 
"  keyValue_changed[0][0]= 5.5;" + "\n" + 
"  keyValue_changed[0][1]= -9.5;" + "\n" + 
"  keyValue_changed[1][0]= 5.5;" + "\n" + 
"  keyValue_changed[1][1]= -9.5;" + "\n" + 
"  if (open==false) {" + "\n" + 
"    keyValue_changed[0][2]= 6;" + "\n" + 
"    keyValue_changed[1][2]= 12;" + "\n" + 
"    open = true;" + "\n" + 
"  } else {" + "\n" + 
"     if (open==true) {" + "\n" + 
"       keyValue_changed[0][2]= 12;" + "\n" + 
"       keyValue_changed[1][2]= 6;" + "\n" + 
"       open = false;" + "\n" + 
"     }" + "\n" + 
"    }" + "\n" + 
"}" + "\n")
              .addField(new field().setName("set_path").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("keyValue_changed").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("open").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false)))
            .addComments(" Routes for drawer 1 ")
            .addChild(new ROUTE().setFromNode("touch_drawer1").setFromField("touchTime").setToNode("clock1").setToField("startTime"))
            .addChild(new ROUTE().setFromNode("touch_drawer1").setFromField("touchTime").setToNode("drawer1_path_js").setToField("set_path"))
            .addChild(new ROUTE().setFromNode("drawer1_path_js").setFromField("keyValue_changed").setToNode("drawer1_path").setToField("set_keyValue"))
            .addChild(new ROUTE().setFromNode("clock1").setFromField("fraction_changed").setToNode("drawer1_path").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("drawer1_path").setFromField("value_changed").setToNode("drawer1").setToField("set_translation"))
            .addComments(" Routes for drawer 3 ")
            .addChild(new ROUTE().setFromNode("touch_drawer3").setFromField("touchTime").setToNode("clock3").setToField("startTime"))
            .addChild(new ROUTE().setFromNode("touch_drawer3").setFromField("touchTime").setToNode("drawer3_path_js").setToField("set_path"))
            .addChild(new ROUTE().setFromNode("drawer3_path_js").setFromField("keyValue_changed").setToNode("drawer3_path").setToField("set_keyValue"))
            .addChild(new ROUTE().setFromNode("clock3").setFromField("fraction_changed").setToNode("drawer3_path").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("drawer3_path").setFromField("value_changed").setToNode("drawer3").setToField("set_translation"))
            .addComments(" Route for drawer 2 ")
            .addChild(new ROUTE().setFromNode("touch_drawer2").setFromField("touchTime").setToNode("clock2").setToField("startTime"))
            .addChild(new ROUTE().setFromNode("touch_drawer2").setFromField("touchTime").setToNode("drawer2_path_js").setToField("set_path"))
            .addChild(new ROUTE().setFromNode("drawer2_path_js").setFromField("keyValue_changed").setToNode("drawer2_path").setToField("set_keyValue"))
            .addChild(new ROUTE().setFromNode("clock2").setFromField("fraction_changed").setToNode("drawer2_path").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("drawer2_path").setFromField("value_changed").setToNode("drawer2").setToField("set_translation"))
            .addComments(" Route for drawer 4 ")
            .addChild(new ROUTE().setFromNode("touch_drawer4").setFromField("touchTime").setToNode("clock4").setToField("startTime"))
            .addChild(new ROUTE().setFromNode("touch_drawer4").setFromField("touchTime").setToNode("drawer4_path_js").setToField("set_path"))
            .addChild(new ROUTE().setFromNode("drawer4_path_js").setFromField("keyValue_changed").setToNode("drawer4_path").setToField("set_keyValue"))
            .addChild(new ROUTE().setFromNode("clock4").setFromField("fraction_changed").setToNode("drawer4_path").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("drawer4_path").setFromField("value_changed").setToNode("drawer4").setToField("set_translation"))))))
    .addChild(new ProtoInstance("Desk").setContainerField("children"))
    .addChild(new Viewpoint().setDescription("Entry").setPosition(0.0,0.0,40.0)));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Desk model
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
        X3D thisExampleX3dModel = new Desk().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Desk\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Desk\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
