package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Layout.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> *enter description here, short-sentence summaries preferred*. </p>
 <p> Related links:  source bumpfreewrlsliders.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.bumpfreewrlsliders&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="bumpfreewrlsliders.x3d">bumpfreewrlsliders.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> *enter description here, short-sentence summaries preferred* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Doug Sanden, Christoph Valentin, John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> *if manually translating VRML-to-X3D, enter name of person translating here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> *enter date of initial version here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> *enter date of translation here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> *enter date of latest revision here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> version </i> </td>
			<td> *enter version here, if any* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> *enter reference citation or relative/online url here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> *enter additional url/bibliographic reference information here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> requires </i> </td>
			<td> *enter reference resource here if required to support function, delivery, or coherence of content* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> *enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> drawing </i> </td>
			<td> *enter drawing filename/url here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> *enter movie filename/url here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> photo </i> </td>
			<td> *enter photo filename/url here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> *enter subject keywords here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> accessRights </i> </td>
			<td> *enter permission statements or url here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> *enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> PSPad, <a href="http://www.pspad.com/" target="_blank">http://www.pspad.com/</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="license.html">license.html</a> </td>
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

	* @author Doug Sanden, Christoph Valentin, John Carlson
 */

public class bumpfreewrlsliders
{
	/** Default constructor to create this object. */
	public bumpfreewrlsliders ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_FULL).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("Scripting").setLevel(1))
    .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
    .addComponent(new component().setName("Shaders").setLevel(1))
    .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
    .addComponent(new component().setName("Texturing").setLevel(1))
    .addComponent(new component().setName("Rendering").setLevel(1))
    .addComments("<component name='Shape' level='4'></component>")
    .addComponent(new component().setName("Grouping").setLevel(3))
    .addComponent(new component().setName("Core").setLevel(1))
    .addComponent(new component().setName("DIS").setLevel(2))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("bumpfreewrlsliders.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("*enter description here, short-sentence summaries preferred*"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Doug Sanden, Christoph Valentin, John Carlson"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("*if manually translating VRML-to-X3D, enter name of person translating here*"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("*enter date of initial version here*"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("*enter date of translation here*"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("*enter date of latest revision here*"))
    .addMeta(new meta().setName(meta.NAME_VERSION    ).setContent("*enter version here, if any*"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("*enter reference citation or relative/online url here*"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("*enter additional url/bibliographic reference information here*"))
    .addMeta(new meta().setName(meta.NAME_REQUIRES   ).setContent("*enter reference resource here if required to support function, delivery, or coherence of content*"))
    .addMeta(new meta().setName(meta.NAME_RIGHTS     ).setContent("*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024"))
    .addMeta(new meta().setName(meta.NAME_DRAWING    ).setContent("*enter drawing filename/url here*"))
    .addMeta(new meta().setName(meta.NAME_MOVINGIMAGE).setContent("*enter movie filename/url here*"))
    .addMeta(new meta().setName(meta.NAME_PHOTO      ).setContent("*enter photo filename/url here*"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("*enter subject keywords here*"))
    .addMeta(new meta().setName(meta.NAME_ACCESSRIGHTS).setContent("*enter permission statements or url here*"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("PSPad, http://www.pspad.com/"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("license.html"))
    .addComments(" Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L "))
  .addComments(new String[] {" \"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution,",
"     It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)",
"     open for their \"discussion about the teapot\" "})
  .setScene(new Scene()
    .addComments(" LayerSet with two layers, navigation happens in layer 1 ")
    .addLayerSet(new LayerSet().setActiveLayer(1).setOrder(new int[] {1,2})
      .addComments(" the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\" ")
      .addLayers(new Layer().setObjectType(new String[] {"ALL"}).setPickable(true)
        .addComments(" basic nodes, which might be present in any scene ")
        .addChild(new NavigationInfo().setAvatarSize(new double[] {0.25,1.75,0.75}).setType("\"EXAMINE\""))
        .addChild(new DirectionalLight().setAmbientIntensity(.2).setDirection(0.0,-1.0,-0.0))
        .addChild(new DirectionalLight().setAmbientIntensity(.2).setDirection(-1.0,-.1,-1.0))
        .addChild(new Viewpoint().setDescription("My Overview").setFieldOfView(1.570796).setPosition(0.0,1.75,60.0))
        .addComments(" this group contains the red/green/blue 3D crosshair ")
        .addChild(new Group()
          .addComments(" Arrow X ")
          .addChild(new Transform().setRotation(0.0,0.0,-1.0,1.57).setTranslation(25.0,0.0,0.0)
            .addChild(new Shape()
              .setGeometry(new Cylinder("Shaft").setHeight(50.0).setRadius(.35))
              .setAppearance(new Appearance()
                .setMaterial(new Material("RED").setDiffuseColor(1.0,0.0,0.0).setEmissiveColor(1.0,0.0,0.0)))))
          .addChild(new Transform().setRotation(0.0,0.0,-1.0,1.57).setTranslation(50.0,0.0,0.0)
            .addChild(new Shape()
              .setGeometry(new Cone("Tip").setBottomRadius(.8).setHeight(3.0))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("RED")))))
          .addComments(" Arrow Y ")
          .addChild(new Transform().setTranslation(0.0,25.0,0.0)
            .addChild(new Shape()
              .setGeometry(new Cylinder().setUSE("Shaft"))
              .setAppearance(new Appearance()
                .setMaterial(new Material("GREEN").setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.0,1.0,0.0)))))
          .addChild(new Transform().setTranslation(0.0,50.0,0.0)
            .addChild(new Shape()
              .setGeometry(new Cone().setUSE("Tip"))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("GREEN")))))
          .addComments(" Arrow Z ")
          .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,25.0)
            .addChild(new Shape()
              .setGeometry(new Cylinder().setUSE("Shaft"))
              .setAppearance(new Appearance()
                .setMaterial(new Material("BLUE").setDiffuseColor(0.0,0.0,1.0).setEmissiveColor(0.0,0.0,1.0)))))
          .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,50.0)
            .addChild(new Shape()
              .setGeometry(new Cone().setUSE("Tip"))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("BLUE"))))))
        .addComments(" the model that is being reviewed by the users of this scene ")
        .addChild(new Transform("FlowerTransform")
          .addComments(new String[] {"",
"        <Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />"})
          .addComments(" Images courtesy of Paul Debevec's Light Probe Image Gallery ")
          .addChild(new Background().setBackUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}).setBottomUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}).setFrontUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}).setLeftUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}).setRightUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}).setTopUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}))
          .addChild(new Shape()
            .setGeometry(new Sphere().setRadius(0.01))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(.7,.7,.7).setSpecularColor(.5,.5,.5))
              .setTexture(new ComposedCubeMapTexture("texture")
                .setBackTexture(new ImageTexture().setHtmlID("backShader").setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}))
                .setBottomTexture(new ImageTexture().setHtmlID("bottomShader").setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}))
                .setFrontTexture(new ImageTexture().setHtmlID("frontShader").setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}))
                .setLeftTexture(new ImageTexture().setHtmlID("leftShader").setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}))
                .setRightTexture(new ImageTexture().setHtmlID("rightShader").setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}))
                .setTopTexture(new ImageTexture().setHtmlID("topShader").setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"})))
              .addShaders(new ComposedShader("freewrlShader").setLanguage("GLSL")
                .addField(new field().setName("chromaticDispertion").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFVec3f(0.98,1.0,1.033)))
                .addField(new field().setName("fw_textureCoordGenType").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(0))
                .addField(new field().setName("bias").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(0.5))
                .addField(new field().setName("scale").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(0.5))
                .addField(new field().setName("power").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(2))
                .addField(new field().setName("a").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(15))
                .addField(new field().setName("b").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(5))
                .addField(new field().setName("c").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(5))
                .addField(new field().setName("d").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(5))
                .addField(new field().setName("tdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
                .addField(new field().setName("pdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
                .addParts(new ShaderPart().setUrl(new String[] {"../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"}))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new String[] {"../shaders/freewrl_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"}))))))
        .addComments(" DIS multiuser facilities ")
        .addChild(new DISEntityManager("EntityManager").setNetworkMode("networkReader")
          .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(1).setUrl(new String[] {"../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"}))
          .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(2).setUrl(new String[] {"../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"}))
          .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(3).setUrl(new String[] {"../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"}))
          .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(4).setUrl(new String[] {"../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"})))
        .addChild(new Collision().setEnabled(false)
          .addChild(new Group("AvatarHolder")))
        .addChild(new ROUTE().setFromNode("EntityManager").setFromField("addedEntities").setToNode("AvatarHolder").setToField("addChildren"))
        .addChild(new ROUTE().setFromNode("EntityManager").setFromField("removedEntities").setToNode("AvatarHolder").setToField("removeChildren")))
      .addComments(new String[] {" the second layer contains the sliders that are moved with the user's display",
"         like a HUD (heads up display) "})
      .addLayers(new LayoutLayer().setObjectType(new String[] {"ALL"}).setPickable(true)
        .addComments(" positioning the LayoutLayer ")
        .setLayout(new Layout().setAlign(new String[] {"RIGHT","BOTTOM"}).setOffset(new double[] {0.0,0.0}).setOffsetUnits(new String[] {"WORLD","WORLD"}).setScaleMode(new String[] {"NONE","NONE"}).setSize(new double[] {0.4,1.0}).setSizeUnits(new String[] {"WORLD","WORLD"}))
        .addComments(" clipping the LayoutLayer ")
        .setViewport(new Viewport().setClipBoundary(new double[] {0.0,1.0,0.0,1.0}))
        .addComments(" the content (children) of the LayoutLayer ")
        .addComments(" first, the slider for scaling the model ")
        .addChild(new Transform().setTranslation(0.0,0.0,-3.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0).setTransparency(0.7)))
            .setGeometry(new Box().setSize(100.0,100.0,0.02))))
        .addComments("  the plane sensors  ")
        .addChild(new Transform("aSlider").setTranslation(0.0,0.7,0.0)
          .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05))))
          .addChild(new Transform("aTransform").setTranslation(0.0,0.0,0.1)
            .addChild(new PlaneSensor("aSensor").setMaxPosition(20.0,0.0).setMinPosition(-20.0,0.0))
            .addChild(new Transform().setTranslation(0.0,0.0,0.0)
              .addChild(new TouchSensor("aTS"))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.05))
              .setAppearance(new Appearance()
                .setMaterial(new Material()))))
          .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05)))))
        .addChild(new Transform("bSlider").setTranslation(0.0,0.4,0.0)
          .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05))))
          .addChild(new Transform("bTransform").setTranslation(0.0,0.0,0.1)
            .addChild(new PlaneSensor("bSensor").setMaxPosition(20.0,0.0).setMinPosition(-20.0,0.0))
            .addChild(new Transform().setTranslation(0.0,0.0,0.0)
              .addChild(new TouchSensor("bTS"))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.05))
              .setAppearance(new Appearance()
                .setMaterial(new Material())))))
        .addChild(new Transform("cSlider").setTranslation(0.0,0.1,0.0)
          .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05))))
          .addChild(new Transform("cTransform").setTranslation(0.0,0.0,0.1)
            .addChild(new PlaneSensor("cSensor").setMaxPosition(20.0,0.0).setMinPosition(-20.0,0.0))
            .addChild(new Transform().setTranslation(0.0,0.0,0.0)
              .addChild(new TouchSensor("cTS"))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.05))
              .setAppearance(new Appearance()
                .setMaterial(new Material())))))
        .addChild(new Transform("dSlider").setTranslation(0.0,-0.2,0.0)
          .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05))))
          .addChild(new Transform("dTransform").setTranslation(0.0,0.0,0.1)
            .addChild(new PlaneSensor("dSensor").setMaxPosition(20.0,0.0).setMinPosition(-20.0,0.0))
            .addChild(new Transform().setTranslation(0.0,0.0,0.0)
              .addChild(new TouchSensor("dTS"))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.05))
              .setAppearance(new Appearance()
                .setMaterial(new Material())))))
        .addChild(new Transform("pdeltaSlider").setTranslation(0.0,-0.5,0.0)
          .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05))))
          .addChild(new Transform("pdeltaTransform").setTranslation(0.0,0.0,0.1)
            .addChild(new PlaneSensor("pdeltaSensor").setMaxPosition(20.0,0.0).setMinPosition(-20.0,0.0))
            .addChild(new Transform().setTranslation(0.0,0.0,0.0)
              .addChild(new TouchSensor("pdeltaTS"))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.05))
              .setAppearance(new Appearance()
                .setMaterial(new Material())))))
        .addChild(new Transform("tdeltaSlider").setTranslation(0.0,-0.8,0.0)
          .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05))))
          .addChild(new Transform("tdeltaTransform").setTranslation(0.0,0.0,0.1)
            .addChild(new PlaneSensor("tdeltaSensor").setMaxPosition(20.0,0.0).setMinPosition(-20.0,0.0))
            .addChild(new Transform().setTranslation(0.0,0.0,0.0)
              .addChild(new TouchSensor("tdeltaTS"))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.05))
              .setAppearance(new Appearance()
                .setMaterial(new Material())))))
        .addChild(new Script("aValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("""
ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }
""")
          .addField(new field().setName("newTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFVec3f(1.0,1.0,1.0)))
          .addField(new field().setName("aValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue(1.0)))
        .addChild(new Script("bValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("""
ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }
""")
          .addField(new field().setName("newTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFVec3f(1.0,1.0,1.0)))
          .addField(new field().setName("bValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue(1.0)))
        .addChild(new Script("cValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("""
ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }
""")
          .addField(new field().setName("newTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFVec3f(1.0,1.0,1.0)))
          .addField(new field().setName("cValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue(1.0)))
        .addChild(new Script("dValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("""
ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }
""")
          .addField(new field().setName("newTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFVec3f(1.0,1.0,1.0)))
          .addField(new field().setName("dValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue(1.0)))
        .addChild(new Script("pdeltaValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("""
ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }
""")
          .addField(new field().setName("newTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFVec3f(1.0,1.0,1.0)))
          .addField(new field().setName("pdeltaValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue(1.0)))
        .addChild(new Script("tdeltaValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("""
ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }
""")
          .addField(new field().setName("newTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFVec3f(1.0,1.0,1.0)))
          .addField(new field().setName("tdeltaValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue(1.0)))
        .addChild(new ROUTE().setFromNode("aSensor").setFromField("translation_changed").setToNode("aTransform").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("bSensor").setFromField("translation_changed").setToNode("bTransform").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("cSensor").setFromField("translation_changed").setToNode("cTransform").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("dSensor").setFromField("translation_changed").setToNode("dTransform").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("pdeltaSensor").setFromField("translation_changed").setToNode("pdeltaTransform").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("tdeltaSensor").setFromField("translation_changed").setToNode("tdeltaTransform").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("aSensor").setFromField("translation_changed").setToNode("aValueTransformerScript").setToField("newTranslation"))
        .addChild(new ROUTE().setFromNode("bSensor").setFromField("translation_changed").setToNode("bValueTransformerScript").setToField("newTranslation"))
        .addChild(new ROUTE().setFromNode("cSensor").setFromField("translation_changed").setToNode("cValueTransformerScript").setToField("newTranslation"))
        .addChild(new ROUTE().setFromNode("dSensor").setFromField("translation_changed").setToNode("dValueTransformerScript").setToField("newTranslation"))
        .addChild(new ROUTE().setFromNode("pdeltaSensor").setFromField("translation_changed").setToNode("pdeltaValueTransformerScript").setToField("newTranslation"))
        .addChild(new ROUTE().setFromNode("tdeltaSensor").setFromField("translation_changed").setToNode("tdeltaValueTransformerScript").setToField("newTranslation"))
        .addChild(new ROUTE().setFromNode("aValueTransformerScript").setFromField("aValue").setToNode("freewrlShader").setToField("a"))
        .addChild(new ROUTE().setFromNode("bValueTransformerScript").setFromField("bValue").setToNode("freewrlShader").setToField("b"))
        .addChild(new ROUTE().setFromNode("cValueTransformerScript").setFromField("cValue").setToNode("freewrlShader").setToField("c"))
        .addChild(new ROUTE().setFromNode("dValueTransformerScript").setFromField("dValue").setToNode("freewrlShader").setToField("d"))
        .addChild(new ROUTE().setFromNode("pdeltaValueTransformerScript").setFromField("pdeltaValue").setToNode("freewrlShader").setToField("pdelta"))
        .addChild(new ROUTE().setFromNode("tdeltaValueTransformerScript").setFromField("tdeltaValue").setToNode("freewrlShader").setToField("tdelta")))));
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
	 * @return bumpfreewrlsliders model
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
        X3D thisExampleX3dModel = new bumpfreewrlsliders().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.bumpfreewrlsliders\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.bumpfreewrlsliders self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./bumpfreewrlsliders_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./bumpfreewrlsliders_JavaExport.x3d"; 
                String filenameX3DV = "./bumpfreewrlsliders_JavaExport.x3dv"; 
                String filenameJSON = "./bumpfreewrlsliders_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
