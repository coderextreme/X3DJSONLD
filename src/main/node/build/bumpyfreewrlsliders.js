var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('./X3Dautoclass');

// Javadoc annotations follow, see below for source.
/**
 * <p> *enter description here, short-sentence summaries preferred*. </p>
 <p> Related links: NeedClassName.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">NeedClassName&nbsp; Document Metadata </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Doug Sanden, Christoph Valentin, John Carlson
 */

function NeedClassName
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
NeedClassName.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Scripting").setLevel(1))
    .addComponent((new autoclass.component()).setName("EnvironmentalEffects").setLevel(3))
    .addComponent((new autoclass.component()).setName("Shaders").setLevel(1))
    .addComponent((new autoclass.component()).setName("CubeMapTexturing").setLevel(1))
    .addComponent((new autoclass.component()).setName("Texturing").setLevel(1))
    .addComponent((new autoclass.component()).setName("Rendering").setLevel(1))
    .addComments("<component name='Shape' level='4'></component>")
    .addComponent((new autoclass.component()).setName("Grouping").setLevel(3))
    .addComponent((new autoclass.component()).setName("Core").setLevel(1))
    .addComponent((new autoclass.component()).setName("DIS").setLevel(2))
    .addMeta((new autoclass.meta()).setName("title").setContent("bumpfreewrlsliders.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("*enter description here, short-sentence summaries preferred*"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Doug Sanden, Christoph Valentin, John Carlson"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("*if manually translating VRML-to-X3D, enter name of person translating here*"))
    .addMeta((new autoclass.meta()).setName("created").setContent("*enter date of initial version here*"))
    .addMeta((new autoclass.meta()).setName("translated").setContent("*enter date of translation here*"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("*enter date of latest revision here*"))
    .addMeta((new autoclass.meta()).setName("version").setContent("*enter version here, if any*"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("*enter reference citation or relative/online url here*"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("*enter additional url/bibliographic reference information here*"))
    .addMeta((new autoclass.meta()).setName("requires").setContent("*enter reference resource here if required to support function, delivery, or coherence of content*"))
    .addMeta((new autoclass.meta()).setName("rights").setContent("*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024"))
    .addMeta((new autoclass.meta()).setName("drawing").setContent("*enter drawing filename/url here*"))
    .addMeta((new autoclass.meta()).setName("MovingImage").setContent("*enter movie filename/url here*"))
    .addMeta((new autoclass.meta()).setName("photo").setContent("*enter photo filename/url here*"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("*enter subject keywords here*"))
    .addMeta((new autoclass.meta()).setName("accessRights").setContent("*enter permission statements or url here*"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("PSPad, http://www.pspad.com/"))
    .addMeta((new autoclass.meta()).setName("license").setContent("license.html"))
    .addComments(" Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L "))
  .addComments(java.newArray("java.lang.String",[" \"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution,",
"     It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)",
"     open for their \"discussion about the teapot\" ]))
  .setScene((new autoclass.Scene())
    .addComments(" LayerSet with two layers, navigation happens in layer 1 ")
    .addLayerSet((new autoclass.LayerSet()).setActiveLayer(1).setOrder(java.newArray("int", [1,2]))
      .addComments(" the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\" ")
      .addLayers((new autoclass.Layer()).setObjectType(new autoclass.MFString("\"ALL\"")).setPickable(true)
        .addComments(" basic nodes, which might be present in any scene ")
        .addChild((new autoclass.NavigationInfo()).setAvatarSize(java.newArray("float", [0.25,.0,1.75,.0,0.75])).setType("\"EXAMINE\""))
        .addChild((new autoclass.DirectionalLight()).setAmbientIntensity(.2).setDirection(0.0,-1.0,-0.0))
        .addChild((new autoclass.DirectionalLight()).setAmbientIntensity(.2).setDirection(-1.0,-.1,-1.0))
        .addChild((new autoclass.Viewpoint()).setDescription("My Overview").setFieldOfView(1.570796).setPosition(0.0,1.75,60.0))
        .addComments(" this group contains the red/green/blue 3D crosshair ")
        .addChild((new autoclass.Group())
          .addComments(" Arrow X ")
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,-1.0,1.57).setTranslation(25.0,0.0,0.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder("Shaft")).setHeight(50.0).setRadius(.35))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material("RED")).setDiffuseColor(1.0,0.0,0.0).setEmissiveColor(1.0,0.0,0.0)))))
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,-1.0,1.57).setTranslation(50.0,0.0,0.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cone("Tip")).setBottomRadius(.8).setHeight(3.0))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))))
          .addComments(" Arrow Y ")
          .addChild((new autoclass.Transform()).setTranslation(0.0,25.0,0.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material("GREEN")).setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.0,1.0,0.0)))))
          .addChild((new autoclass.Transform()).setTranslation(0.0,50.0,0.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cone()))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))))
          .addComments(" Arrow Z ")
          .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,25.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material("BLUE")).setDiffuseColor(0.0,0.0,1.0).setEmissiveColor(0.0,0.0,1.0)))))
          .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,50.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cone()))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()))))))
        .addComments(" the model that is being reviewed by the users of this scene ")
        .addChild((new autoclass.Transform("FlowerTransform"))
          .addComments(java.newArray("java.lang.String",["",
"        <Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />"]))
          .addComments(" Images courtesy of Paul Debevec's Light Probe Image Gallery ")
          .addChild((new autoclass.Background()).setBackUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\"")))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Sphere()).setRadius(0.01))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(.7,.7,.7).setSpecularColor(.5,.5,.5))
              .setTexture((new autoclass.ComposedCubeMapTexture("texture"))
                .setBackTexture((new autoclass.ImageTexture()).setId("backShader").setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\"")))
                .setBottomTexture((new autoclass.ImageTexture()).setId("bottomShader").setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
                .setFrontTexture((new autoclass.ImageTexture()).setId("frontShader").setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\"")))
                .setLeftTexture((new autoclass.ImageTexture()).setId("leftShader").setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\"")))
                .setRightTexture((new autoclass.ImageTexture()).setId("rightShader").setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\"")))
                .setTopTexture((new autoclass.ImageTexture()).setId("topShader").setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\""))))
              .addShaders((new autoclass.ComposedShader("freewrlShader")).setLanguage("GLSL")
                .addField((new autoclass.field()).setName("chromaticDispertion").setType("SFVec3f").setAccessType("inputOnly").setValue("0.98 1.0 1.033"))
                .addField((new autoclass.field()).setName("fw_textureCoordGenType").setType("SFInt32").setAccessType("inputOnly").setValue("0"))
                .addField((new autoclass.field()).setName("bias").setType("SFFloat").setAccessType("inputOnly").setValue("0.5"))
                .addField((new autoclass.field()).setName("scale").setType("SFFloat").setAccessType("inputOnly").setValue("0.5"))
                .addField((new autoclass.field()).setName("power").setType("SFFloat").setAccessType("inputOnly").setValue("2"))
                .addField((new autoclass.field()).setName("a").setType("SFFloat").setAccessType("inputOutput").setValue("15"))
                .addField((new autoclass.field()).setName("b").setType("SFFloat").setAccessType("inputOutput").setValue("5"))
                .addField((new autoclass.field()).setName("c").setType("SFFloat").setAccessType("inputOutput").setValue("5"))
                .addField((new autoclass.field()).setName("d").setType("SFFloat").setAccessType("inputOutput").setValue("5"))
                .addField((new autoclass.field()).setName("tdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
                .addField((new autoclass.field()).setName("pdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
                .addParts((new autoclass.ShaderPart()).setUrl(new autoclass.MFString("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"")))
                .addParts((new autoclass.ShaderPart()).setType("FRAGMENT").setUrl(new autoclass.MFString("\"../shaders/freewrl_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs\"")))))))
        .addComments(" DIS multiuser facilities ")
        .addChild((new autoclass.DISEntityManager("EntityManager")).setNetworkMode("networkReader")
          .addChild((new autoclass.DISEntityTypeMapping()).setCategory(77).setSpecific(1).setUrl(new autoclass.MFString("\"../data/Leif8Final.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d\"")))
          .addChild((new autoclass.DISEntityTypeMapping()).setCategory(77).setSpecific(2).setUrl(new autoclass.MFString("\"../data/Lily8Final.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d\"")))
          .addChild((new autoclass.DISEntityTypeMapping()).setCategory(77).setSpecific(3).setUrl(new autoclass.MFString("\"../data/Tufani8Final.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d\"")))
          .addChild((new autoclass.DISEntityTypeMapping()).setCategory(77).setSpecific(4).setUrl(new autoclass.MFString("\"../data/Gramps8Final.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d\""))))
        .addChild((new autoclass.Collision()).setEnabled(false)
          .addChild((new autoclass.Group("AvatarHolder"))))
        .addChild((new autoclass.ROUTE()).setFromNode("EntityManager").setFromField("addedEntities").setToNode("AvatarHolder").setToField("addChildren"))
        .addChild((new autoclass.ROUTE()).setFromNode("EntityManager").setFromField("removedEntities").setToNode("AvatarHolder").setToField("removeChildren")))
      .addComments(java.newArray("java.lang.String",[" the second layer contains the sliders that are moved with the user's display",
"         like a HUD (heads up display) ]))
      .addLayers((new autoclass.LayoutLayer()).setObjectType(new autoclass.MFString("\"ALL\"")).setPickable(true)
        .addComments(" positioning the LayoutLayer ")
        .setLayout((new autoclass.Layout()).setAlign(new autoclass.MFString("\"RIGHT\",\"BOTTOM\"")).setOffset(java.newArray("float", [0.0,.0,0.0])).setOffsetUnits(new autoclass.MFString("\"WORLD\",\"WORLD\"")).setScaleMode(new autoclass.MFString("\"NONE\",\"NONE\"")).setSize(java.newArray("float", [0.4,.0,1.0])).setSizeUnits(new autoclass.MFString("\"WORLD\",\"WORLD\"")))
        .addComments(" clipping the LayoutLayer ")
        .setViewport((new autoclass.Viewport()).setClipBoundary(java.newArray("float", [0.0,.0,1.0,.0,0.0,.0,1.0])))
        .addComments(" the content (children) of the LayoutLayer ")
        .addComments(" first, the slider for scaling the model ")
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,-3.0)
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0).setTransparency(0.7)))
            .setGeometry((new autoclass.Box()).setSize(100.0,100.0,0.02))))
        .addComments("  the plane sensors  ")
        .addChild((new autoclass.Transform("aSlider")).setTranslation(0.0,0.7,0.0)
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))
              .setGeometry((new autoclass.Cylinder()).setHeight(2.5).setRadius(.05))))
          .addChild((new autoclass.Transform("aTransform")).setTranslation(0.0,0.0,0.1)
            .addChild((new autoclass.PlaneSensor("aSensor")).setMaxPosition(20.0,0.0).setMinPosition(-20.0,0.0))
            .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,0.0)
              .addChild((new autoclass.TouchSensor("aTS")))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Sphere()).setRadius(0.08))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()).setHeight(0.3).setRadius(0.05))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))))
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))
              .setGeometry((new autoclass.Cylinder()).setHeight(2.5).setRadius(.05)))))
        .addChild((new autoclass.Transform("bSlider")).setTranslation(0.0,0.4,0.0)
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))
              .setGeometry((new autoclass.Cylinder()).setHeight(2.5).setRadius(.05))))
          .addChild((new autoclass.Transform("bTransform")).setTranslation(0.0,0.0,0.1)
            .addChild((new autoclass.PlaneSensor("bSensor")).setMaxPosition(20.0,0.0).setMinPosition(-20.0,0.0))
            .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,0.0)
              .addChild((new autoclass.TouchSensor("bTS")))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Sphere()).setRadius(0.08))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()).setHeight(0.3).setRadius(0.05))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()))))))
        .addChild((new autoclass.Transform("cSlider")).setTranslation(0.0,0.1,0.0)
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))
              .setGeometry((new autoclass.Cylinder()).setHeight(2.5).setRadius(.05))))
          .addChild((new autoclass.Transform("cTransform")).setTranslation(0.0,0.0,0.1)
            .addChild((new autoclass.PlaneSensor("cSensor")).setMaxPosition(20.0,0.0).setMinPosition(-20.0,0.0))
            .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,0.0)
              .addChild((new autoclass.TouchSensor("cTS")))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Sphere()).setRadius(0.08))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()).setHeight(0.3).setRadius(0.05))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()))))))
        .addChild((new autoclass.Transform("dSlider")).setTranslation(0.0,-0.2,0.0)
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))
              .setGeometry((new autoclass.Cylinder()).setHeight(2.5).setRadius(.05))))
          .addChild((new autoclass.Transform("dTransform")).setTranslation(0.0,0.0,0.1)
            .addChild((new autoclass.PlaneSensor("dSensor")).setMaxPosition(20.0,0.0).setMinPosition(-20.0,0.0))
            .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,0.0)
              .addChild((new autoclass.TouchSensor("dTS")))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Sphere()).setRadius(0.08))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()).setHeight(0.3).setRadius(0.05))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()))))))
        .addChild((new autoclass.Transform("pdeltaSlider")).setTranslation(0.0,-0.5,0.0)
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))
              .setGeometry((new autoclass.Cylinder()).setHeight(2.5).setRadius(.05))))
          .addChild((new autoclass.Transform("pdeltaTransform")).setTranslation(0.0,0.0,0.1)
            .addChild((new autoclass.PlaneSensor("pdeltaSensor")).setMaxPosition(20.0,0.0).setMinPosition(-20.0,0.0))
            .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,0.0)
              .addChild((new autoclass.TouchSensor("pdeltaTS")))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Sphere()).setRadius(0.08))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()).setHeight(0.3).setRadius(0.05))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()))))))
        .addChild((new autoclass.Transform("tdeltaSlider")).setTranslation(0.0,-0.8,0.0)
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))
              .setGeometry((new autoclass.Cylinder()).setHeight(2.5).setRadius(.05))))
          .addChild((new autoclass.Transform("tdeltaTransform")).setTranslation(0.0,0.0,0.1)
            .addChild((new autoclass.PlaneSensor("tdeltaSensor")).setMaxPosition(20.0,0.0).setMinPosition(-20.0,0.0))
            .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,0.0)
              .addChild((new autoclass.TouchSensor("tdeltaTS")))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Sphere()).setRadius(0.08))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()).setHeight(0.3).setRadius(0.05))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()))))))
        .addChild((new autoclass.Script("aValueTransformerScript")).setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"	  ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }" + "\n")
          .addField((new autoclass.field()).setName("newTranslation").setType("SFVec3f").setAccessType("inputOnly").setValue("1.0 1.0 1.0"))
          .addField((new autoclass.field()).setName("aValue").setType("SFFloat").setAccessType("outputOnly").setValue("1.0")))
        .addChild((new autoclass.Script("bValueTransformerScript")).setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"	  ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }" + "\n")
          .addField((new autoclass.field()).setName("newTranslation").setType("SFVec3f").setAccessType("inputOnly").setValue("1.0 1.0 1.0"))
          .addField((new autoclass.field()).setName("bValue").setType("SFFloat").setAccessType("outputOnly").setValue("1.0")))
        .addChild((new autoclass.Script("cValueTransformerScript")).setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"	  ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }" + "\n")
          .addField((new autoclass.field()).setName("newTranslation").setType("SFVec3f").setAccessType("inputOnly").setValue("1.0 1.0 1.0"))
          .addField((new autoclass.field()).setName("cValue").setType("SFFloat").setAccessType("outputOnly").setValue("1.0")))
        .addChild((new autoclass.Script("dValueTransformerScript")).setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"	  ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }" + "\n")
          .addField((new autoclass.field()).setName("newTranslation").setType("SFVec3f").setAccessType("inputOnly").setValue("1.0 1.0 1.0"))
          .addField((new autoclass.field()).setName("dValue").setType("SFFloat").setAccessType("outputOnly").setValue("1.0")))
        .addChild((new autoclass.Script("pdeltaValueTransformerScript")).setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"	  ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }" + "\n")
          .addField((new autoclass.field()).setName("newTranslation").setType("SFVec3f").setAccessType("inputOnly").setValue("1.0 1.0 1.0"))
          .addField((new autoclass.field()).setName("pdeltaValue").setType("SFFloat").setAccessType("outputOnly").setValue("1.0")))
        .addChild((new autoclass.Script("tdeltaValueTransformerScript")).setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"	  ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }" + "\n")
          .addField((new autoclass.field()).setName("newTranslation").setType("SFVec3f").setAccessType("inputOnly").setValue("1.0 1.0 1.0"))
          .addField((new autoclass.field()).setName("tdeltaValue").setType("SFFloat").setAccessType("outputOnly").setValue("1.0")))
        .addChild((new autoclass.ROUTE()).setFromNode("aSensor").setFromField("translation_changed").setToNode("aTransform").setToField("set_translation"))
        .addChild((new autoclass.ROUTE()).setFromNode("bSensor").setFromField("translation_changed").setToNode("bTransform").setToField("set_translation"))
        .addChild((new autoclass.ROUTE()).setFromNode("cSensor").setFromField("translation_changed").setToNode("cTransform").setToField("set_translation"))
        .addChild((new autoclass.ROUTE()).setFromNode("dSensor").setFromField("translation_changed").setToNode("dTransform").setToField("set_translation"))
        .addChild((new autoclass.ROUTE()).setFromNode("pdeltaSensor").setFromField("translation_changed").setToNode("pdeltaTransform").setToField("set_translation"))
        .addChild((new autoclass.ROUTE()).setFromNode("tdeltaSensor").setFromField("translation_changed").setToNode("tdeltaTransform").setToField("set_translation"))
        .addChild((new autoclass.ROUTE()).setFromNode("aSensor").setFromField("translation_changed").setToNode("aValueTransformerScript").setToField("newTranslation"))
        .addChild((new autoclass.ROUTE()).setFromNode("bSensor").setFromField("translation_changed").setToNode("bValueTransformerScript").setToField("newTranslation"))
        .addChild((new autoclass.ROUTE()).setFromNode("cSensor").setFromField("translation_changed").setToNode("cValueTransformerScript").setToField("newTranslation"))
        .addChild((new autoclass.ROUTE()).setFromNode("dSensor").setFromField("translation_changed").setToNode("dValueTransformerScript").setToField("newTranslation"))
        .addChild((new autoclass.ROUTE()).setFromNode("pdeltaSensor").setFromField("translation_changed").setToNode("pdeltaValueTransformerScript").setToField("newTranslation"))
        .addChild((new autoclass.ROUTE()).setFromNode("tdeltaSensor").setFromField("translation_changed").setToNode("tdeltaValueTransformerScript").setToField("newTranslation"))
        .addChild((new autoclass.ROUTE()).setFromNode("aValueTransformerScript").setFromField("aValue").setToNode("freewrlShader").setToField("a"))
        .addChild((new autoclass.ROUTE()).setFromNode("bValueTransformerScript").setFromField("bValue").setToNode("freewrlShader").setToField("b"))
        .addChild((new autoclass.ROUTE()).setFromNode("cValueTransformerScript").setFromField("cValue").setToNode("freewrlShader").setToField("c"))
        .addChild((new autoclass.ROUTE()).setFromNode("dValueTransformerScript").setFromField("dValue").setToNode("freewrlShader").setToField("d"))
        .addChild((new autoclass.ROUTE()).setFromNode("pdeltaValueTransformerScript").setFromField("pdeltaValue").setToNode("freewrlShader").setToField("pdelta"))
        .addChild((new autoclass.ROUTE()).setFromNode("tdeltaValueTransformerScript").setFromField("tdeltaValue").setToNode("freewrlShader").setToField("tdelta")))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return NeedClassName model
   */
  getX3dModel : function()
  {	  
	  return this.x3dModel;
  },
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf : function()
  {
	var validationResult = "";
	var  exceptionResult = "";
	try
	{
		this.initialize();
		
		if ((this.getX3dModel() == null) || (this.getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + this.x3dModel.validate();
			return validationResult;
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = "";
		if  (exceptionResult !== "" && validationResult !== "")
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult === "" && validationResult !== "")
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  },
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main : function (argv)
    {
		var testObject = new NeedClassName();
		console.log ("NeedClassName execution self-validation test results: " + testObject.validateSelf());
	}
}
new NeedClassName().main();