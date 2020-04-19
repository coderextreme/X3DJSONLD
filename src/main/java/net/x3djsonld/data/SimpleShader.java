package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
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
			<td> 24 April 2017 </td>
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
			<td> <a href="http://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest" target="_blank">http://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest</a> </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> comment </i> </td>
			<td> World of Titania </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> outputStyle </i> </td>
			<td> nicest </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d</a> </td>
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
		stylesheet to create Java source code from an <code>.x3d</code> model.
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
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_2)
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Shaders").setLevel(1))
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("SimpleShader.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("Simple shader example"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("John Stewart"))
    .addMeta(new metaObject().setName(metaObject.NAME_TRANSLATOR ).setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("26 May 2009"))
    .addMeta(new metaObject().setName(metaObject.NAME_TRANSLATED ).setContent("15 October 2009"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("24 April 2017"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://www.opengl.org/wiki/Fragment_Shader"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"))
    .addMeta(new metaObject().setName(metaObject.NAME_SUBJECT    ).setContent("X3D shader example"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("originals/simpleShader.x3dv"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("ShaderTutorialInstantReality.pdf"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("Titania V3.0.3, http://titania.create3000.de"))
    .addMeta(new metaObject().setName("comment").setContent("World of Titania"))
    .addMeta(new metaObject().setName("outputStyle").setContent("nicest"))
    .addMeta(new metaObject().setName(metaObject.NAME_WARNING    ).setContent("under development"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("http://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new SceneObject()
    .addChild(new ProtoDeclareObject("myPrototype").setName("myPrototype")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("myInputRange").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.95f,0.44f,0.22f))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject("TR")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(0.5f,0.5f,0.9f))
              .addShaders(new ComposedShaderObject("Cobweb").setLanguage("GLSL")
                .addField(new fieldObject().setName("decis").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.95f,0.77f,0.44f)))
                .addParts(new ShaderPartObject().setSourceCode("ecmascript: " + "\n" + 
"                  data:text/plain;charset=utf-8," + "\n" + 
"\n" + 
"precision mediump float;" + "\n" + 
"\n" + 
"uniform mat4 x3d_ProjectionMatrix;" + "\n" + 
"uniform mat4 x3d_ModelViewMatrix;" + "\n" + 
"uniform mat3 x3d_NormalMatrix;" + "\n" + 
"\n" + 
"attribute vec4 x3d_Vertex;" + "\n" + 
"attribute vec3 x3d_Normal;" + "\n" + 
"\n" + 
"varying vec3 normal;" + "\n" + 
"\n" + 
"void main()" + "\n" + 
"{" + "\n" + 
"	normal = x3d_NormalMatrix * x3d_Normal;" + "\n" + 
"	" + "\n" + 
"	gl_Position = x3d_ProjectionMatrix * x3d_ModelViewMatrix * x3d_Vertex;" + "\n" + 
"}" + "\n"))
                .addParts(new ShaderPartObject("_1").setType("FRAGMENT").setSourceCode("ecmascript: " + "\n" + 
"                  data:text/plain;charset=utf-8," + "\n" + 
"\n" + 
"precision mediump float;" + "\n" + 
"\n" + 
"uniform vec3 x3d_LightDirection [x3d_MaxLights];" + "\n" + 
"\n" + 
"varying vec3 normal;" + "\n" + 
"uniform vec3 decis;" + "\n" + 
"\n" + 
"void main()" + "\n" + 
"{" + "\n" + 
"	float intensity;" + "\n" + 
"	vec4 color;" + "\n" + 
"	vec3 n = normalize (normal);" + "\n" + 
"\n" + 
"	intensity = abs (dot (x3d_LightDirection [0], n));" + "\n" + 
"\n" + 
"	if (intensity > decis[0])" + "\n" + 
"		color = vec4(0.0,0.5,0.5,1.0);" + "\n" + 
"	else if (intensity > decis[1])" + "\n" + 
"		color = vec4(0.6,0.3,0.3,1.0);" + "\n" + 
"	else if (intensity > decis[2])" + "\n" + 
"		color = vec4(1.0,0.2,0.2,1.0);" + "\n" + 
"	else" + "\n" + 
"		color = vec4(0.0,0.4,0.0,1.0);" + "\n" + 
"\n" + 
"	gl_FragColor = color;" + "\n" + 
"} " + "\n"))))
            .setGeometry(new SphereObject().setRadius(1.75f))))))
    .addChild(new WorldInfoObject().setTitle("SimpleShader")
      .setMetadata(new MetadataSetObject("Titania").setName("Titania").setReference("http://titania.create3000.de")
        .addValue(new MetadataSetObject("Selection").setName("Selection").setReference("http://titania.create3000.de")
          .addValue(new MetadataSetObject("nodes").setName("nodes").setReference("http://titania.create3000.de")
            .addComments(" NULL ")))
        .addValue(new MetadataSetObject("NavigationInfo").setName("NavigationInfo").setReference("http://titania.create3000.de")
          .addValue(new MetadataStringObject("type").setName("type").setReference("http://titania.create3000.de").setValue(new String[] {"EXAMINE"})))
        .addValue(new MetadataSetObject("Viewpoint").setName("Viewpoint").setReference("http://titania.create3000.de")
          .addValue(new MetadataDoubleObject("position").setName("position").setReference("http://titania.create3000.de").setValue(new double[] {6.24067728185014,0.00250837343276661,2.92117542307615}))
          .addValue(new MetadataDoubleObject("orientation").setName("orientation").setReference("http://titania.create3000.de").setValue(new double[] {-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191}))
          .addValue(new MetadataDoubleObject("centerOfRotation").setName("centerOfRotation").setReference("http://titania.create3000.de").setValue(new double[] {-0.808320198626341,-0.358072370409949,0.22817191560906})))))
    .addChild(new ProtoInstanceObject("myPrototype")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return SimpleShader model
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
        X3DObject thisExampleX3dObject = new SimpleShader().getX3dModel();

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
			System.out.println("WARNING: \"SimpleShader\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"SimpleShader\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
