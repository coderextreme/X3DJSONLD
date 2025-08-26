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
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Bumpy Orbitals with Sliders for FreeWRL. </p>
 <p> Related links:  source bumpyfreewrlsliders.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.bumpyfreewrlsliders&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d">bumpyfreewrlsliders.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Bumpy Orbitals with Sliders for FreeWRL </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Doug Sanden, Christoph Valentin, John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d" target="_blank">https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https:/coderextreme.net/X3DJSONLD/src/main/data/license.html">license.html</a> </td>
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

public class bumpyfreewrlsliders
{
	/** Default constructor to create this object. */
	public bumpyfreewrlsliders ()
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
    .addComponent(new component().setName("Shape").setLevel(4))
    .addComponent(new component().setName("Grouping").setLevel(3))
    .addComponent(new component().setName("Core").setLevel(1))
    .addComponent(new component().setName("DIS").setLevel(2))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("bumpyfreewrlsliders.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Bumpy Orbitals with Sliders for FreeWRL"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Doug Sanden, Christoph Valentin, John Carlson"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("license.html")))
  .setScene(new Scene()
    .addComments(" LayerSet with two layers, navigation happens in layer 1 ")
    .addLayerSet(new LayerSet().setActiveLayer(1).setOrder(new int[] {1,2})
      .addComments(" the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\" ")
      .addLayers(new Layer().setObjectType(new String[] {"ALL"}).setPickable(true)
        .addComments(" basic nodes, which might be present in any scene ")
        .addChild(new NavigationInfo().setAvatarSize(new double[] {0.25,1.75,0.75}).setType(new String[] {"EXAMINE","FLY","LOOKAT","ANY"}))
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
"        <Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />"})
          .addComments(" Images courtesy of Paul Debevec's Light Probe Image Gallery ")
          .addChild(new Background().setBackUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}).setBottomUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}).setFrontUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}).setLeftUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}).setRightUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}).setTopUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}))
          .addChild(new Transform()
            .addChild(new Shape()
              .setGeometry(new Sphere().setRadius(5))
              .addComments(new String[] {"",
"                <IndexedFaceSet convex=\"false\" DEF=\"Orbit\" creaseAngle=\"0\">",
"                    <Coordinate DEF=\"OrbitCoordinates\"/>",
"                </IndexedFaceSet>"})
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(.7,.7,.7).setSpecularColor(.5,.5,.5))
                .setTexture(new ComposedCubeMapTexture("texture")
                  .setBackTexture(new ImageTexture().setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}))
                  .setBottomTexture(new ImageTexture().setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}))
                  .setFrontTexture(new ImageTexture().setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}))
                  .setLeftTexture(new ImageTexture().setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}))
                  .setRightTexture(new ImageTexture().setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}))
                  .setTopTexture(new ImageTexture().setUrl(new String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"})))
                .addShaders(new ComposedShader("freewrlShader").setLanguage("GLSL")
                  .addField(new field().setName("fw_textureCoordGenType").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
                  .addComments(new String[] {"",
"                  <field name='cube' type='SFNode' accessType=\"inputOutput\">",
"		    <ComposedCubeMapTexture USE=\"texture\"/>",
"		  </field>"})
                  .addField(new field().setName("chromaticDispertion").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.98,1.0,1.033)))
                  .addField(new field().setName("bias").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.5))
                  .addField(new field().setName("scale").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.5))
                  .addField(new field().setName("power").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(2))
                  .addField(new field().setName("a").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(15))
                  .addField(new field().setName("b").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(5))
                  .addField(new field().setName("c").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(20))
                  .addField(new field().setName("d").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(20))
                  .addField(new field().setName("tdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
                  .addField(new field().setName("pdelta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
                  .addParts(new ShaderPart()
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("url").setProtoField("vertex"))))
                  .addParts(new ShaderPart().setType("FRAGMENT")
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("url").setProtoField("fragment")))))
                .addComments(new String[] {"",
"               <ComposedShader DEF=\"freewrlShader\" language=\"GLSL\">",
"                  <field name='fw_textureCoordGenType' accessType='inputOutput' type='SFInt32' value='0'></field>",
"                  <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field>",
"                  <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field>",
"                  <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field>",
"                  <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field>",
"                  <field name='a' type='SFFloat' accessType='inputOutput' value='15'></field>",
"                  <field name='b' type='SFFloat' accessType='inputOutput' value='5'></field>",
"                  <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field>",
"                  <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field>",
"                  <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>",
"                  <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>",
"                                <ShaderPart type='VERTEX'>",
"					<IS>",
"					<connect nodeField=\"url\" protoField=\"vertex\"/>",
"					</IS>",
"                                </ShaderPart>",
"                                <ShaderPart type='FRAGMENT'>",
"					<IS>",
"					<connect nodeField=\"url\" protoField=\"fragment\"/>",
"					</IS>",
"                                </ShaderPart>",
"                    </ComposedShader>"})))))
        .addComments(new String[] {"",
"        <Script DEF=\"OrbitScript\">",
"            <field accessType=\"inputOutput\" name=\"coordinates\" type=\"MFVec3f\"/>",
"            <field accessType=\"outputOnly\" name=\"coordIndexes\" type=\"MFInt32\"/>",
"	    <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field>",
"	    <field name='b' type='SFFloat' accessType='inputOutput' value='10'></field>",
"	    <field name='c' type='SFFloat' accessType='inputOutput' value='2'></field>",
"	    <field name='d' type='SFFloat' accessType='inputOutput' value='2'></field>",
"	    <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>",
"	    <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>",
"<![CDATA[ecmascript:",
"function initialize() {",
"     var resolution = 300;",
"     var theta = 0.0;",
"     var phi = 0.0;",
"     var delta = (2 * 3.141592653) / (resolution-1);",
"     var crds = new MFVec3f();",
"     for ( i = 0; i < resolution; i++) {",
"     	for ( j = 0; j < resolution; j++) {",
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);",
"		crds.push(new SFVec3f(",
"			rho * Math.cos(phi) * Math.cos(theta),",
"			rho * Math.cos(phi) * Math.sin(theta),",
"			rho * Math.sin(phi)",
"		));",
"		theta += delta;",
"	}",
"	phi += delta;",
"     }",
"     coordinates = crds;",
"",
"",
"     var cis = new MFInt32();",
"     for ( i = 0; i < resolution-1; i++) {",
"     	for ( j = 0; j < resolution-1; j++) {",
"	     cis.push(i*resolution+j);",
"	     cis.push(i*resolution+j+1);",
"	     cis.push((i+1)*resolution+j+1);",
"	     cis.push((i+1)*resolution+j);",
"	     cis.push(-1);",
"	}",
"    }",
"    coordIndexes = cis;",
"}",
"",
"      ]]></Script>",
"      <ROUTE fromField=\"coordIndexes\" fromNode=\"OrbitScript\" toField=\"set_coordIndex\" toNode=\"Orbit\"/>",
"      <ROUTE fromField=\"coordinates\" fromNode=\"OrbitScript\" toField=\"set_point\" toNode=\"OrbitCoordinates\"/>"})
        .addComments(" DIS multiuser facilities ")
        .addChild(new DISEntityManager("EntityManager")
          .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(1).setUrl(new String[] {"../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"}))
          .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(2).setUrl(new String[] {"../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"}))
          .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(3).setUrl(new String[] {"../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"}))
          .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(4).setUrl(new String[] {"../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"})))
        .addChild(new Collision()
          .addChild(new Group("AvatarHolder")))
        .addChild(new ROUTE().setFromNode("EntityManager").setFromField("addedEntities").setToNode("AvatarHolder").setToField("addChildren"))
        .addChild(new ROUTE().setFromNode("EntityManager").setFromField("removedEntities").setToNode("AvatarHolder").setToField("removeChildren")))
      .addComments(new String[] {" the second layer contains the sliders that are moved with the user's display",
"         like a HUD (heads up display) "})
      .addLayers(new LayoutLayer().setObjectType(new String[] {"ALL"}).setPickable(true)
        .addComments(" positioning the LayoutLayer ")
        .setLayout(new Layout().setAlign(new String[] {"LEFT","BOTTOM"}).setOffset(new double[] {-0.50,0.0}))
        .addComments(" clipping the LayoutLayer ")
        .setViewport(new Viewport())
        .addComments(" the content (children) of the LayoutLayer ")
        .addComments(" first, the slider for scaling the model ")
        .addChild(new Transform().setTranslation(0.0,0.0,-3.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.1,0.1,0.1).setTransparency(1.0)))
            .setGeometry(new Box().setSize(100.0,100.0,0.02))))
        .addChild(new Transform("equationTransform")
          .addChild(new Transform().setTranslation(0.0,0.0,-20.0)
            .addChild(new Shape()
              .setGeometry(new Text("equation").setString(new String[] {"r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"})
                .setFontStyle(new FontStyle().setSize(0.09)))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0))))))
        .addChild(new ProtoDeclare("SliderProto").setName("SliderProto")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setName("sliderTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.7,0.0)))
            .addField(new field().setName("transformTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.1)))
            .addField(new field().setName("sensorTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
            .addField(new field().setName("numberTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.2,0.0,0.0)))
            .addField(new field().setName("textString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new String[] {"a="}))
            .addField(new field().setName("parameterName").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("a"))
            .addField(new field().setName("parameterScale").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(30))
            .addField(new field().setName("shaderNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform("protoSlider").setTranslation(0.0,0.7,0.0)
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("sliderTranslation")))
                .addChild(new Transform("protoTransform").setTranslation(0.0,0.0,0.1)
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("translation").setProtoField("transformTranslation")))
                  .addChild(new PlaneSensor("protoSensor").setMaxPosition(2.0,0.0))
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("translation").setProtoField("sensorTranslation")))
                  .addChild(new Transform().setTranslation(0.0,0.0,0.0)
                    .addChild(new TouchSensor("protoTS")))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new Text("protoText").setString(new String[] {"a="})
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("string").setProtoField("textString")))
                        .setFontStyle(new FontStyle().setSize(0.20)))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0))))
                    .addChild(new Transform()
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("translation").setProtoField("numberTranslation")))
                      .addChild(new Shape()
                        .setGeometry(new Text("protoNumber").setString(new String[] {"0"})
                          .setFontStyle(new FontStyle().setSize(0.20)))
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0))))))))
              .addChild(new Script("protoValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("""
ecmascript:
	const newTranslation = function(Value) {
	    protoValue_changed = Value[0] * protoScale;
	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());
	    Browser.println("In newTranslation:");
	    Browser.println(shader);
	    Browser.println(Value[0]);
	    Browser.println(Value.x);
	    Browser.println(protoScale);
	    Browser.println(Value[0] * protoScale);
	    Browser.println(protoParameterName);
					// shader[protoParameterName] = Value[0] * protoScale;
	};
""")
                .addField(new field().setName("protoScale").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(30))
                .addField(new field().setName("shader").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                .addField(new field().setName("newTranslation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
                .addField(new field().setName("protoValue_changed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1.0))
                .addField(new field().setName("protoNumber_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new String[] {"0.0"}))
                .addField(new field().setName("protoParameterName").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("a"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("protoScale").setProtoField("parameterScale"))
                  .addConnect(new connect().setNodeField("protoParameterName").setProtoField("parameterName"))
                  .addConnect(new connect().setNodeField("shader").setProtoField("shaderNode"))))
              .addChild(new ROUTE().setFromNode("protoSensor").setFromField("translation_changed").setToNode("protoTransform").setToField("set_translation"))
              .addChild(new ROUTE().setFromNode("protoSensor").setFromField("translation_changed").setToNode("protoValueTransformerScript").setToField("newTranslation"))
              .addChild(new ROUTE().setFromNode("protoValueTransformerScript").setFromField("protoNumber_changed").setToNode("protoNumber").setToField("string")))))
        .addChild(new ProtoInstance("SliderProto", "aPI").setContainerField("children")
          .addFieldValue(new fieldValue().setName("sliderTranslation").setValue(new SFVec3f(0.0,0.7,0.0)))
          .addFieldValue(new fieldValue().setName("transformTranslation").setValue(new SFVec3f(0.0,0.0,0.1)))
          .addFieldValue(new fieldValue().setName("sensorTranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("numberTranslation").setValue(new SFVec3f(0.3,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("textString").setValue(new String[] {"a="}))
          .addFieldValue(new fieldValue().setName("parameterName").setValue("a"))
          .addFieldValue(new fieldValue().setName("parameterScale").setValue(30))
          .addFieldValue(new fieldValue().setName("shaderNode")
            .addChild(new ComposedShader().setUSE("freewrlShader"))))
        .addChild(new ProtoInstance("SliderProto", "bPI").setContainerField("children")
          .addFieldValue(new fieldValue().setName("sliderTranslation").setValue(new SFVec3f(0.0,0.4,0.0)))
          .addFieldValue(new fieldValue().setName("transformTranslation").setValue(new SFVec3f(0.0,0.0,0.1)))
          .addFieldValue(new fieldValue().setName("sensorTranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("numberTranslation").setValue(new SFVec3f(0.3,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("textString").setValue(new String[] {"b="}))
          .addFieldValue(new fieldValue().setName("parameterName").setValue("b"))
          .addFieldValue(new fieldValue().setName("parameterScale").setValue(30))
          .addFieldValue(new fieldValue().setName("shaderNode")
            .addChild(new ComposedShader().setUSE("freewrlShader"))))
        .addChild(new ProtoInstance("SliderProto", "cPI").setContainerField("children")
          .addFieldValue(new fieldValue().setName("sliderTranslation").setValue(new SFVec3f(0.0,0.1,0.0)))
          .addFieldValue(new fieldValue().setName("transformTranslation").setValue(new SFVec3f(0.0,0.0,0.1)))
          .addFieldValue(new fieldValue().setName("sensorTranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("numberTranslation").setValue(new SFVec3f(0.3,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("textString").setValue(new String[] {"c="}))
          .addFieldValue(new fieldValue().setName("parameterName").setValue("c"))
          .addFieldValue(new fieldValue().setName("parameterScale").setValue(20))
          .addFieldValue(new fieldValue().setName("shaderNode")
            .addChild(new ComposedShader().setUSE("freewrlShader"))))
        .addChild(new ProtoInstance("SliderProto", "dPI").setContainerField("children")
          .addFieldValue(new fieldValue().setName("sliderTranslation").setValue(new SFVec3f(0.0,-0.2,0.0)))
          .addFieldValue(new fieldValue().setName("transformTranslation").setValue(new SFVec3f(0.0,0.0,0.1)))
          .addFieldValue(new fieldValue().setName("sensorTranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("numberTranslation").setValue(new SFVec3f(0.3,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("textString").setValue(new String[] {"d="}))
          .addFieldValue(new fieldValue().setName("parameterName").setValue("d"))
          .addFieldValue(new fieldValue().setName("parameterScale").setValue(20))
          .addFieldValue(new fieldValue().setName("shaderNode")
            .addChild(new ComposedShader().setUSE("freewrlShader"))))
        .addChild(new ProtoInstance("SliderProto", "tdeltaPI").setContainerField("children")
          .addFieldValue(new fieldValue().setName("sliderTranslation").setValue(new SFVec3f(0.0,-0.5,0.0)))
          .addFieldValue(new fieldValue().setName("transformTranslation").setValue(new SFVec3f(0.0,0.0,0.1)))
          .addFieldValue(new fieldValue().setName("sensorTranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("numberTranslation").setValue(new SFVec3f(0.8,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("textString").setValue(new String[] {"tdelta="}))
          .addFieldValue(new fieldValue().setName("parameterName").setValue("tdelta"))
          .addFieldValue(new fieldValue().setName("parameterScale").setValue(6.28))
          .addFieldValue(new fieldValue().setName("shaderNode")
            .addChild(new ComposedShader().setUSE("freewrlShader"))))
        .addChild(new ProtoInstance("SliderProto", "pdeltaPI").setContainerField("children")
          .addFieldValue(new fieldValue().setName("sliderTranslation").setValue(new SFVec3f(0.0,-0.8,0.0)))
          .addFieldValue(new fieldValue().setName("transformTranslation").setValue(new SFVec3f(0.0,0.0,0.1)))
          .addFieldValue(new fieldValue().setName("sensorTranslation").setValue(new SFVec3f(0.0,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("numberTranslation").setValue(new SFVec3f(0.8,0.0,0.0)))
          .addFieldValue(new fieldValue().setName("textString").setValue(new String[] {"pdelta="}))
          .addFieldValue(new fieldValue().setName("parameterName").setValue("pdelta"))
          .addFieldValue(new fieldValue().setName("parameterScale").setValue(6.28))
          .addFieldValue(new fieldValue().setName("shaderNode")
            .addChild(new ComposedShader().setUSE("freewrlShader")))))));
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
	 * @return bumpyfreewrlsliders model
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
        X3D thisExampleX3dModel = new bumpyfreewrlsliders().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.bumpyfreewrlsliders\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.bumpyfreewrlsliders self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./bumpyfreewrlsliders_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./bumpyfreewrlsliders_JavaExport.x3d"; 
                String filenameX3DV = "./bumpyfreewrlsliders_JavaExport.x3dv"; 
                String filenameJSON = "./bumpyfreewrlsliders_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}
