package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> a flower. </p>
 <p> Related links: flowers7.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.flowers7&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/flowers7.x3d">flowers7.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/flowers7.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/flowers7.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a flower </td>
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

public class flowers7
{
	/** Default constructor to create this object. */
	public flowers7 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Shaders").setLevel(1))
    .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
    .addMeta(new metaObject().setName("title").setContent("flowers7.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("generator").setContent("manual"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowers7.x3d"))
    .addMeta(new metaObject().setName("description").setContent("a flower")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject())
    .addComments(" Images courtesy of Paul Debevec's Light Probe Image Gallery ")
    .addChild(new BackgroundObject("background").setBackUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png\"")).setBottomUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png\"")).setFrontUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png\"")).setLeftUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png\"")).setRightUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png\"")).setTopUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png\"")))
    .addChild(new ViewpointObject().setDescription("Transparent rose").setPosition(0.0f,0.0f,40.0f))
    .addChild(new TransformObject()
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setSpecularColor(.5f,.5f,.5f).setDiffuseColor(.7f,.7f,.7f))
          .setTexture(new ComposedCubeMapTextureObject("texture")
            .setBack(new ImageTextureObject("backShader").setUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png\"")))
            .setBottom(new ImageTextureObject("bottomShader").setUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png\"")))
            .setFront(new ImageTextureObject("frontShader").setUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png\"")))
            .setLeft(new ImageTextureObject("leftShader").setUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png\"")))
            .setRight(new ImageTextureObject("rightShader").setUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png\"")))
            .setTop(new ImageTextureObject("topShader").setUrl(new MFStringObject("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png\""))))
          .addShaders(new ComposedShaderObject("x3dom").setLanguage("GLSL")
            .addField(new fieldObject().setAccessType("inputOutput").setName("cube").setType("SFInt32").setValue("0"))
            .addComments(new String[] {" ",
"		       <field name='cube' type='SFNode' accessType=\"inputOutput\">",
"			  <ComposedCubeMapTexture USE=\"texture\"/>",
"		  </field>"})
            .addField(new fieldObject().setAccessType("initializeOnly").setName("chromaticDispertion").setType("SFVec3f").setValue("0.98 1.0 1.033"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("bias").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFFloat").setValue("0.5"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("power").setType("SFFloat").setValue("2"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("a").setType("SFFloat").setValue("10"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("b").setType("SFFloat").setValue("1"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("c").setType("SFFloat").setValue("20"))
            .addField(new fieldObject().setAccessType("inputOutput").setName