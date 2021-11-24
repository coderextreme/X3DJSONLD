package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A file decribing a desk lamp. </p>
 <p> Related links: <a href="../../../StudentProjects/DeskLamp.java">DeskLamp.java</a> source, <a href="../../../StudentProjects/DeskLampIndex.html" target="_top">DeskLamp catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/DeskLamp.x3d">DeskLamp.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A file decribing a desk lamp </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DeskLamp.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DeskLamp.x3d</a> </td>
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

public class DeskLamp
{
	/** Default constructor to create this object. */
	public DeskLamp ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("DeskLamp.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A file decribing a desk lamp"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Frederic Roussille"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 April 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DeskLamp.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("DeskLamp.x3d"))
    .addChild(new Viewpoint().setDescription("DeskLamp").setPosition(0.0,0.1,1.0))
    .addChild(new Group()
      .addChild(new PlaneSensor("movelamp").setDescription("click and drag to move lamp"))
      .addChild(new Transform("lamp")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("color").setDiffuseColor(0.8,0.0,0.6)))
          .setGeometry(new Cylinder().setHeight(0.01).setRadius(0.1)))
        .addChild(new Group()
          .addChild(new SphereSensor("movefirstarm").setDescription("click and drag to move arm").setOffset(1.0,0.0,0.0,-3.58))
          .addChild(new Transform("firstarm").setCenter(0.0,-0.15,0.0).setRotation(1.0,0.0,0.0,-0.7).setTranslation(0.0,0.15,0.0)
            .addChild(new Shape("lamparm")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("color")))
              .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.01)))
            .addChild(new Group()
              .addChild(new SphereSensor("movesecondarm").setDescription("click and drag to move arm").setOffset(1.0,0.0,0.0,-1.25))
              .addChild(new Transform("secondarm").setCenter(0.0,-0.15,0.0).setRotation(1.0,0.0,0.0,1.9).setTranslation(0.0,0.3,0.0)
                .addChild(new Shape().setUSE("lamparm"))
                .addChild(new Group()
                  .addChild(new SphereSensor("movelampshade").setDescription("click and drag to move shade").setOffset(1.0,0.0,0.0,-1.25))
                  .addChild(new Transform("lampshade").setCenter(0.0,0.075,0.0).setRotation(1.0,0.0,0.0,-1.25).setTranslation(0.0,0.075,0.0)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("color")))
                      .setGeometry(new Cone().setBottom(false).setBottomRadius(0.12).setHeight(0.15)))
                    .addChild(new Transform().setTranslation(0.0,-0.05,0.0)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material("color2").setDiffuseColor(0.4,0.4,0.4)))
                        .setGeometry(new Sphere().setRadius(0.05)))
                      .addChild(new TimeSensor("clock1").setCycleInterval(0.5))
                      .addChild(new ColorInterpolator("colorpath1").setKey(new double[] {0.0,1.0}).setKeyValue(new MFColor(new double[] {0.4,0.4,0.4,1.0,1.0,0.0})))
                      .addChild(new ColorInterpolator("colorpath2").setKey(new double[] {0.0,1.0}).setKeyValue(new MFColor(new double[] {1.0,1.0,0.0,0.4,0.4,0.4})))
                      .addChild(new TimeSensor("clock2").setCycleInterval(0.5))
                      .addChild(new SpotLight("light").setAmbientIntensity(.8).setColor(1.0,1.0,0.0).setCutOffAngle(.785398).setDirection(0.0,-1.0,0.7).setOn(false).setRadius(20)))))))))
        .addChild(new Group()
          .addChild(new Transform("button1").setTranslation(-0.02,0.015,0.05)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
              .setGeometry(new Cylinder().setHeight(0.03).setRadius(0.01)))
            .addChild(new TouchSensor("touch1").setDescription("click to turn on"))
            .addChild(new Script("code1").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"function set_light() {" + "\n" + 
" value = true;" + "\n" + 
"}" + "\n")
              .addField(new field().setName("value").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("set_light").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))))
          .addChild(new Transform("button2").setTranslation(0.02,0.015,0.05)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
              .setGeometry(new Cylinder().setHeight(0.03).setRadius(0.01)))
            .addChild(new TouchSensor("touch2").setDescription("click to turn off"))
            .addChild(new Script("code2").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"function set_light() {" + "\n" + 
" value = false;" + "\n" + 
"}" + "\n")
              .addField(new field().setName("value").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("set_light").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY)))))))
    .addChild(new ROUTE().setFromNode("movelamp").setFromField("translation_changed").setToNode("lamp").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("movefirstarm").setFromField("rotation_changed").setToNode("firstarm").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("movesecondarm").setFromField("rotation_changed").setToNode("secondarm").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("movelampshade").setFromField("rotation_changed").setToNode("lampshade").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("touch1").setFromField("touchTime").setToNode("clock1").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("clock1").setFromField("fraction_changed").setToNode("colorpath1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("colorpath1").setFromField("value_changed").setToNode("color2").setToField("set_emissiveColor"))
    .addChild(new ROUTE().setFromNode("touch2").setFromField("touchTime").setToNode("clock2").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("clock2").setFromField("fraction_changed").setToNode("colorpath2").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("colorpath2").setFromField("value_changed").setToNode("color2").setToField("set_emissiveColor"))
    .addChild(new ROUTE().setFromNode("touch1").setFromField("touchTime").setToNode("code1").setToField("set_light"))
    .addChild(new ROUTE().setFromNode("code1").setFromField("value").setToNode("light").setToField("set_on"))
    .addChild(new ROUTE().setFromNode("touch2").setFromField("touchTime").setToNode("code2").setToField("set_light"))
    .addChild(new ROUTE().setFromNode("code2").setFromField("value").setToNode("light").setToField("set_on")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return DeskLamp model
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
        X3D thisExampleX3dModel = new DeskLamp().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.DeskLamp\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.DeskLamp\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
