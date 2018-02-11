package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> 5 or more prismatic flowers. </p>
 <p> Related links: plainflowers.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.plainflowers&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/sphereflowers.x3d">sphereflowers.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 5 or more prismatic flowers </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/sphereflowers.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/sphereflowers.x3d</a> </td>
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

	* @author John Carlson
 */

public class plainflowers
{
	/** Default constructor to create this object. */
	public plainflowers ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("sphereflowers.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("description").setContent("5 or more prismatic flowers"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/sphereflowers.x3d")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject())
    .addChild(new BackgroundObject().setBackUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\"")))
    .addChild(new GroupObject()
      .addChild(new ExternProtoDeclareObject().setName("FlowerProto").setUrl(new MFStringObject("\"../data/flowerproto.x3d#FlowerProto\""))
        .addField(new fieldObject().setAccessType("inputOutput").setName("vertex").setType("MFString"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("fragment").setType("MFString")))
      .addChild(new ProtoDeclareObject().setName("flower")
        .setProtoBody(new ProtoBodyObject()
          .addChild(new GroupObject()
            .addChild(new ProtoInstanceObject().setName("FlowerProto")
              .addFieldValue(new fieldValueObject().setName("vertex").setValue("\"../shaders/x_ite_flowers_plain.vs\""))
              .addFieldValue(new fieldValueObject().setName("fragment").setValue("\"../shaders/plain.fs\""))))))
      .addChild(new ProtoInstanceObject().setName("flower"))
      .addChild(new ProtoInstanceObject().setName("flower"))
      .addChild(new ProtoInstanceObject().setName("flower"))
      .addChild(new ProtoInstanceObject().setName("flower"))
      .addChild(new ProtoInstanceObject().setName("flower"))
      .addChild(new ProtoInstanceObject().setName("flower"))));
  }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return plainflowers model
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
        X3DObject exampleObject = new plainflowers().getX3dModel();

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
			System.out.print("plainflowers self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
