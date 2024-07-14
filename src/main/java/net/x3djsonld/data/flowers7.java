package net.x3djsonld.data;

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

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> a flower. </p>
 <p> Related links:  source flowers7.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.flowers7&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d">flowers7.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d</a> </td>
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
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
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
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("Scripting").setLevel(1))
    .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
    .addComponent(new component().setName("Shaders").setLevel(1))
    .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
    .addComponent(new component().setName("Texturing").setLevel(1))
    .addComponent(new component().setName("Rendering").setLevel(1))
    .addComponent(new component().setName("Shape").setLevel(4))
    .addComponent(new component().setName("Grouping").setLevel(3))
    .addComponent(new component().setName("Core").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("flowers7.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("John Carlson"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("a flower")))
  .setScene(new Scene()
    .addChild(new NavigationInfo())
    .addComments(" Images courtesy of Paul Debevec's Light Probe Image Gallery ")
    .addChild(new Background("background").setBackUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}).setBottomUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}).setFrontUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}).setLeftUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}).setRightUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}).setTopUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"}))
    .addChild(new Viewpoint().setDescription("Transparent rose").setPosition(0.0,0.0,40.0))
    .addChild(new Transform()
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(.7,.7,.7).setSpecularColor(.5,.5,.5))
          .setTexture(new ComposedCubeMapTexture("texture")
            .setBackTexture(new ImageTexture("backShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"}))
            .setBottomTexture(new ImageTexture("bottomShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"}))
            .setFrontTexture(new ImageTexture("frontShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"}))
            .setLeftTexture(new ImageTexture("leftShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"}))
            .setRightTexture(new ImageTexture("rightShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"}))
            .setTopTexture(new ImageTexture("topShader").setUrl(new String[] {"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"})))
          .addShaders(new ComposedShader("x3dom").setLanguage("GLSL")
            .addComments(new String[] {" TODO VERIFY",
"                  <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>"})
            .addField(new field().setName("cube").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new ComposedCubeMapTexture().setUSE("texture")))
            .addField(new field().setName("chromaticDispertion").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.98,1.0,1.033)))
            .addField(new field().setName("bias").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.5))
            .addField(new field().setName("scale").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.5))
            .addField(new field().setName("power").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(2))
            .addField(new field().setName("a").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(10))
            .addField(new field().setName("b").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1))
            .addField(new field().setName("c").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(20))
            .addField(new field().setName("d").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(20))
            .addField(new field().setName("tdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
            .addField(new field().setName("pdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
            .addParts(new ShaderPart().setUrl(new String[] {"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"}))
            .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new String[] {"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"})))
          .addShaders(new ComposedShader("x_ite").setLanguage("GLSL")
            .addField(new field().setName("cube").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new ComposedCubeMapTexture().setUSE("texture")))
            .addField(new field().setName("chromaticDispertion").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.98,1.0,1.033)))
            .addField(new field().setName("bias").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(0.5))
            .addField(new field().setName("scale").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(0.5))
            .addField(new field().setName("power").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(2))
            .addField(new field().setName("a").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(10))
            .addField(new field().setName("b").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(1))
            .addField(new field().setName("c").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(20))
            .addField(new field().setName("d").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(20))
            .addField(new field().setName("tdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(0))
            .addField(new field().setName("pdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(0))
            .addParts(new ShaderPart().setUrl(new String[] {"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}))
            .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new String[] {"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}))))
        .setGeometry(new Sphere())))
    .addChild(new Script("UrlSelector").setDirectOutput(true).setSourceCode("""
ecmascript:
        function set_fraction( f, tm ) {
            var side = Math.floor(f*frontUrls.length);
            if (side > frontUrls.length-1) {
                side = 0;
            }
            if (side != old) {
                    old = side;
                    front[0] = frontUrls[side];
                    back[0] = backUrls[side];
                    left[0] = leftUrls[side];
                    right[0] = rightUrls[side];
                    top[0] = topUrls[side];
                    bottom[0] = bottomUrls[side];
            }
        }
""")
      .addField(new field().setName("frontUrls").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"}))
      .addField(new field().setName("backUrls").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"}))
      .addField(new field().setName("leftUrls").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"}))
      .addField(new field().setName("rightUrls").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"}))
      .addField(new field().setName("topUrls").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"}))
      .addField(new field().setName("bottomUrls").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/building_cross/building_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/campus_cross/campus_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/galileo_cross/galileo_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/grace_cross/grace_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/kitchen_cross/kitchen_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/rnl_cross/rnl_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"}))
      .addField(new field().setName("front").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("back").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("left").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("right").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("top").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("bottom").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("old").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(-1)))
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
    .addChild(new Script("Animate").setDirectOutput(true).setSourceCode("""
ecmascript:

function set_fraction() {
	var choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		a = a + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 1:
		b = b + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 2:
		c = c + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 3:
		d = d + Math.floor(Math.random() * 2) * 2 - 1;
		break;
	}
	tdelta = tdelta + 0.5;
	pdelta = pdelta + 0.5;
	if (a < 1) {
		a = 10;
	}
	if (b < 1) {
		b = 10;
	}
	if (c < 1) {
		c = 4;
	}
	if (c > 20) {
		c = 4;
	}
	if (d < 1) {
		d = 4;
	}
	if (d > 20) {
		d = 4;
	}
}
""")
      .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("a").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(10))
      .addField(new field().setName("b").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1))
      .addField(new field().setName("c").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(20))
      .addField(new field().setName("d").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(20))
      .addField(new field().setName("tdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
      .addField(new field().setName("pdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0)))
    .addChild(new TimeSensor("TourTime").setCycleInterval(5).setLoop(true))
    .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Animate").setFromField("a").setToNode("x_ite").setToField("a"))
    .addChild(new ROUTE().setFromNode("Animate").setFromField("b").setToNode("x_ite").setToField("b"))
    .addChild(new ROUTE().setFromNode("Animate").setFromField("c").setToNode("x_ite").setToField("c"))
    .addChild(new ROUTE().setFromNode("Animate").setFromField("d").setToNode("x_ite").setToField("d"))
    .addChild(new ROUTE().setFromNode("Animate").setFromField("pdelta").setToNode("x_ite").setToField("pdelta"))
    .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta").setToNode("x_ite").setToField("tdelta"))
    .addChild(new ROUTE().setFromNode("Animate").setFromField("a").setToNode("x3dom").setToField("a"))
    .addChild(new ROUTE().setFromNode("Animate").setFromField("b").setToNode("x3dom").setToField("b"))
    .addChild(new ROUTE().setFromNode("Animate").setFromField("c").setToNode("x3dom").setToField("c"))
    .addChild(new ROUTE().setFromNode("Animate").setFromField("d").setToNode("x3dom").setToField("d"))
    .addChild(new ROUTE().setFromNode("Animate").setFromField("pdelta").setToNode("x3dom").setToField("pdelta"))
    .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta").setToNode("x3dom").setToField("tdelta")));
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
	 * @return flowers7 model
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
        X3D thisExampleX3dModel = new flowers7().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.flowers7\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.flowers7 self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./flowers7_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./flowers7_JavaExport.x3d"; 
                String filenameX3DV = "./flowers7_JavaExport.x3dv"; 
                String filenameJSON = "./flowers7_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
