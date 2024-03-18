package net.x3djsonld.data;

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

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding. </p>
 <p> Related links: <a href="../../../X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.java">X3dHeaderPrototypeSyntaxExamples.java</a> source, <a href="../../../X3dSpecifications/X3dHeaderPrototypeSyntaxExamplesIndex.html" target="_top">X3dHeaderPrototypeSyntaxExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
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
			<td> <a href="https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax" target="_blank">https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d</a> </td>
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
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version&amp;nbsp;control</a>)
                is used to create Java source code from an original <code>.x3d</code> model.
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
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addComponent(new component().setName("NURBS").setLevel(2))
    .addComponent(new component().setName("Core").setLevel(2))
    .addComponent(new component().setName("Navigation").setLevel(1))
    .addComponent(new component().setName("Text").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("X3dHeaderPrototypeSyntaxExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding."))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("14 October 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("27 May 2017"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONSECTION).setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONURL).setContent("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new ExternProtoDeclare("ViewPositionOrientation").setName("ViewPositionOrientation").setUrl(new String[] {"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"})
      .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("set_traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("position_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("orientation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("outputViewpointString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new ProtoDeclare("NewWorldInfoNode").setName("NewWorldInfoNode")
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo("ExamplePrototypeBody"))))
    .addChild(new ProtoInstance("NewWorldInfoNode").setContainerField("children"))
    .addChild(new ProtoDeclare("EmissiveMaterial").setName("EmissiveMaterial")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("onlyColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(1.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addComments(" Override default diffuseColor value 0.8 0.8 0.8 ")
        .addChild(new Material().setDiffuseColor(0.0,0.0,0.0)
          .addComments(" Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare. ")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("emissiveColor").setProtoField("onlyColor"))))))
    .addChild(new ProtoDeclare("ShiftGroupUp2m").setName("ShiftGroupUp2m")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addChild(new Group("DefaultNodeValue").setBboxSize(2.0,2.0,2.0)
            .addComments(" Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\" "))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform().setTranslation(0.0,2.0,0.0)
          .addChild(new Group()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("children")))))))
    .addChild(new ProtoInstance("ShiftGroupUp2m").setContainerField("children"))
    .addComments(" ==================== ")
    .addChild(new Viewpoint("ExampleSingleElement").setDescription("Hello syntax"))
    .addChild(new Group("ExampleChildElement")
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.6,0.4,0.2)))
        .setGeometry(new Box())))
    .addChild(new Transform("TransformExampleUSE").setRotation(0.0,1.0,0.0,0.78).setTranslation(0.0,2.5,0.0)
      .addChild(new Group().setUSE("ExampleChildElement")))
    .addChild(new Collision()
      .addChild(new Group().setUSE("ExampleChildElement"))
      .setProxy(new Shape()
        .addComments(" note that Collision proxy Shape is not rendered ")
        .setAppearance(new Appearance()
          .setMaterial(new Material()))
        .setGeometry(new Sphere())))
    .addChild(new Transform().setTranslation(0.0,-2.5,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new ProtoInstance("EmissiveMaterial").setContainerField("material")
            .addFieldValue(new fieldValue().setName("onlyColor").setValue(new SFColor(0.2,0.6,0.6)))))
        .setGeometry(new Text().setString(new String[] {"X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.6)))))
    .addChild(new ProtoInstance("ViewPositionOrientation").setContainerField("children")
      .addFieldValue(new fieldValue().setName("enabled").setValue(true)))
    .addChild(new TimeSensor("Clock").setCycleInterval(4.0).setLoop(true))
    .addChild(new OrientationInterpolator("Spinner").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,3.14159,0.0,1.0,0.0,6.28318})))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("Spinner").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Spinner").setFromField("value_changed").setToNode("TransformExampleUSE").setToField("rotation"))
    .addChild(new Inline("someInline").setUrl(new String[] {"someUrl.x3d","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"}))
    .addChild(new IMPORT().setImportedDEF("someName").setInlineDEF("someInline").setAS("someInlineRoot"))
    .addChild(new PositionInterpolator("StayInPlace").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0})))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("StayInPlace").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StayInPlace").setFromField("value_changed").setToNode("someInlineRoot").setToField("set_translation")));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return X3dHeaderPrototypeSyntaxExamples model
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
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new X3dHeaderPrototypeSyntaxExamples().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
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
                System.out.println("WARNING: \"net.x3djsonld.data.X3dHeaderPrototypeSyntaxExamples\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.X3dHeaderPrototypeSyntaxExamples self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}
