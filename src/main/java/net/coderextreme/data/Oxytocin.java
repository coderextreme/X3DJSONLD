package net.coderextreme.data;
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
public class Oxytocin implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new Oxytocin().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/Oxytocin.new.java.x3d");
    model.toFileJSON("../data/Oxytocin.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
ProtoInstance ProtoInstance7 = null;
ProtoInstance ProtoInstance8 = null;
ProtoInstance ProtoInstance9 = null;
ProtoInstance ProtoInstance10 = null;
ProtoInstance ProtoInstance11 = null;
ProtoInstance ProtoInstance12 = null;
ProtoInstance ProtoInstance13 = null;
ProtoInstance ProtoInstance14 = null;
ProtoInstance ProtoInstance15 = null;
ProtoInstance ProtoInstance16 = null;
ProtoInstance ProtoInstance17 = null;
ProtoInstance ProtoInstance18 = null;
ProtoInstance ProtoInstance19 = null;
ProtoInstance ProtoInstance20 = null;
ProtoInstance ProtoInstance21 = null;
ProtoInstance ProtoInstance22 = null;
ProtoInstance ProtoInstance23 = null;
ProtoInstance ProtoInstance24 = null;
ProtoInstance ProtoInstance25 = null;
ProtoInstance ProtoInstance26 = null;
ProtoInstance ProtoInstance27 = null;
ProtoInstance ProtoInstance28 = null;
ProtoInstance ProtoInstance29 = null;
ProtoInstance ProtoInstance30 = null;
ProtoInstance ProtoInstance31 = null;
ProtoInstance ProtoInstance32 = null;
ProtoInstance ProtoInstance33 = null;
ProtoInstance ProtoInstance34 = null;
ProtoInstance ProtoInstance35 = null;
ProtoInstance ProtoInstance36 = null;
ProtoInstance ProtoInstance37 = null;
ProtoInstance ProtoInstance38 = null;
ProtoInstance ProtoInstance39 = null;
ProtoInstance ProtoInstance40 = null;
ProtoInstance ProtoInstance41 = null;
ProtoInstance ProtoInstance42 = null;
ProtoInstance ProtoInstance43 = null;
ProtoInstance ProtoInstance44 = null;
ProtoInstance ProtoInstance45 = null;
ProtoInstance ProtoInstance46 = null;
ProtoInstance ProtoInstance47 = null;
ProtoInstance ProtoInstance48 = null;
ProtoInstance ProtoInstance49 = null;
ProtoInstance ProtoInstance50 = null;
ProtoInstance ProtoInstance51 = null;
ProtoInstance ProtoInstance52 = null;
ProtoInstance ProtoInstance53 = null;
ProtoInstance ProtoInstance54 = null;
ProtoInstance ProtoInstance55 = null;
ProtoInstance ProtoInstance56 = null;
ProtoInstance ProtoInstance57 = null;
ProtoInstance ProtoInstance58 = null;
ProtoInstance ProtoInstance59 = null;
ProtoInstance ProtoInstance60 = null;
ProtoInstance ProtoInstance61 = null;
ProtoInstance ProtoInstance62 = null;
ProtoInstance ProtoInstance63 = null;
ProtoInstance ProtoInstance64 = null;
ProtoInstance ProtoInstance65 = null;
ProtoInstance ProtoInstance66 = null;
ProtoInstance ProtoInstance67 = null;
ProtoInstance ProtoInstance68 = null;
ProtoInstance ProtoInstance69 = null;
ProtoInstance ProtoInstance70 = null;
ProtoInstance ProtoInstance71 = null;
ProtoInstance ProtoInstance72 = null;
ProtoInstance ProtoInstance73 = null;
ProtoInstance ProtoInstance74 = null;
ProtoInstance ProtoInstance75 = null;
ProtoInstance ProtoInstance76 = null;
ProtoInstance ProtoInstance77 = null;
ProtoInstance ProtoInstance78 = null;
ProtoInstance ProtoInstance79 = null;
ProtoInstance ProtoInstance80 = null;
ProtoInstance ProtoInstance81 = null;
ProtoInstance ProtoInstance82 = null;
ProtoInstance ProtoInstance83 = null;
ProtoInstance ProtoInstance84 = null;
ProtoInstance ProtoInstance85 = null;
ProtoInstance ProtoInstance86 = null;
ProtoInstance ProtoInstance87 = null;
ProtoInstance ProtoInstance88 = null;
ProtoInstance ProtoInstance89 = null;
ProtoInstance ProtoInstance90 = null;
ProtoInstance ProtoInstance91 = null;
ProtoInstance ProtoInstance92 = null;
ProtoInstance ProtoInstance93 = null;
ProtoInstance ProtoInstance94 = null;
ProtoInstance ProtoInstance95 = null;
ProtoInstance ProtoInstance96 = null;
ProtoInstance ProtoInstance97 = null;
ProtoInstance ProtoInstance98 = null;
ProtoInstance ProtoInstance99 = null;
ProtoInstance ProtoInstance100 = null;
ProtoInstance ProtoInstance101 = null;
ProtoInstance ProtoInstance102 = null;
ProtoInstance ProtoInstance103 = null;
ProtoInstance ProtoInstance104 = null;
ProtoInstance ProtoInstance105 = null;
ProtoInstance ProtoInstance106 = null;
ProtoInstance ProtoInstance107 = null;
ProtoInstance ProtoInstance108 = null;
ProtoInstance ProtoInstance109 = null;
ProtoInstance ProtoInstance110 = null;
ProtoInstance ProtoInstance111 = null;
ProtoInstance ProtoInstance112 = null;
ProtoInstance ProtoInstance113 = null;
ProtoInstance ProtoInstance114 = null;
ProtoInstance ProtoInstance115 = null;
ProtoInstance ProtoInstance116 = null;
ProtoInstance ProtoInstance117 = null;
ProtoInstance ProtoInstance118 = null;
ProtoInstance ProtoInstance119 = null;
ProtoInstance ProtoInstance120 = null;
ProtoInstance ProtoInstance121 = null;
ProtoInstance ProtoInstance122 = null;
ProtoInstance ProtoInstance123 = null;
ProtoInstance ProtoInstance124 = null;
ProtoInstance ProtoInstance125 = null;
ProtoInstance ProtoInstance126 = null;
ProtoInstance ProtoInstance127 = null;
ProtoInstance ProtoInstance128 = null;
ProtoInstance ProtoInstance129 = null;
ProtoInstance ProtoInstance130 = null;
ProtoInstance ProtoInstance131 = null;
ProtoInstance ProtoInstance132 = null;
ProtoInstance ProtoInstance133 = null;
ProtoInstance ProtoInstance134 = null;
ProtoInstance ProtoInstance135 = null;
ProtoInstance ProtoInstance136 = null;
ProtoInstance ProtoInstance137 = null;
ProtoInstance ProtoInstance138 = null;
ProtoInstance ProtoInstance139 = null;
ProtoInstance ProtoInstance140 = null;
ProtoInstance ProtoInstance141 = null;
ProtoInstance ProtoInstance142 = null;
ProtoInstance ProtoInstance143 = null;
ProtoInstance ProtoInstance144 = null;
ProtoInstance ProtoInstance145 = null;
ProtoInstance ProtoInstance146 = null;
ProtoInstance ProtoInstance147 = null;
ProtoInstance ProtoInstance148 = null;
ProtoInstance ProtoInstance149 = null;
ProtoInstance ProtoInstance150 = null;
ProtoInstance ProtoInstance151 = null;
ProtoInstance ProtoInstance152 = null;
ProtoInstance ProtoInstance153 = null;
ProtoInstance ProtoInstance154 = null;
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("Oxytocin.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Autogenerated version of Oxytocin.x3d scene produced from Oxytocin.xml Chemical Markup Language (CML) version 1.0 source file.")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Nicholas F. Polys")))
        .addMeta(new meta().setName(new SFString("translator")).setContent(new SFString("Don Brutzman")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("24 November 2005")))
        .addMeta(new meta().setName(new SFString("translated")).setContent(new SFString("2 JAN 2025")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("2 JAN 2025")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("Oxytocin.xml")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("CML sources https://www.xml-cml.org")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("Wikipedia https://en.wikipedia.org/wiki/Chemical_Markup_Language")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("JUMBO Chemical Format Conversion Tool")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://webbook.nist.gov/chemistry")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("Polys.StylesheetTransformationsInteractiveVisualization.Web3d2003Symposium.pdf")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("Originally Published in Proceedings of Web3D 2003, ACM Press")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("CmlToX3d.xslt")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/Basic/ChemicalMarkupLanguage/Oxytocin.x3d")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName(new SFString("Carbon"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("position")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFFloat").setName(new SFString("materialTransparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.6"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF(new SFString("atoC"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("position"))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("atoC_mat")).setDiffuseColor(new float[] {0f ,0f ,0f }).setShininess(0.8f ).setSpecularColor(new float[] {0.29f ,0.3f ,0.29f })
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("materialTransparency"))))))
                  .setGeometry(new Sphere().setRadius(0.77f )))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                  .setGeometry(new Text().setString(new MFString0().getArray())
                    .setFontStyle(new FontStyle().setSize(0.8f ))))))))
        .addChild(new ProtoDeclare().setName(new SFString("Hydrogen"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("position")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFFloat").setName(new SFString("materialTransparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.6"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF(new SFString("atoH"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("position"))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("atoH_mat")).setAmbientIntensity(0.0933f ).setDiffuseColor(new float[] {0.38f ,0.38f ,0.42f }).setShininess(0.5f ).setSpecularColor(new float[] {0.53f ,0.53f ,0.53f })
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("materialTransparency"))))))
                  .setGeometry(new Sphere().setRadius(0.32f )))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                  .setGeometry(new Text().setString(new MFString1().getArray())
                    .setFontStyle(new FontStyle().setSize(0.4f ))))))))
        .addChild(new ProtoDeclare().setName(new SFString("Nitrogen"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("position")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFFloat").setName(new SFString("materialTransparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.6"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF(new SFString("atoN"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("position"))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("atoN_mat")).setDiffuseColor(new float[] {0f ,0f ,0.72f }).setEmissiveColor(new float[] {0f ,0f ,0.13f }).setSpecularColor(new float[] {0.5f ,0.5f ,0.5f })
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("materialTransparency"))))))
                  .setGeometry(new Sphere().setRadius(0.75f )))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                  .setGeometry(new Text().setString(new MFString2().getArray())
                    .setFontStyle(new FontStyle().setSize(0.8f ))))))))
        .addChild(new ProtoDeclare().setName(new SFString("Oxygen"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("position")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFFloat").setName(new SFString("materialTransparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.6"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF(new SFString("atoO"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("position"))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("atoO_mat")).setAmbientIntensity(0.487f ).setDiffuseColor(new float[] {0.54f ,0.05f ,0.25f }).setShininess(0.2f ).setSpecularColor(new float[] {0.81f ,0.77f ,0.75f })
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("materialTransparency"))))))
                  .setGeometry(new Sphere().setRadius(0.73f )))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                  .setGeometry(new Text().setString(new MFString3().getArray())
                    .setFontStyle(new FontStyle().setSize(0.8f ))))))))
        .addChild(new ProtoDeclare().setName(new SFString("Fluorine"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("position")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFFloat").setName(new SFString("materialTransparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.6"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF(new SFString("atoF"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("position"))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("atoF_mat")).setDiffuseColor(new float[] {1f ,0.48f ,0.79f }).setEmissiveColor(new float[] {0.09f ,0.04f ,0.07f })
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("materialTransparency"))))))
                  .setGeometry(new Sphere().setRadius(0.72f )))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                  .setGeometry(new Text().setString(new MFString4().getArray())
                    .setFontStyle(new FontStyle().setSize(0.8f ))))))))
        .addChild(new ProtoDeclare().setName(new SFString("Silicon"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("position")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFFloat").setName(new SFString("materialTransparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.6"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF(new SFString("atoSi"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("position"))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("atoSi_mat")).setDiffuseColor(new float[] {0.8f ,0.8f ,0.8f })
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("materialTransparency"))))))
                  .setGeometry(new Sphere().setRadius(1.18f )))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                  .setGeometry(new Text().setString(new MFString5().getArray())
                    .setFontStyle(new FontStyle().setSize(0.8f ))))))))
        .addChild(new ProtoDeclare().setName(new SFString("Phosphorus"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("position")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFFloat").setName(new SFString("materialTransparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.6"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF(new SFString("atoP"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("position"))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("atoP_mat")).setAmbientIntensity(0.11f ).setDiffuseColor(new float[] {0.9f ,0.41f ,0f }).setEmissiveColor(new float[] {0.1f ,0.04f ,0f }).setShininess(0.8f ).setSpecularColor(new float[] {0.1f ,0.1f ,0.1f })
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("materialTransparency"))))))
                  .setGeometry(new Sphere().setRadius(1.1f )))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                  .setGeometry(new Text().setString(new MFString6().getArray())
                    .setFontStyle(new FontStyle().setSize(0.8f ))))))))
        .addChild(new ProtoDeclare().setName(new SFString("Sulphur"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("position")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFFloat").setName(new SFString("materialTransparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.6"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF(new SFString("atoS"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("position"))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("atoS_mat")).setAmbientIntensity(0.0467f ).setDiffuseColor(new float[] {0.25f ,0.39f ,0.25f }).setEmissiveColor(new float[] {0.05f ,0.08f ,0.05f }).setShininess(0.6f ).setSpecularColor(new float[] {0.11f ,0.12f ,0.08f })
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("materialTransparency"))))))
                  .setGeometry(new Sphere().setRadius(1.3f )))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                  .setGeometry(new Text().setString(new MFString7().getArray())
                    .setFontStyle(new FontStyle().setSize(0.8f ))))))))
        .addChild(new ProtoDeclare().setName(new SFString("Chlorine"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("position")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFFloat").setName(new SFString("materialTransparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.6"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF(new SFString("atoCl"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("position"))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("atoCl_mat")).setDiffuseColor(new float[] {0.28f ,0.7f ,0f }).setEmissiveColor(new float[] {0.06f ,0.15f ,0f }).setShininess(0.8f ).setSpecularColor(new float[] {0.5f ,0.5f ,0.5f })
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("materialTransparency"))))))
                  .setGeometry(new Sphere().setRadius(1.01f )))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                  .setGeometry(new Text().setString(new MFString8().getArray())
                    .setFontStyle(new FontStyle().setSize(0.8f ))))))))
        .addChild(new ProtoDeclare().setName(new SFString("Bromine"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("position")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFFloat").setName(new SFString("materialTransparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.6"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF(new SFString("atoBr"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("position"))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("atoBr_mat")).setAmbientIntensity(0.0833f ).setDiffuseColor(new float[] {0.5f ,0.3f ,0.19f }).setEmissiveColor(new float[] {0.12f ,0.13f ,0.08f }).setShininess(0.17f ).setSpecularColor(new float[] {0.08f ,0.08f ,0.05f })
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("materialTransparency"))))))
                  .setGeometry(new Sphere().setRadius(1.14f )))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                  .setGeometry(new Text().setString(new MFString9().getArray())
                    .setFontStyle(new FontStyle().setSize(0.8f ))))))))
        .addChild(new ProtoDeclare().setName(new SFString("Iodine"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("position")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFFloat").setName(new SFString("materialTransparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.6"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF(new SFString("atoI"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("position"))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("atoI_mat")).setDiffuseColor(new float[] {0.56f ,0.37f ,0.74f }).setEmissiveColor(new float[] {0.15f ,0.1f ,0.2f }).setShininess(0.09f ).setSpecularColor(new float[] {0.12f ,0.12f ,0.12f })
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("materialTransparency"))))))
                  .setGeometry(new Sphere().setRadius(1.33f )))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                  .setGeometry(new Text().setString(new MFString10().getArray())
                    .setFontStyle(new FontStyle().setSize(0.8f ))))))))
        .addChild(new ProtoDeclare().setName(new SFString("unknown"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("position")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFFloat").setName(new SFString("materialTransparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.6"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF(new SFString("ato_"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("position"))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("ato__mat")).setDiffuseColor(new float[] {1f ,1f ,1f }).setEmissiveColor(new float[] {0.15f ,0.1f ,0.2f }).setShininess(0.09f ).setSpecularColor(new float[] {0.12f ,0.12f ,0.12f })
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("materialTransparency"))))))
                  .setGeometry(new Sphere().setRadius(1.001f )))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                  .setGeometry(new Text().setString(new MFString11().getArray())
                    .setFontStyle(new FontStyle().setSize(0.8f ))))))))
        .addChild(new ProtoDeclare().setName(new SFString("line"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFVec3f").setName(new SFString("bond_set")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("-1 0 0 1 0 0"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,1f }).setEmissiveColor(new float[] {1f ,1f ,1f })))
                .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt3212().getArray())
                  .setCoord(new Coordinate().setDEF(new SFString("bondo"))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField(new SFString("point")).setProtoField(new SFString("bond_set"))))))))))
        .addChild(new ProtoDeclare().setName(new SFString("title_text"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFString").setName(new SFString("txt")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Group()
                .addChild(new Transform()
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                    .setGeometry(new Text().setDEF(new SFString("cmpd_name"))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("string")).setProtoField(new SFString("txt"))))
                      .setFontStyle(new FontStyle()))))))))
        .addChild(new ProtoDeclare().setName(new SFString("ano1_text"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFString").setName(new SFString("txt")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Group()
                .addChild(new Transform()
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                    .setGeometry(new Text().setDEF(new SFString("cmpd_name1"))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("string")).setProtoField(new SFString("txt"))))
                      .setFontStyle(new FontStyle().setSize(0.8f )))))))))
        .addChild(new ProtoDeclare().setName(new SFString("ano2_text"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFString").setName(new SFString("txt")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Group()
                .addChild(new Transform()
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f })))
                    .setGeometry(new Text().setDEF(new SFString("cmpd_name2"))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField(new SFString("string")).setProtoField(new SFString("txt"))))
                      .setFontStyle(new FontStyle().setSize(0.6f )))))))))
        .addChild(new Background().setGroundAngle(new MFFloat13().getArray()).setGroundColor(new MFColor14().getArray()).setSkyAngle(new MFFloat15().getArray()).setSkyColor(new MFColor16().getArray()))
        .addChild(new PointLight().setAmbientIntensity(1f ).setLocation(new float[] {0f ,0f ,5f }).setRadius(30f ))
        .addChild(new NavigationInfo().setType("\"EXAMINE\" \"FLY\" \"ANY\""))
        .addChild(new Viewpoint().setDescription(new SFString("Inspect Oxytocin")).setPosition(new float[] {0f ,2f ,20f }))
        .addComments(new CommentsBlock("Copyright by the U.S. Sec. Commerce on behalf of U.S.A. All rights reserved."))
        .addComments(new CommentsBlock("type=\"3D\" <date day=\"23\" month=\"11\" year=\"1995\"/>"))
        .addChild(new Transform().setDEF(new SFString("infogroupa")).setTranslation(new float[] {-8f ,2f ,-4f })
          .addChild(new Transform().setTranslation(new float[] {0f ,6f ,0f })
            .addChild(new Viewpoint().setDescription(new SFString("title billboard")).setPosition(new float[] {6f ,-2f ,10f }))
            .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("title_text")))))
        .addChild(new Group()
          .addChild(new Transform()
            .addChild(ProtoInstance1 = new ProtoInstance().setName(new SFString("Nitrogen")).setDEF(new SFString("a1"))))
          .addChild(new Transform()
            .addChild(ProtoInstance2 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a2"))))
          .addChild(new Transform()
            .addChild(ProtoInstance3 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a3"))))
          .addChild(new Transform()
            .addChild(ProtoInstance4 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a4"))))
          .addChild(new Transform()
            .addChild(ProtoInstance5 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a5"))))
          .addChild(new Transform()
            .addChild(ProtoInstance6 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a6"))))
          .addChild(new Transform()
            .addChild(ProtoInstance7 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a7"))))
          .addChild(new Transform()
            .addChild(ProtoInstance8 = new ProtoInstance().setName(new SFString("Oxygen")).setDEF(new SFString("a8"))))
          .addChild(new Transform()
            .addChild(ProtoInstance9 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a9"))))
          .addChild(new Transform()
            .addChild(ProtoInstance10 = new ProtoInstance().setName(new SFString("Nitrogen")).setDEF(new SFString("a10"))))
          .addChild(new Transform()
            .addChild(ProtoInstance11 = new ProtoInstance().setName(new SFString("Oxygen")).setDEF(new SFString("a11"))))
          .addChild(new Transform()
            .addChild(ProtoInstance12 = new ProtoInstance().setName(new SFString("Nitrogen")).setDEF(new SFString("a12"))))
          .addChild(new Transform()
            .addChild(ProtoInstance13 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a13"))))
          .addChild(new Transform()
            .addChild(ProtoInstance14 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a14"))))
          .addChild(new Transform()
            .addChild(ProtoInstance15 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a15"))))
          .addChild(new Transform()
            .addChild(ProtoInstance16 = new ProtoInstance().setName(new SFString("Sulphur")).setDEF(new SFString("a16"))))
          .addChild(new Transform()
            .addChild(ProtoInstance17 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a17"))))
          .addChild(new Transform()
            .addChild(ProtoInstance18 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a18"))))
          .addChild(new Transform()
            .addChild(ProtoInstance19 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a19"))))
          .addChild(new Transform()
            .addChild(ProtoInstance20 = new ProtoInstance().setName(new SFString("Oxygen")).setDEF(new SFString("a20"))))
          .addChild(new Transform()
            .addChild(ProtoInstance21 = new ProtoInstance().setName(new SFString("Sulphur")).setDEF(new SFString("a21"))))
          .addChild(new Transform()
            .addChild(ProtoInstance22 = new ProtoInstance().setName(new SFString("Nitrogen")).setDEF(new SFString("a22"))))
          .addChild(new Transform()
            .addChild(ProtoInstance23 = new ProtoInstance().setName(new SFString("Oxygen")).setDEF(new SFString("a23"))))
          .addChild(new Transform()
            .addChild(ProtoInstance24 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a24"))))
          .addChild(new Transform()
            .addChild(ProtoInstance25 = new ProtoInstance().setName(new SFString("Nitrogen")).setDEF(new SFString("a25"))))
          .addChild(new Transform()
            .addChild(ProtoInstance26 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a26"))))
          .addChild(new Transform()
            .addChild(ProtoInstance27 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a27"))))
          .addChild(new Transform()
            .addChild(ProtoInstance28 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a28"))))
          .addChild(new Transform()
            .addChild(ProtoInstance29 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a29"))))
          .addChild(new Transform()
            .addChild(ProtoInstance30 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a30"))))
          .addChild(new Transform()
            .addChild(ProtoInstance31 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a31"))))
          .addChild(new Transform()
            .addChild(ProtoInstance32 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a32"))))
          .addChild(new Transform()
            .addChild(ProtoInstance33 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a33"))))
          .addChild(new Transform()
            .addChild(ProtoInstance34 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a34"))))
          .addChild(new Transform()
            .addChild(ProtoInstance35 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a35"))))
          .addChild(new Transform()
            .addChild(ProtoInstance36 = new ProtoInstance().setName(new SFString("Oxygen")).setDEF(new SFString("a36"))))
          .addChild(new Transform()
            .addChild(ProtoInstance37 = new ProtoInstance().setName(new SFString("Nitrogen")).setDEF(new SFString("a37"))))
          .addChild(new Transform()
            .addChild(ProtoInstance38 = new ProtoInstance().setName(new SFString("Oxygen")).setDEF(new SFString("a38"))))
          .addChild(new Transform()
            .addChild(ProtoInstance39 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a39"))))
          .addChild(new Transform()
            .addChild(ProtoInstance40 = new ProtoInstance().setName(new SFString("Nitrogen")).setDEF(new SFString("a40"))))
          .addChild(new Transform()
            .addChild(ProtoInstance41 = new ProtoInstance().setName(new SFString("Nitrogen")).setDEF(new SFString("a41"))))
          .addChild(new Transform()
            .addChild(ProtoInstance42 = new ProtoInstance().setName(new SFString("Oxygen")).setDEF(new SFString("a42"))))
          .addChild(new Transform()
            .addChild(ProtoInstance43 = new ProtoInstance().setName(new SFString("Nitrogen")).setDEF(new SFString("a43"))))
          .addChild(new Transform()
            .addChild(ProtoInstance44 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a44"))))
          .addChild(new Transform()
            .addChild(ProtoInstance45 = new ProtoInstance().setName(new SFString("Nitrogen")).setDEF(new SFString("a45"))))
          .addChild(new Transform()
            .addChild(ProtoInstance46 = new ProtoInstance().setName(new SFString("Oxygen")).setDEF(new SFString("a46"))))
          .addChild(new Transform()
            .addChild(ProtoInstance47 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a47"))))
          .addChild(new Transform()
            .addChild(ProtoInstance48 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a48"))))
          .addChild(new Transform()
            .addChild(ProtoInstance49 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a49"))))
          .addChild(new Transform()
            .addChild(ProtoInstance50 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a50"))))
          .addChild(new Transform()
            .addChild(ProtoInstance51 = new ProtoInstance().setName(new SFString("Oxygen")).setDEF(new SFString("a51"))))
          .addChild(new Transform()
            .addChild(ProtoInstance52 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a52"))))
          .addChild(new Transform()
            .addChild(ProtoInstance53 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a53"))))
          .addChild(new Transform()
            .addChild(ProtoInstance54 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a54"))))
          .addChild(new Transform()
            .addChild(ProtoInstance55 = new ProtoInstance().setName(new SFString("Nitrogen")).setDEF(new SFString("a55"))))
          .addChild(new Transform()
            .addChild(ProtoInstance56 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a56"))))
          .addChild(new Transform()
            .addChild(ProtoInstance57 = new ProtoInstance().setName(new SFString("Nitrogen")).setDEF(new SFString("a57"))))
          .addChild(new Transform()
            .addChild(ProtoInstance58 = new ProtoInstance().setName(new SFString("Oxygen")).setDEF(new SFString("a58"))))
          .addChild(new Transform()
            .addChild(ProtoInstance59 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a59"))))
          .addChild(new Transform()
            .addChild(ProtoInstance60 = new ProtoInstance().setName(new SFString("Oxygen")).setDEF(new SFString("a60"))))
          .addChild(new Transform()
            .addChild(ProtoInstance61 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a61"))))
          .addChild(new Transform()
            .addChild(ProtoInstance62 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a62"))))
          .addChild(new Transform()
            .addChild(ProtoInstance63 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a63"))))
          .addChild(new Transform()
            .addChild(ProtoInstance64 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a64"))))
          .addChild(new Transform()
            .addChild(ProtoInstance65 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a65"))))
          .addChild(new Transform()
            .addChild(ProtoInstance66 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a66"))))
          .addChild(new Transform()
            .addChild(ProtoInstance67 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a67"))))
          .addChild(new Transform()
            .addChild(ProtoInstance68 = new ProtoInstance().setName(new SFString("Carbon")).setDEF(new SFString("a68"))))
          .addChild(new Transform()
            .addChild(ProtoInstance69 = new ProtoInstance().setName(new SFString("Oxygen")).setDEF(new SFString("a69")))))
        .addChild(new Group()
          .addChild(ProtoInstance70 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b1")))
          .addChild(ProtoInstance71 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b2")))
          .addChild(ProtoInstance72 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b3")))
          .addChild(ProtoInstance73 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b4")))
          .addChild(ProtoInstance74 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b5")))
          .addChild(ProtoInstance75 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b6")))
          .addChild(ProtoInstance76 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b7")))
          .addChild(ProtoInstance77 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b7_2")))
          .addChild(ProtoInstance78 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b8")))
          .addChild(ProtoInstance79 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b9")))
          .addChild(ProtoInstance80 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b10")))
          .addChild(ProtoInstance81 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b10_2")))
          .addChild(ProtoInstance82 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b11")))
          .addChild(ProtoInstance83 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b12")))
          .addChild(ProtoInstance84 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b13")))
          .addChild(ProtoInstance85 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b14")))
          .addChild(ProtoInstance86 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b15")))
          .addChild(ProtoInstance87 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b16")))
          .addChild(ProtoInstance88 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b17")))
          .addChild(ProtoInstance89 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b18")))
          .addChild(ProtoInstance90 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b19")))
          .addChild(ProtoInstance91 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b19_2")))
          .addChild(ProtoInstance92 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b20")))
          .addChild(ProtoInstance93 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b21")))
          .addChild(ProtoInstance94 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b22")))
          .addChild(ProtoInstance95 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b22_2")))
          .addChild(ProtoInstance96 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b23")))
          .addChild(ProtoInstance97 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b24")))
          .addChild(ProtoInstance98 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b25")))
          .addChild(ProtoInstance99 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b26")))
          .addChild(ProtoInstance100 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b27")))
          .addChild(ProtoInstance101 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b28")))
          .addChild(ProtoInstance102 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b29")))
          .addChild(ProtoInstance103 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b30")))
          .addChild(ProtoInstance104 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b31")))
          .addChild(ProtoInstance105 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b32")))
          .addChild(ProtoInstance106 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b33")))
          .addChild(ProtoInstance107 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b34")))
          .addChild(ProtoInstance108 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b35")))
          .addChild(ProtoInstance109 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b35_2")))
          .addChild(ProtoInstance110 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b36")))
          .addChild(ProtoInstance111 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b37")))
          .addChild(ProtoInstance112 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b37_2")))
          .addChild(ProtoInstance113 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b38")))
          .addChild(ProtoInstance114 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b39")))
          .addChild(ProtoInstance115 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b40")))
          .addChild(ProtoInstance116 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b41")))
          .addChild(ProtoInstance117 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b41_2")))
          .addChild(ProtoInstance118 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b42")))
          .addChild(ProtoInstance119 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b43")))
          .addChild(ProtoInstance120 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b44")))
          .addChild(ProtoInstance121 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b45")))
          .addChild(ProtoInstance122 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b45_2")))
          .addChild(ProtoInstance123 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b46")))
          .addChild(ProtoInstance124 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b47")))
          .addChild(ProtoInstance125 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b48")))
          .addChild(ProtoInstance126 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b49")))
          .addChild(ProtoInstance127 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b50")))
          .addChild(ProtoInstance128 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b50_2")))
          .addChild(ProtoInstance129 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b51")))
          .addChild(ProtoInstance130 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b52")))
          .addChild(ProtoInstance131 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b53")))
          .addChild(ProtoInstance132 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b54")))
          .addChild(ProtoInstance133 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b55")))
          .addChild(ProtoInstance134 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b56")))
          .addChild(ProtoInstance135 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b57")))
          .addChild(ProtoInstance136 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b57_2")))
          .addChild(ProtoInstance137 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b58")))
          .addChild(ProtoInstance138 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b59")))
          .addChild(ProtoInstance139 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b59_2")))
          .addChild(ProtoInstance140 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b60")))
          .addChild(ProtoInstance141 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b61")))
          .addChild(ProtoInstance142 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b62")))
          .addChild(ProtoInstance143 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b63")))
          .addChild(ProtoInstance144 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b63_2")))
          .addChild(ProtoInstance145 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b64")))
          .addChild(ProtoInstance146 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b65")))
          .addChild(ProtoInstance147 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b65_2")))
          .addChild(ProtoInstance148 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b66")))
          .addChild(ProtoInstance149 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b67")))
          .addChild(ProtoInstance150 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b68")))
          .addChild(ProtoInstance151 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b69")))
          .addChild(ProtoInstance152 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b70")))
          .addChild(ProtoInstance153 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b71")))
          .addChild(ProtoInstance154 = new ProtoInstance().setName(new SFString("line")).setDEF(new SFString("b71_2")))));
ProtoInstance0
              .addFieldValue(new fieldValue().setName(new SFString("txt")).setValue(new SFString("\"Oxytocin: \"")));
ProtoInstance1
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-2.0514 1.8507 0")));
ProtoInstance2
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-3.601 1.9845 0")));
ProtoInstance3
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-1.2821 0.4905 0")));
ProtoInstance4
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-1.4159 3.2554 0")));
ProtoInstance5
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-4.649 0.8473 0")));
ProtoInstance6
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-3.9355 3.5341 0")));
ProtoInstance7
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("0.2341 0.4905 0")));
ProtoInstance8
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-2.0514 -0.8362 0")));
ProtoInstance9
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-2.5753 4.3034 0")));
ProtoInstance10
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-6.1764 1.1595 0")));
ProtoInstance11
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-4.1585 -0.6132 0")));
ProtoInstance12
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("0.4905 2.0402 0")));
ProtoInstance13
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("0.4905 -1.0257 0")));
ProtoInstance14
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-7.2243 0.0223 0")));
ProtoInstance15
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("1.2041 3.3892 0")));
ProtoInstance16
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("1.1706 -2.4081 0")));
ProtoInstance17
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-8.7071 0.3568 0")));
ProtoInstance18
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-6.7226 -1.4382 0")));
ProtoInstance19
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("2.3078 4.4929 0")));
ProtoInstance20
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-0.0446 4.3368 0")));
ProtoInstance21
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("2.2855 -3.5118 0")));
ProtoInstance22
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-9.7662 -0.7804 0")));
ProtoInstance23
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-9.2088 1.8507 0")));
ProtoInstance24
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-7.7483 -2.5753 0")));
ProtoInstance25
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("3.6902 5.1841 0")));
ProtoInstance26
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("1.3936 5.7416 0")));
ProtoInstance27
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("3.6568 -4.2253 0")));
ProtoInstance28
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-11.2825 -0.4459 0")));
ProtoInstance29
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-7.2243 -4.0693 0")));
ProtoInstance30
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-8.7963 -2.4081 0")));
ProtoInstance31
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("5.2064 5.4405 0")));
ProtoInstance32
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("2.0291 7.1797 0")));
ProtoInstance33
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("5.1841 -4.4818 0")));
ProtoInstance34
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-12.3304 -1.6054 0")));
ProtoInstance35
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("6.7561 5.1841 0")));
ProtoInstance36
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("5.2399 6.9791 0")));
ProtoInstance37
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("1.126 8.4507 0")));
ProtoInstance38
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("3.5787 7.3135 0")));
ProtoInstance39
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("6.7226 -4.2253 0")));
ProtoInstance40
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("5.1841 -6.0203 0")));
ProtoInstance41
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-13.8466 -1.2709 0")));
ProtoInstance42
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-11.8622 -3.0659 0")));
ProtoInstance43
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("8.1385 4.4706 0")));
ProtoInstance44
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("7.2243 6.6781 0")));
ProtoInstance45
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("8.1051 -3.5341 0")));
ProtoInstance46
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("7.202 -5.7193 0")));
ProtoInstance47
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("9.2422 3.3669 0")));
ProtoInstance48
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("8.7406 6.9791 0")));
ProtoInstance49
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("9.2088 -2.4304 0")));
ProtoInstance50
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("9.9335 1.9845 0")));
ProtoInstance51
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("10.4797 4.3034 0")));
ProtoInstance52
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("9.2422 8.4507 0")));
ProtoInstance53
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("10.4797 -3.3446 0")));
ProtoInstance54
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("9.9335 -1.0591 0")));
ProtoInstance55
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("10.1787 0.4682 0")));
ProtoInstance56
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("11.4274 2.4862 0")));
ProtoInstance57
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("10.7585 8.774 0")));
ProtoInstance58
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("8.2166 9.6324 0")));
ProtoInstance59
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("10.3237 -4.8943 0")));
ProtoInstance60
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("11.4274 -1.5274 0")));
ProtoInstance61
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("12.5534 1.427 0")));
ProtoInstance62
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("11.7507 4.0024 0")));
ProtoInstance63
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("8.8855 -5.5297 0")));
ProtoInstance64
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("11.5612 -5.8085 0")));
ProtoInstance65
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("14.0473 1.9064 0")));
ProtoInstance66
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("8.7183 -7.0794 0")));
ProtoInstance67
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("11.3939 -7.347 0")));
ProtoInstance68
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("9.9892 -7.9824 0")));
ProtoInstance69
              .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("9.7885 -9.5321 0")));
ProtoInstance70
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-2.0514 1.8507 0 -3.601 1.9845 0")));
ProtoInstance71
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-2.0514 1.8507 0 -1.2821 0.4905 0")));
ProtoInstance72
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-2.0514 1.8507 0 -1.4159 3.2554 0")));
ProtoInstance73
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-3.601 1.9845 0 -4.649 0.8473 0")));
ProtoInstance74
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-3.601 1.9845 0 -3.9355 3.5341 0")));
ProtoInstance75
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-1.2821 0.4905 0 0.2341 0.4905 0")));
ProtoInstance76
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-1.3021 0.4905 0 -2.0714 -0.8362 0")));
ProtoInstance77
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-1.2621 0.4905 0 -2.0314 -0.8362 0")));
ProtoInstance78
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-1.4159 3.2554 0 -2.5753 4.3034 0")));
ProtoInstance79
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-4.649 0.8473 0 -6.1764 1.1595 0")));
ProtoInstance80
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-4.669 0.8473 0 -4.1785 -0.6132 0")));
ProtoInstance81
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-4.6290000000000004 0.8473 0 -4.1385000000000005 -0.6132 0")));
ProtoInstance82
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("0.2341 0.4905 0 0.4905 2.0402 0")));
ProtoInstance83
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("0.2341 0.4905 0 0.4905 -1.0257 0")));
ProtoInstance84
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-6.1764 1.1595 0 -7.2243 0.0223 0")));
ProtoInstance85
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("0.4905 2.0402 0 1.2041 3.3892 0")));
ProtoInstance86
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("0.4905 -1.0257 0 1.1706 -2.4081 0")));
ProtoInstance87
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-7.2243 0.0223 0 -8.7071 0.3568 0")));
ProtoInstance88
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-7.2243 0.0223 0 -6.7226 -1.4382 0")));
ProtoInstance89
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("1.2041 3.3892 0 2.3078 4.4929 0")));
ProtoInstance90
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("1.1841 3.3892 0 -0.0646 4.3368 0")));
ProtoInstance91
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("1.2241 3.3892 0 -0.0246 4.3368 0")));
ProtoInstance92
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("1.1706 -2.4081 0 2.2855 -3.5118 0")));
ProtoInstance93
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-8.7071 0.3568 0 -9.7662 -0.7804 0")));
ProtoInstance94
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-8.7271 0.3568 0 -9.2288 1.8507 0")));
ProtoInstance95
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-8.687100000000001 0.3568 0 -9.1888 1.8507 0")));
ProtoInstance96
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-6.7226 -1.4382 0 -7.7483 -2.5753 0")));
ProtoInstance97
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("2.3078 4.4929 0 3.6902 5.1841 0")));
ProtoInstance98
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("2.3078 4.4929 0 1.3936 5.7416 0")));
ProtoInstance99
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("2.2855 -3.5118 0 3.6568 -4.2253 0")));
ProtoInstance100
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-9.7662 -0.7804 0 -11.2825 -0.4459 0")));
ProtoInstance101
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-7.7483 -2.5753 0 -7.2243 -4.0693 0")));
ProtoInstance102
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-7.7483 -2.5753 0 -8.7963 -2.4081 0")));
ProtoInstance103
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("3.6902 5.1841 0 5.2064 5.4405 0")));
ProtoInstance104
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("1.3936 5.7416 0 2.0291 7.1797 0")));
ProtoInstance105
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("3.6568 -4.2253 0 5.1841 -4.4818 0")));
ProtoInstance106
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-11.2825 -0.4459 0 -12.3304 -1.6054 0")));
ProtoInstance107
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("5.2064 5.4405 0 6.7561 5.1841 0")));
ProtoInstance108
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("5.186400000000001 5.4405 0 5.2199 6.9791 0")));
ProtoInstance109
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("5.2264 5.4405 0 5.259899999999999 6.9791 0")));
ProtoInstance110
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("2.0291 7.1797 0 1.126 8.4507 0")));
ProtoInstance111
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("2.0091 7.1797 0 3.5587 7.3135 0")));
ProtoInstance112
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("2.0491 7.1797 0 3.5987 7.3135 0")));
ProtoInstance113
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("5.1841 -4.4818 0 6.7226 -4.2253 0")));
ProtoInstance114
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("5.1841 -4.4818 0 5.1841 -6.0203 0")));
ProtoInstance115
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-12.3304 -1.6054 0 -13.8466 -1.2709 0")));
ProtoInstance116
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-12.350399999999999 -1.6054 0 -11.8822 -3.0659 0")));
ProtoInstance117
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-12.3104 -1.6054 0 -11.8422 -3.0659 0")));
ProtoInstance118
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("6.7561 5.1841 0 8.1385 4.4706 0")));
ProtoInstance119
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("6.7561 5.1841 0 7.2243 6.6781 0")));
ProtoInstance120
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("6.7226 -4.2253 0 8.1051 -3.5341 0")));
ProtoInstance121
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("6.7026 -4.2253 0 7.182 -5.7193 0")));
ProtoInstance122
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("6.7425999999999995 -4.2253 0 7.2219999999999995 -5.7193 0")));
ProtoInstance123
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("8.1385 4.4706 0 9.2422 3.3669 0")));
ProtoInstance124
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("7.2243 6.6781 0 8.7406 6.9791 0")));
ProtoInstance125
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("8.1051 -3.5341 0 9.2088 -2.4304 0")));
ProtoInstance126
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.2422 3.3669 0 9.9335 1.9845 0")));
ProtoInstance127
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.2222 3.3669 0 10.4597 4.3034 0")));
ProtoInstance128
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.2622 3.3669 0 10.499699999999999 4.3034 0")));
ProtoInstance129
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("8.7406 6.9791 0 9.2422 8.4507 0")));
ProtoInstance130
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.2088 -2.4304 0 10.4797 -3.3446 0")));
ProtoInstance131
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.2088 -2.4304 0 9.9335 -1.0591 0")));
ProtoInstance132
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.9335 1.9845 0 10.1787 0.4682 0")));
ProtoInstance133
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.9335 1.9845 0 11.4274 2.4862 0")));
ProtoInstance134
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.2422 8.4507 0 10.7585 8.774 0")));
ProtoInstance135
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.2222 8.4507 0 8.1966 9.6324 0")));
ProtoInstance136
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.2622 8.4507 0 8.2366 9.6324 0")));
ProtoInstance137
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("10.4797 -3.3446 0 10.3237 -4.8943 0")));
ProtoInstance138
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.9135 -1.0591 0 11.4074 -1.5274 0")));
ProtoInstance139
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.9535 -1.0591 0 11.4474 -1.5274 0")));
ProtoInstance140
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("11.4274 2.4862 0 12.5534 1.427 0")));
ProtoInstance141
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("11.4274 2.4862 0 11.7507 4.0024 0")));
ProtoInstance142
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("10.3237 -4.8943 0 8.8855 -5.5297 0")));
ProtoInstance143
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("10.303700000000001 -4.8943 0 11.5412 -5.8085 0")));
ProtoInstance144
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("10.3437 -4.8943 0 11.581199999999999 -5.8085 0")));
ProtoInstance145
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("12.5534 1.427 0 14.0473 1.9064 0")));
ProtoInstance146
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("8.8655 -5.5297 0 8.6983 -7.0794 0")));
ProtoInstance147
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("8.9055 -5.5297 0 8.738299999999999 -7.0794 0")));
ProtoInstance148
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("11.5612 -5.8085 0 11.3939 -7.347 0")));
ProtoInstance149
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("8.7183 -7.0794 0 9.9892 -7.9824 0")));
ProtoInstance150
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.9892 -7.9824 0 9.7885 -9.5321 0")));
ProtoInstance151
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("-3.9355 3.5341 0 -2.5753 4.3034 0")));
ProtoInstance152
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("9.9335 -1.0591 0 10.1787 0.4682 0")));
ProtoInstance153
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("11.3739 -7.347 0 9.9692 -7.9824 0")));
ProtoInstance154
            .addFieldValue(new fieldValue().setName(new SFString("bond_set")).setValue(new SFString("11.4139 -7.347 0 10.0092 -7.9824 0")));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"C"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"H"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"N"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"O"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"F"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Si"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"P"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"S"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Cl"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Br"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"I"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"?"});
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,-1});
  }
}
private class MFFloat13 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.309f ,1.570796f });
  }
}
private class MFColor14 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f ,0.5f ,0.7f ,0f ,0.4f ,0.7f ,0.6f ,0.5f ,0.7f });
  }
}
private class MFFloat15 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.309f ,1.570796f });
  }
}
private class MFColor16 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f ,0.5f ,0.8f ,0f ,0.6f ,0.7f ,0.6f ,0.6f ,0.7f });
  }
}
}
