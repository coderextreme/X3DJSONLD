load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> *enter description here, short-sentence summaries preferred*. </p>
 <p> Related links: bumpyfreewrlsliders.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.bumpyfreewrlsliders&nbsp; Document Metadata </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author Doug Sanden, Christoph Valentin, John Carlson
 */

function bumpyfreewrlsliders
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
bumpyfreewrlsliders.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Full").setVersion("4.0")
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
    .addMeta(new meta().setName("title").setContent("bumpfreewrlsliders.x3d"))
    .addMeta(new meta().setName("description").setContent("*enter description here, short-sentence summaries preferred*"))
    .addMeta(new meta().setName("creator").setContent("Doug Sanden, Christoph Valentin, John Carlson"))
    .addMeta(new meta().setName("translator").setContent("*if manually translating VRML-to-X3D, enter name of person translating here*"))
    .addMeta(new meta().setName("created").setContent("*enter date of initial version here*"))
    .addMeta(new meta().setName("translated").setContent("*enter date of translation here*"))
    .addMeta(new meta().setName("modified").setContent("*enter date of latest revision here*"))
    .addMeta(new meta().setName("version").setContent("*enter version here, if any*"))
    .addMeta(new meta().setName("reference").setContent("*enter reference citation or relative/online url here*"))
    .addMeta(new meta().setName("reference").setContent("*enter additional url/bibliographic reference information here*"))
    .addMeta(new meta().setName("requires").setContent("*enter reference resource here if required to support function, delivery, or coherence of content*"))
    .addMeta(new meta().setName("rights").setContent("*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024"))
    .addMeta(new meta().setName("drawing").setContent("*enter drawing filename/url here*"))
    .addMeta(new meta().setName("MovingImage").setContent("*enter movie filename/url here*"))
    .addMeta(new meta().setName("photo").setContent("*enter photo filename/url here*"))
    .addMeta(new meta().setName("subject").setContent("*enter subject keywords here*"))
    .addMeta(new meta().setName("accessRights").setContent("*enter permission statements or url here*"))
    .addMeta(new meta().setName("identifier").setContent("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"))
    .addMeta(new meta().setName("generator").setContent("PSPad, http://www.pspad.com/"))
    .addMeta(new meta().setName("license").setContent("license.html"))
    .addComments(" Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L "))
  .addComments(Java.to([" \"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution,",
"     It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)",
"     open for their \"discussion about the teapot\" ], Java.type("java.lang.String[]")))
  .setScene(new Scene()
    .addComments(" LayerSet with two layers, navigation happens in layer 1 ")
    .addChild(new LayerSet().setActiveLayer(1).setOrder(Java.to([1,2], Java.type("int[]")))
      .addComments(" the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\" ")
      .addLayers(new Layer()
        .addComments(" basic nodes, which might be present in any scene ")
        .addChild(new NavigationInfo().setAvatarSize(Java.to([doubleToFloat(0.25),doubleToFloat(.0),doubleToFloat(1.75),doubleToFloat(.0),doubleToFloat(0.75)], Java.type("float[]"))).setType("\"EXAMINE\""))
        .addChild(new DirectionalLight().setAmbientIntensity(.2).setDirection(doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(-0.0)))
        .addChild(new DirectionalLight().setAmbientIntensity(.2).setDirection(doubleToFloat(-1.0),doubleToFloat(-.1),doubleToFloat(-1.0)))
        .addChild(new Viewpoint().setDescription("My Overview").setFieldOfView(1.570796).setPosition(doubleToFloat(0.0),doubleToFloat(1.75),doubleToFloat(60.0)))
        .addComments(" this group contains the red/green/blue 3D crosshair ")
        .addChild(new Group()
          .addComments(" Arrow X ")
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(1.57)).setTranslation(doubleToFloat(25.0),doubleToFloat(0.0),doubleToFloat(0.0))
            .addChild(new Shape()
              .setGeometry(new Cylinder("Shaft").setHeight(50).setRadius(.35))
              .setAppearance(new Appearance()
                .setMaterial(new Material("RED").setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0)).setEmissiveColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0))))))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(1.57)).setTranslation(doubleToFloat(50.0),doubleToFloat(0.0),doubleToFloat(0.0))
            .addChild(new Shape()
              .setGeometry(new Cone("Tip").setBottomRadius(.8).setHeight(3))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("RED")))))
          .addComments(" Arrow Y ")
          .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(25.0),doubleToFloat(0.0))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setUSE("Shaft"))
              .setAppearance(new Appearance()
                .setMaterial(new Material("GREEN").setDiffuseColor(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)).setEmissiveColor(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))))))
          .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(50.0),doubleToFloat(0.0))
            .addChild(new Shape()
              .setGeometry(new Cone().setUSE("Tip"))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("GREEN")))))
          .addComments(" Arrow Z ")
          .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.57)).setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(25.0))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setUSE("Shaft"))
              .setAppearance(new Appearance()
                .setMaterial(new Material("BLUE").setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0)).setEmissiveColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0))))))
          .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.57)).setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(50.0))
            .addChild(new Shape()
              .setGeometry(new Cone().setUSE("Tip"))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("BLUE"))))))
        .addComments(" the model that is being reviewed by the users of this scene ")
        .addChild(new Transform("FlowerTransform")
          .addComments(Java.to(["",
"        <Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />"], Java.type("java.lang.String[]")))
          .addComments(" Images courtesy of Paul Debevec's Light Probe Image Gallery ")
          .addChild(new Background().setBackUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\"")))
          .addChild(new Shape()
            .setGeometry(new Sphere().setRadius(40))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(doubleToFloat(.7),doubleToFloat(.7),doubleToFloat(.7)).setSpecularColor(doubleToFloat(.5),doubleToFloat(.5),doubleToFloat(.5)))
              .setTexture(new ComposedCubeMapTexture("texture")
                .setBack(new ImageTexture().setId("backShader").setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\"")))
                .setBottom(new ImageTexture().setId("bottomShader").setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
                .setFront(new ImageTexture().setId("frontShader").setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\"")))
                .setLeft(new ImageTexture().setId("leftShader").setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\"")))
                .setRight(new ImageTexture().setId("rightShader").setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\"")))
                .setTop(new ImageTexture().setId("topShader").setUrl(new MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\""))))
              .addShaders(new ComposedShader("freewrlShader").setLanguage("GLSL")
                .addField(new field().setName("chromaticDispertion").setType("SFVec3f").setAccessType("inputOnly").setValue("0.98 1.0 1.033"))
                .addField(new field().setName("fw_textureCoordGenType").setType("SFInt32").setAccessType("inputOnly").setValue("0"))
                .addField(new field().setName("bias").setType("SFFloat").setAccessType("inputOnly").setValue("0.5"))
                .addField(new field().setName("scale").setType("SFFloat").setAccessType("inputOnly").setValue("0.5"))
                .addField(new field().setName("power").setType("SFFloat").setAccessType("inputOnly").setValue("2"))
                .addField(new field().setName("a").setType("SFFloat").setAccessType("inputOutput").setValue("15"))
                .addField(new field().setName("b").setType("SFFloat").setAccessType("inputOutput").setValue("5"))
                .addField(new field().setName("c").setType("SFFloat").setAccessType("inputOutput").setValue("5"))
                .addField(new field().setName("d").setType("SFFloat").setAccessType("inputOutput").setValue("5"))
                .addField(new field().setName("tdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
                .addField(new field().setName("pdelta").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
                .addParts(new ShaderPart().setUrl(new MFString("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"")))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString("\"../shaders/freewrl_bubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs\"")))))))
        .addComments(" DIS multiuser facilities ")
        .addChild(new DISEntityManager("EntityManager").setNetworkMode("networkReader")
          .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(1).setUrl(new MFString("\"../data/Leif8Final.x3dv\" \"https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3dv\"")))
          .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(2).setUrl(new MFString("\"../data/Lily8Final.x3dv\" \"https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3dv\"")))
          .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(3).setUrl(new MFString("\"../data/Tufani8Final.x3dv\" \"https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3dv\"")))
          .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(4).setUrl(new MFString("\"../data/Gramps8Final.x3dv\" \"https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3dv\""))))
        .addChild(new Collision().setEnabled(false)
          .addChild(new Group("AvatarHolder")))
        .addChild(new ROUTE().setFromNode("EntityManager").setFromField("addedEntities").setToNode("AvatarHolder").setToField("addChildren"))
        .addChild(new ROUTE().setFromNode("EntityManager").setFromField("removedEntities").setToNode("AvatarHolder").setToField("removeChildren")))
      .addComments(Java.to([" the second layer contains the sliders that are moved with the user's display",
"         like a HUD (heads up display) ], Java.type("java.lang.String[]")))
      .addLayers(new LayoutLayer()
        .addComments(" positioning the LayoutLayer ")
        .setLayout(new Layout().setAlign(new MFString("\"RIGHT\",\"BOTTOM\"")).setOffset(Java.to([doubleToFloat(0.0),doubleToFloat(.0),doubleToFloat(0.0)], Java.type("float[]"))).setOffsetUnits(new MFString("\"WORLD\",\"WORLD\"")).setScaleMode(new MFString("\"NONE\",\"NONE\"")).setSize(Java.to([doubleToFloat(0.4),doubleToFloat(.0),doubleToFloat(1.0)], Java.type("float[]"))).setSizeUnits(new MFString("\"WORLD\",\"WORLD\"")))
        .addComments(" clipping the LayoutLayer ")
        .setViewport(new Viewport().setClipBoundary(Java.to([doubleToFloat(0.0),doubleToFloat(.0),doubleToFloat(1.0),doubleToFloat(.0),doubleToFloat(0.0),doubleToFloat(.0),doubleToFloat(1.0)], Java.type("float[]"))))
        .addComments(" the content (children) of the LayoutLayer ")
        .addComments(" first, the slider for scaling the model ")
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-3.0))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)).setTransparency(0.7)))
            .setGeometry(new Box().setSize(doubleToFloat(100.0),doubleToFloat(100.0),doubleToFloat(0.02)))))
        .addComments("  the plane sensors  ")
        .addChild(new Transform("aSlider").setTranslation(doubleToFloat(0.0),doubleToFloat(0.7),doubleToFloat(0.0))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05))))
          .addChild(new Transform("aTransform").setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1))
            .addChild(new PlaneSensor("aSensor").setMaxPosition(doubleToFloat(20.0),doubleToFloat(0.0)).setMinPosition(doubleToFloat(-20.0),doubleToFloat(0.0)))
            .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0))
              .addChild(new TouchSensor("aTS"))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0))))))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.05))
              .setAppearance(new Appearance()
                .setMaterial(new Material()))))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05)))))
        .addChild(new Transform("bSlider").setTranslation(doubleToFloat(0.0),doubleToFloat(0.4),doubleToFloat(0.0))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05))))
          .addChild(new Transform("bTransform").setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1))
            .addChild(new PlaneSensor("bSensor").setMaxPosition(doubleToFloat(20.0),doubleToFloat(0.0)).setMinPosition(doubleToFloat(-20.0),doubleToFloat(0.0)))
            .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0))
              .addChild(new TouchSensor("bTS"))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0))))))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.05))
              .setAppearance(new Appearance()
                .setMaterial(new Material())))))
        .addChild(new Transform("cSlider").setTranslation(doubleToFloat(0.0),doubleToFloat(0.1),doubleToFloat(0.0))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05))))
          .addChild(new Transform("cTransform").setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1))
            .addChild(new PlaneSensor("cSensor").setMaxPosition(doubleToFloat(20.0),doubleToFloat(0.0)).setMinPosition(doubleToFloat(-20.0),doubleToFloat(0.0)))
            .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0))
              .addChild(new TouchSensor("cTS"))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0))))))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.05))
              .setAppearance(new Appearance()
                .setMaterial(new Material())))))
        .addChild(new Transform("dSlider").setTranslation(doubleToFloat(0.0),doubleToFloat(-0.2),doubleToFloat(0.0))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05))))
          .addChild(new Transform("dTransform").setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1))
            .addChild(new PlaneSensor("dSensor").setMaxPosition(doubleToFloat(20.0),doubleToFloat(0.0)).setMinPosition(doubleToFloat(-20.0),doubleToFloat(0.0)))
            .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0))
              .addChild(new TouchSensor("dTS"))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0))))))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.05))
              .setAppearance(new Appearance()
                .setMaterial(new Material())))))
        .addChild(new Transform("pdeltaSlider").setTranslation(doubleToFloat(0.0),doubleToFloat(-0.5),doubleToFloat(0.0))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05))))
          .addChild(new Transform("pdeltaTransform").setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1))
            .addChild(new PlaneSensor("pdeltaSensor").setMaxPosition(doubleToFloat(20.0),doubleToFloat(0.0)).setMinPosition(doubleToFloat(-20.0),doubleToFloat(0.0)))
            .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0))
              .addChild(new TouchSensor("pdeltaTS"))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0))))))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.05))
              .setAppearance(new Appearance()
                .setMaterial(new Material())))))
        .addChild(new Transform("tdeltaSlider").setTranslation(doubleToFloat(0.0),doubleToFloat(-0.8),doubleToFloat(0.0))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.05))))
          .addChild(new Transform("tdeltaTransform").setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1))
            .addChild(new PlaneSensor("tdeltaSensor").setMaxPosition(doubleToFloat(20.0),doubleToFloat(0.0)).setMinPosition(doubleToFloat(-20.0),doubleToFloat(0.0)))
            .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0))
              .addChild(new TouchSensor("tdeltaTS"))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.08))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0))))))
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.05))
              .setAppearance(new Appearance()
                .setMaterial(new Material())))))
        .addChild(new Script("aValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"	  ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }" + "\n")
          .addField(new field().setName("newTranslation").setType("SFVec3f").setAccessType("inputOnly").setValue("1.0 1.0 1.0"))
          .addField(new field().setName("aValue").setType("SFFloat").setAccessType("outputOnly").setValue("1.0")))
        .addChild(new Script("bValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"	  ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }" + "\n")
          .addField(new field().setName("newTranslation").setType("SFVec3f").setAccessType("inputOnly").setValue("1.0 1.0 1.0"))
          .addField(new field().setName("bValue").setType("SFFloat").setAccessType("outputOnly").setValue("1.0")))
        .addChild(new Script("cValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"	  ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }" + "\n")
          .addField(new field().setName("newTranslation").setType("SFVec3f").setAccessType("inputOnly").setValue("1.0 1.0 1.0"))
          .addField(new field().setName("cValue").setType("SFFloat").setAccessType("outputOnly").setValue("1.0")))
        .addChild(new Script("dValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"	  ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }" + "\n")
          .addField(new field().setName("newTranslation").setType("SFVec3f").setAccessType("inputOnly").setValue("1.0 1.0 1.0"))
          .addField(new field().setName("dValue").setType("SFFloat").setAccessType("outputOnly").setValue("1.0")))
        .addChild(new Script("pdeltaValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"	  ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }" + "\n")
          .addField(new field().setName("newTranslation").setType("SFVec3f").setAccessType("inputOnly").setValue("1.0 1.0 1.0"))
          .addField(new field().setName("pdeltaValue").setType("SFFloat").setAccessType("outputOnly").setValue("1.0")))
        .addChild(new Script("tdeltaValueTransformerScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"	  ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }" + "\n")
          .addField(new field().setName("newTranslation").setType("SFVec3f").setAccessType("inputOnly").setValue("1.0 1.0 1.0"))
          .addField(new field().setName("tdeltaValue").setType("SFFloat").setAccessType("outputOnly").setValue("1.0")))
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
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return bumpyfreewrlsliders model
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
	var       metaResult = "";
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
		// first list informational meta elements of interest
		var metaList = this.getX3dModel().getHead().getMetaList();
		for (var m in metaList) {
			var metaObject = metaList[m];
			if (metaObject.getName() === metaObject.NAME_ERROR ||
				metaObject.getName() === metaObject.NAME_WARNING ||
				metaObject.getName() === metaObject.NAME_HINT ||
				metaObject.getName() === metaObject.NAME_INFO ||
				metaObject.getName() === metaObject.NAME_TODO)
			{
				metaResult += metaObject.toStringX3D();
			}
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (metaResult === "" && exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = metaResult;
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
		var testObject = new bumpyfreewrlsliders();
		print ("bumpyfreewrlsliders execution self-validation test results: " + testObject.validateSelf());
	}
}
new bumpyfreewrlsliders().main();