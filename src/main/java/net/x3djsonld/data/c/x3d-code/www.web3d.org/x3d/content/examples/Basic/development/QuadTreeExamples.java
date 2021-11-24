package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Show four ways of solving the QuadTree problem using native XML tags, PROTOs, IDREF/USE and MFNode children compatibly - view XML source to see DTD internal-subset declarations. </p>
 <p> Related links: QuadTreeExamples.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.QuadTreeExamples&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/QuadTreeExamples.x3d">QuadTreeExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 June 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 January 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Show four ways of solving the QuadTree problem using native XML tags, PROTOs, IDREF/USE and MFNode children compatibly - view XML source to see DTD internal-subset declarations. </td>
		</tr>
		<tr style="color:red">
			<td style="text-align:right; vertical-align: text-top;"> <i> error </i> </td>
			<td> Test to demonstrate DOCTYPE extensibility, this X3D scene not valid and does not render. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> You must view full source of the DTD declarations (QuadTreeExamples.x3d.txt) to fully understand validation techniques in this file. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/QuadTreeExamplesExplanation.html">QuadTreeExamplesExplanation.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> QuadTreeExamples.x3d.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> QuadTreeExamples.png </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/QuadTreeExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/development/QuadTreeExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.1, <a href="https://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">https://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman
 */

public class QuadTreeExamples
{
	/** Default constructor to create this object. */
	public QuadTreeExamples ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("QuadTreeExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 June 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 January 2020"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Show four ways of solving the QuadTree problem using native XML tags, PROTOs, IDREF/USE and MFNode children compatibly - view XML source to see DTD internal-subset declarations."))
    .addMeta(new meta().setName(meta.NAME_ERROR      ).setContent("Test to demonstrate DOCTYPE extensibility, this X3D scene not valid and does not render."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("You must view full source of the DTD declarations (QuadTreeExamples.x3d.txt) to fully understand validation techniques in this file."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("QuadTreeExamplesExplanation.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("QuadTreeExamples.x3d.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("QuadTreeExamples.png"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/development/QuadTreeExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ")
    .addComments(" Example solution approach #1 ")
    .addComments(" Note that PROTO declarations are also provided for compatible backwards translation to VRML 97 encoding. They are not necessary for independent X3D use of the QuadTree examples. ")
    .addChild(new ProtoDeclare("QuadTree-USEchildren").setName("QuadTree-USEchildren")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("upperLeftDEFName").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("upperRightDEFName").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("lowerLeftDEFName").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("lowerRightDEFName").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addComments(" children field must be declared for any PROTOs or native-tag nodes with children "))
      .setProtoBody(new ProtoBody()
        .addComments(" VRML 97 specification paragraph 4.8.3, PROTO definition semantics: \"A prototype definition consists of one or more nodes.\" PROTO body follows. ")
        .addChild(new Group()
          .addChild(new Group("GroupA")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("upperLeftDEFName"))))
          .addChild(new Group("GroupB")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("upperRightDEFName"))))
          .addChild(new Group("GroupC")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("lowerLeftDEFName"))))
          .addChild(new Group("GroupD")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("lowerRightDEFName")))))))
    .addComments(" Example solution approach #3 ")
    .addChild(new ProtoDeclare("QuadTree-TagChildren").setName("QuadTree-TagChildren")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("upperLeftNode").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addComments(" no initialization node "))
        .addField(new field().setName("upperRightNode").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addComments(" no initialization node "))
        .addField(new field().setName("lowerLeftNode").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addComments(" no initialization node "))
        .addField(new field().setName("lowerRightNode").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addComments(" no initialization node "))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
      .setProtoBody(new ProtoBody()
        .addComments(" PROTO body follows. ")
        .addChild(new Group()
          .addChild(new Group("GroupE")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("upperLeftNode"))))
          .addChild(new Group("GroupF")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("upperRightNode"))))
          .addChild(new Group("GroupG")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("lowerLeftNode"))))
          .addChild(new Group("GroupH")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("lowerRightNode")))))))
    .addComments(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ")
    .addChild(new Group()
      .addChild(new Viewpoint().setDescription("View QuadTree examples").setPosition(0.0,0.0,30.0))
      .addChild(new Transform("Example_1").setTranslation(0.0,6.0,0.0)
        .addChild(new ProtoInstance("QuadTree-USEchildren").setContainerField("children")
          .addFieldValue(new fieldValue().setName("children")
            .addChild(new Group()
              .addChild(new Transform("UPPER_LEFT").setTranslation(4.0,0.0,4.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance("RED")
                    .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
                  .setGeometry(new Box())))
              .addChild(new Transform("UPPER_RIGHT").setTranslation(3.0,0.0,-3.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance("GREEN")
                    .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0)))
                  .setGeometry(new Sphere())))
              .addChild(new Transform("LOWER_LEFT").setTranslation(-3.0,0.0,-3.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance("BLUE")
                    .setMaterial(new Material().setDiffuseColor(.2,.2,1.0)))
                  .setGeometry(new Cylinder())))
              .addChild(new Transform("LOWER_RIGHT").setTranslation(-6.0,0.0,4.0)
                .addChild(new Shape()
                  .setAppearance(new Appearance("WHITE")
                    .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
                  .setGeometry(new Text().setString(new String[] {"QuadTree-USEchildren","ProtoInstance"}))))))
          .addFieldValue(new fieldValue().setName("upperLeftDEFName")
            .addChild(new Transform().setUSE("UPPER_LEFT")))
          .addFieldValue(new fieldValue().setName("upperRightDEFName")
            .addChild(new Transform().setUSE("UPPER_RIGHT")))
          .addFieldValue(new fieldValue().setName("lowerLeftDEFName")
            .addChild(new Transform().setUSE("LOWER_LEFT")))
          .addFieldValue(new fieldValue().setName("lowerRightDEFName")
            .addChild(new Transform().setUSE("LOWER_RIGHT")))))
      .addChild(new Transform("Example_2").setTranslation(0.0,2.0,0.0)
        .setQuadTree-USEchildren(new QuadTree-USEchildren().setNodeType("Group"
// [*** X3dToJava.xslt error: encountered incorrect type (check incorrect capitalization), QuadTree-USEchildren nodeType: $isNumeric=false, $attributeType=, value='Group']
)
          .addFieldValue(new fieldValue().setName("children")
            .addComments(" children which follow are locally convenient and referenced via IDREF/USE ")
            .addChild(new Transform("LOWER_RIGHT_EXAMPLE_2").setTranslation(-6.0,0.0,4.0)
              .addChild(new Shape()
                .setGeometry(new Text().setString(new String[] {"QuadTree-USEchildren","Native tags"}))
                .setAppearance(new Appearance().setUSE("WHITE")))))
          .addFieldValue(new fieldValue().setName("upperLeftDEFName")
            .addChild(new Transform().setUSE("UPPER_LEFT")))
          .addFieldValue(new fieldValue().setName("upperRightDEFName")
            .addChild(new Transform().setUSE("UPPER_RIGHT")))
          .addFieldValue(new fieldValue().setName("lowerLeftDEFName")
            .addChild(new Transform().setUSE("LOWER_LEFT")))
          .addFieldValue(new fieldValue().setName("lowerRightDEFName")
            .addChild(new Transform().setUSE("LOWER_RIGHT_EXAMPLE_2")))))
      .addChild(new Transform("Example_3").setTranslation(0.0,-2.0,0.0)
        .addChild(new ProtoInstance("QuadTree-TagChildren").setContainerField("children")
          .addFieldValue(new fieldValue().setName("upperLeftNode")
            .addChild(new Transform().setUSE("UPPER_LEFT")))
          .addFieldValue(new fieldValue().setName("upperRightNode")
            .addChild(new Transform().setUSE("UPPER_RIGHT")))
          .addFieldValue(new fieldValue().setName("lowerLeftNode")
            .addChild(new Transform().setUSE("LOWER_LEFT")))
          .addFieldValue(new fieldValue().setName("lowerRightNode")
            .addChild(new Transform().setTranslation(-6.0,0.0,4.0)
              .addChild(new Shape()
                .setGeometry(new Text().setString(new String[] {"QuadTree-TagChildren","ProtoInstance"}))
                .setAppearance(new Appearance().setUSE("WHITE")))))))
      .addChild(new Transform("Example_4").setTranslation(0.0,-6.0,0.0)
        .setQuadTree-TagChildren(new QuadTree-TagChildren().setNodeType("Group"
// [*** X3dToJava.xslt error: encountered incorrect type (check incorrect capitalization), QuadTree-TagChildren nodeType: $isNumeric=false, $attributeType=, value='Group']
)
          .addFieldValue(new fieldValue().setName("upperLeftNode")
            .addChild(new Transform().setUSE("UPPER_LEFT")))
          .addFieldValue(new fieldValue().setName("upperRightNode")
            .addChild(new Transform().setUSE("UPPER_RIGHT")))
          .addFieldValue(new fieldValue().setName("lowerLeftNode")
            .addChild(new Transform().setUSE("LOWER_LEFT")))
          .addFieldValue(new fieldValue().setName("lowerRightNode")
            .addChild(new Transform().setTranslation(-6.0,0.0,4.0)
              .addChild(new Shape()
                .setGeometry(new Text().setString(new String[] {"QuadTree-TagChildren","Native tags"}))
                .setAppearance(new Appearance().setUSE("WHITE"))))
            .addChild(new WorldInfo().setInfo(new String[] {"this WorldInfo is here to demonstrate that the example is type MFNode"}))))))
    .addComments(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return QuadTreeExamples model
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
        X3D thisExampleX3dModel = new QuadTreeExamples().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.QuadTreeExamples\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.QuadTreeExamples\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
