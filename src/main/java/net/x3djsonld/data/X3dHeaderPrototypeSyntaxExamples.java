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
			<td> 27 May 2017 </td>
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
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_3)
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Geospatial").setLevel(1))
    .addComponent(new componentObject().setName("NURBS").setLevel(2))
    .addComponent(new componentObject().setName("Core").setLevel(2))
    .addComponent(new componentObject().setName("Navigation").setLevel(1))
    .addComponent(new componentObject().setName("Text").setLevel(1))
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("X3dHeaderPrototypeSyntaxExamples.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding."))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("14 October 2002"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("27 May 2017"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new metaObject().setName(metaObject.NAME_SPECIFICATIONSECTION).setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax"))
    .addMeta(new metaObject().setName(metaObject.NAME_SPECIFICATIONURL).setContent("http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new ExternProtoDeclareObject("ViewPositionOrientation").setName("ViewPositionOrientation").setUrl(new String[] {"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"})
      .addField(new fieldObject().setName("enabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
      .addField(new fieldObject().setName("traceEnabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
      .addField(new fieldObject().setName("set_traceEnabled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
      .addField(new fieldObject().setName("position_changed").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
      .addField(new fieldObject().setName("orientation_changed").setType(fieldObject.TYPE_SFROTATION).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
      .addField(new fieldObject().setName("outputViewpointString").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new ProtoDeclareObject("NewWorldInfoNode").setName("NewWorldInfoNode")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new WorldInfoObject("ExamplePrototypeBody"))))
    .addChild(new ProtoInstanceObject("NewWorldInfoNode"))
    .addChild(new ProtoDeclareObject("EmissiveMaterial").setName("EmissiveMaterial")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("onlyColor").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColorObject(1.0f,0.0f,0.0f))))
      .setProtoBody(new ProtoBodyObject()
        .addComments(" Override default diffuseColor value 0.8 0.8 0.8 ")
        .addChild(new MaterialObject().setDiffuseColor(0.0f,0.0f,0.0f)
          .addComments(" Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare. ")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("onlyColor"))))))
    .addChild(new ProtoDeclareObject("ShiftGroupUp2m").setName("ShiftGroupUp2m")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("children").setType(fieldObject.TYPE_MFNODE).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
          .addChild(new GroupObject("DefaultNodeValue").setBboxSize(2.0f,2.0f,2.0f)
            .addComments(" Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\" "))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject().setTranslation(0.0f,2.0f,0.0f)
          .addChild(new GroupObject()
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("children").setProtoField("children")))))))
    .addChild(new ProtoInstanceObject("ShiftGroupUp2m"))
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
        .setGeometry(new SphereObject())
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject())))
      .addChild(new GroupObject().setUSE("ExampleChildElement")))
    .addChild(new TransformObject().setTranslation(0.0f,-2.5f,0.0f)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new ProtoInstanceObject("EmissiveMaterial")
            .addFieldValue(new fieldValueObject().setName("onlyColor").setValue(new SFColorObject(0.2f,0.6f,0.6f)))))
        .setGeometry(new TextObject().setString(new String[] {"X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"})
          .setFontStyle(new FontStyleObject().setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE).setSize(0.6f)))))
    .addChild(new ProtoInstanceObject("ViewPositionOrientation")
      .addFieldValue(new fieldValueObject().setName("enabled").setValue(true)))
    .addChild(new TimeSensorObject("Clock").setCycleInterval(4).setLoop(true))
    .addChild(new OrientationInterpolatorObject("Spinner").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,3.14159f,0.0f,1.0f,0.0f,6.28318f})))
    .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("Spinner").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Spinner").setFromField("value_changed").setToNode("TransformExampleUSE").setToField("rotation"))
    .addChild(new InlineObject("someInline").setUrl(new String[] {"someUrl.x3d","http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"}))
    .addChild(new IMPORTObject().setImportedDEF("someName").setInlineDEF("someInline").setAS("someInlineRoot"))
    .addChild(new PositionInterpolatorObject("StayInPlace").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,0.0f,0.0f})))
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
        X3DObject thisExampleX3dObject = new X3dHeaderPrototypeSyntaxExamples().getX3dModel();

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
			System.out.println("WARNING: \"X3dHeaderPrototypeSyntaxExamples\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"X3dHeaderPrototypeSyntaxExamples\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
