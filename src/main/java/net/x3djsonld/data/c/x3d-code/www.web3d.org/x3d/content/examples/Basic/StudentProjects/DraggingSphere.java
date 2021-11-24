package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A sphere that drags its tail around a box in the XY-plane. </p>
 <p> Related links: <a href="../../../StudentProjects/DraggingSphere.java">DraggingSphere.java</a> source, <a href="../../../StudentProjects/DraggingSphereIndex.html" target="_top">DraggingSphere catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/DraggingSphere.x3d">DraggingSphere.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A sphere that drags its tail around a box in the XY-plane </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Matthew Braun </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 24 July 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> Copyright (c) Matthew Braun, 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DraggingSphere.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DraggingSphere.x3d</a> </td>
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

	* @author Matthew Braun
 */

public class DraggingSphere
{
	/** Default constructor to create this object. */
	public DraggingSphere ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("DraggingSphere.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A sphere that drags its tail around a box in the XY-plane"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Matthew Braun"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("24 July 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_RIGHTS     ).setContent("Copyright (c) Matthew Braun, 2001"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DraggingSphere.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" The scene is composed of two spheres and one cylinder. The spheres move in a box in the xy-plane. The cylinder moves in the same box, and expands and rotates to give the appearance of stretching between the spheres. ")
    .addChild(new WorldInfo().setTitle("DraggingSphere.x3d"))
    .addChild(new Group()
      .addChild(new Viewpoint().setDescription("Start").setPosition(-2.0,2.0,7.0))
      .addComments(" The leading sphere ")
      .addChild(new Transform("SPHERETF1")
        .addChild(new Shape("SPHERE")
          .setAppearance(new Appearance()
            .setMaterial(new Material("SPH_MAT").setAmbientIntensity(0.9).setDiffuseColor(.0,.0,.0)))
          .setGeometry(new Sphere().setRadius(0.5))))
      .addComments(" Trailing sphere ")
      .addChild(new Transform("SPHERETF2")
        .addChild(new Shape().setUSE("SPHERE")))
      .addChild(new Transform("CYL_TF").setRotation(0.0,0.0,-1.0,1.571).setScale(1.0,2.0,1.0).setTranslation(-1.0,0.0,0.0)
        .addChild(new Shape("CYLSHAPE")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setUSE("SPH_MAT")))
          .setGeometry(new Cylinder().setRadius(0.50)))))
    .addComments(" ColorInt for diffuse and emissive color ")
    .addChild(new ColorInterpolator("ColorINT").setKey(new double[] {0.0,.25,.50,.75,1.0}).setKeyValue(new MFColor(new double[] {0.8,0.8,0.8,0.1,0.1,0.9,0.1,0.9,0.1,0.9,0.1,0.1,0.8,0.8,0.8})))
    .addComments(" PosInt for the first sphere: a square in the XY-plane. ")
    .addChild(new PositionInterpolator("POSINT1").setKey(new double[] {0.0,0.08,0.16,0.25,0.33,0.41,0.50,0.58,0.66,0.75,0.83,0.91,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,-2.0,0.0,0.0,-4.0,0.0,0.0,-4.0,0.0,0.0,-4.0,2.0,0.0,-4.0,4.0,0.0,-4.0,4.0,0.0,-2.0,4.0,0.0,0.0,4.0,0.0,0.0,4.0,0.0,0.0,2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0})))
    .addComments(" PosInt for second Sphere:a square in the XY-plane. ")
    .addChild(new PositionInterpolator("POSINT2").setKey(new double[] {0.0,0.08,0.16,0.25,0.33,0.41,0.50,0.58,0.66,0.75,0.83,0.91,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,-2.0,0.0,0.0,-4.0,0.0,0.0,-4.0,0.0,0.0,-4.0,2.0,0.0,-4.0,4.0,0.0,-4.0,4.0,0.0,-2.0,4.0,0.0,0.0,4.0,0.0,0.0,4.0,0.0,0.0,2.0,0.0,0.0,0.0,0.0})))
    .addComments(" PosInt for the Cylinder: a square in the XY-plane. ")
    .addChild(new PositionInterpolator("POSINT3").setKey(new double[] {0.0,0.08,0.16,0.25,0.33,0.41,0.50,0.58,0.66,0.75,0.83,0.91,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,-1.0,0.0,0.0,-3.0,0.0,0.0,-4.0,0.0,0.0,-4.0,1.0,0.0,-4.0,3.0,0.0,-4.0,4.0,0.0,-3.0,4.0,0.0,-1.0,4.0,0.0,0.0,4.0,0.0,0.0,3.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0})))
    .addComments(" OrientationINT for the Cylinder. ")
    .addChild(new OrientationInterpolator("OrientINT").setKey(new double[] {0.00,0.25,0.25,0.50,0.50,0.75,0.75,1.00}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,1.57,0.0,0.0,1.0,1.57,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,1.57,0.0,0.0,1.0,1.57,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0})))
    .addComments(" ScalarInt for cylinder height. ")
    .addChild(new PositionInterpolator("ScalarInt").setKey(new double[] {0.0,0.08,0.16,0.25,0.33,0.41,0.50,0.58,0.66,0.75,0.83,0.91,1.0}).setKeyValue(new MFVec3f(new double[] {1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0})))
    .addComments(" World clock for all objects. ")
    .addChild(new TimeSensor("CLOCK1").setCycleInterval(6).setLoop(true))
    .addComments(" Routes from clock to first sphere ")
    .addChild(new ROUTE().setFromNode("CLOCK1").setFromField("fraction_changed").setToNode("POSINT1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("POSINT1").setFromField("value_changed").setToNode("SPHERETF1").setToField("set_translation"))
    .addComments(" Routes from clock to second sphere ")
    .addChild(new ROUTE().setFromNode("CLOCK1").setFromField("fraction_changed").setToNode("POSINT2").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("POSINT2").setFromField("value_changed").setToNode("SPHERETF2").setToField("set_translation"))
    .addComments(" Routes from clock to first sphere ")
    .addChild(new ROUTE().setFromNode("CLOCK1").setFromField("fraction_changed").setToNode("ColorINT").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("ColorINT").setFromField("value_changed").setToNode("SPH_MAT").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("ColorINT").setFromField("value_changed").setToNode("SPH_MAT").setToField("set_emissiveColor"))
    .addComments(" Routes for Cylinder movement ")
    .addChild(new ROUTE().setFromNode("CLOCK1").setFromField("fraction_changed").setToNode("POSINT3").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("POSINT3").setFromField("value_changed").setToNode("CYL_TF").setToField("set_translation"))
    .addComments(" Routes for Cylinder rotation ")
    .addChild(new ROUTE().setFromNode("CLOCK1").setFromField("fraction_changed").setToNode("OrientINT").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("OrientINT").setFromField("value_changed").setToNode("CYL_TF").setToField("set_rotation"))
    .addComments(" Routes for Cylinder stretching ")
    .addChild(new ROUTE().setFromNode("CLOCK1").setFromField("fraction_changed").setToNode("ScalarInt").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("ScalarInt").setFromField("value_changed").setToNode("CYL_TF").setToField("set_scale")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return DraggingSphere model
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
        X3D thisExampleX3dModel = new DraggingSphere().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.DraggingSphere\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.DraggingSphere\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
