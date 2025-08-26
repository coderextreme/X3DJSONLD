package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Layout.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> *Bumpy flower with prototype sliders*. </p>
 <p> Related links:  source bumpyx_itesliders.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.bumpyx_itesliders&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d">bumpyx_itesliders.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> *Bumpy flower with prototype sliders* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Doug Sanden, Christoph Valentin, John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d" target="_blank">https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> PSPad, <a href="http://www.pspad.com/" target="_blank">http://www.pspad.com/</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://github.com/coderextreme/JSONverse/public/x3d/license.html">license.html</a> </td>
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

public class bumpyx_itesliders
{
	/** Default constructor to create this object. */
	public bumpyx_itesliders ()
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
    .addComments(new String[] {"",
"	      <component name='DIS' level='2'></component>"})
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("bumpyx_itesliders.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("*Bumpy flower with prototype sliders*"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Doug Sanden, Christoph Valentin, John Carlson"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("PSPad, http://www.pspad.com/"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("license.html")))
  .addComments(new String[] {" \"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution,",
"     It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)",
"     open for their \"discussion about the teapot\" "})
  .setScene(new Scene()
    .addComments(" LayerSet with two layers, navigation happens in layer 1 ")
    .addLayerSet(new LayerSet().setActiveLayer(1).setOrder(new int[] {1,2,3})
      .addComments(" the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\" ")
      .addLayers(new Layer().setObjectType(new String[] {"ALL"}).setPickable(true)
        .addComments(" basic nodes, which might be present in any scene ")
        .addChild(new NavigationInfo().setAvatarSize(new double[] {0.25,1.75,0.75}).setType(new String[] {"EXAMINE"}))
        .addChild(new DirectionalLight().setAmbientIntensity(.2).setDirection(0.0,-1.0,-0.0))
        .addChild(new DirectionalLight().setAmbientIntensity(.2).setDirection(-1.0,-.1,-1.0))
        .addChild(new Viewpoint().setDescription("My Overview").setFieldOfView(1.570796).setPosition(0.0,1.75,60.0))
        .addComments(" this group contains the red/green/blue 3D crosshair ")
        .addChild(new Group()
          .addComments(" Arrow X ")
          .addChild(new Transform().setRotation(0.0,0.0,-1.0,1.57).setTranslation(25.0,0.0,0.0)
            .addChild(new Shape()
              .setGeometry(new Cylinder("Shaft").setHeight(50).setRadius(.35))
              .setAppearance(new Appearance()
                .setMaterial(new Material("RED").setDiffuseColor(1.0,0.0,0.0).setEmissiveColor(1.0,0.0,0.0)))))
          .addChild(new Transform().setRotation(0.0,0.0,-1.0,1.57).setTranslation(50.0,0.0,0.0)
            .addChild(new Shape()
              .setGeometry(new Cone("Tip").setBottomRadius(.8).setHeight(3))
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
"        <Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />"})
          .addComments(" Images courtesy of Paul Debevec's Light Probe Image Gallery ")
          .addChild(new Background().setBackUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}).setBottomUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}).setFrontUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}).setLeftUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}).setRightUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}).setTopUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}))
          .addChild(new Transform()
            .addChild(new Shape()
              .addComments(new String[] {"",
"	  <Sphere radius='40'></Sphere>"})
              .setGeometry(new IndexedFaceSet("Orbit").setDEF("Orbit").setConvex(false)
                .setCoord(new Coordinate("OrbitCoordinates")))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(.7,.7,.7).setSpecularColor(.5,.5,.5))
                .setTexture(new ComposedCubeMapTexture("texture")
                  .setBackTexture(new ImageTexture().setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}))
                  .setBottomTexture(new ImageTexture().setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}))
                  .setFrontTexture(new ImageTexture().setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}))
                  .setLeftTexture(new ImageTexture().setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}))
                  .setRightTexture(new ImageTexture().setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}))
                  .setTopTexture(new ImageTexture().setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"})))
                .addShaders(new ComposedShader("x_iteShader").setLanguage("GLSL")
                  .addField(new field().setName("chromaticDispertion").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFVec3f(0.98,1.0,1.033)))
                  .addField(new field().setName("cube").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY)
                    .addChild(new ComposedCubeMapTexture().setUSE("texture")))
                  .addField(new field().setName("bias").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(0.5))
                  .addField(new field().setName("scale").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(0.5))
                  .addField(new field().setName("power").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(2))
                  .addField(new field().setName("a").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(15))
                  .addField(new field().setName("b").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(5))
                  .addField(new field().setName("c").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(5))
                  .addField(new field().setName("d").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(5))
                  .addField(new field().setName("tdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
                  .addField(new field().setName("pdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
                  .addParts(new ShaderPart().setUrl(new String[] {"../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"}))
                  .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new String[] {"../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"}))
                  .addComments(new String[] {" TO CONVERT TO A SPHERE",
"                  <ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>",
"                  <ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>"}))))))
        .addChild(new Script("OrbitScript").setSourceCode("""
ecmascript:
function initialize() {
     var resolution = 300;
     var theta = 0.0;
     var phi = 0.0;
     var delta = (2 * 3.141592653) / (resolution-1);
     var crds = new MFVec3f();
     for ( i = 0; i < resolution; i++) {
     	for ( j = 0; j < resolution; j++) {
		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);
		crds.push(new SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		));
		theta += delta;
	}
	phi += delta;
     }
     coordinates = crds;


     var cis = new MFInt32();
     for ( i = 0; i < resolution-1; i++) {
     	for ( j = 0; j < resolution-1; j++) {
	     cis.push(i*resolution+j);
	     cis.push(i*resolution+j+1);
	     cis.push((i+1)*resolution+j+1);
	     cis.push((i+1)*resolution+j);
	     cis.push(-1);
	}
    }
    coordIndexes = cis;
}
""")
          .addField(new field().setName("coordinates").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setName("coordIndexes").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("a").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(10))
          .addField(new field().setName("b").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(10))
          .addField(new field().setName("c").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(2))
          .addField(new field().setName("d").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(2))
          .addField(new field().setName("pdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
          .addField(new field().setName("tdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0)))
        .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("set_coordIndex"))
        .addChild(new ROUTE().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("set_point")))
      .addLayers(new LayoutLayer().setObjectType(new String[] {"ALL"}).setPickable(true)
        .setLayout(new Layout().setAlign(new String[] {"LEFT","BOTTOM"}).setOffset(new double[] {-0.2,0.19}).setSize(new double[] {0.4,0.6}))
        .setViewport(new Viewport().setClipBoundary(new double[] {0.0,1.0,0.0,1.0}))
        .addChild(new Transform().setTranslation(0.0,0.0,-3.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0).setTransparency(0.7)))
            .setGeometry(new Box().setSize(100.0,100.0,0.02))))
        .addChild(new Transform("equationTransform")
          .addChild(new Transform().setTranslation(0.0,0.0,-20.0)
            .addChild(new Shape()
              .setGeometry(new Text("equation").setString(new String[] {"r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"})
                .setFontStyle(new FontStyle().setSize(0.09)))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0))))))
        .addChild(new ProtoDeclare("SliderProto").setName("SliderProto")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setName("sliderTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.7,0.0)))
            .addField(new field().setName("transformTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.1)))
            .addField(new field().setName("sensorTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
            .addField(new field().setName("textString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new String[] {"a="}))
            .addField(new field().setName("parameterScale").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(30))
            .addField(new field().setName("parameterName").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("a"))
            .addField(new field().setName("petNames").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setName("shaderNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform("protoSlider").setTranslation(0.0,0.7,0.0)
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("sliderTranslation")))
                .addChild(new Transform("protoTransform").setTranslation(0.0,0.0,0.1)
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("translation").setProtoField("transformTranslation")))
                  .addChild(new PlaneSensor("protoSensor").setDescription("Grab with mouse to adjust slider").setMaxPosition(1.0,0.0))
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("translation").setProtoField("sensorTranslation")))
                  .addChild(new Transform().setTranslation(0.0,0.0,0.0)
                    .addChild(new TouchSensor("protoTS")))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new Text("protoText").setString(new String[] {"a="})
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("string").setProtoField("textString")))
                        .setFontStyle(new FontStyle().setSize(0.23)))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material()))))))
              .addChild(new Script("protoValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setUrl(new String[] {"../javascripts/X3DUser.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js"})
                .addField(new field().setName("protoScale").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                .addField(new field().setName("petNames").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                .addField(new field().setName("protoParameterName").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                .addField(new field().setName("shader").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                .addField(new field().setName("newTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFVec3f(1.0,1.0,1.0)))
                .addField(new field().setName("protoValue_changed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue(1.0))
                .addField(new field().setName("protoText_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue(new String[] {"1.0"}))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("protoScale").setProtoField("parameterScale"))
                  .addConnect(new connect().setNodeField("petNames").setProtoField("petNames"))
                  .addConnect(new connect().setNodeField("protoParameterName").setProtoField("parameterName"))
                  .addConnect(new connect().setNodeField("shader").setProtoField("shaderNode"))))
              .addChild(new ROUTE().setFromNode("protoSensor").setFromField("translation_changed").setToNode("protoTransform").setToField("set_translation"))
              .addChild(new ROUTE().setFromNode("protoSensor").setFromField("translation_changed").setToNode("protoValueTransformerScript").setToField("newTranslation"))
              .addChild(new ROUTE().setFromNode("protoValueTransformerScript").setFromField("protoText_changed").setToNode("protoText").setToField("string")))))
        .addChild(new ProtoInstance("SliderProto", "aPI").setContainerField("children")
          .addFieldValue(new fieldValue().setName("sliderTranslation").setValue(new SFVec3f(0.0,0.7,0.0)))
          .addFieldValue(new fieldValue().setName("transformTranslation").setValue(new SFVec3f(0.0,0.0,0.1)))
          .addFieldValue(new fieldValue().setName("sensorTranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("textString").setValue(new String[] {"a="}))
          .addFieldValue(new fieldValue().setName("parameterScale").setValue(30))
          .addFieldValue(new fieldValue().setName("parameterName").setValue("a"))
          .addFieldValue(new fieldValue().setName("petNames").setValue(new String[] {"yottzumm","group1-petname"}))
          .addFieldValue(new fieldValue().setName("shaderNode")
            .addChild(new ComposedShader().setUSE("x_iteShader"))))
        .addChild(new ProtoInstance("SliderProto", "bPI").setContainerField("children")
          .addFieldValue(new fieldValue().setName("sliderTranslation").setValue(new SFVec3f(0.0,0.4,0.0)))
          .addFieldValue(new fieldValue().setName("transformTranslation").setValue(new SFVec3f(0.0,0.0,0.1)))
          .addFieldValue(new fieldValue().setName("sensorTranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("textString").setValue(new String[] {"b="}))
          .addFieldValue(new fieldValue().setName("parameterScale").setValue(30))
          .addFieldValue(new fieldValue().setName("parameterName").setValue("b"))
          .addFieldValue(new fieldValue().setName("petNames").setValue(new String[] {"yottzumm","group1-petname"}))
          .addFieldValue(new fieldValue().setName("shaderNode")
            .addChild(new ComposedShader().setUSE("x_iteShader"))))
        .addChild(new ProtoInstance("SliderProto", "cPI").setContainerField("children")
          .addFieldValue(new fieldValue().setName("sliderTranslation").setValue(new SFVec3f(0.0,0.1,0.0)))
          .addFieldValue(new fieldValue().setName("transformTranslation").setValue(new SFVec3f(0.0,0.0,0.1)))
          .addFieldValue(new fieldValue().setName("sensorTranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("textString").setValue(new String[] {"c="}))
          .addFieldValue(new fieldValue().setName("parameterScale").setValue(20))
          .addFieldValue(new fieldValue().setName("parameterName").setValue("c"))
          .addFieldValue(new fieldValue().setName("petNames").setValue(new String[] {"yottzumm","yottzumm2","group1-petname"}))
          .addFieldValue(new fieldValue().setName("shaderNode")
            .addChild(new ComposedShader().setUSE("x_iteShader"))))
        .addChild(new ProtoInstance("SliderProto", "dPI").setContainerField("children")
          .addFieldValue(new fieldValue().setName("sliderTranslation").setValue(new SFVec3f(0.0,-0.2,0.0)))
          .addFieldValue(new fieldValue().setName("transformTranslation").setValue(new SFVec3f(0.0,0.0,0.1)))
          .addFieldValue(new fieldValue().setName("sensorTranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("textString").setValue(new String[] {"d="}))
          .addFieldValue(new fieldValue().setName("parameterScale").setValue(20))
          .addFieldValue(new fieldValue().setName("parameterName").setValue("d"))
          .addFieldValue(new fieldValue().setName("petNames").setValue(new String[] {"yottzumm","yottzumm2","group1-petname"}))
          .addFieldValue(new fieldValue().setName("shaderNode")
            .addChild(new ComposedShader().setUSE("x_iteShader"))))
        .addChild(new ProtoInstance("SliderProto", "tdeltaPI").setContainerField("children")
          .addFieldValue(new fieldValue().setName("sliderTranslation").setValue(new SFVec3f(0.0,-0.5,0.0)))
          .addFieldValue(new fieldValue().setName("transformTranslation").setValue(new SFVec3f(0.0,0.0,0.1)))
          .addFieldValue(new fieldValue().setName("sensorTranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("textString").setValue(new String[] {"tdelta="}))
          .addFieldValue(new fieldValue().setName("parameterScale").setValue(6.28))
          .addFieldValue(new fieldValue().setName("parameterName").setValue("tdelta"))
          .addFieldValue(new fieldValue().setName("petNames").setValue(new String[] {"yottzumm2","group1-petname"}))
          .addFieldValue(new fieldValue().setName("shaderNode")
            .addChild(new ComposedShader().setUSE("x_iteShader"))))
        .addChild(new ProtoInstance("SliderProto", "pdeltaPI").setContainerField("children")
          .addFieldValue(new fieldValue().setName("sliderTranslation").setValue(new SFVec3f(0.0,-0.8,0.0)))
          .addFieldValue(new fieldValue().setName("transformTranslation").setValue(new SFVec3f(0.0,0.0,0.1)))
          .addFieldValue(new fieldValue().setName("sensorTranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("textString").setValue(new String[] {"pdelta="}))
          .addFieldValue(new fieldValue().setName("parameterScale").setValue(6.28))
          .addFieldValue(new fieldValue().setName("parameterName").setValue("pdelta"))
          .addFieldValue(new fieldValue().setName("petNames").setValue(new String[] {"yottzumm2","group1-petname"}))
          .addFieldValue(new fieldValue().setName("shaderNode")
            .addChild(new ComposedShader().setUSE("x_iteShader")))))
      .addLayers(new Layer().setObjectType(new String[] {"ALL"}).setPickable(true)
        .addChild(new Viewpoint().setDescription("My Humanoids").setFieldOfView(1.570796).setPosition(0.0,1.75,80.0))
        .addChild(new Script("HumanoidScript").setDirectOutput(true).setMustEvaluate(true).setUrl(new String[] {"../javascripts/X3DAvatar.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js"}))
        .addChild(new Group("humanoidGroup")
          .addChild(new Group())))));
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
	 * @return bumpyx_itesliders model
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
        X3D thisExampleX3dModel = new bumpyx_itesliders().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.bumpyx_itesliders\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.bumpyx_itesliders self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./bumpyx_itesliders_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./bumpyx_itesliders_JavaExport.x3d"; 
                String filenameX3DV = "./bumpyx_itesliders_JavaExport.x3dv"; 
                String filenameJSON = "./bumpyx_itesliders_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
