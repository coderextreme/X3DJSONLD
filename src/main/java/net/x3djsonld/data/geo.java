package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> a sphere. </p>
 <p> Related links: geo.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.geo&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/geo.x3d">geo.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/geo.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/geo.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a sphere </td>
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

public class geo
{
	/** Default constructor to create this object. */
	public geo ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_3)
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Shaders").setLevel(1))
    .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("geo.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("John Carlson"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/geo.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("a sphere")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject().setType(new String[] {"ANY","EXAMINE","FLY","LOOKAT"}))
    .addChild(new ViewpointObject("Tour").setDescription("Tour Views"))
    .addComments("Viewpoint position='0 0 4' description='sphere in road'/")
    .addChild(new BackgroundObject().setBackUrl(new String[] {"resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"}).setBottomUrl(new String[] {"resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"}).setFrontUrl(new String[] {"resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"}).setLeftUrl(new String[] {"resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"}).setRightUrl(new String[] {"resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"}).setTopUrl(new String[] {"resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"}))
    .addChild(new TransformObject()
      .addChild(new ShapeObject()
        .setGeometry(new SphereObject())
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.7f,0.7f,0.7f).setSpecularColor(0.5f,0.5f,0.5f))
          .setTexture(new ComposedCubeMapTextureObject("texture")
            .setBack(new ImageTextureObject().setUrl(new String[] {"resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"}))
            .setBottom(new ImageTextureObject().setUrl(new String[] {"resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"}))
            .setFront(new ImageTextureObject().setUrl(new String[] {"resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"}))
            .setLeft(new ImageTextureObject().setUrl(new String[] {"resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"}))
            .setRight(new ImageTextureObject().setUrl(new String[] {"resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"}))
            .setTop(new ImageTextureObject().setUrl(new String[] {"resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"})))
          .addShaders(new ComposedShaderObject().setLanguage("GLSL")
            .addField(new fieldObject().setName("chromaticDispertion").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3fObject(0.98f,1.0f,1.033f)))
            .addField(new fieldObject().setName("cube").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
            .addField(new fieldObject().setName("bias").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(0.5f))
            .addField(new fieldObject().setName("scale").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(0.5f))
            .addField(new fieldObject().setName("power").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(2f))
            .addParts(new ShaderPartObject().setUrl(new String[] {"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}))
            .addParts(new ShaderPartObject("common").setType("FRAGMENT").setUrl(new String[] {"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"})))
          .addShaders(new ComposedShaderObject().setLanguage("GLSL")
            .addField(new fieldObject().setName("chromaticDispertion").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.98f,1.0f,1.033f)))
            .addField(new fieldObject().setName("cube").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
            .addField(new fieldObject().setName("bias").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(0.5f))
            .addField(new fieldObject().setName("scale").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(0.5f))
            .addField(new fieldObject().setName("power").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(2f))
            .addParts(new ShaderPartObject().setUrl(new String[] {"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}))
            .addParts(new ShaderPartObject().setUSE("common")))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return geo model
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
        X3DObject thisExampleX3dObject = new geo().getX3dModel();

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
			System.out.println("WARNING: \"geo\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"geo\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
