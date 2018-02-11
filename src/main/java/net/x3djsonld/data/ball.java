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
 * <p> a prismatic sphere. </p>
 <p> Related links: ball.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.ball&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/ball.x3d">ball.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/ball.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/ball.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a prismatic sphere </td>
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

public class ball
{
	/** Default constructor to create this object. */
	public ball ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addComponent(new componentObject().setName("EnvironmentalEffects").setLevel(1))
    .addComponent(new componentObject().setName("EnvironmentalEffects").setLevel(3))
    .addComponent(new componentObject().setName("Shaders").setLevel(1))
    .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
    .addMeta(new metaObject().setName("title").setContent("ball.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("generator").setContent("manual"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/ball.x3d"))
    .addMeta(new metaObject().setName("description").setContent("a prismatic sphere")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject().setType(new MFStringObject("\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\"")))
    .addChild(new ViewpointObject().setDescription("Tour Views"))
    .addChild(new BackgroundObject().setBackUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\"")))
    .addChild(new TransformObject()
      .addChild(new ShapeObject()
        .setGeometry(new SphereObject())
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setSpecularColor(0.5f,0.5f,0.5f).setDiffuseColor(0.7f,0.7f,0.7f))
          .setTexture(new ComposedCubeMapTextureObject("texture")
            .setBack(new ImageTextureObject().setUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png\"")))
            .setBottom(new ImageTextureObject().setUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
            .setFront(new ImageTextureObject().setUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png\"")))
            .setLeft(new ImageTextureObject().setUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png\"")))
            .setRight(new ImageTextureObject().setUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png\"")))
            .setTop(new ImageTextureObject().setUrl(new MFStringObject("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png\""))))
          .addComments(new String[] {"",
"                    <ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'>",
"                        <ShaderProgram url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/freewrl.vs\"' containerField='programs' type='VERTEX'>",
"                        <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/>",
"                        <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/>",
"                        <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/>",
"                        <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/>",
"                        </ShaderProgram>",
"                        <ShaderProgram url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/>",
"		    </ProgramShader>"})
          .addComments(new String[] {"",
"                <ComposedShader language='GLSL'>",
"		  <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>",
"		  <field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\">",
"			<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>",
"		  </field>",
"		  <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>",
"		  <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>",
"		  <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>",
"		  <ShaderPart url='\"../shaders/contact.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/contact.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>",
"		  <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>",
"                </ComposedShader>"})
          .addComments(new String[] {"",
"                <ComposedShader language='GLSL'>",
"		  <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>",
"		  <field name='cube' type='SFNode' accessType=\"inputOutput\">",
"			<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>",
"		  </field>",
"		  <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>",
"		  <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>",
"		  <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>",
"		  <ShaderPart url='\"../shaders/octaga.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/octaga.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>",
"		  <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>",
"                </ComposedShader>"})
          .addComments(new String[] {"",
"                <ComposedShader language='GLSL'>",
"		  <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>",
"		  <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field>",
"		  <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>",
"		  <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>",
"		  <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>",
"		  <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/shaders/instant.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>",
"		  <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>",
"                </ComposedShader>"})
          .addComments(new String[] {""})
          .addShaders(new ComposedShaderObject().setLanguage("GLSL")
            .addField(new fieldObject().setAccessType("inputOutput").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1 1.033"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("cube").setType("SFNode")
              .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
            .addField(new fieldObject().setAccessType("inputOutput").setName("bias").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("power").setType("SFFloat").setValue("2"))
            .addParts(new ShaderPartObject().setUrl(new MFStringObject("\"../shaders/x3dom.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"")))
            .addParts(new ShaderPartObject("common").setType("FRAGMENT").setUrl(new MFStringObject("\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\""))))
          .addShaders(new ComposedShaderObject().setLanguage("GLSL")
            .addField(new fieldObject().setAccessType("initializeOnly").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1 1.033"))
            .addField(new fieldObject().setAccessType("initializeOnly").setName("cube").setType("SFNode")
              .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
            .addField(new fieldObject().setAccessType("initializeOnly").setName("bias").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("initializeOnly").setName("scale").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("initializeOnly").setName("power").setType("SFFloat").setValue("2"))
            .addParts(new ShaderPartObject().setUrl(new MFStringObject("\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"")))
            .addParts(new ShaderPartObject().setUSE("common")))))));
  }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return ball model
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
        X3DObject exampleObject = new ball().getX3dModel();

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
			System.out.print("ball self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
