package net.coderextreme.personal;
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.Followers.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Layout.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.ParticleSystems.*;
import org.web3d.x3d.jsail.Picking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;
import org.web3d.x3d.jsail.VolumeRendering.*;
import org.web3d.x3d.jsail.fields.*;
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class bumpyfreewrlsliders implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new bumpyfreewrlsliders().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../personal/bumpyfreewrlsliders.new.java.x3d");
    model.toFileJSON("../personal/bumpyfreewrlsliders.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1))
        .addComponent(new component().setName("DIS").setLevel(2))
        .addComments(new CommentsBlock("<component name='Shape' level='4'></component>"))
        .addComments(new CommentsBlock("Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L"))
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
        .addMeta(new meta().setName("license").setContent("license.html")))
      .addComments(new CommentsBlock("\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\""))
      .setScene(new Scene()
        .addComments(new CommentsBlock("LayerSet with two layers, navigation happens in layer 1"))
        .addLayerSet(new LayerSet().setActiveLayer(1).setOrder(new MFInt320().getArray())
          .addComments(new CommentsBlock("the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\""))
          .addComments(new CommentsBlock("the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)"))
          .addLayers(new Layer()
            .addComments(new CommentsBlock("basic nodes, which might be present in any scene"))
            .addChild(new NavigationInfo().setType("\"EXAMINE\"").setAvatarSize(new MFFloat1().getArray()))
            .addChild(new DirectionalLight().setAmbientIntensity(0.2f).setDirection(new double[] {0f,-1f,0f}))
            .addChild(new DirectionalLight().setAmbientIntensity(0.2f).setDirection(new double[] {-1f,-0.1f,-1f}))
            .addChild(new Viewpoint().setDescription("My Overview").setFieldOfView(1.570796f).setPosition(new double[] {0f,1.75f,60f}))
            .addComments(new CommentsBlock("this group contains the red/green/blue 3D crosshair"))
            .addChild(new Group()
              .addComments(new CommentsBlock("Arrow X"))
              .addChild(new Transform().setTranslation(new double[] {25f,0f,0f}).setRotation(new double[] {0f,0f,-1f,1.57f})
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setDEF("Shaft").setRadius(0.35f).setHeight(50f))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("RED").setDiffuseColor(new double[] {1f,0f,0f}).setEmissiveColor(new double[] {1f,0f,0f})))))
              .addChild(new Transform().setTranslation(new double[] {50f,0f,0f}).setRotation(new double[] {0f,0f,-1f,1.57f})
                .addChild(new Shape()
                  .setGeometry(new Cone().setDEF("Tip").setBottomRadius(0.8f).setHeight(3f))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("RED")))))
              .addComments(new CommentsBlock("Arrow Y"))
              .addChild(new Transform().setTranslation(new double[] {0f,25f,0f})
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setUSE("Shaft"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("GREEN").setDiffuseColor(new double[] {0f,1f,0f}).setEmissiveColor(new double[] {0f,1f,0f})))))
              .addChild(new Transform().setTranslation(new double[] {0f,50f,0f})
                .addChild(new Shape()
                  .setGeometry(new Cone().setUSE("Tip"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("GREEN")))))
              .addComments(new CommentsBlock("Arrow Z"))
              .addChild(new Transform().setTranslation(new double[] {0f,0f,25f}).setRotation(new double[] {1f,0f,0f,1.57f})
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setUSE("Shaft"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("BLUE").setDiffuseColor(new double[] {0f,0f,1f}).setEmissiveColor(new double[] {0f,0f,1f})))))
              .addChild(new Transform().setTranslation(new double[] {0f,0f,50f}).setRotation(new double[] {1f,0f,0f,1.57f})
                .addChild(new Shape()
                  .setGeometry(new Cone().setUSE("Tip"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("BLUE"))))))
            .addComments(new CommentsBlock("the model that is being reviewed by the users of this scene"))
            .addChild(new Transform().setDEF("FlowerTransform")
              .addComments(new CommentsBlock("<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />"))
              .addComments(new CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery"))
              .addChild(new Background().setBackUrl(new MFString2().getArray()).setBottomUrl(new MFString3().getArray()).setFrontUrl(new MFString4().getArray()).setLeftUrl(new MFString5().getArray()).setRightUrl(new MFString6().getArray()).setTopUrl(new MFString7().getArray()))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(40f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new double[] {0.7f,0.7f,0.7f}).setSpecularColor(new double[] {0.5f,0.5f,0.5f}))
                  .setTexture(new ComposedCubeMapTexture().setDEF("texture")
                    .setBackTexture(new ImageTexture().setUrl(new MFString8().getArray()))
                    .setBottomTexture(new ImageTexture().setUrl(new MFString9().getArray()))
                    .setFrontTexture(new ImageTexture().setUrl(new MFString10().getArray()))
                    .setLeftTexture(new ImageTexture().setUrl(new MFString11().getArray()))
                    .setRightTexture(new ImageTexture().setUrl(new MFString12().getArray()))
                    .setTopTexture(new ImageTexture().setUrl(new MFString13().getArray())))
                  .addShaders(new ComposedShader().setDEF("freewrlShader").setLanguage("GLSL")
                    .addField(new field().setType("SFVec3f").setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0.98 1 1.033"))
                    .addField(new field().setType("SFInt32").setName("fw_textureCoordGenType").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0"))
                    .addField(new field().setType("SFFloat").setName("bias").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                    .addField(new field().setType("SFFloat").setName("scale").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                    .addField(new field().setType("SFFloat").setName("power").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("2"))
                    .addField(new field().setType("SFFloat").setName("a").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("15"))
                    .addField(new field().setType("SFFloat").setName("b").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                    .addField(new field().setType("SFFloat").setName("c").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                    .addField(new field().setType("SFFloat").setName("d").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                    .addField(new field().setType("SFFloat").setName("tdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField(new field().setType("SFFloat").setName("pdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addParts(new ShaderPart().setType("VERTEX").setUrl(new MFString14().getArray()))
                    .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString15().getArray()))))))
            .addComments(new CommentsBlock("DIS multiuser facilities"))
            .addChild(new DISEntityManager().setDEF("EntityManager").setNetworkMode("networkReader")
              .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(1).setUrl(new MFString16().getArray()))
              .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(2).setUrl(new MFString17().getArray()))
              .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(3).setUrl(new MFString18().getArray()))
              .addChild(new DISEntityTypeMapping().setCategory(77).setSpecific(4).setUrl(new MFString19().getArray())))
            .addChild(new Collision().setEnabled(false)
              .addChild(new Group().setDEF("AvatarHolder")))
            .addChild(new ROUTE().setFromField("addedEntities").setFromNode("EntityManager").setToField("addChildren").setToNode("AvatarHolder"))
            .addChild(new ROUTE().setFromField("removedEntities").setFromNode("EntityManager").setToField("removeChildren").setToNode("AvatarHolder")))
          .addLayers(new LayoutLayer()
            .addComments(new CommentsBlock("positioning the LayoutLayer"))
            .addComments(new CommentsBlock("clipping the LayoutLayer"))
            .addComments(new CommentsBlock("the content (children) of the LayoutLayer"))
            .addComments(new CommentsBlock("first, the slider for scaling the model"))
            .addChild(new Transform().setTranslation(new double[] {0f,0f,-3f})
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new double[] {0f,0f,0f}).setTransparency(0.7f)))
                .setGeometry(new Box().setSize(new double[] {100f,100f,0.02f}))))
            .addComments(new CommentsBlock("the plane sensors"))
            .addChild(new Transform().setDEF("aSlider").setTranslation(new double[] {0f,0.7f,0f})
              .addChild(new Transform().setRotation(new double[] {0f,0f,1f,1.57f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material()))
                  .setGeometry(new Cylinder().setRadius(0.05f).setHeight(2.5f))))
              .addChild(new Transform().setDEF("aTransform").setTranslation(new double[] {0f,0f,0.1f})
                .addChild(new PlaneSensor().setDEF("aSensor").setMinPosition(new double[] {-20f,0f}).setMaxPosition(new double[] {20f,0f}))
                .addChild(new Transform().setTranslation(new double[] {0f,0f,0f})
                  .addChild(new TouchSensor().setDEF("aTS"))
                  .addChild(new Shape()
                    .setGeometry(new Sphere().setRadius(0.08f))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1f,0f,0f})))))
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setRadius(0.05f).setHeight(0.3f))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material()))))
              .addChild(new Transform().setRotation(new double[] {0f,0f,1f,1.57f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material()))
                  .setGeometry(new Cylinder().setRadius(0.05f).setHeight(2.5f)))))
            .addChild(new Transform().setDEF("bSlider").setTranslation(new double[] {0f,0.4f,0f})
              .addChild(new Transform().setRotation(new double[] {0f,0f,1f,1.57f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material()))
                  .setGeometry(new Cylinder().setRadius(0.05f).setHeight(2.5f))))
              .addChild(new Transform().setDEF("bTransform").setTranslation(new double[] {0f,0f,0.1f})
                .addChild(new PlaneSensor().setDEF("bSensor").setMinPosition(new double[] {-20f,0f}).setMaxPosition(new double[] {20f,0f}))
                .addChild(new Transform().setTranslation(new double[] {0f,0f,0f})
                  .addChild(new TouchSensor().setDEF("bTS"))
                  .addChild(new Shape()
                    .setGeometry(new Sphere().setRadius(0.08f))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1f,0f,0f})))))
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setRadius(0.05f).setHeight(0.3f))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material())))))
            .addChild(new Transform().setDEF("cSlider").setTranslation(new double[] {0f,0.1f,0f})
              .addChild(new Transform().setRotation(new double[] {0f,0f,1f,1.57f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material()))
                  .setGeometry(new Cylinder().setRadius(0.05f).setHeight(2.5f))))
              .addChild(new Transform().setDEF("cTransform").setTranslation(new double[] {0f,0f,0.1f})
                .addChild(new PlaneSensor().setDEF("cSensor").setMinPosition(new double[] {-20f,0f}).setMaxPosition(new double[] {20f,0f}))
                .addChild(new Transform().setTranslation(new double[] {0f,0f,0f})
                  .addChild(new TouchSensor().setDEF("cTS"))
                  .addChild(new Shape()
                    .setGeometry(new Sphere().setRadius(0.08f))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1f,0f,0f})))))
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setRadius(0.05f).setHeight(0.3f))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material())))))
            .addChild(new Transform().setDEF("dSlider").setTranslation(new double[] {0f,-0.2f,0f})
              .addChild(new Transform().setRotation(new double[] {0f,0f,1f,1.57f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material()))
                  .setGeometry(new Cylinder().setRadius(0.05f).setHeight(2.5f))))
              .addChild(new Transform().setDEF("dTransform").setTranslation(new double[] {0f,0f,0.1f})
                .addChild(new PlaneSensor().setDEF("dSensor").setMinPosition(new double[] {-20f,0f}).setMaxPosition(new double[] {20f,0f}))
                .addChild(new Transform().setTranslation(new double[] {0f,0f,0f})
                  .addChild(new TouchSensor().setDEF("dTS"))
                  .addChild(new Shape()
                    .setGeometry(new Sphere().setRadius(0.08f))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1f,0f,0f})))))
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setRadius(0.05f).setHeight(0.3f))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material())))))
            .addChild(new Transform().setDEF("pdeltaSlider").setTranslation(new double[] {0f,-0.5f,0f})
              .addChild(new Transform().setRotation(new double[] {0f,0f,1f,1.57f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material()))
                  .setGeometry(new Cylinder().setRadius(0.05f).setHeight(2.5f))))
              .addChild(new Transform().setDEF("pdeltaTransform").setTranslation(new double[] {0f,0f,0.1f})
                .addChild(new PlaneSensor().setDEF("pdeltaSensor").setMinPosition(new double[] {-20f,0f}).setMaxPosition(new double[] {20f,0f}))
                .addChild(new Transform().setTranslation(new double[] {0f,0f,0f})
                  .addChild(new TouchSensor().setDEF("pdeltaTS"))
                  .addChild(new Shape()
                    .setGeometry(new Sphere().setRadius(0.08f))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1f,0f,0f})))))
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setRadius(0.05f).setHeight(0.3f))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material())))))
            .addChild(new Transform().setDEF("tdeltaSlider").setTranslation(new double[] {0f,-0.8f,0f})
              .addChild(new Transform().setRotation(new double[] {0f,0f,1f,1.57f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material()))
                  .setGeometry(new Cylinder().setRadius(0.05f).setHeight(2.5f))))
              .addChild(new Transform().setDEF("tdeltaTransform").setTranslation(new double[] {0f,0f,0.1f})
                .addChild(new PlaneSensor().setDEF("tdeltaSensor").setMinPosition(new double[] {-20f,0f}).setMaxPosition(new double[] {20f,0f}))
                .addChild(new Transform().setTranslation(new double[] {0f,0f,0f})
                  .addChild(new TouchSensor().setDEF("tdeltaTS"))
                  .addChild(new Shape()
                    .setGeometry(new Sphere().setRadius(0.08f))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new double[] {1f,0f,0f})))))
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setRadius(0.05f).setHeight(0.3f))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material())))))
            .addChild(new Script().setDEF("aValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new field().setType("SFVec3f").setName("newTranslation").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
              .addField(new field().setType("SFFloat").setName("aValue").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
              .setSourceCode("ecmascript: function newTranslation(Value) { aValue = Value.x * 30; }"))
            .addChild(new Script().setDEF("bValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new field().setType("SFVec3f").setName("newTranslation").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
              .addField(new field().setType("SFFloat").setName("bValue").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
              .setSourceCode("ecmascript: function newTranslation(Value) { bValue = Value.x * 30; }"))
            .addChild(new Script().setDEF("cValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new field().setType("SFVec3f").setName("newTranslation").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
              .addField(new field().setType("SFFloat").setName("cValue").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
              .setSourceCode("ecmascript: function newTranslation(Value) { cValue = Value.x * 5; }"))
            .addChild(new Script().setDEF("dValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new field().setType("SFVec3f").setName("newTranslation").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
              .addField(new field().setType("SFFloat").setName("dValue").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
              .setSourceCode("ecmascript: function newTranslation(Value) { dValue = Value.x * 5; }"))
            .addChild(new Script().setDEF("pdeltaValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new field().setType("SFVec3f").setName("newTranslation").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
              .addField(new field().setType("SFFloat").setName("pdeltaValue").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
              .setSourceCode("ecmascript: function newTranslation(Value) { pdeltaValue = Value.x; }"))
            .addChild(new Script().setDEF("tdeltaValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new field().setType("SFVec3f").setName("newTranslation").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
              .addField(new field().setType("SFFloat").setName("tdeltaValue").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
              .setSourceCode("ecmascript: function newTranslation(Value) { tdeltaValue = Value.x; }"))
            .addChild(new ROUTE().setFromField("translation_changed").setFromNode("aSensor").setToField("set_translation").setToNode("aTransform"))
            .addChild(new ROUTE().setFromField("translation_changed").setFromNode("bSensor").setToField("set_translation").setToNode("bTransform"))
            .addChild(new ROUTE().setFromField("translation_changed").setFromNode("cSensor").setToField("set_translation").setToNode("cTransform"))
            .addChild(new ROUTE().setFromField("translation_changed").setFromNode("dSensor").setToField("set_translation").setToNode("dTransform"))
            .addChild(new ROUTE().setFromField("translation_changed").setFromNode("pdeltaSensor").setToField("set_translation").setToNode("pdeltaTransform"))
            .addChild(new ROUTE().setFromField("translation_changed").setFromNode("tdeltaSensor").setToField("set_translation").setToNode("tdeltaTransform"))
            .addChild(new ROUTE().setFromField("translation_changed").setFromNode("aSensor").setToField("newTranslation").setToNode("aValueTransformerScript"))
            .addChild(new ROUTE().setFromField("translation_changed").setFromNode("bSensor").setToField("newTranslation").setToNode("bValueTransformerScript"))
            .addChild(new ROUTE().setFromField("translation_changed").setFromNode("cSensor").setToField("newTranslation").setToNode("cValueTransformerScript"))
            .addChild(new ROUTE().setFromField("translation_changed").setFromNode("dSensor").setToField("newTranslation").setToNode("dValueTransformerScript"))
            .addChild(new ROUTE().setFromField("translation_changed").setFromNode("pdeltaSensor").setToField("newTranslation").setToNode("pdeltaValueTransformerScript"))
            .addChild(new ROUTE().setFromField("translation_changed").setFromNode("tdeltaSensor").setToField("newTranslation").setToNode("tdeltaValueTransformerScript"))
            .addChild(new ROUTE().setFromField("aValue").setFromNode("aValueTransformerScript").setToField("a").setToNode("freewrlShader"))
            .addChild(new ROUTE().setFromField("bValue").setFromNode("bValueTransformerScript").setToField("b").setToNode("freewrlShader"))
            .addChild(new ROUTE().setFromField("cValue").setFromNode("cValueTransformerScript").setToField("c").setToNode("freewrlShader"))
            .addChild(new ROUTE().setFromField("dValue").setFromNode("dValueTransformerScript").setToField("d").setToNode("freewrlShader"))
            .addChild(new ROUTE().setFromField("pdeltaValue").setFromNode("pdeltaValueTransformerScript").setToField("pdelta").setToNode("freewrlShader"))
            .addChild(new ROUTE().setFromField("tdeltaValue").setFromNode("tdeltaValueTransformerScript").setToField("tdelta").setToNode("freewrlShader"))
            .setLayout(new Layout().setAlign(new MFString20().getArray()).setOffset(new MFFloat21().getArray()).setOffsetUnits(new MFString22().getArray()).setScaleMode(new MFString23().getArray()).setSize(new MFFloat24().getArray()).setSizeUnits(new MFString25().getArray()))
            .setViewport(new Viewport().setClipBoundary(new MFFloat26().getArray())))));
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2});
  }
}
private class MFFloat1 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0.25f,1.75f,0.75f});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"});
  }
}
private class MFString15 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/freewrl_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"});
  }
}
private class MFString16 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/Leif8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3dv"});
  }
}
private class MFString17 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/Lily8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3dv"});
  }
}
private class MFString18 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/Tufani8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3dv"});
  }
}
private class MFString19 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/Gramps8Final.x3dv","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3dv"});
  }
}
private class MFString20 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"RIGHT","BOTTOM"});
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,0f});
  }
}
private class MFString22 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"WORLD","WORLD"});
  }
}
private class MFString23 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"NONE","NONE"});
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0.4f,1f});
  }
}
private class MFString25 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"WORLD","WORLD"});
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f,0f,1f});
  }
}
}
