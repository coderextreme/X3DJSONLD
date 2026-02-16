import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Full").setVersion("4.1")
      .setHead(new autoclass.head()
        .addComponent(new autoclass.component().setName("Scripting").setLevel(1))
        .addComponent(new autoclass.component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new autoclass.component().setName("Shaders").setLevel(1))
        .addComponent(new autoclass.component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new autoclass.component().setName("Texturing").setLevel(1))
        .addComponent(new autoclass.component().setName("Rendering").setLevel(1))
        .addComponent(new autoclass.component().setName("Shape").setLevel(4))
        .addComponent(new autoclass.component().setName("Grouping").setLevel(3))
        .addComponent(new autoclass.component().setName("Core").setLevel(1))
        .addComponent(new autoclass.component().setName("DIS").setLevel(2))
        .addMeta(new autoclass.meta().setName("title").setContent("bumpyfreewrlsliders.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Bumpy Orbitals with Sliders for FreeWRL"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Doug Sanden, Christoph Valentin, John Carlson"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https:/coderextreme.net/X3DJSONLD/src/main/data/bumpyfreewrlsliders.x3d"))
        .addMeta(new autoclass.meta().setName("license").setContent("license.html")))
      .setScene(new autoclass.Scene()
        .addComments((new autoclass.CommentsBlock("LayerSet with two layers, navigation happens in layer 1")))
        .addLayerSet(new autoclass.LayerSet().setActiveLayer(1).setOrder(java.newArray("int", [1,2]))
          .addComments((new autoclass.CommentsBlock("the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"")))
          .addComments((new autoclass.CommentsBlock("the second layer contains the sliders that are moved with the user's display")))
          .addComments((new autoclass.CommentsBlock("like a HUD (heads up display)")))
          .addLayers(new autoclass.Layer().setPickable(true).setObjectType(java.newArray("java.lang.String", ["ALL"]))
            .addComments((new autoclass.CommentsBlock("basic nodes, which might be present in any scene")))
            .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["EXAMINE","FLY","LOOKAT","ANY"])).setAvatarSize(java.newArray("float", [java.newFloat(0.25), java.newFloat(1.75), java.newFloat(0.75)])))
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
              .addChild(new autoclass.Transform()
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(5)))
                  .addComments((new autoclass.CommentsBlock("<IndexedFaceSet convex=\"false\" DEF=\"Orbit\" creaseAngle=\"0\">")))
                  .addComments((new autoclass.CommentsBlock("<Coordinate DEF=\"OrbitCoordinates\"/>")))
                  .addComments((new autoclass.CommentsBlock("</IndexedFaceSet>")))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])))
                    .setTexture(new autoclass.ComposedCubeMapTexture().setDEF("texture")
                      .setBackTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])))
                      .setBottomTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])))
                      .setFrontTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])))
                      .setLeftTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])))
                      .setRightTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])))
                      .setTopTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]))))
                    .addShaders(new autoclass.ComposedShader().setDEF("freewrlShader").setLanguage("GLSL")
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("fw_textureCoordGenType").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("chromaticDispertion").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("bias").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("scale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("power").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("a").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("15"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("b").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("c").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("20"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("d").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("20"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("tdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                      .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("pdelta").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                      .addComments((new autoclass.CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\">")))
                      .addComments((new autoclass.CommentsBlock("<ComposedCubeMapTexture USE=\"texture\"/>")))
                      .addComments((new autoclass.CommentsBlock("</field>")))
                      .addParts(new autoclass.ShaderPart().setType("VERTEX")
                        .setIS(new autoclass.IS()
                          .addConnect(new autoclass.connect().setNodeField("url").setProtoField("vertex"))))
                      .addParts(new autoclass.ShaderPart().setType("FRAGMENT")
                        .setIS(new autoclass.IS()
                          .addConnect(new autoclass.connect().setNodeField("url").setProtoField("fragment")))))
                    .addComments((new autoclass.CommentsBlock("<ComposedShader DEF=\"freewrlShader\" language=\"GLSL\">")))
                    .addComments((new autoclass.CommentsBlock("<field name='fw_textureCoordGenType' accessType='inputOutput' type='SFInt32' value='0'></field>")))
                    .addComments((new autoclass.CommentsBlock("<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field>")))
                    .addComments((new autoclass.CommentsBlock("<field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field>")))
                    .addComments((new autoclass.CommentsBlock("<field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field>")))
                    .addComments((new autoclass.CommentsBlock("<field name='power' type='SFFloat' accessType='inputOutput' value='2'></field>")))
                    .addComments((new autoclass.CommentsBlock("<field name='a' type='SFFloat' accessType='inputOutput' value='15'></field>")))
                    .addComments((new autoclass.CommentsBlock("<field name='b' type='SFFloat' accessType='inputOutput' value='5'></field>")))
                    .addComments((new autoclass.CommentsBlock("<field name='c' type='SFFloat' accessType='inputOutput' value='20'></field>")))
                    .addComments((new autoclass.CommentsBlock("<field name='d' type='SFFloat' accessType='inputOutput' value='20'></field>")))
                    .addComments((new autoclass.CommentsBlock("<field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>")))
                    .addComments((new autoclass.CommentsBlock("<field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>")))
                    .addComments((new autoclass.CommentsBlock("<ShaderPart type='VERTEX'>")))
                    .addComments((new autoclass.CommentsBlock("<IS>")))
                    .addComments((new autoclass.CommentsBlock("<connect nodeField=\"url\" protoField=\"vertex\"/>")))
                    .addComments((new autoclass.CommentsBlock("</IS>")))
                    .addComments((new autoclass.CommentsBlock("</ShaderPart>")))
                    .addComments((new autoclass.CommentsBlock("<ShaderPart type='FRAGMENT'>")))
                    .addComments((new autoclass.CommentsBlock("<IS>")))
                    .addComments((new autoclass.CommentsBlock("<connect nodeField=\"url\" protoField=\"fragment\"/>")))
                    .addComments((new autoclass.CommentsBlock("</IS>")))
                    .addComments((new autoclass.CommentsBlock("</ShaderPart>")))
                    .addComments((new autoclass.CommentsBlock("</ComposedShader>")))))))
            .addComments((new autoclass.CommentsBlock("<Script DEF=\"OrbitScript\">")))
            .addComments((new autoclass.CommentsBlock("<field accessType=\"inputOutput\" name=\"coordinates\" type=\"MFVec3f\"/>")))
            .addComments((new autoclass.CommentsBlock("<field accessType=\"outputOnly\" name=\"coordIndexes\" type=\"MFInt32\"/>")))
            .addComments((new autoclass.CommentsBlock("<field name='a' type='SFFloat' accessType='inputOutput' value='10'></field>")))
            .addComments((new autoclass.CommentsBlock("<field name='b' type='SFFloat' accessType='inputOutput' value='10'></field>")))
            .addComments((new autoclass.CommentsBlock("<field name='c' type='SFFloat' accessType='inputOutput' value='2'></field>")))
            .addComments((new autoclass.CommentsBlock("<field name='d' type='SFFloat' accessType='inputOutput' value='2'></field>")))
            .addComments((new autoclass.CommentsBlock("<field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>")))
            .addComments((new autoclass.CommentsBlock("<field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>")))
            .addComments((new autoclass.CommentsBlock("<![CDATA[ecmascript: function initialize() { var resolution = 300; var theta = 0.0; var phi = 0.0; var delta = (2 * 3.141592653) / (resolution-1); var crds = new MFVec3f(); for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta); crds.push(new SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) )); theta += delta; } phi += delta; } coordinates = crds; var cis = new MFInt32(); for ( i = 0; i < resolution-1; i++) { for ( j = 0; j < resolution-1; j++) { cis.push(i*resolution+j); cis.push(i*resolution+j+1); cis.push((i+1)*resolution+j+1); cis.push((i+1)*resolution+j); cis.push(-1); } } coordIndexes = cis; } ]]></Script>")))
            .addComments((new autoclass.CommentsBlock("<ROUTE fromField=\"coordIndexes\" fromNode=\"OrbitScript\" toField=\"set_coordIndex\" toNode=\"Orbit\"/>")))
            .addComments((new autoclass.CommentsBlock("<ROUTE fromField=\"coordinates\" fromNode=\"OrbitScript\" toField=\"set_point\" toNode=\"OrbitCoordinates\"/>")))
            .addComments((new autoclass.CommentsBlock("DIS multiuser facilities")))
            .addChild(new autoclass.DISEntityManager().setDEF("EntityManager")
              .addChild(new autoclass.DISEntityTypeMapping().setCategory(77).setSpecific(1).setUrl(java.newArray("java.lang.String", ["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"])))
              .addChild(new autoclass.DISEntityTypeMapping().setCategory(77).setSpecific(2).setUrl(java.newArray("java.lang.String", ["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"])))
              .addChild(new autoclass.DISEntityTypeMapping().setCategory(77).setSpecific(3).setUrl(java.newArray("java.lang.String", ["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"])))
              .addChild(new autoclass.DISEntityTypeMapping().setCategory(77).setSpecific(4).setUrl(java.newArray("java.lang.String", ["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"]))))
            .addChild(new autoclass.Collision()
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
                  .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.1)])).setTransparency(java.newFloat(1))))
                .setGeometry(new autoclass.Box().setSize(java.newArray("float", [java.newFloat(100), java.newFloat(100), java.newFloat(0.02)])))))
            .addChild(new autoclass.Transform().setDEF("equationTransform")
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-20)]))
                .addChild(new autoclass.Shape()
                  .setGeometry(new autoclass.Text().setDEF("equation").setString(java.newArray("java.lang.String", ["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.09))))
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(1)])))))))
            .addChild(new autoclass.ProtoDeclare().setName("SliderProto")
              .setProtoInterface(new autoclass.ProtoInterface()
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("sliderTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0.7 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("transformTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0.1"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("sensorTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("numberTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.2 0 0"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("textString").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("\"a=\""))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("parameterName").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("a"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("parameterScale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("30"))
                .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("shaderNode").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)))
              .setProtoBody(new autoclass.ProtoBody()
                .addChild(new autoclass.Group()
                  .addChild(new autoclass.Transform().setDEF("protoSlider").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.7), java.newFloat(0)]))
                    .setIS(new autoclass.IS()
                      .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("sliderTranslation")))
                    .addChild(new autoclass.Transform().setDEF("protoTransform").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.1)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("sensorTranslation")))
                      .addChild(new autoclass.PlaneSensor().setDEF("protoSensor").setMaxPosition(java.newArray("float", [java.newFloat(2), java.newFloat(0)])))
                      .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                        .addChild(new autoclass.TouchSensor().setDEF("protoTS")))
                      .addChild(new autoclass.Transform()
                        .addChild(new autoclass.Shape()
                          .setGeometry(new autoclass.Text().setDEF("protoText").setString(java.newArray("java.lang.String", ["a="]))
                            .setIS(new autoclass.IS()
                              .addConnect(new autoclass.connect().setNodeField("string").setProtoField("textString")))
                            .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.2))))
                          .setAppearance(new autoclass.Appearance()
                            .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))))
                        .addChild(new autoclass.Transform()
                          .setIS(new autoclass.IS()
                            .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("numberTranslation")))
                          .addChild(new autoclass.Shape()
                            .setGeometry(new autoclass.Text().setDEF("protoNumber").setString(java.newArray("java.lang.String", ["0"]))
                              .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.2))))
                            .setAppearance(new autoclass.Appearance()
                              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))))))))
                  .addChild(new autoclass.Script().setDEF("protoValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("protoScale").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("30"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("shader").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("newTranslation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("protoValue_changed").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("protoNumber_changed").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("\"0.0\""))
                    .addField(new autoclass.field().setType(autoclass.field.TYPE_SFSTRING).setName("protoParameterName").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("a"))
                    .setIS(new autoclass.IS()
                      .addConnect(new autoclass.connect().setNodeField("protoScale").setProtoField("parameterScale"))
                      .addConnect(new autoclass.connect().setNodeField("protoParameterName").setProtoField("parameterName"))
                      .addConnect(new autoclass.connect().setNodeField("shader").setProtoField("shaderNode")))
                    .setSourceCode("ecmascript:\n"+
"	const newTranslation = function(Value) {\n"+
"	    protoValue_changed = Value[0] * protoScale;\n"+
"	    protoNumber_changed = new MFString(protoValue_changed.toFixed(2).toString());\n"+
"	    Browser.println(\"In newTranslation:\");\n"+
"	    Browser.println(shader);\n"+
"	    Browser.println(Value[0]);\n"+
"	    Browser.println(Value.x);\n"+
"	    Browser.println(protoScale);\n"+
"	    Browser.println(Value[0] * protoScale);\n"+
"	    Browser.println(protoParameterName);\n"+
"					// shader[protoParameterName] = Value[0] * protoScale;\n"+
"	};"))
                  .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("set_translation").setToNode("protoTransform"))
                  .addChild(new autoclass.ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("newTranslation").setToNode("protoValueTransformerScript"))
                  .addChild(new autoclass.ROUTE().setFromField("protoNumber_changed").setFromNode("protoValueTransformerScript").setToField("string").setToNode("protoNumber")))))
            .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("aPI"))
            .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("bPI"))
            .addChild(ProtoInstance2 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("cPI"))
            .addChild(ProtoInstance3 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("dPI"))
            .addChild(ProtoInstance4 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("tdeltaPI"))
            .addChild(ProtoInstance5 = new autoclass.ProtoInstance().setName("SliderProto").setDEF("pdeltaPI"))
            .setLayout(new autoclass.Layout().setAlign(java.newArray("java.lang.String", ["LEFT","BOTTOM"])).setOffset(java.newArray("float", [java.newFloat(-0.5), java.newFloat(0)])))
            .setViewport(new autoclass.Viewport()))))      ;
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 0.7 0"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("numberTranslation").setValue("0.3 0 0"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"a=\""));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("a"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("shaderNode")
                .addChild(new autoclass.ComposedShader().setUSE("freewrlShader")));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 0.4 0"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("numberTranslation").setValue("0.3 0 0"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"b=\""));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("b"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("shaderNode")
                .addChild(new autoclass.ComposedShader().setUSE("freewrlShader")));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 0.1 0"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("numberTranslation").setValue("0.3 0 0"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"c=\""));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("c"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("shaderNode")
                .addChild(new autoclass.ComposedShader().setUSE("freewrlShader")));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 -0.2 0"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("numberTranslation").setValue("0.3 0 0"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"d=\""));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("d"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("shaderNode")
                .addChild(new autoclass.ComposedShader().setUSE("freewrlShader")));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 -0.5 0"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("numberTranslation").setValue("0.8 0 0"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"tdelta=\""));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("tdelta"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("shaderNode")
                .addChild(new autoclass.ComposedShader().setUSE("freewrlShader")));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("sliderTranslation").setValue("0 -0.8 0"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("numberTranslation").setValue("0.8 0 0"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("textString").setValue("\"pdelta=\""));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("parameterName").setValue("pdelta"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("shaderNode")
                .addChild(new autoclass.ComposedShader().setUSE("freewrlShader")));
    X3D0.toFileX3D("../data/bumpyfreewrlsliders.new.node.x3d");
    X3D0.toFileJSON("../data/bumpyfreewrlsliders.new.node.x3dj");
    process.exit(0);
