package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Conformance Test for Viewpoint: immediate switching (jump=true) and smooth animation (jump=false). Press PgUp/PgDn or touch geometry to change viewpoints. </p>
 <p> Related links: <a href="../../../development/TestViewpointJump.java">TestViewpointJump.java</a> source, <a href="../../../development/TestViewpointJumpIndex.html" target="_top">TestViewpointJump catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/TestViewpointJump.x3d">TestViewpointJump.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Conformance Test for Viewpoint: immediate switching (jump=true) and smooth animation (jump=false). Press PgUp/PgDn or touch geometry to change viewpoints. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> CosmoPlayer 2.1.1 fails when "Animate transition between viewpoints" option is turned off. First, try this test by opening the Control Panel, selecting "Animate transition between viewpoints". Use Page Down key to switch between viewpoints. You should smoothly transition between viewpoints. Next, turn the "Animate transition bewtween viewpoints" option off. Use Page Down key to switch between viewpoints. You should see a jump to the objects labeled "jump=true" and an animated transition to the objects labeled "jump=false". </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Jeffrey Weekley and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 July 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Viewpoint" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Viewpoint</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Viewpoint conformance test </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/TestViewpointJump.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/TestViewpointJump.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

	* @author Jeffrey Weekley and Don Brutzman
 */

public class TestViewpointJump
{
	/** Default constructor to create this object. */
	public TestViewpointJump ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("TestViewpointJump.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Conformance Test for Viewpoint: immediate switching (jump=true) and smooth animation (jump=false). Press PgUp/PgDn or touch geometry to change viewpoints."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("CosmoPlayer 2.1.1 fails when \"Animate transition between viewpoints\" option is turned off. First, try this test by opening the Control Panel, selecting \"Animate transition between viewpoints\". Use Page Down key to switch between viewpoints. You should smoothly transition between viewpoints. Next, turn the \"Animate transition bewtween viewpoints\" option off. Use Page Down key to switch between viewpoints. You should see a jump to the objects labeled \"jump=true\" and an animated transition to the objects labeled \"jump=false\"."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Jeffrey Weekley and Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("25 July 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Viewpoint"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Viewpoint conformance test"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/TestViewpointJump.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("TestViewpointJump.x3d"))
    .addChild(new Viewpoint().setDescription("Initial viewpoint, default jump (jump true)").setPosition(0.0,0.0,7.5))
    .addComments(" default value for field is jump='true' ")
    .addChild(new Viewpoint("ConeView").setDescription("Red Cone (jump true)").setOrientation(0.0,-1.0,0.0,1.0).setPosition(-4.6,1.4,1.9))
    .addChild(new Viewpoint("SphereView").setDescription("Blue Sphere (jump false)").setJump(false).setOrientation(0.0,1.0,0.0,.7572).setPosition(4.7,-1.2,3.3))
    .addChild(new Viewpoint("CubeView").setDescription("Magenta Cube (jump true)").setOrientation(0.0,-1.0,0.0,1.0529).setPosition(-6.1,-1.5,2.7))
    .addChild(new Viewpoint("CylinderView").setDescription("White Cylinder (jump false)").setJump(false).setOrientation(0.0,1.0,0.0,1.0).setPosition(5.6,1.4,2.8))
    .addChild(new Group("Geometry")
      .addChild(new Transform("Box").setTranslation(-1.5,-1.5,0.0)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(1.0,1.0,1.0))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,0.0,1.0))))
        .addChild(new Transform().setTranslation(0.0,1.0,0.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setGeometry(new Text().setString(new String[] {"Magenta Cube Viewpoint","jump=true"})
                .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.25)))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.4,0.8,0.6).setShininess(0.8))))))
        .addChild(new TouchSensor("BoxTouchSensor").setDescription("click to bind this viewpoint"))
        .addChild(new ROUTE().setFromNode("BoxTouchSensor").setFromField("isActive").setToNode("CubeView").setToField("set_bind")))
      .addChild(new Transform("Sphere").setTranslation(1.5,-1.5,0.0)
        .addChild(new Shape()
          .setGeometry(new Sphere().setRadius(0.5))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0))))
        .addChild(new Transform().setTranslation(0.0,1.0,0.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setGeometry(new Text().setString(new String[] {"Blue Sphere Viewpoint","jump=false"})
                .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.25)))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.4,0.8,0.6).setShininess(0.8))))))
        .addChild(new TouchSensor("SphereTouchSensor").setDescription("click for blue sphere viewpoint"))
        .addChild(new ROUTE().setFromNode("SphereTouchSensor").setFromField("isActive").setToNode("SphereView").setToField("set_bind")))
      .addChild(new Transform("Cone").setTranslation(-1.5,1.25,0.0)
        .addChild(new Shape()
          .setGeometry(new Cone().setBottomRadius(0.5).setHeight(1))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))
        .addChild(new Transform().setTranslation(0.0,1.0,0.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setGeometry(new Text().setString(new String[] {"Red Cone Viewpoint","jump=true"})
                .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.25)))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.4,0.8,0.6).setShininess(0.8))))))
        .addChild(new TouchSensor("ConeTouchSensor").setDescription("click for red cone viewpoint"))
        .addChild(new ROUTE().setFromNode("ConeTouchSensor").setFromField("isActive").setToNode("ConeView").setToField("set_bind")))
      .addChild(new Transform("Cylinder").setTranslation(1.5,1.25,0.0)
        .addChild(new Shape()
          .setGeometry(new Cylinder().setHeight(1).setRadius(0.5))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0))))
        .addChild(new Transform().setTranslation(0.0,1.0,0.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setGeometry(new Text().setString(new String[] {"White Cylinder Viewpoint","jump=false"})
                .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.25)))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.4,0.8,0.6).setShininess(0.8))))))
        .addChild(new TouchSensor("CylinderTouchSensor").setDescription("click for white cylinder viewpoint"))
        .addChild(new ROUTE().setFromNode("CylinderTouchSensor").setFromField("isActive").setToNode("CylinderView").setToField("set_bind")))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return TestViewpointJump model
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
        X3D thisExampleX3dModel = new TestViewpointJump().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.TestViewpointJump\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.TestViewpointJump\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
