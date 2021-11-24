package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> VRML 97 specification example: Robot. Seek or zoom in towards the robot to start a simple animation sequence. </p>
 <p> Related links: <a href="../../../Vrml97Specification/Example15.java">Example15.java</a> source, <a href="../../../Vrml97Specification/Example15Index.html" target="_top">Example15 catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Vrml97Specification/Example15.x3d">Example15.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 June 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 28 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> X3D working group </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> VRML 97 specification example: Robot. Seek or zoom in towards the robot to start a simple animation sequence. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> originals/exampleD_15.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.15 Robot </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.15" target="_blank">https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.15</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example15.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example15.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Vrml97Specification/../license.html">../license.html</a> </td>
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

	* @author X3D working group
 */

public class Example15
{
	/** Default constructor to create this object. */
	public Example15 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Example15.x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 June 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("28 October 2019"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("X3D working group"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("VRML 97 specification example: Robot. Seek or zoom in towards the robot to start a simple animation sequence."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("originals/exampleD_15.wrl"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONSECTION).setContent("VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.15 Robot"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONURL).setContent("https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.15"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example15.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Example15.x3d"))
    .addChild(new ExternProtoDeclare("Shuttle").setName("Shuttle").setUrl(new String[] {"Example14.wrl#Shuttle","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example14.wrl#Shuttle","Example14.x3d#Shuttle","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example14.x3d#Shuttle"})
      .addField(new field().setName("rate").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("distance").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("stopTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("loop").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
    .addChild(new ExternProtoDeclare("Pendulum").setName("Pendulum").setUrl(new String[] {"Example14.wrl#Pendulum","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example14.wrl#Pendulum","Example14.x3d#Pendulum","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example14.x3d#Pendulum"})
      .addField(new field().setName("rate").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("maxAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("stopTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("loop").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
    .addChild(new NavigationInfo().setSpeed(20).setType("\"WALK\" \"ANY\""))
    .addChild(new Viewpoint().setDescription("zoom in").setPosition(0.0,0.0,150.0))
    .addChild(new ProximitySensor("Near").setSize(200.0,200.0,200.0))
    .addChild(new ProtoInstance("Shuttle", "WALK").setContainerField("children")
      .addFieldValue(new fieldValue().setName("stopTime").setValue(1))
      .addFieldValue(new fieldValue().setName("rate").setValue(10))
      .addFieldValue(new fieldValue().setName("distance").setValue(20))
      .addFieldValue(new fieldValue().setName("children")
        .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57)
          .addChild(new Shape()
            .setAppearance(new Appearance("A")
              .setMaterial(new Material().setDiffuseColor(0.0,0.5,0.7)))
            .addComments(" head ")
            .setGeometry(new Box()))
          .addChild(new Transform().setScale(1.0,5.0,1.0).setTranslation(0.0,-5.0,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("A"))
              .addComments(" body ")
              .setGeometry(new Sphere())))
          .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57).setTranslation(1.5,0.0,0.0)
            .addChild(new ProtoInstance("Pendulum", "Arm").setContainerField("children")
              .addFieldValue(new fieldValue().setName("stopTime").setValue(1))
              .addFieldValue(new fieldValue().setName("rate").setValue(1))
              .addFieldValue(new fieldValue().setName("maxAngle").setValue(0.52))
              .addFieldValue(new fieldValue().setName("children")
                .addChild(new Transform().setTranslation(0.0,-3.0,0.0)
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("A"))
                    .setGeometry(new Cylinder().setHeight(4).setRadius(0.5)))))))
          .addChild(new Transform().setRotation(0.0,-1.0,0.0,1.57).setTranslation(-1.5,0.0,0.0)
            .addChild(new ProtoInstance().setUSE("Arm").setContainerField("children"))))))
    .addChild(new ROUTE().setFromNode("Near").setFromField("enterTime").setToNode("WALK").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("Near").setFromField("enterTime").setToNode("Arm").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("Near").setFromField("exitTime").setToNode("WALK").setToField("stopTime"))
    .addChild(new ROUTE().setFromNode("Near").setFromField("exitTime").setToNode("Arm").setToField("stopTime")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Example15 model
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
        X3D thisExampleX3dModel = new Example15().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Example15\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Example15\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
