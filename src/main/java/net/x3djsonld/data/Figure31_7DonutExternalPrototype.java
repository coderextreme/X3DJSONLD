package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A donut shape built using prototypes: the Donut geometry node and the LightOak appearance node. Also see Figures 30.5 and 31.6 for comparison. </p>
 <p> Related links: <a href="../../../Chapter31Prototypes/Figure31_7DonutExternalPrototype.java">Figure31_7DonutExternalPrototype.java</a> source, <a href="../../../Chapter31Prototypes/Figure31_7DonutExternalPrototypeIndex.html" target="_top">Figure31_7DonutExternalPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter31Prototypes/Figure31_7DonutExternalPrototype.x3d">Figure31_7DonutExternalPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Figure 31.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig07.htm" target="_blank">http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig07.htm</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 22 November 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A donut shape built using prototypes: the Donut geometry node and the LightOak appearance node. Also see Figures 30.5 and 31.6 for comparison. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_7DonutExternalPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_7DonutExternalPrototype.x3d</a> </td>
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

	* @author Figure 31.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland
 */

public class Figure31_7DonutExternalPrototype
{
	/** Default constructor to create this object. */
	public Figure31_7DonutExternalPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_0)
  .setHead(new headObject()
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("Figure31_7DonutExternalPrototype.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("Figure 31.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig07.htm"))
    .addMeta(new metaObject().setName(metaObject.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("22 November 2000"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("A donut shape built using prototypes: the Donut geometry node and the LightOak appearance node. Also see Figures 30.5 and 31.6 for comparison."))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_7DonutExternalPrototype.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("Figure31_7DonutExternalPrototype.x3d"))
    .addChild(new ExternProtoDeclareObject("Donut").setName("Donut").setUrl(new String[] {"Figure31_6DonutPrototype.wrl#Donut","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.wrl#Donut","Figure31_6DonutPrototype.x3d#Donut","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.x3d#Donut"})
      .addField(new fieldObject().setName("crossSectionRadius").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
      .addField(new fieldObject().setName("spineRadius").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
      .addField(new fieldObject().setName("crossSectionResolution").setType(fieldObject.TYPE_SFINT32).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
      .addField(new fieldObject().setName("spineResolution").setType(fieldObject.TYPE_SFINT32).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
      .addField(new fieldObject().setName("set_crossSectionRadius").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
      .addField(new fieldObject().setName("set_spineRadius").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)))
    .addChild(new ExternProtoDeclareObject("LightOak").setName("LightOak").setUrl(new String[] {"Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak","Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak"})
      .addField(new fieldObject().setName("textureTransform").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ViewpointObject().setDescription("Click to pick a size").setOrientation(1.0f,0.0f,0.0f,-0.52f).setPosition(0.0f,7.0f,12.0f))
    .addComments(" Donut instances from prototypes ")
    .addChild(new TransformObject().setTranslation(0.0f,2.0f,0.0f)
      .addChild(new ShapeObject()
        .setGeometry(new ProtoInstanceObject("Donut")
          .addFieldValue(new fieldValueObject().setName("crossSectionRadius").setValue(1f))
          .addFieldValue(new fieldValueObject().setName("spineRadius").setValue(2f)))
        .setAppearance(new ProtoInstanceObject("LightOak")
          .addFieldValue(new fieldValueObject().setName("textureTransform")
            .addChild(new TextureTransformObject().setCenter(-0.0f,5.0f).setRotation(0.758f).setScale(2.0f,0.5f).setTranslation(0.5f,0.0f))))))
    .addComments(" Hmmm, what size donut do you really want? ")
    .addChild(new TimeSensorObject("Clock").setCycleInterval(10).setLoop(true))
    .addChild(new ScalarInterpolatorObject("DonutThickness").setKey(new float[] {0.0f,0.4f,0.5f,0.9f,1.0f}).setKeyValue(new float[] {0.75f,1.25f,1.25f,0.75f,0.75f}))
    .addChild(new TransformObject().setTranslation(0.0f,-2.0f,0.0f)
      .addChild(new ShapeObject()
        .setGeometry(new ProtoInstanceObject("Donut", "SpecialtyOfTheHouse")
          .addFieldValue(new fieldValueObject().setName("crossSectionRadius").setValue(0.5f))
          .addFieldValue(new fieldValueObject().setName("spineRadius").setValue(2f)))
        .setAppearance(new AppearanceObject()
          .setTexture(new ImageTextureObject().setUrl(new String[] {"../Chapter17Textures/icing.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter17Textures/icing.jpg"}))))
      .addChild(new TouchSensorObject("StopSizeChanges").setDescription("touch to stop size changes")))
    .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("DonutThickness").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("DonutThickness").setFromField("value_changed").setToNode("SpecialtyOfTheHouse").setToField("set_crossSectionRadius"))
    .addChild(new ROUTEObject().setFromNode("StopSizeChanges").setFromField("touchTime").setToNode("Clock").setToField("stopTime")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return Figure31_7DonutExternalPrototype model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject thisExampleX3dObject = new Figure31_7DonutExternalPrototype().getX3dModel();

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
			System.out.println("WARNING: \"Figure31_7DonutExternalPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"Figure31_7DonutExternalPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
