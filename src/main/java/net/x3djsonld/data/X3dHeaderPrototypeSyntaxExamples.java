package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding. </p>
 <p> Related links: <a href="../../../X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.java">X3dHeaderPrototypeSyntaxExamples.java</a> source, <a href="../../../X3dSpecifications/X3dHeaderPrototypeSyntaxExamplesIndex.html" target="_top">X3dHeaderPrototypeSyntaxExamples catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d">X3dHeaderPrototypeSyntaxExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 14 October 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 7 May 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax" target="_blank">http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../X3dSpecifications/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman
 */

public class X3dHeaderPrototypeSyntaxExamples
{
	/** Default constructor to create this object. */
	public X3dHeaderPrototypeSyntaxExamples ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Geospatial").setLevel(1))
    .addComponent(new componentObject().setName("NURBS").setLevel(2))
    .addComponent(new componentObject().setName("Core").setLevel(2))
    .addComponent(new componentObject().setName("Navigation").setLevel(1))
    .addComponent(new componentObject().setName("Text").setLevel(1))
    .addMeta(new metaObject().setName("title").setContent("X3dHeaderPrototypeSyntaxExamples.x3d"))
    .addMeta(new metaObject().setName("description").setContent("X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding."))
    .addMeta(new metaObject().setName("created").setContent("14 October 2002"))
    .addMeta(new metaObject().setName("modified").setContent("7 May 2017"))
    .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
    .addMeta(new metaObject().setName("specificationSection").setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax"))
    .addMeta(new metaObject().setName("specificationUrl").setContent("http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax"))
    .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new ExternProtoDeclareObject().setName("ViewPositionOrientation").setUrl(new MFStringObject("\"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation\" \"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation\" \"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation\" \"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation\""))
      .addField(new fieldObject().setAccessType("inputOutput").setName("enabled").setType("SFBool"))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_traceEnabled").setType("SFBool"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("position_changed").setType("SFVec3f"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("orientation_changed").setType("SFRotation"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("outputViewpointString").setType("MFString")))
    .addChild(new ProtoDeclareObject().setName("NewWorldInfoNode")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new WorldInfoObject("ExamplePrototypeBody"))))
    .addChild(new ProtoInstanceObject().setName("NewWorldInfoNode"))
    .addChild(new ProtoDeclareObject().setName("EmissiveMaterial")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("onlyColor").setType("SFColor").setValue("1 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addComments(" Override default diffuseColor value 0.8 0.8 0.8 ")
        .addChild(new MaterialObject().setDiffuseColor(0.0f,0.0f,0.0f)
          .addComments(" Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare. ")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("onlyColor"))))))
    .addChild(new ProtoDeclareObject().setName("ShiftGroupUp2m")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode")
          .addChild(new GroupObject("DefaultNodeValue").setBboxSize(2.0f,2.0f,2.0f)
            .addComments(" Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\" "))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject().setTranslation(0.0f,2.0f,0.0f)
          .addChild(new GroupObject()
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("children").setProtoField("children")))))))
    .addChild(new ProtoInstanceObject().setName("ShiftGroupUp2m"))
    .addComments(" ==================== ")
    .addChild(new ViewpointObject("ExampleSingleElement").setDescription("Hello syntax"))
    .addChild(new GroupObject("ExampleChildElement")
      .addChild(new ShapeObject()
        .setGeometry(new BoxObject())
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.6f,0.4f,0.2f)))))
    .addChild(new TransformObject("TransformExampleUSE").setRotation(0.0f,1.0f,0.0f,0.78f).setTranslation(0.0f,2.5f,0.0f)
      .addChild(new GroupObject().setUSE("ExampleChildElement")))
    .addChild(new CollisionObject()
      .setProxy(new ShapeObject()
        .addComments(" note that Collision proxy Shape is not rendered ")
        .setGeometry(new TextObject().setString(new MFStringObject("\"He said, \\\"Immel did it!\\\"\"")))
        .addComments(" alternative: Text string='\"He said, \\&quot;Immel did it!\\&quot;\"' ")
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject())))
      .addChild(new GroupObject().setUSE("ExampleChildElement")))
    .addChild(new TransformObject().setTranslation(0.0f,-2.5f,0.0f)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new ProtoInstanceObject().setName("EmissiveMaterial")
            .addFieldValue(new fieldValueObject().setName("onlyColor").setValue("0.2 0.6 0.6"))))
        .setGeometry(new TextObject().setString(new MFStringObject("\"X3D Header Prototype syntax examples\" \"(view console for EXTERNPROTO output)\""))
          .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setSize(0.6f)))))
    .addChild(new ProtoInstanceObject().setName("ViewPositionOrientation")
      .addFieldValue(new fieldValueObject().setName("enabled").setValue("true")))
    .addChild(new TimeSensorObject("Clock").setCycleInterval(4).setLoop(true))
    .addChild(new OrientationInterpolatorObject("Spinner").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,3.14159f,0.0f,1.0f,0.0f,6.28318f})))
    .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("Spinner").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Spinner").setFromField("value_changed").setToNode("TransformExampleUSE").setToField("rotation"))
    .addChild(new InlineObject("someInline").setUrl(new MFStringObject("\"someUrl.x3d\" \"http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d\"")))
    .addChild(new IMPORTObject().setImportedDEF("someName").setInlineDEF("someInline").setAS("someInlineRoot"))
    .addChild(new PositionInterpolatorObject("StayInPlace").setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,0.0f,0.0f})).setKey(new float[] {0.0f,1.0f}))
    .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("StayInPlace").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("StayInPlace").setFromField("value_changed").setToNode("someInlineRoot").setToField("set_translation")));
  }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return X3dHeaderPrototypeSyntaxExamples model
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
        X3DObject exampleObject = new X3dHeaderPrototypeSyntaxExamples().getX3dModel();

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
			System.out.print("X3dHeaderPrototypeSyntaxExamples self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
