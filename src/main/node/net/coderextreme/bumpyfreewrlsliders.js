var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
      .setHead(new autoclass.head()
        .addComponent(new autoclass.component().setName("Scripting").setLevel(1))
        .addComponent(new autoclass.component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new autoclass.component().setName("Shaders").setLevel(1))
        .addComponent(new autoclass.component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new autoclass.component().setName("Texturing").setLevel(1))
        .addComponent(new autoclass.component().setName("Rendering").setLevel(1))
        .addComponent(new autoclass.component().setName("Grouping").setLevel(3))
        .addComponent(new autoclass.component().setName("Core").setLevel(1))
        .addComponent(new autoclass.component().setName("DIS").setLevel(2))
        .addComments((new autoclass.CommentsBlock("<component name='Shape' level='4'></component>")))
        .addComments((new autoclass.CommentsBlock("Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L")))
        .addMeta(new autoclass.meta().setName("title").setContent("bumpfreewrlsliders.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("*enter description here, short-sentence summaries preferred*"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Doug Sanden, Christoph Valentin, John Carlson"))
        .addMeta(new autoclass.meta().setName("translator").setContent("*if manually translating VRML-to-X3D, enter name of person translating here*"))
        .addMeta(new autoclass.meta().setName("created").setContent("*enter date of initial version here*"))
        .addMeta(new autoclass.meta().setName("translated").setContent("*enter date of translation here*"))
        .addMeta(new autoclass.meta().setName("modified").setContent("*enter date of latest revision here*"))
        .addMeta(new autoclass.meta().setName("version").setContent("*enter version here, if any*"))
        .addMeta(new autoclass.meta().setName("reference").setContent("*enter reference citation or relative/online url here*"))
        .addMeta(new autoclass.meta().setName("reference").setContent("*enter additional url/bibliographic reference information here*"))
        .addMeta(new autoclass.meta().setName("requires").setContent("*enter reference resource here if required to support function, delivery, or coherence of content*"))
        .addMeta(new autoclass.meta().setName("rights").setContent("*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024"))
        .addMeta(new autoclass.meta().setName("drawing").setContent("*enter drawing filename/url here*"))
        .addMeta(new autoclass.meta().setName("MovingImage").setContent("*enter movie filename/url here*"))
        .addMeta(new autoclass.meta().setName("photo").setContent("*enter photo filename/url here*"))
        .addMeta(new autoclass.meta().setName("subject").setContent("*enter subject keywords here*"))
        .addMeta(new autoclass.meta().setName("accessRights").setContent("*enter permission statements or url here*"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"))
        .addMeta(new autoclass.meta().setName("generator").setContent("PSPad, http://www.pspad.com/"))
        .addMeta(new autoclass.meta().setName("license").setContent("license.html")))
      .addComments((new autoclass.CommentsBlock("\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\"")))
      .setScene(new autoclass.Scene()
        .addComments((new autoclass.CommentsBlock("LayerSet with two layers, navigation happens in layer 1")))
        .addLayerSet(new autoclass.LayerSet().setActiveLayer(1).setOrder(java.newArray("int", [1,2]))
          .addComments((new autoclass.CommentsBlock("the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"")))
          .addComments((new autoclass.CommentsBlock("the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)")))
          .addLayers(new autoclass.Layer().setPickable(true).setObjectType(java.newArray("java.lang.String", ["ALL"]))
            .addComments((new autoclass.CommentsBlock("basic nodes, which might be present in any scene")))
            .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["EXAMINE"])).setAvatarSize(java.newArray("float", [java.newFloat(0.25), java.newFloat(1.75), java.newFloat(0.75)])))
            .addChild(new autoclass.DirectionalLight().setAmbientIntensity(java.newFloat(0.2)).setDirection(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(0)])))
            .addChild(new autoclass.DirectionalLight().setAmbientIntensity(java.newFloat(0.2)).setDirection(java.newArray("float", [java.newFloat(-1), java.newFloat(-0.1), java.newFloat(-1)])))
            .addChild(new autoclass.Viewpoint().setDescription("My Overview").setFieldOfView(java.newFloat(1.570796)).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(1.75), java.newFloat(60)])))
            .addComments((new autoclass.CommentsBlock("this group contains the red/green/blue 3D crosshair")))
            .addChild(new autoclass.Group()
              .addComments((new autoclass.CommentsBlock("Arrow X")))
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(25), java.newFloat(0), java.newFloat(0)])).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cylinder().setDEF("Shaft").setRadius(java.newFloat(0.35)).setHeight(java.newFloat(50)))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("RED").setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(50), java.newFloat(0), java.newFloat(0)])).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cone().setDEF("Tip").setBottomRadius(java.newFloat(0.8)).setHeight(java.newFloat(3)))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setUSE("RED")))))
              .addComments((new autoclass.CommentsBlock("Arrow Y")))
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(25), java.newFloat(0)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cylinder().setUSE("Shaft"))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("GREEN").setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])).setEmissiveColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))))))
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(50), java.newFloat(0)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cone().setUSE("Tip"))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setUSE("GREEN")))))
              .addComments((new autoclass.CommentsBlock("Arrow Z")))
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(25)])).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cylinder().setUSE("Shaft"))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("BLUE").setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)])).setEmissiveColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))))
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(50)])).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cone().setUSE("Tip"))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setUSE("BLUE"))))))
            .addComments((new autoclass.CommentsBlock("the model that is being reviewed by the users of this scene")))
            .addChild(new autoclass.Transform().setDEF("FlowerTransform")
              .addComments((new autoclass.CommentsBlock("<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />")))
              .addComments((new autoclass.CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery")))
              .addChild(new autoclass.Background().setBackUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])).setBottomUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])).setFrontUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])).setLeftUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])).setRightUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])).setTopUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])))
              .addChild(new autoclass.Shape()
                .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.01)))
                .setAppearance(new autoclass.Appearance()
                  .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))
                  .setTexture(new autoclass.ComposedCubeMapTexture().setDEF("texture")
                    .setBackTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])))
                    .setBottomTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])))
                    .setFrontTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])))
                    .setLeftTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])))
                    .setRightTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])))
                    .setTopTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]))))
                  .addShaders(new autoclass.ComposedShader().setDEF("freewrlShader").setLanguage("GLSL")
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("0.98 1 1.033"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("fw_textureCoordGenType").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("0"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("bias").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("power").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("2"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("a").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("15"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("b").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("c").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("d").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("tdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("pdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addParts(new autoclass.ShaderPart().setType("VERTEX").setUrl(java.newArray("java.lang.String", ["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"])))
                    .addParts(new autoclass.ShaderPart().setType("FRAGMENT").setUrl(java.newArray("java.lang.String", ["../shaders/freewrl_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"])))))))
            .addComments((new autoclass.CommentsBlock("DIS multiuser facilities")))
            .addChild(new autoclass.DISEntityManager().setDEF("EntityManager")
              .addChild(new autoclass.DISEntityTypeMapping().setCategory(77).setSpecific(1).setUrl(java.newArray("java.lang.String", ["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"])))
              .addChild(new autoclass.DISEntityTypeMapping().setCategory(77).setSpecific(2).setUrl(java.newArray("java.lang.String", ["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"])))
              .addChild(new autoclass.DISEntityTypeMapping().setCategory(77).setSpecific(3).setUrl(java.newArray("java.lang.String", ["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"])))
              .addChild(new autoclass.DISEntityTypeMapping().setCategory(77).setSpecific(4).setUrl(java.newArray("java.lang.String", ["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"]))))
            .addChild(new autoclass.Collision().setEnabled(false)
              .addChild(new autoclass.Group().setDEF("AvatarHolder")))
            .addChild(new autoclass.ROUTE().setFromField("addedEntities").setFromNode("EntityManager").setToField("addChildren").setToNode("AvatarHolder"))
            .addChild(new autoclass.ROUTE().setFromField("removedEntities").setFromNode("EntityManager").setToField("removeChildren").setToNode("AvatarHolder")))
          .addLayers(new autoclass.LayoutLayer().setPickable(true).setObjectType(java.newArray("java.lang.String", ["ALL"]))
            .addComments((new autoclass.CommentsBlock("positioning the LayoutLayer")))
            .addComments((new autoclass.CommentsBlock("clipping the LayoutLayer")))
            .addComments((new autoclass.CommentsBlock("the content (children) of the LayoutLayer")))
            .addComments((new autoclass.CommentsBlock("first, the slider for scaling the model")))
            .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-3)]))
              .addChild(new autoclass.Shape()
                .setAppearance(new autoclass.Appearance()
                  .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setTransparency(java.newFloat(0.7))))
                .setGeometry(new autoclass.Box().setSize(java.newArray("float", [java.newFloat(100), java.newFloat(100), java.newFloat(0.02)])))))
            .addComments((new autoclass.CommentsBlock("the plane sensors")))
            .addChild(new autoclass.Transform().setDEF("aSlider").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.7), java.newFloat(0)]))
              .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material()))
                  .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05)).setHeight(java.newFloat(2.5)))))
              .addChild(new autoclass.Transform().setDEF("aTransform").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.1)]))
                .addChild(new autoclass.PlaneSensor().setDEF("aSensor").setMinPosition(java.newArray("float", [java.newFloat(-20), java.newFloat(0)])).setMaxPosition(java.newArray("float", [java.newFloat(20), java.newFloat(0)])))
                .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                  .addChild(new autoclass.TouchSensor().setDEF("aTS"))
                  .addChild(new autoclass.Shape()
                    .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.08)))
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05)).setHeight(java.newFloat(0.3)))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material()))))
              .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material()))
                  .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05)).setHeight(java.newFloat(2.5))))))
            .addChild(new autoclass.Transform().setDEF("bSlider").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.4), java.newFloat(0)]))
              .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material()))
                  .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05)).setHeight(java.newFloat(2.5)))))
              .addChild(new autoclass.Transform().setDEF("bTransform").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.1)]))
                .addChild(new autoclass.PlaneSensor().setDEF("bSensor").setMinPosition(java.newArray("float", [java.newFloat(-20), java.newFloat(0)])).setMaxPosition(java.newArray("float", [java.newFloat(20), java.newFloat(0)])))
                .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                  .addChild(new autoclass.TouchSensor().setDEF("bTS"))
                  .addChild(new autoclass.Shape()
                    .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.08)))
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05)).setHeight(java.newFloat(0.3)))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material())))))
            .addChild(new autoclass.Transform().setDEF("cSlider").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.1), java.newFloat(0)]))
              .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material()))
                  .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05)).setHeight(java.newFloat(2.5)))))
              .addChild(new autoclass.Transform().setDEF("cTransform").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.1)]))
                .addChild(new autoclass.PlaneSensor().setDEF("cSensor").setMinPosition(java.newArray("float", [java.newFloat(-20), java.newFloat(0)])).setMaxPosition(java.newArray("float", [java.newFloat(20), java.newFloat(0)])))
                .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                  .addChild(new autoclass.TouchSensor().setDEF("cTS"))
                  .addChild(new autoclass.Shape()
                    .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.08)))
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05)).setHeight(java.newFloat(0.3)))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material())))))
            .addChild(new autoclass.Transform().setDEF("dSlider").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-0.2), java.newFloat(0)]))
              .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material()))
                  .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05)).setHeight(java.newFloat(2.5)))))
              .addChild(new autoclass.Transform().setDEF("dTransform").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.1)]))
                .addChild(new autoclass.PlaneSensor().setDEF("dSensor").setMinPosition(java.newArray("float", [java.newFloat(-20), java.newFloat(0)])).setMaxPosition(java.newArray("float", [java.newFloat(20), java.newFloat(0)])))
                .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                  .addChild(new autoclass.TouchSensor().setDEF("dTS"))
                  .addChild(new autoclass.Shape()
                    .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.08)))
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05)).setHeight(java.newFloat(0.3)))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material())))))
            .addChild(new autoclass.Transform().setDEF("pdeltaSlider").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-0.5), java.newFloat(0)]))
              .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material()))
                  .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05)).setHeight(java.newFloat(2.5)))))
              .addChild(new autoclass.Transform().setDEF("pdeltaTransform").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.1)]))
                .addChild(new autoclass.PlaneSensor().setDEF("pdeltaSensor").setMinPosition(java.newArray("float", [java.newFloat(-20), java.newFloat(0)])).setMaxPosition(java.newArray("float", [java.newFloat(20), java.newFloat(0)])))
                .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                  .addChild(new autoclass.TouchSensor().setDEF("pdeltaTS"))
                  .addChild(new autoclass.Shape()
                    .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.08)))
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05)).setHeight(java.newFloat(0.3)))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material())))))
            .addChild(new autoclass.Transform().setDEF("tdeltaSlider").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-0.8), java.newFloat(0)]))
              .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)]))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material()))
                  .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05)).setHeight(java.newFloat(2.5)))))
              .addChild(new autoclass.Transform().setDEF("tdeltaTransform").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.1)]))
                .addChild(new autoclass.PlaneSensor().setDEF("tdeltaSensor").setMinPosition(java.newArray("float", [java.newFloat(-20), java.newFloat(0)])).setMaxPosition(java.newArray("float", [java.newFloat(20), java.newFloat(0)])))
                .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                  .addChild(new autoclass.TouchSensor().setDEF("tdeltaTS"))
                  .addChild(new autoclass.Shape()
                    .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.08)))
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Cylinder().setRadius(java.newFloat(0.05)).setHeight(java.newFloat(0.3)))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material())))))
            .addChild(new autoclass.Script().setDEF("aValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("newTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("aValue").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
              .setSourceCode("ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }"))
            .addChild(new autoclass.Script().setDEF("bValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("newTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("bValue").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
              .setSourceCode("ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }"))
            .addChild(new autoclass.Script().setDEF("cValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("newTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("cValue").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
              .setSourceCode("ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }"))
            .addChild(new autoclass.Script().setDEF("dValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("newTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("dValue").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
              .setSourceCode("ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }"))
            .addChild(new autoclass.Script().setDEF("pdeltaValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("newTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("pdeltaValue").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
              .setSourceCode("ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }"))
            .addChild(new autoclass.Script().setDEF("tdeltaValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("newTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("tdeltaValue").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
              .setSourceCode("ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }"))
            .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("aSensor").setToField("set_translation").setToNode("aTransform"))
            .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("bSensor").setToField("set_translation").setToNode("bTransform"))
            .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("cSensor").setToField("set_translation").setToNode("cTransform"))
            .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("dSensor").setToField("set_translation").setToNode("dTransform"))
            .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("pdeltaSensor").setToField("set_translation").setToNode("pdeltaTransform"))
            .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("tdeltaSensor").setToField("set_translation").setToNode("tdeltaTransform"))
            .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("aSensor").setToField("newTranslation").setToNode("aValueTransformerScript"))
            .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("bSensor").setToField("newTranslation").setToNode("bValueTransformerScript"))
            .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("cSensor").setToField("newTranslation").setToNode("cValueTransformerScript"))
            .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("dSensor").setToField("newTranslation").setToNode("dValueTransformerScript"))
            .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("pdeltaSensor").setToField("newTranslation").setToNode("pdeltaValueTransformerScript"))
            .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("tdeltaSensor").setToField("newTranslation").setToNode("tdeltaValueTransformerScript"))
            .addChild(new autoclass.ROUTE().setFromField("aValue").setFromNode("aValueTransformerScript").setToField("a").setToNode("freewrlShader"))
            .addChild(new autoclass.ROUTE().setFromField("bValue").setFromNode("bValueTransformerScript").setToField("b").setToNode("freewrlShader"))
            .addChild(new autoclass.ROUTE().setFromField("cValue").setFromNode("cValueTransformerScript").setToField("c").setToNode("freewrlShader"))
            .addChild(new autoclass.ROUTE().setFromField("dValue").setFromNode("dValueTransformerScript").setToField("d").setToNode("freewrlShader"))
            .addChild(new autoclass.ROUTE().setFromField("pdeltaValue").setFromNode("pdeltaValueTransformerScript").setToField("pdelta").setToNode("freewrlShader"))
            .addChild(new autoclass.ROUTE().setFromField("tdeltaValue").setFromNode("tdeltaValueTransformerScript").setToField("tdelta").setToNode("freewrlShader"))
            .setLayout(new autoclass.Layout().setAlign(java.newArray("java.lang.String", ["RIGHT","BOTTOM"])).setOffset(java.newArray("float", [java.newFloat(0), java.newFloat(0)])).setSize(java.newArray("float", [java.newFloat(0.4), java.newFloat(1)])))
            .setViewport(new autoclass.Viewport().setClipBoundary(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1)]))))))      ;
    X3D0.toFileX3D(".././bumpyfreewrlsliders.new.node.x3d");
    X3D0.toFileJSON(".././bumpyfreewrlsliders.new.node.json");
    process.exit(0);
