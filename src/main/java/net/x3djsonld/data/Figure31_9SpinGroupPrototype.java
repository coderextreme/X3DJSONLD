package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for Java source code.
/**
 * <p> The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup. </p>
 <p> Related links: <a href="../../../Chapter31Prototypes/Figure31_9SpinGroupPrototype.java">Figure31_9SpinGroupPrototype.java</a> source, <a href="../../../Chapter31Prototypes/Figure31_9SpinGroupPrototypeIndex.html" target="_top">Figure31_9SpinGroupPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d">Figure31_9SpinGroupPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm" target="_blank">http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 24 October 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Chapter31Prototypes/../../license.html">../../license.html</a> </td>
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

	* @author Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland
 */

public class Figure31_9SpinGroupPrototype
{
	/** Default constructor to create this object. */
	public Figure31_9SpinGroupPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Figure31_9SpinGroupPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("24 October 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Figure31_9SpinGroupPrototype.x3d"))
    .addChild(new ProtoDeclare("SpinGroup").setName("SpinGroup")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addComments(" NULL node initialization "))
        .addField(new field().setName("cycleInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1))
        .addField(new field().setName("loop").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(false))
        .addField(new field().setName("startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
        .addField(new field().setName("stopTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0)))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform("SpinGroupTransform")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("children").setProtoField("children"))))
        .addComments(" following nodes will not be rendered, only the first node of a ProtoBody is drawn ")
        .addChild(new TimeSensor("SpinGroupClock")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("cycleInterval").setProtoField("cycleInterval"))
            .addConnect(new connect().setNodeField("loop").setProtoField("loop"))
            .addConnect(new connect().setNodeField("startTime").setProtoField("startTime"))
            .addConnect(new connect().setNodeField("stopTime").setProtoField("stopTime"))))
        .addChild(new OrientationInterpolator("Spinner").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,3.14,0.0,1.0,0.0,6.28})))
        .addChild(new ROUTE().setFromNode("SpinGroupClock").setFromField("fraction_changed").setToNode("Spinner").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Spinner").setFromField("value_changed").setToNode("SpinGroupTransform").setToField("set_rotation"))))
    .addComments(" Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare). ")
    .addChild(new Viewpoint().setDescription("Click on blue crossbar to activate second SpinGroup").setOrientation(1.0,0.0,0.0,-0.52).setPosition(0.0,18.0,30.0))
    .addComments(" Create an instance, meaning actual nodes that render ")
    .addChild(new ProtoInstance("SpinGroup").setContainerField("children")
      .addFieldValue(new fieldValue().setName("cycleInterval").setValue(8))
      .addFieldValue(new fieldValue().setName("loop").setValue(true))
      .addFieldValue(new fieldValue().setName("children")
        .addChild(new Shape()
          .setGeometry(new Box().setSize(25.0,2.0,2.0))
          .setAppearance(new Appearance("Green")
            .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.3))))
        .addChild(new Shape()
          .setGeometry(new Box().setSize(2.0,25.0,2.0))
          .setAppearance(new Appearance().setUSE("Green")))
        .addChild(new ProtoInstance("SpinGroup", "SecondSpinGroup").setContainerField("children")
          .addFieldValue(new fieldValue().setName("cycleInterval").setValue(4))
          .addFieldValue(new fieldValue().setName("loop").setValue(true))
          .addComments(" stopTime > startTime ensures that initial state is stopped ")
          .addFieldValue(new fieldValue().setName("stopTime").setValue(1))
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new TouchSensor("ActivateSecondSpinGroup").setDescription("Activate second SpinGroup by clicking blue bar"))
            .addChild(new Shape()
              .setGeometry(new Box().setSize(2.0,2.05,25.0))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.0,0.3,1.0))))))))
    .addChild(new ROUTE().setFromNode("ActivateSecondSpinGroup").setFromField("touchTime").setToNode("SecondSpinGroup").setToField("startTime")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Figure31_9SpinGroupPrototype model
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
        X3D thisExampleX3dModel = new Figure31_9SpinGroupPrototype().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Figure31_9SpinGroupPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Figure31_9SpinGroupPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
