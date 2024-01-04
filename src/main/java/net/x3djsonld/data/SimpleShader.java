package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Simple shader example. </p>
 <p> Related links: <a href="../../../Shaders/SimpleShader.java">SimpleShader.java</a> source, <a href="../../../Shaders/SimpleShaderIndex.html" target="_top">SimpleShader catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Shaders/SimpleShader.x3d">SimpleShader.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Simple shader example </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Stewart </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 May 2009 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 15 October 2009 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.opengl.org/wiki/Fragment_Shader" target="_blank">http://www.opengl.org/wiki/Fragment_Shader</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader" target="_blank">http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest" target="_blank">https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D shader example </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Shaders/originals/simpleShader.x3dv">originals/simpleShader.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Shaders/ShaderTutorialInstantReality.pdf">ShaderTutorialInstantReality.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Titania V3.0.3, <a href="http://titania.create3000.de" target="_blank">http://titania.create3000.de</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> World of Titania </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> outputStyle </i> </td>
			<td> nicest </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Shaders/../../license.html">../../license.html</a> </td>
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

	* @author John Stewart
 */

public class SimpleShader
{
	/** Default constructor to create this object. */
	public SimpleShader ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_2)
  .setHead(new head()
    .addComponent(new component().setName("Shaders").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("SimpleShader.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Simple shader example"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("John Stewart"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 May 2009"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("15 October 2009"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.opengl.org/wiki/Fragment_Shader"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D shader example"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("originals/simpleShader.x3dv"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ShaderTutorialInstantReality.pdf"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Titania V3.0.3, http://titania.create3000.de"))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("World of Titania"))
    .addMeta(new meta().setName("outputStyle").setContent("nicest"))
    .addComments("meta content='under development' name='warning'/")
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare("myPrototype").setName("myPrototype")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("myInputRange").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.95,0.44,0.22))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform("TR")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.5,0.5,0.9))
              .addShaders(new ComposedShader().setLanguage("GLSL")
                .addField(new field().setName("decis").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("decis").setProtoField("myInputRange")))
                .addParts(new ShaderPart())
                .addParts(new ShaderPart().setType("FRAGMENT")))
              .addShaders(new ComposedShader("Cobweb").setLanguage("GLSL")
                .addField(new field().setName("decis").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.95,0.77,0.44)))
                .addParts(new ShaderPart())
                .addParts(new ShaderPart("_1").setType("FRAGMENT"))))
            .setGeometry(new Sphere().setRadius(1.75))))))
    .addChild(new WorldInfo().setTitle("SimpleShader")
      .setMetadata(new MetadataSet("Titania").setName("Titania").setReference("http://titania.create3000.de")
        .setMetadata(new MetadataSet("Selection").setName("Selection").setReference("http://titania.create3000.de")
          .setMetadata(new MetadataSet("nodes").setName("nodes").setReference("http://titania.create3000.de")
            .addComments(" NULL ")))
        .setMetadata(new MetadataSet("NavigationInfo").setName("NavigationInfo").setReference("http://titania.create3000.de")
          .setMetadata(new MetadataString("type").setName("type").setReference("http://titania.create3000.de").setValue(new String[] {"EXAMINE"})))
        .setMetadata(new MetadataSet("Viewpoint").setName("Viewpoint").setReference("http://titania.create3000.de")
          .setMetadata(new MetadataDouble("position").setName("position").setReference("http://titania.create3000.de").setValue(new double[] {6.24067728185014,0.00250837343276661,2.92117542307615}))
          .setMetadata(new MetadataDouble("orientation").setName("orientation").setReference("http://titania.create3000.de").setValue(new double[] {-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191}))
          .setMetadata(new MetadataDouble("centerOfRotation").setName("centerOfRotation").setReference("http://titania.create3000.de").setValue(new double[] {-0.808320198626341,-0.358072370409949,0.22817191560906})))))
    .addChild(new ProtoInstance("myPrototype").setContainerField("children")));
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
	 * @return SimpleShader model
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
        System.out.println("Build this X3D model, showing diagnostics...");
        X3D thisExampleX3dModel = new SimpleShader().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.SimpleShader\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.SimpleShader self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}
