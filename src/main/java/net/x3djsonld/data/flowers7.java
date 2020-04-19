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
 <p> Related links: flowers7.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
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
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
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
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_3)
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Shaders").setLevel(1))
    .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("flowers7.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("John Carlson"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/flowers7.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("a flower")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject())
    .addComments(" Images courtesy of Paul Debevec's Light Probe Image Gallery ")
    .addChild(new BackgroundObject("background").setBackUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"}).setBottomUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"}).setFrontUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"}).setLeftUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"}).setRightUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"}).setTopUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"}))
    .addChild(new ViewpointObject().setDescription("Transparent rose").setPosition(0.0f,0.0f,40.0f))
    .addChild(new TransformObject()
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(.7f,.7f,.7f).setSpecularColor(.5f,.5f,.5f))
          .setTexture(new ComposedCubeMapTextureObject("texture")
            .setBack(new ImageTextureObject("backShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"}))
            .setBottom(new ImageTextureObject("bottomShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"}))
            .setFront(new ImageTextureObject("frontShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"}))
            .setLeft(new ImageTextureObject("leftShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"}))
            .setRight(new ImageTextureObject("rightShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"}))
            .setTop(new ImageTextureObject("topShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"})))
          .addShaders(new ComposedShaderObject("x3dom").setLanguage("GLSL")
            .addField(new fieldObject().setName("cube").setType(fieldObject.TYPE_SFINT32).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(0))
            .addComments(new String[] {" ",
"		       <field name='cube' type='SFNode' accessType=\"inputOutput\">",
"			  <ComposedCubeMapTexture USE=\"texture\"/>",
"		  </field>"})
            .addField(new fieldObject().setName("chromaticDispertion").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.98f,1.0f,1.033f)))
            .addField(new fieldObject().setName("bias").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(0.5f))
            .addField(new fieldObject().setName("scale").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(0.5f))
            .addField(new fieldObject().setName("power").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(2f))
            .addField(new fieldObject().setName("a").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(10f))
            .addField(new fieldObject().setName("b").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(1f))
            .addField(new fieldObject().setName("c").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(20f))
            .addField(new fieldObject().setName("d").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(20f))
            .addField(new fieldObject().setName("tdelta").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(0f))
            .addField(new fieldObject().setName("pdelta").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(0f))
            .addParts(new ShaderPartObject().setUrl(new String[] {"../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"}))
            .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new String[] {"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"})))
          .addShaders(new ComposedShaderObject("x_ite").setLanguage("GLSL")
            .addField(new fieldObject().setName("cube").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
            .addField(new fieldObject().setName("chromaticDispertion").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.98f,1.0f,1.033f)))
            .addField(new fieldObject().setName("bias").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue(0.5f))
            .addField(new fieldObject().setName("scale").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue(0.5f))
            .addField(new fieldObject().setName("power").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue(2f))
            .addField(new fieldObject().setName("a").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue(10f))
            .addField(new fieldObject().setName("b").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue(1f))
            .addField(new fieldObject().setName("c").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue(20f))
            .addField(new fieldObject().setName("d").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue(20f))
            .addField(new fieldObject().setName("tdelta").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue(0f))
            .addField(new fieldObject().setName("pdelta").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue(0f))
            .addParts(new ShaderPartObject().setUrl(new String[] {"../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}))
            .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new String[] {"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"}))))
        .setGeometry(new SphereObject())))
    .addChild(new ScriptObject("UrlSelector").setDirectOutput(true).setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"        function set_fraction( f, tm ) {" + "\n" + 
"            var side = Math.floor(f*frontUrls.length);" + "\n" + 
"            if (side > frontUrls.length-1) {" + "\n" + 
"                side = 0;" + "\n" + 
"            }" + "\n" + 
"            if (side != old) {" + "\n" + 
"                    old = side;" + "\n" + 
"                    front[0] = frontUrls[side];" + "\n" + 
"                    back[0] = backUrls[side];" + "\n" + 
"                    left[0] = leftUrls[side];" + "\n" + 
"                    right[0] = rightUrls[side];" + "\n" + 
"                    top[0] = topUrls[side];" + "\n" + 
"                    bottom[0] = bottomUrls[side];" + "\n" + 
"            }" + "\n" + 
"        }" + "\n")
      .addField(new fieldObject().setName("frontUrls").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"../resources/images/all_probes/beach_cross/beach_front.png","../resources/images/all_probes/building_cross/building_front.png","../resources/images/all_probes/campus_cross/campus_front.png","../resources/images/all_probes/galileo_cross/galileo_front.png","../resources/images/all_probes/grace_cross/grace_front.png","../resources/images/all_probes/kitchen_cross/kitchen_front.png","../resources/images/all_probes/rnl_cross/rnl_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/uffizi_cross/uffizi_front.png"}))
      .addField(new fieldObject().setName("backUrls").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"../resources/images/all_probes/beach_cross/beach_back.png","../resources/images/all_probes/building_cross/building_back.png","../resources/images/all_probes/campus_cross/campus_back.png","../resources/images/all_probes/galileo_cross/galileo_back.png","../resources/images/all_probes/grace_cross/grace_back.png","../resources/images/all_probes/kitchen_cross/kitchen_back.png","../resources/images/all_probes/rnl_cross/rnl_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/uffizi_cross/uffizi_back.png"}))
      .addField(new fieldObject().setName("leftUrls").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"../resources/images/all_probes/beach_cross/beach_left.png","../resources/images/all_probes/building_cross/building_left.png","../resources/images/all_probes/campus_cross/campus_left.png","../resources/images/all_probes/galileo_cross/galileo_left.png","../resources/images/all_probes/grace_cross/grace_left.png","../resources/images/all_probes/kitchen_cross/kitchen_left.png","../resources/images/all_probes/rnl_cross/rnl_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/uffizi_cross/uffizi_left.png"}))
      .addField(new fieldObject().setName("rightUrls").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"../resources/images/all_probes/beach_cross/beach_right.png","../resources/images/all_probes/building_cross/building_right.png","../resources/images/all_probes/campus_cross/campus_right.png","../resources/images/all_probes/galileo_cross/galileo_right.png","../resources/images/all_probes/grace_cross/grace_right.png","../resources/images/all_probes/kitchen_cross/kitchen_right.png","../resources/images/all_probes/rnl_cross/rnl_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/uffizi_cross/uffizi_right.png"}))
      .addField(new fieldObject().setName("topUrls").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"../resources/images/all_probes/beach_cross/beach_top.png","../resources/images/all_probes/building_cross/building_top.png","../resources/images/all_probes/campus_cross/campus_top.png","../resources/images/all_probes/galileo_cross/galileo_top.png","../resources/images/all_probes/grace_cross/grace_top.png","../resources/images/all_probes/kitchen_cross/kitchen_top.png","../resources/images/all_probes/rnl_cross/rnl_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/uffizi_cross/uffizi_top.png"}))
      .addField(new fieldObject().setName("bottomUrls").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png","../resources/images/all_probes/building_cross/building_bottom.png","../resources/images/all_probes/campus_cross/campus_bottom.png","../resources/images/all_probes/galileo_cross/galileo_bottom.png","../resources/images/all_probes/grace_cross/grace_bottom.png","../resources/images/all_probes/kitchen_cross/kitchen_bottom.png","../resources/images/all_probes/rnl_cross/rnl_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/uffizi_cross/uffizi_bottom.png"}))
      .addField(new fieldObject().setName("front").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
      .addField(new fieldObject().setName("back").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
      .addField(new fieldObject().setName("left").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
      .addField(new fieldObject().setName("right").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
      .addField(new fieldObject().setName("top").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
      .addField(new fieldObject().setName("bottom").setType(fieldObject.TYPE_MFSTRING).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
      .addField(new fieldObject().setName("set_fraction").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
      .addField(new fieldObject().setName("old").setType(fieldObject.TYPE_SFINT32).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(-1)))
    .addComments(new String[] {"",
"            <TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/>",
"            <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/>",
"            <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/>",
"            <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/>",
"            <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/>",
"            <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/>",
"            <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/>",
"            <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/>",
"            <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/>",
"            <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/>",
"            <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/>",
"            <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/>",
"            <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/>",
"            <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>"})
    .addChild(new ScriptObject("Animate").setDirectOutput(true).setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_fraction() {" + "\n" + 
"	var choice = Math.floor(Math.random() * 4);" + "\n" + 
"	switch (choice) {" + "\n" + 
"	case 0:" + "\n" + 
"		a = a + Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 1:" + "\n" + 
"		b = b + Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 2:" + "\n" + 
"		c = c + Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 3:" + "\n" + 
"		d = d + Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	}" + "\n" + 
"	tdelta = tdelta + 0.5;" + "\n" + 
"	pdelta = pdelta + 0.5;" + "\n" + 
"	if (a < 1) {" + "\n" + 
"		a = 10;" + "\n" + 
"	}" + "\n" + 
"	if (b < 1) {" + "\n" + 
"		b = 10;" + "\n" + 
"	}" + "\n" + 
"	if (c < 1) {" + "\n" + 
"		c = 4;" + "\n" + 
"	}" + "\n" + 
"	if (c > 20) {" + "\n" + 
"		c = 4;" + "\n" + 
"	}" + "\n" + 
"	if (d < 1) {" + "\n" + 
"		d = 4;" + "\n" + 
"	}" + "\n" + 
"	if (d > 20) {" + "\n" + 
"		d = 4;" + "\n" + 
"	}" + "\n" + 
"}" + "\n")
      .addField(new fieldObject().setName("set_fraction").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
      .addField(new fieldObject().setName("a").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(10f))
      .addField(new fieldObject().setName("b").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(1f))
      .addField(new fieldObject().setName("c").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(20f))
      .addField(new fieldObject().setName("d").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(20f))
      .addField(new fieldObject().setName("tdelta").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(0f))
      .addField(new fieldObject().setName("pdelta").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(0f)))
    .addChild(new TimeSensorObject("TourTime").setCycleInterval(5).setLoop(true))
    .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("a").setToNode("x_ite").setToField("a"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("b").setToNode("x_ite").setToField("b"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("c").setToNode("x_ite").setToField("c"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("d").setToNode("x_ite").setToField("d"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("pdelta").setToNode("x_ite").setToField("pdelta"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("tdelta").setToNode("x_ite").setToField("tdelta"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("a").setToNode("x3dom").setToField("a"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("b").setToNode("x3dom").setToField("b"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("c").setToNode("x3dom").setToField("c"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("d").setToNode("x3dom").setToField("d"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("pdelta").setToNode("x3dom").setToField("pdelta"))
    .addChild(new ROUTEObject().setFromNode("Animate").setFromField("tdelta").setToNode("x3dom").setToField("tdelta")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return flowers7 model
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
        X3DObject thisExampleX3dObject = new flowers7().getX3dModel();

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
			System.out.println("WARNING: \"flowers7\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"flowers7\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
