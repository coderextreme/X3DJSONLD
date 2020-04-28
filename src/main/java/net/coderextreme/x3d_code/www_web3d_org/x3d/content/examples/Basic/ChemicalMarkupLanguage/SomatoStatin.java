package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.ChemicalMarkupLanguage;
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
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class SomatoStatin {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new SomatoStatin().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/ChemicalMarkupLanguage/SomatoStatin.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
ProtoInstanceObject ProtoInstance3 = null;
ProtoInstanceObject ProtoInstance4 = null;
ProtoInstanceObject ProtoInstance5 = null;
ProtoInstanceObject ProtoInstance6 = null;
ProtoInstanceObject ProtoInstance7 = null;
ProtoInstanceObject ProtoInstance8 = null;
ProtoInstanceObject ProtoInstance9 = null;
ProtoInstanceObject ProtoInstance10 = null;
ProtoInstanceObject ProtoInstance11 = null;
ProtoInstanceObject ProtoInstance12 = null;
ProtoInstanceObject ProtoInstance13 = null;
ProtoInstanceObject ProtoInstance14 = null;
ProtoInstanceObject ProtoInstance15 = null;
ProtoInstanceObject ProtoInstance16 = null;
ProtoInstanceObject ProtoInstance17 = null;
ProtoInstanceObject ProtoInstance18 = null;
ProtoInstanceObject ProtoInstance19 = null;
ProtoInstanceObject ProtoInstance20 = null;
ProtoInstanceObject ProtoInstance21 = null;
ProtoInstanceObject ProtoInstance22 = null;
ProtoInstanceObject ProtoInstance23 = null;
ProtoInstanceObject ProtoInstance24 = null;
ProtoInstanceObject ProtoInstance25 = null;
ProtoInstanceObject ProtoInstance26 = null;
ProtoInstanceObject ProtoInstance27 = null;
ProtoInstanceObject ProtoInstance28 = null;
ProtoInstanceObject ProtoInstance29 = null;
ProtoInstanceObject ProtoInstance30 = null;
ProtoInstanceObject ProtoInstance31 = null;
ProtoInstanceObject ProtoInstance32 = null;
ProtoInstanceObject ProtoInstance33 = null;
ProtoInstanceObject ProtoInstance34 = null;
ProtoInstanceObject ProtoInstance35 = null;
ProtoInstanceObject ProtoInstance36 = null;
ProtoInstanceObject ProtoInstance37 = null;
ProtoInstanceObject ProtoInstance38 = null;
ProtoInstanceObject ProtoInstance39 = null;
ProtoInstanceObject ProtoInstance40 = null;
ProtoInstanceObject ProtoInstance41 = null;
ProtoInstanceObject ProtoInstance42 = null;
ProtoInstanceObject ProtoInstance43 = null;
ProtoInstanceObject ProtoInstance44 = null;
ProtoInstanceObject ProtoInstance45 = null;
ProtoInstanceObject ProtoInstance46 = null;
ProtoInstanceObject ProtoInstance47 = null;
ProtoInstanceObject ProtoInstance48 = null;
ProtoInstanceObject ProtoInstance49 = null;
ProtoInstanceObject ProtoInstance50 = null;
ProtoInstanceObject ProtoInstance51 = null;
ProtoInstanceObject ProtoInstance52 = null;
ProtoInstanceObject ProtoInstance53 = null;
ProtoInstanceObject ProtoInstance54 = null;
ProtoInstanceObject ProtoInstance55 = null;
ProtoInstanceObject ProtoInstance56 = null;
ProtoInstanceObject ProtoInstance57 = null;
ProtoInstanceObject ProtoInstance58 = null;
ProtoInstanceObject ProtoInstance59 = null;
ProtoInstanceObject ProtoInstance60 = null;
ProtoInstanceObject ProtoInstance61 = null;
ProtoInstanceObject ProtoInstance62 = null;
ProtoInstanceObject ProtoInstance63 = null;
ProtoInstanceObject ProtoInstance64 = null;
ProtoInstanceObject ProtoInstance65 = null;
ProtoInstanceObject ProtoInstance66 = null;
ProtoInstanceObject ProtoInstance67 = null;
ProtoInstanceObject ProtoInstance68 = null;
ProtoInstanceObject ProtoInstance69 = null;
ProtoInstanceObject ProtoInstance70 = null;
ProtoInstanceObject ProtoInstance71 = null;
ProtoInstanceObject ProtoInstance72 = null;
ProtoInstanceObject ProtoInstance73 = null;
ProtoInstanceObject ProtoInstance74 = null;
ProtoInstanceObject ProtoInstance75 = null;
ProtoInstanceObject ProtoInstance76 = null;
ProtoInstanceObject ProtoInstance77 = null;
ProtoInstanceObject ProtoInstance78 = null;
ProtoInstanceObject ProtoInstance79 = null;
ProtoInstanceObject ProtoInstance80 = null;
ProtoInstanceObject ProtoInstance81 = null;
ProtoInstanceObject ProtoInstance82 = null;
ProtoInstanceObject ProtoInstance83 = null;
ProtoInstanceObject ProtoInstance84 = null;
ProtoInstanceObject ProtoInstance85 = null;
ProtoInstanceObject ProtoInstance86 = null;
ProtoInstanceObject ProtoInstance87 = null;
ProtoInstanceObject ProtoInstance88 = null;
ProtoInstanceObject ProtoInstance89 = null;
ProtoInstanceObject ProtoInstance90 = null;
ProtoInstanceObject ProtoInstance91 = null;
ProtoInstanceObject ProtoInstance92 = null;
ProtoInstanceObject ProtoInstance93 = null;
ProtoInstanceObject ProtoInstance94 = null;
ProtoInstanceObject ProtoInstance95 = null;
ProtoInstanceObject ProtoInstance96 = null;
ProtoInstanceObject ProtoInstance97 = null;
ProtoInstanceObject ProtoInstance98 = null;
ProtoInstanceObject ProtoInstance99 = null;
ProtoInstanceObject ProtoInstance100 = null;
ProtoInstanceObject ProtoInstance101 = null;
ProtoInstanceObject ProtoInstance102 = null;
ProtoInstanceObject ProtoInstance103 = null;
ProtoInstanceObject ProtoInstance104 = null;
ProtoInstanceObject ProtoInstance105 = null;
ProtoInstanceObject ProtoInstance106 = null;
ProtoInstanceObject ProtoInstance107 = null;
ProtoInstanceObject ProtoInstance108 = null;
ProtoInstanceObject ProtoInstance109 = null;
ProtoInstanceObject ProtoInstance110 = null;
ProtoInstanceObject ProtoInstance111 = null;
ProtoInstanceObject ProtoInstance112 = null;
ProtoInstanceObject ProtoInstance113 = null;
ProtoInstanceObject ProtoInstance114 = null;
ProtoInstanceObject ProtoInstance115 = null;
ProtoInstanceObject ProtoInstance116 = null;
ProtoInstanceObject ProtoInstance117 = null;
ProtoInstanceObject ProtoInstance118 = null;
ProtoInstanceObject ProtoInstance119 = null;
ProtoInstanceObject ProtoInstance120 = null;
ProtoInstanceObject ProtoInstance121 = null;
ProtoInstanceObject ProtoInstance122 = null;
ProtoInstanceObject ProtoInstance123 = null;
ProtoInstanceObject ProtoInstance124 = null;
ProtoInstanceObject ProtoInstance125 = null;
ProtoInstanceObject ProtoInstance126 = null;
ProtoInstanceObject ProtoInstance127 = null;
ProtoInstanceObject ProtoInstance128 = null;
ProtoInstanceObject ProtoInstance129 = null;
ProtoInstanceObject ProtoInstance130 = null;
ProtoInstanceObject ProtoInstance131 = null;
ProtoInstanceObject ProtoInstance132 = null;
ProtoInstanceObject ProtoInstance133 = null;
ProtoInstanceObject ProtoInstance134 = null;
ProtoInstanceObject ProtoInstance135 = null;
ProtoInstanceObject ProtoInstance136 = null;
ProtoInstanceObject ProtoInstance137 = null;
ProtoInstanceObject ProtoInstance138 = null;
ProtoInstanceObject ProtoInstance139 = null;
ProtoInstanceObject ProtoInstance140 = null;
ProtoInstanceObject ProtoInstance141 = null;
ProtoInstanceObject ProtoInstance142 = null;
ProtoInstanceObject ProtoInstance143 = null;
ProtoInstanceObject ProtoInstance144 = null;
ProtoInstanceObject ProtoInstance145 = null;
ProtoInstanceObject ProtoInstance146 = null;
ProtoInstanceObject ProtoInstance147 = null;
ProtoInstanceObject ProtoInstance148 = null;
ProtoInstanceObject ProtoInstance149 = null;
ProtoInstanceObject ProtoInstance150 = null;
ProtoInstanceObject ProtoInstance151 = null;
ProtoInstanceObject ProtoInstance152 = null;
ProtoInstanceObject ProtoInstance153 = null;
ProtoInstanceObject ProtoInstance154 = null;
ProtoInstanceObject ProtoInstance155 = null;
ProtoInstanceObject ProtoInstance156 = null;
ProtoInstanceObject ProtoInstance157 = null;
ProtoInstanceObject ProtoInstance158 = null;
ProtoInstanceObject ProtoInstance159 = null;
ProtoInstanceObject ProtoInstance160 = null;
ProtoInstanceObject ProtoInstance161 = null;
ProtoInstanceObject ProtoInstance162 = null;
ProtoInstanceObject ProtoInstance163 = null;
ProtoInstanceObject ProtoInstance164 = null;
ProtoInstanceObject ProtoInstance165 = null;
ProtoInstanceObject ProtoInstance166 = null;
ProtoInstanceObject ProtoInstance167 = null;
ProtoInstanceObject ProtoInstance168 = null;
ProtoInstanceObject ProtoInstance169 = null;
ProtoInstanceObject ProtoInstance170 = null;
ProtoInstanceObject ProtoInstance171 = null;
ProtoInstanceObject ProtoInstance172 = null;
ProtoInstanceObject ProtoInstance173 = null;
ProtoInstanceObject ProtoInstance174 = null;
ProtoInstanceObject ProtoInstance175 = null;
ProtoInstanceObject ProtoInstance176 = null;
ProtoInstanceObject ProtoInstance177 = null;
ProtoInstanceObject ProtoInstance178 = null;
ProtoInstanceObject ProtoInstance179 = null;
ProtoInstanceObject ProtoInstance180 = null;
ProtoInstanceObject ProtoInstance181 = null;
ProtoInstanceObject ProtoInstance182 = null;
ProtoInstanceObject ProtoInstance183 = null;
ProtoInstanceObject ProtoInstance184 = null;
ProtoInstanceObject ProtoInstance185 = null;
ProtoInstanceObject ProtoInstance186 = null;
ProtoInstanceObject ProtoInstance187 = null;
ProtoInstanceObject ProtoInstance188 = null;
ProtoInstanceObject ProtoInstance189 = null;
ProtoInstanceObject ProtoInstance190 = null;
ProtoInstanceObject ProtoInstance191 = null;
ProtoInstanceObject ProtoInstance192 = null;
ProtoInstanceObject ProtoInstance193 = null;
ProtoInstanceObject ProtoInstance194 = null;
ProtoInstanceObject ProtoInstance195 = null;
ProtoInstanceObject ProtoInstance196 = null;
ProtoInstanceObject ProtoInstance197 = null;
ProtoInstanceObject ProtoInstance198 = null;
ProtoInstanceObject ProtoInstance199 = null;
ProtoInstanceObject ProtoInstance200 = null;
ProtoInstanceObject ProtoInstance201 = null;
ProtoInstanceObject ProtoInstance202 = null;
ProtoInstanceObject ProtoInstance203 = null;
ProtoInstanceObject ProtoInstance204 = null;
ProtoInstanceObject ProtoInstance205 = null;
ProtoInstanceObject ProtoInstance206 = null;
ProtoInstanceObject ProtoInstance207 = null;
ProtoInstanceObject ProtoInstance208 = null;
ProtoInstanceObject ProtoInstance209 = null;
ProtoInstanceObject ProtoInstance210 = null;
ProtoInstanceObject ProtoInstance211 = null;
ProtoInstanceObject ProtoInstance212 = null;
ProtoInstanceObject ProtoInstance213 = null;
ProtoInstanceObject ProtoInstance214 = null;
ProtoInstanceObject ProtoInstance215 = null;
ProtoInstanceObject ProtoInstance216 = null;
ProtoInstanceObject ProtoInstance217 = null;
ProtoInstanceObject ProtoInstance218 = null;
ProtoInstanceObject ProtoInstance219 = null;
ProtoInstanceObject ProtoInstance220 = null;
ProtoInstanceObject ProtoInstance221 = null;
ProtoInstanceObject ProtoInstance222 = null;
ProtoInstanceObject ProtoInstance223 = null;
ProtoInstanceObject ProtoInstance224 = null;
ProtoInstanceObject ProtoInstance225 = null;
ProtoInstanceObject ProtoInstance226 = null;
ProtoInstanceObject ProtoInstance227 = null;
ProtoInstanceObject ProtoInstance228 = null;
ProtoInstanceObject ProtoInstance229 = null;
ProtoInstanceObject ProtoInstance230 = null;
ProtoInstanceObject ProtoInstance231 = null;
ProtoInstanceObject ProtoInstance232 = null;
ProtoInstanceObject ProtoInstance233 = null;
ProtoInstanceObject ProtoInstance234 = null;
ProtoInstanceObject ProtoInstance235 = null;
ProtoInstanceObject ProtoInstance236 = null;
ProtoInstanceObject ProtoInstance237 = null;
ProtoInstanceObject ProtoInstance238 = null;
ProtoInstanceObject ProtoInstance239 = null;
ProtoInstanceObject ProtoInstance240 = null;
ProtoInstanceObject ProtoInstance241 = null;
ProtoInstanceObject ProtoInstance242 = null;
ProtoInstanceObject ProtoInstance243 = null;
ProtoInstanceObject ProtoInstance244 = null;
ProtoInstanceObject ProtoInstance245 = null;
ProtoInstanceObject ProtoInstance246 = null;
ProtoInstanceObject ProtoInstance247 = null;
ProtoInstanceObject ProtoInstance248 = null;
ProtoInstanceObject ProtoInstance249 = null;
ProtoInstanceObject ProtoInstance250 = null;
ProtoInstanceObject ProtoInstance251 = null;
ProtoInstanceObject ProtoInstance252 = null;
ProtoInstanceObject ProtoInstance253 = null;
ProtoInstanceObject ProtoInstance254 = null;
ProtoInstanceObject ProtoInstance255 = null;
ProtoInstanceObject ProtoInstance256 = null;
ProtoInstanceObject ProtoInstance257 = null;
ProtoInstanceObject ProtoInstance258 = null;
ProtoInstanceObject ProtoInstance259 = null;
ProtoInstanceObject ProtoInstance260 = null;
ProtoInstanceObject ProtoInstance261 = null;
ProtoInstanceObject ProtoInstance262 = null;
ProtoInstanceObject ProtoInstance263 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("SomatoStatin.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Autogenerated version of SomatoStatin.x3d scene produced from SomatoStatin.xml Chemical Markup Language (CML) version 1.0 source file."))
        .addMeta(new metaObject().setName("creator").setContent("Nicholas F. Polys"))
        .addMeta(new metaObject().setName("created").setContent("24 November 2005"))
        .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
        .addMeta(new metaObject().setName("reference").setContent("SomatoStatin.xml"))
        .addMeta(new metaObject().setName("CML version").setContent("1.0"))
        .addMeta(new metaObject().setName("reference").setContent("CML sources http://www.xml-cml.org"))
        .addMeta(new metaObject().setName("reference").setContent("JUMBO Chemical Format Conversion Tool"))
        .addMeta(new metaObject().setName("reference").setContent("http://webbook.nist.gov/chemistry"))
        .addMeta(new metaObject().setName("reference").setContent("Polys.StylesheetTransformationsInteractiveVisualization.Web3d2003Symposium.pdf"))
        .addMeta(new metaObject().setName("reference").setContent("Originally Published in Proceedings of Web3D 2003, ACM Press"))
        .addMeta(new metaObject().setName("generator").setContent("CmlToX3d.xslt"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/ChemicalMarkupLanguage/SomatoStatin.x3d"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("SomatoStatin.x3d"))
        .addChild(new ProtoDeclareObject().setName("Carbon")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoC")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoC_mat").setDiffuseColor(new float[] {0f,0f,0f}).setShininess(0.8f).setSpecularColor(new float[] {0.29f,0.3f,0.29f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(0.77f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString0().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Hydrogen")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoH")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoH_mat").setAmbientIntensity(0.0933f).setDiffuseColor(new float[] {0.38f,0.38f,0.42f}).setShininess(0.5f).setSpecularColor(new float[] {0.53f,0.53f,0.53f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(0.32f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString1().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.4f))))))))
        .addChild(new ProtoDeclareObject().setName("Nitrogen")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoN")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoN_mat").setDiffuseColor(new float[] {0f,0f,0.72f}).setEmissiveColor(new float[] {0f,0f,0.13f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(0.75f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString2().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Oxygen")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoO")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoO_mat").setAmbientIntensity(0.487f).setDiffuseColor(new float[] {0.54f,0.05f,0.25f}).setShininess(0.2f).setSpecularColor(new float[] {0.81f,0.77f,0.75f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(0.73f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString3().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Fluorine")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoF")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoF_mat").setDiffuseColor(new float[] {1f,0.48f,0.79f}).setEmissiveColor(new float[] {0.09f,0.04f,0.07f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(0.72f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString4().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Silicon")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoSi")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoSi_mat").setDiffuseColor(new float[] {0.8f,0.8f,0.8f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.18f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString5().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Phosphorus")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoP")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoP_mat").setAmbientIntensity(0.11f).setDiffuseColor(new float[] {0.9f,0.41f,0f}).setEmissiveColor(new float[] {0.1f,0.04f,0f}).setShininess(0.8f).setSpecularColor(new float[] {0.1f,0.1f,0.1f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.1f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString6().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Sulphur")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoS")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoS_mat").setAmbientIntensity(0.0467f).setDiffuseColor(new float[] {0.25f,0.39f,0.25f}).setEmissiveColor(new float[] {0.05f,0.08f,0.05f}).setShininess(0.6f).setSpecularColor(new float[] {0.11f,0.12f,0.08f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.3f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString7().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Chlorine")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoCl")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoCl_mat").setDiffuseColor(new float[] {0.28f,0.7f,0f}).setEmissiveColor(new float[] {0.06f,0.15f,0f}).setShininess(0.8f).setSpecularColor(new float[] {0.5f,0.5f,0.5f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.01f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString8().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Bromine")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoBr")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoBr_mat").setAmbientIntensity(0.0833f).setDiffuseColor(new float[] {0.5f,0.3f,0.19f}).setEmissiveColor(new float[] {0.12f,0.13f,0.08f}).setShininess(0.17f).setSpecularColor(new float[] {0.08f,0.08f,0.05f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.14f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString9().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Iodine")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoI")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoI_mat").setDiffuseColor(new float[] {0.56f,0.37f,0.74f}).setEmissiveColor(new float[] {0.15f,0.1f,0.2f}).setShininess(0.09f).setSpecularColor(new float[] {0.12f,0.12f,0.12f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.33f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString10().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("unknown")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("ato_")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("ato__mat").setDiffuseColor(new float[] {1f,1f,1f}).setEmissiveColor(new float[] {0.15f,0.1f,0.2f}).setShininess(0.09f).setSpecularColor(new float[] {0.12f,0.12f,0.12f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.001f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString11().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("line")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFVec3f").setName("bond_set").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("-1 0 0 1 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f}).setEmissiveColor(new float[] {1f,1f,1f})))
                .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt3212().getArray()))
                  .setCoord(new CoordinateObject().setDEF("bondo")
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("point").setProtoField("bond_set")))))))))
        .addChild(new ProtoDeclareObject().setName("title_text")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFString").setName("txt").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .addChild(new GroupObject()
                .addChild(new TransformObject()
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                    .setGeometry(new TextObject().setDEF("cmpd_name")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("string").setProtoField("txt")))
                      .setFontStyle(new FontStyleObject()))))))))
        .addChild(new ProtoDeclareObject().setName("ano1_text")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFString").setName("txt").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .addChild(new GroupObject()
                .addChild(new TransformObject()
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                    .setGeometry(new TextObject().setDEF("cmpd_name1")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("string").setProtoField("txt")))
                      .setFontStyle(new FontStyleObject().setSize(0.8f)))))))))
        .addChild(new ProtoDeclareObject().setName("ano2_text")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFString").setName("txt").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .addChild(new GroupObject()
                .addChild(new TransformObject()
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                    .setGeometry(new TextObject().setDEF("cmpd_name2")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("string").setProtoField("txt")))
                      .setFontStyle(new FontStyleObject().setSize(0.6f)))))))))
        .addChild(new BackgroundObject().setGroundAngle(new MFFloatObject(new MFFloat13().getArray())).setGroundColor(new MFColorObject(new MFColor14().getArray())).setSkyAngle(new MFFloatObject(new MFFloat15().getArray())).setSkyColor(new MFColorObject(new MFColor16().getArray())))
        .addChild(new PointLightObject().setAmbientIntensity(1f).setLocation(new float[] {0f,0f,5f}).setRadius(30f))
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","FLY","ANY"}))
        .addChild(new ViewpointObject().setDescription("Inspect SomatoStatin").setPosition(new float[] {0f,2f,20f}))
        .addChild(new TransformObject().setDEF("infogroupa").setTranslation(new float[] {-8f,2f,-4f})
          .addChild(new TransformObject().setTranslation(new float[] {0f,6f,0f})
            .addChild(new ViewpointObject().setDescription("title billboard").setPosition(new float[] {6f,-2f,10f}))
            .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("title_text"))))
        .addComments(new CommentsBlock("<date day=\"23\" month=\"11\" year=\"1995\"></date>"))
        .addChild(new GroupObject()
          .addChild(new TransformObject()
            .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("Carbon").setDEF("a1")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("Carbon").setDEF("a2")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("Carbon").setDEF("a3")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("Carbon").setDEF("a4")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance5 = new ProtoInstanceObject().setName("Carbon").setDEF("a5")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance6 = new ProtoInstanceObject().setName("Carbon").setDEF("a6")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance7 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a7")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance8 = new ProtoInstanceObject().setName("Carbon").setDEF("a8")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance9 = new ProtoInstanceObject().setName("Carbon").setDEF("a9")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance10 = new ProtoInstanceObject().setName("Carbon").setDEF("a10")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance11 = new ProtoInstanceObject().setName("Carbon").setDEF("a11")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance12 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a12")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance13 = new ProtoInstanceObject().setName("Carbon").setDEF("a13")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance14 = new ProtoInstanceObject().setName("Carbon").setDEF("a14")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance15 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a15")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance16 = new ProtoInstanceObject().setName("Oxygen").setDEF("a16")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance17 = new ProtoInstanceObject().setName("Carbon").setDEF("a17")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance18 = new ProtoInstanceObject().setName("Oxygen").setDEF("a18")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance19 = new ProtoInstanceObject().setName("Carbon").setDEF("a19")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance20 = new ProtoInstanceObject().setName("Carbon").setDEF("a20")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance21 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a21")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance22 = new ProtoInstanceObject().setName("Carbon").setDEF("a22")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance23 = new ProtoInstanceObject().setName("Carbon").setDEF("a23")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance24 = new ProtoInstanceObject().setName("Carbon").setDEF("a24")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance25 = new ProtoInstanceObject().setName("Carbon").setDEF("a25")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance26 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a26")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance27 = new ProtoInstanceObject().setName("Oxygen").setDEF("a27")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance28 = new ProtoInstanceObject().setName("Carbon").setDEF("a28")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance29 = new ProtoInstanceObject().setName("Carbon").setDEF("a29")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance30 = new ProtoInstanceObject().setName("Carbon").setDEF("a30")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance31 = new ProtoInstanceObject().setName("Carbon").setDEF("a31")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance32 = new ProtoInstanceObject().setName("Oxygen").setDEF("a32")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance33 = new ProtoInstanceObject().setName("Carbon").setDEF("a33")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance34 = new ProtoInstanceObject().setName("Carbon").setDEF("a34")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance35 = new ProtoInstanceObject().setName("Carbon").setDEF("a35")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance36 = new ProtoInstanceObject().setName("Carbon").setDEF("a36")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance37 = new ProtoInstanceObject().setName("Carbon").setDEF("a37")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance38 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a38")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance39 = new ProtoInstanceObject().setName("Carbon").setDEF("a39")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance40 = new ProtoInstanceObject().setName("Carbon").setDEF("a40")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance41 = new ProtoInstanceObject().setName("Carbon").setDEF("a41")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance42 = new ProtoInstanceObject().setName("Carbon").setDEF("a42")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance43 = new ProtoInstanceObject().setName("Carbon").setDEF("a43")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance44 = new ProtoInstanceObject().setName("Carbon").setDEF("a44")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance45 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a45")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance46 = new ProtoInstanceObject().setName("Oxygen").setDEF("a46")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance47 = new ProtoInstanceObject().setName("Carbon").setDEF("a47")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance48 = new ProtoInstanceObject().setName("Oxygen").setDEF("a48")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance49 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a49")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance50 = new ProtoInstanceObject().setName("Carbon").setDEF("a50")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance51 = new ProtoInstanceObject().setName("Carbon").setDEF("a51")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance52 = new ProtoInstanceObject().setName("Carbon").setDEF("a52")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance53 = new ProtoInstanceObject().setName("Oxygen").setDEF("a53")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance54 = new ProtoInstanceObject().setName("Carbon").setDEF("a54")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance55 = new ProtoInstanceObject().setName("Carbon").setDEF("a55")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance56 = new ProtoInstanceObject().setName("Carbon").setDEF("a56")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance57 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a57")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance58 = new ProtoInstanceObject().setName("Carbon").setDEF("a58")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance59 = new ProtoInstanceObject().setName("Carbon").setDEF("a59")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance60 = new ProtoInstanceObject().setName("Carbon").setDEF("a60")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance61 = new ProtoInstanceObject().setName("Carbon").setDEF("a61")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance62 = new ProtoInstanceObject().setName("Carbon").setDEF("a62")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance63 = new ProtoInstanceObject().setName("Carbon").setDEF("a63")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance64 = new ProtoInstanceObject().setName("Carbon").setDEF("a64")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance65 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a65")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance66 = new ProtoInstanceObject().setName("Oxygen").setDEF("a66")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance67 = new ProtoInstanceObject().setName("Carbon").setDEF("a67")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance68 = new ProtoInstanceObject().setName("Oxygen").setDEF("a68")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance69 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a69")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance70 = new ProtoInstanceObject().setName("Oxygen").setDEF("a70")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance71 = new ProtoInstanceObject().setName("Carbon").setDEF("a71")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance72 = new ProtoInstanceObject().setName("Carbon").setDEF("a72")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance73 = new ProtoInstanceObject().setName("Carbon").setDEF("a73")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance74 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a74")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance75 = new ProtoInstanceObject().setName("Carbon").setDEF("a75")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance76 = new ProtoInstanceObject().setName("Carbon").setDEF("a76")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance77 = new ProtoInstanceObject().setName("Carbon").setDEF("a77")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance78 = new ProtoInstanceObject().setName("Carbon").setDEF("a78")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance79 = new ProtoInstanceObject().setName("Carbon").setDEF("a79")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance80 = new ProtoInstanceObject().setName("Carbon").setDEF("a80")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance81 = new ProtoInstanceObject().setName("Carbon").setDEF("a81")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance82 = new ProtoInstanceObject().setName("Carbon").setDEF("a82")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance83 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a83")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance84 = new ProtoInstanceObject().setName("Oxygen").setDEF("a84")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance85 = new ProtoInstanceObject().setName("Carbon").setDEF("a85")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance86 = new ProtoInstanceObject().setName("Oxygen").setDEF("a86")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance87 = new ProtoInstanceObject().setName("Carbon").setDEF("a87")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance88 = new ProtoInstanceObject().setName("Oxygen").setDEF("a88")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance89 = new ProtoInstanceObject().setName("Carbon").setDEF("a89")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance90 = new ProtoInstanceObject().setName("Carbon").setDEF("a90")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance91 = new ProtoInstanceObject().setName("Carbon").setDEF("a91")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance92 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a92")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance93 = new ProtoInstanceObject().setName("Carbon").setDEF("a93")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance94 = new ProtoInstanceObject().setName("Carbon").setDEF("a94")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance95 = new ProtoInstanceObject().setName("Carbon").setDEF("a95")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance96 = new ProtoInstanceObject().setName("Sulphur").setDEF("a96")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance97 = new ProtoInstanceObject().setName("Carbon").setDEF("a97")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance98 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a98")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance99 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a99")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance100 = new ProtoInstanceObject().setName("Oxygen").setDEF("a100")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance101 = new ProtoInstanceObject().setName("Oxygen").setDEF("a101")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance102 = new ProtoInstanceObject().setName("Sulphur").setDEF("a102")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance103 = new ProtoInstanceObject().setName("Carbon").setDEF("a103")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance104 = new ProtoInstanceObject().setName("Oxygen").setDEF("a104")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance105 = new ProtoInstanceObject().setName("Carbon").setDEF("a105")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance106 = new ProtoInstanceObject().setName("Carbon").setDEF("a106")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance107 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a107")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance108 = new ProtoInstanceObject().setName("Carbon").setDEF("a108")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance109 = new ProtoInstanceObject().setName("Carbon").setDEF("a109")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance110 = new ProtoInstanceObject().setName("Oxygen").setDEF("a110")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance111 = new ProtoInstanceObject().setName("Oxygen").setDEF("a111")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance112 = new ProtoInstanceObject().setName("Carbon").setDEF("a112")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance113 = new ProtoInstanceObject().setName("Oxygen").setDEF("a113")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance114 = new ProtoInstanceObject().setName("Carbon").setDEF("a114")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance115 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a115"))))
        .addChild(new GroupObject()
          .addChild(ProtoInstance116 = new ProtoInstanceObject().setName("line").setDEF("b1"))
          .addChild(ProtoInstance117 = new ProtoInstanceObject().setName("line").setDEF("b2"))
          .addChild(ProtoInstance118 = new ProtoInstanceObject().setName("line").setDEF("b2_2"))
          .addChild(ProtoInstance119 = new ProtoInstanceObject().setName("line").setDEF("b3"))
          .addChild(ProtoInstance120 = new ProtoInstanceObject().setName("line").setDEF("b4"))
          .addChild(ProtoInstance121 = new ProtoInstanceObject().setName("line").setDEF("b5"))
          .addChild(ProtoInstance122 = new ProtoInstanceObject().setName("line").setDEF("b5_2"))
          .addChild(ProtoInstance123 = new ProtoInstanceObject().setName("line").setDEF("b6"))
          .addChild(ProtoInstance124 = new ProtoInstanceObject().setName("line").setDEF("b7"))
          .addChild(ProtoInstance125 = new ProtoInstanceObject().setName("line").setDEF("b8"))
          .addChild(ProtoInstance126 = new ProtoInstanceObject().setName("line").setDEF("b8_2"))
          .addChild(ProtoInstance127 = new ProtoInstanceObject().setName("line").setDEF("b9"))
          .addChild(ProtoInstance128 = new ProtoInstanceObject().setName("line").setDEF("b10"))
          .addChild(ProtoInstance129 = new ProtoInstanceObject().setName("line").setDEF("b10_2"))
          .addChild(ProtoInstance130 = new ProtoInstanceObject().setName("line").setDEF("b11"))
          .addChild(ProtoInstance131 = new ProtoInstanceObject().setName("line").setDEF("b12"))
          .addChild(ProtoInstance132 = new ProtoInstanceObject().setName("line").setDEF("b13"))
          .addChild(ProtoInstance133 = new ProtoInstanceObject().setName("line").setDEF("b14"))
          .addChild(ProtoInstance134 = new ProtoInstanceObject().setName("line").setDEF("b15"))
          .addChild(ProtoInstance135 = new ProtoInstanceObject().setName("line").setDEF("b15_2"))
          .addChild(ProtoInstance136 = new ProtoInstanceObject().setName("line").setDEF("b16"))
          .addChild(ProtoInstance137 = new ProtoInstanceObject().setName("line").setDEF("b17"))
          .addChild(ProtoInstance138 = new ProtoInstanceObject().setName("line").setDEF("b17_2"))
          .addChild(ProtoInstance139 = new ProtoInstanceObject().setName("line").setDEF("b18"))
          .addChild(ProtoInstance140 = new ProtoInstanceObject().setName("line").setDEF("b19"))
          .addChild(ProtoInstance141 = new ProtoInstanceObject().setName("line").setDEF("b20"))
          .addChild(ProtoInstance142 = new ProtoInstanceObject().setName("line").setDEF("b21"))
          .addChild(ProtoInstance143 = new ProtoInstanceObject().setName("line").setDEF("b22"))
          .addChild(ProtoInstance144 = new ProtoInstanceObject().setName("line").setDEF("b23"))
          .addChild(ProtoInstance145 = new ProtoInstanceObject().setName("line").setDEF("b24"))
          .addChild(ProtoInstance146 = new ProtoInstanceObject().setName("line").setDEF("b25"))
          .addChild(ProtoInstance147 = new ProtoInstanceObject().setName("line").setDEF("b26"))
          .addChild(ProtoInstance148 = new ProtoInstanceObject().setName("line").setDEF("b26_2"))
          .addChild(ProtoInstance149 = new ProtoInstanceObject().setName("line").setDEF("b27"))
          .addChild(ProtoInstance150 = new ProtoInstanceObject().setName("line").setDEF("b28"))
          .addChild(ProtoInstance151 = new ProtoInstanceObject().setName("line").setDEF("b28_2"))
          .addChild(ProtoInstance152 = new ProtoInstanceObject().setName("line").setDEF("b29"))
          .addChild(ProtoInstance153 = new ProtoInstanceObject().setName("line").setDEF("b30"))
          .addChild(ProtoInstance154 = new ProtoInstanceObject().setName("line").setDEF("b31"))
          .addChild(ProtoInstance155 = new ProtoInstanceObject().setName("line").setDEF("b31_2"))
          .addChild(ProtoInstance156 = new ProtoInstanceObject().setName("line").setDEF("b32"))
          .addChild(ProtoInstance157 = new ProtoInstanceObject().setName("line").setDEF("b33"))
          .addChild(ProtoInstance158 = new ProtoInstanceObject().setName("line").setDEF("b34"))
          .addChild(ProtoInstance159 = new ProtoInstanceObject().setName("line").setDEF("b35"))
          .addChild(ProtoInstance160 = new ProtoInstanceObject().setName("line").setDEF("b35_2"))
          .addChild(ProtoInstance161 = new ProtoInstanceObject().setName("line").setDEF("b36"))
          .addChild(ProtoInstance162 = new ProtoInstanceObject().setName("line").setDEF("b37"))
          .addChild(ProtoInstance163 = new ProtoInstanceObject().setName("line").setDEF("b38"))
          .addChild(ProtoInstance164 = new ProtoInstanceObject().setName("line").setDEF("b39"))
          .addChild(ProtoInstance165 = new ProtoInstanceObject().setName("line").setDEF("b40"))
          .addChild(ProtoInstance166 = new ProtoInstanceObject().setName("line").setDEF("b41"))
          .addChild(ProtoInstance167 = new ProtoInstanceObject().setName("line").setDEF("b41_2"))
          .addChild(ProtoInstance168 = new ProtoInstanceObject().setName("line").setDEF("b42"))
          .addChild(ProtoInstance169 = new ProtoInstanceObject().setName("line").setDEF("b43"))
          .addChild(ProtoInstance170 = new ProtoInstanceObject().setName("line").setDEF("b44"))
          .addChild(ProtoInstance171 = new ProtoInstanceObject().setName("line").setDEF("b45"))
          .addChild(ProtoInstance172 = new ProtoInstanceObject().setName("line").setDEF("b45_2"))
          .addChild(ProtoInstance173 = new ProtoInstanceObject().setName("line").setDEF("b46"))
          .addChild(ProtoInstance174 = new ProtoInstanceObject().setName("line").setDEF("b47"))
          .addChild(ProtoInstance175 = new ProtoInstanceObject().setName("line").setDEF("b48"))
          .addChild(ProtoInstance176 = new ProtoInstanceObject().setName("line").setDEF("b49"))
          .addChild(ProtoInstance177 = new ProtoInstanceObject().setName("line").setDEF("b49_2"))
          .addChild(ProtoInstance178 = new ProtoInstanceObject().setName("line").setDEF("b50"))
          .addChild(ProtoInstance179 = new ProtoInstanceObject().setName("line").setDEF("b51"))
          .addChild(ProtoInstance180 = new ProtoInstanceObject().setName("line").setDEF("b52"))
          .addChild(ProtoInstance181 = new ProtoInstanceObject().setName("line").setDEF("b52_2"))
          .addChild(ProtoInstance182 = new ProtoInstanceObject().setName("line").setDEF("b53"))
          .addChild(ProtoInstance183 = new ProtoInstanceObject().setName("line").setDEF("b54"))
          .addChild(ProtoInstance184 = new ProtoInstanceObject().setName("line").setDEF("b55"))
          .addChild(ProtoInstance185 = new ProtoInstanceObject().setName("line").setDEF("b55_2"))
          .addChild(ProtoInstance186 = new ProtoInstanceObject().setName("line").setDEF("b56"))
          .addChild(ProtoInstance187 = new ProtoInstanceObject().setName("line").setDEF("b57"))
          .addChild(ProtoInstance188 = new ProtoInstanceObject().setName("line").setDEF("b58"))
          .addChild(ProtoInstance189 = new ProtoInstanceObject().setName("line").setDEF("b59"))
          .addChild(ProtoInstance190 = new ProtoInstanceObject().setName("line").setDEF("b60"))
          .addChild(ProtoInstance191 = new ProtoInstanceObject().setName("line").setDEF("b60_2"))
          .addChild(ProtoInstance192 = new ProtoInstanceObject().setName("line").setDEF("b61"))
          .addChild(ProtoInstance193 = new ProtoInstanceObject().setName("line").setDEF("b62"))
          .addChild(ProtoInstance194 = new ProtoInstanceObject().setName("line").setDEF("b63"))
          .addChild(ProtoInstance195 = new ProtoInstanceObject().setName("line").setDEF("b64"))
          .addChild(ProtoInstance196 = new ProtoInstanceObject().setName("line").setDEF("b65"))
          .addChild(ProtoInstance197 = new ProtoInstanceObject().setName("line").setDEF("b65_2"))
          .addChild(ProtoInstance198 = new ProtoInstanceObject().setName("line").setDEF("b66"))
          .addChild(ProtoInstance199 = new ProtoInstanceObject().setName("line").setDEF("b67"))
          .addChild(ProtoInstance200 = new ProtoInstanceObject().setName("line").setDEF("b67_2"))
          .addChild(ProtoInstance201 = new ProtoInstanceObject().setName("line").setDEF("b68"))
          .addChild(ProtoInstance202 = new ProtoInstanceObject().setName("line").setDEF("b69"))
          .addChild(ProtoInstance203 = new ProtoInstanceObject().setName("line").setDEF("b69_2"))
          .addChild(ProtoInstance204 = new ProtoInstanceObject().setName("line").setDEF("b70"))
          .addChild(ProtoInstance205 = new ProtoInstanceObject().setName("line").setDEF("b70_2"))
          .addChild(ProtoInstance206 = new ProtoInstanceObject().setName("line").setDEF("b71"))
          .addChild(ProtoInstance207 = new ProtoInstanceObject().setName("line").setDEF("b72"))
          .addChild(ProtoInstance208 = new ProtoInstanceObject().setName("line").setDEF("b73"))
          .addChild(ProtoInstance209 = new ProtoInstanceObject().setName("line").setDEF("b74"))
          .addChild(ProtoInstance210 = new ProtoInstanceObject().setName("line").setDEF("b75"))
          .addChild(ProtoInstance211 = new ProtoInstanceObject().setName("line").setDEF("b76"))
          .addChild(ProtoInstance212 = new ProtoInstanceObject().setName("line").setDEF("b76_2"))
          .addChild(ProtoInstance213 = new ProtoInstanceObject().setName("line").setDEF("b77"))
          .addChild(ProtoInstance214 = new ProtoInstanceObject().setName("line").setDEF("b78"))
          .addChild(ProtoInstance215 = new ProtoInstanceObject().setName("line").setDEF("b79"))
          .addChild(ProtoInstance216 = new ProtoInstanceObject().setName("line").setDEF("b80"))
          .addChild(ProtoInstance217 = new ProtoInstanceObject().setName("line").setDEF("b81"))
          .addChild(ProtoInstance218 = new ProtoInstanceObject().setName("line").setDEF("b81_2"))
          .addChild(ProtoInstance219 = new ProtoInstanceObject().setName("line").setDEF("b82"))
          .addChild(ProtoInstance220 = new ProtoInstanceObject().setName("line").setDEF("b83"))
          .addChild(ProtoInstance221 = new ProtoInstanceObject().setName("line").setDEF("b83_2"))
          .addChild(ProtoInstance222 = new ProtoInstanceObject().setName("line").setDEF("b84"))
          .addChild(ProtoInstance223 = new ProtoInstanceObject().setName("line").setDEF("b85"))
          .addChild(ProtoInstance224 = new ProtoInstanceObject().setName("line").setDEF("b86"))
          .addChild(ProtoInstance225 = new ProtoInstanceObject().setName("line").setDEF("b87"))
          .addChild(ProtoInstance226 = new ProtoInstanceObject().setName("line").setDEF("b87_2"))
          .addChild(ProtoInstance227 = new ProtoInstanceObject().setName("line").setDEF("b88"))
          .addChild(ProtoInstance228 = new ProtoInstanceObject().setName("line").setDEF("b89"))
          .addChild(ProtoInstance229 = new ProtoInstanceObject().setName("line").setDEF("b90"))
          .addChild(ProtoInstance230 = new ProtoInstanceObject().setName("line").setDEF("b91"))
          .addChild(ProtoInstance231 = new ProtoInstanceObject().setName("line").setDEF("b92"))
          .addChild(ProtoInstance232 = new ProtoInstanceObject().setName("line").setDEF("b93"))
          .addChild(ProtoInstance233 = new ProtoInstanceObject().setName("line").setDEF("b94"))
          .addChild(ProtoInstance234 = new ProtoInstanceObject().setName("line").setDEF("b95"))
          .addChild(ProtoInstance235 = new ProtoInstanceObject().setName("line").setDEF("b96"))
          .addChild(ProtoInstance236 = new ProtoInstanceObject().setName("line").setDEF("b97"))
          .addChild(ProtoInstance237 = new ProtoInstanceObject().setName("line").setDEF("b98"))
          .addChild(ProtoInstance238 = new ProtoInstanceObject().setName("line").setDEF("b99"))
          .addChild(ProtoInstance239 = new ProtoInstanceObject().setName("line").setDEF("b99_2"))
          .addChild(ProtoInstance240 = new ProtoInstanceObject().setName("line").setDEF("b100"))
          .addChild(ProtoInstance241 = new ProtoInstanceObject().setName("line").setDEF("b101"))
          .addChild(ProtoInstance242 = new ProtoInstanceObject().setName("line").setDEF("b102"))
          .addChild(ProtoInstance243 = new ProtoInstanceObject().setName("line").setDEF("b103"))
          .addChild(ProtoInstance244 = new ProtoInstanceObject().setName("line").setDEF("b103_2"))
          .addChild(ProtoInstance245 = new ProtoInstanceObject().setName("line").setDEF("b104"))
          .addChild(ProtoInstance246 = new ProtoInstanceObject().setName("line").setDEF("b105"))
          .addChild(ProtoInstance247 = new ProtoInstanceObject().setName("line").setDEF("b106"))
          .addChild(ProtoInstance248 = new ProtoInstanceObject().setName("line").setDEF("b107"))
          .addChild(ProtoInstance249 = new ProtoInstanceObject().setName("line").setDEF("b108"))
          .addChild(ProtoInstance250 = new ProtoInstanceObject().setName("line").setDEF("b109"))
          .addChild(ProtoInstance251 = new ProtoInstanceObject().setName("line").setDEF("b110"))
          .addChild(ProtoInstance252 = new ProtoInstanceObject().setName("line").setDEF("b110_2"))
          .addChild(ProtoInstance253 = new ProtoInstanceObject().setName("line").setDEF("b111"))
          .addChild(ProtoInstance254 = new ProtoInstanceObject().setName("line").setDEF("b112"))
          .addChild(ProtoInstance255 = new ProtoInstanceObject().setName("line").setDEF("b112_2"))
          .addChild(ProtoInstance256 = new ProtoInstanceObject().setName("line").setDEF("b113"))
          .addChild(ProtoInstance257 = new ProtoInstanceObject().setName("line").setDEF("b114"))
          .addChild(ProtoInstance258 = new ProtoInstanceObject().setName("line").setDEF("b115"))
          .addChild(ProtoInstance259 = new ProtoInstanceObject().setName("line").setDEF("b116"))
          .addChild(ProtoInstance260 = new ProtoInstanceObject().setName("line").setDEF("b117"))
          .addChild(ProtoInstance261 = new ProtoInstanceObject().setName("line").setDEF("b118"))
          .addChild(ProtoInstance262 = new ProtoInstanceObject().setName("line").setDEF("b119"))
          .addChild(ProtoInstance263 = new ProtoInstanceObject().setName("line").setDEF("b120"))))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"SomatoStatin: \""));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("position").setValue("-12.2078 -4.5188 0"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("position").setValue("-10.7479 -4.0461 0"));
ProtoInstance3
              .addFieldValue(new fieldValueObject().setName("position").setValue("-12.2078 -6.0483 0"));
ProtoInstance4
              .addFieldValue(new fieldValueObject().setName("position").setValue("-13.5565 -3.7541 0"));
ProtoInstance5
              .addFieldValue(new fieldValueObject().setName("position").setValue("-10.2751 -2.5862 0"));
ProtoInstance6
              .addFieldValue(new fieldValueObject().setName("position").setValue("-9.8441 -5.2836 0"));
ProtoInstance7
              .addFieldValue(new fieldValueObject().setName("position").setValue("-10.7479 -6.5349 0"));
ProtoInstance8
              .addFieldValue(new fieldValueObject().setName("position").setValue("-13.5565 -6.8269 0"));
ProtoInstance9
              .addFieldValue(new fieldValueObject().setName("position").setValue("-14.8774 -4.5188 0"));
ProtoInstance10
              .addFieldValue(new fieldValueObject().setName("position").setValue("-8.7735 -2.2525 0"));
ProtoInstance11
              .addFieldValue(new fieldValueObject().setName("position").setValue("-14.8774 -6.0483 0"));
ProtoInstance12
              .addFieldValue(new fieldValueObject().setName("position").setValue("-8.9681 -0.723 0"));
ProtoInstance13
              .addFieldValue(new fieldValueObject().setName("position").setValue("-8.3285 -3.7263 0"));
ProtoInstance14
              .addFieldValue(new fieldValueObject().setName("position").setValue("-8.8986 0.8064 0"));
ProtoInstance15
              .addFieldValue(new fieldValueObject().setName("position").setValue("-7.6472 -5.1167 0"));
ProtoInstance16
              .addFieldValue(new fieldValueObject().setName("position").setValue("-9.7607 -4.2964 0"));
ProtoInstance17
              .addFieldValue(new fieldValueObject().setName("position").setValue("-8.5927 2.3081 0"));
ProtoInstance18
              .addFieldValue(new fieldValueObject().setName("position").setValue("-10.4281 0.9872 0"));
ProtoInstance19
              .addFieldValue(new fieldValueObject().setName("position").setValue("-6.7296 -6.3542 0"));
ProtoInstance20
              .addFieldValue(new fieldValueObject().setName("position").setValue("-10.0666 2.753 0"));
ProtoInstance21
              .addFieldValue(new fieldValueObject().setName("position").setValue("-8.0366 3.7541 0"));
ProtoInstance22
              .addFieldValue(new fieldValueObject().setName("position").setValue("-5.6451 -7.4526 0"));
ProtoInstance23
              .addFieldValue(new fieldValueObject().setName("position").setValue("-7.9253 -7.3692 0"));
ProtoInstance24
              .addFieldValue(new fieldValueObject().setName("position").setValue("-10.4281 4.2546 0"));
ProtoInstance25
              .addFieldValue(new fieldValueObject().setName("position").setValue("-7.244 5.075 0"));
ProtoInstance26
              .addFieldValue(new fieldValueObject().setName("position").setValue("-4.3937 -8.3425 0"));
ProtoInstance27
              .addFieldValue(new fieldValueObject().setName("position").setValue("-6.6322 -8.6344 0"));
ProtoInstance28
              .addFieldValue(new fieldValueObject().setName("position").setValue("-9.3714 -6.8408 0"));
ProtoInstance29
              .addFieldValue(new fieldValueObject().setName("position").setValue("-11.9019 4.6857 0"));
ProtoInstance30
              .addFieldValue(new fieldValueObject().setName("position").setValue("-9.3157 5.3114 0"));
ProtoInstance31
              .addFieldValue(new fieldValueObject().setName("position").setValue("-6.2568 6.2568 0"));
ProtoInstance32
              .addFieldValue(new fieldValueObject().setName("position").setValue("-8.5093 5.9649 0"));
ProtoInstance33
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.0172 -9.0238 0"));
ProtoInstance34
              .addFieldValue(new fieldValueObject().setName("position").setValue("-10.5393 -7.8558 0"));
ProtoInstance35
              .addFieldValue(new fieldValueObject().setName("position").setValue("-12.2634 6.1734 0"));
ProtoInstance36
              .addFieldValue(new fieldValueObject().setName("position").setValue("-9.6772 6.7991 0"));
ProtoInstance37
              .addFieldValue(new fieldValueObject().setName("position").setValue("-7.3414 7.3275 0"));
ProtoInstance38
              .addFieldValue(new fieldValueObject().setName("position").setValue("-5.075 7.244 0"));
ProtoInstance39
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.5294 -9.4548 0"));
ProtoInstance40
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.5594 -10.4559 0"));
ProtoInstance41
              .addFieldValue(new fieldValueObject().setName("position").setValue("-11.9853 -7.3275 0"));
ProtoInstance42
              .addFieldValue(new fieldValueObject().setName("position").setValue("-11.1511 7.2301 0"));
ProtoInstance43
              .addFieldValue(new fieldValueObject().setName("position").setValue("-6.952 8.8291 0"));
ProtoInstance44
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.768 8.0505 0"));
ProtoInstance45
              .addFieldValue(new fieldValueObject().setName("position").setValue("0 -9.6355 0"));
ProtoInstance46
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.8353 -10.9564 0"));
ProtoInstance47
              .addFieldValue(new fieldValueObject().setName("position").setValue("-5.0889 -10.6922 0"));
ProtoInstance48
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.6151 -12.5554 0"));
ProtoInstance49
              .addFieldValue(new fieldValueObject().setName("position").setValue("-13.1672 -8.3285 0"));
ProtoInstance50
              .addFieldValue(new fieldValueObject().setName("position").setValue("-8.0505 9.9136 0"));
ProtoInstance51
              .addFieldValue(new fieldValueObject().setName("position").setValue("-5.4643 9.2323 0"));
ProtoInstance52
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.322 8.6205 0"));
ProtoInstance53
              .addFieldValue(new fieldValueObject().setName("position").setValue("-4.4354 9.427 0"));
ProtoInstance54
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.5294 -9.566 0"));
ProtoInstance55
              .addFieldValue(new fieldValueObject().setName("position").setValue("-7.6611 11.4013 0"));
ProtoInstance56
              .addFieldValue(new fieldValueObject().setName("position").setValue("-5.075 10.72 0"));
ProtoInstance57
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.8203 8.9403 0"));
ProtoInstance58
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.7808 10.0805 0"));
ProtoInstance59
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.7241 -11.0955 0"));
ProtoInstance60
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.045 -9.2462 0"));
ProtoInstance61
              .addFieldValue(new fieldValueObject().setName("position").setValue("-6.1595 11.8046 0"));
ProtoInstance62
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.7091 8.9959 0"));
ProtoInstance63
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.7102 11.2067 0"));
ProtoInstance64
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.5005 -12.027 0"));
ProtoInstance65
              .addFieldValue(new fieldValueObject().setName("position").setValue("4.4771 -8.6901 0"));
ProtoInstance66
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.4899 -10.72 0"));
ProtoInstance67
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.2386 8.8152 0"));
ProtoInstance68
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.7647 10.5393 0"));
ProtoInstance69
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.1551 12.6944 0"));
ProtoInstance70
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.0278 12.027 0"));
ProtoInstance71
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.6952 -13.5704 0"));
ProtoInstance72
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.9038 -11.4292 0"));
ProtoInstance73
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.7841 -7.8975 0"));
ProtoInstance74
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.7263 8.3842 0"));
ProtoInstance75
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.5584 10.3168 0"));
ProtoInstance76
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.5145 -14.4881 0"));
ProtoInstance77
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.1273 -12.3746 0"));
ProtoInstance78
              .addFieldValue(new fieldValueObject().setName("position").setValue("6.9659 -6.8825 0"));
ProtoInstance79
              .addFieldValue(new fieldValueObject().setName("position").setValue("6.6879 -9.1489 0"));
ProtoInstance80
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.1028 7.7029 0"));
ProtoInstance81
              .addFieldValue(new fieldValueObject().setName("position").setValue("4.0183 10.8035 0"));
ProtoInstance82
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.9327 -13.9041 0"));
ProtoInstance83
              .addFieldValue(new fieldValueObject().setName("position").setValue("7.967 -5.7146 0"));
ProtoInstance84
              .addFieldValue(new fieldValueObject().setName("position").setValue("8.0644 -7.9809 0"));
ProtoInstance85
              .addFieldValue(new fieldValueObject().setName("position").setValue("6.0483 -10.5532 0"));
ProtoInstance86
              .addFieldValue(new fieldValueObject().setName("position").setValue("8.6066 -10.2473 0"));
ProtoInstance87
              .addFieldValue(new fieldValueObject().setName("position").setValue("6.3542 6.7991 0"));
ProtoInstance88
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.8814 9.0377 0"));
ProtoInstance89
              .addFieldValue(new fieldValueObject().setName("position").setValue("4.3242 12.3051 0"));
ProtoInstance90
              .addFieldValue(new fieldValueObject().setName("position").setValue("8.7457 -4.3937 0"));
ProtoInstance91
              .addFieldValue(new fieldValueObject().setName("position").setValue("7.4665 5.7285 0"));
ProtoInstance92
              .addFieldValue(new fieldValueObject().setName("position").setValue("7.3414 7.9948 0"));
ProtoInstance93
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.7841 12.8057 0"));
ProtoInstance94
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.3018 -2.9616 0"));
ProtoInstance95
              .addFieldValue(new fieldValueObject().setName("position").setValue("10.1361 -5.0611 0"));
ProtoInstance96
              .addFieldValue(new fieldValueObject().setName("position").setValue("8.3564 4.4771 0"));
ProtoInstance97
              .addFieldValue(new fieldValueObject().setName("position").setValue("8.8708 7.7307 0"));
ProtoInstance98
              .addFieldValue(new fieldValueObject().setName("position").setValue("6.1039 14.3073 0"));
ProtoInstance99
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.6077 -1.4321 0"));
ProtoInstance100
              .addFieldValue(new fieldValueObject().setName("position").setValue("10.7757 -3.3926 0"));
ProtoInstance101
              .addFieldValue(new fieldValueObject().setName("position").setValue("10.2334 -6.5905 0"));
ProtoInstance102
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.0377 3.1006 0"));
ProtoInstance103
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.858 8.8986 0"));
ProtoInstance104
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.3992 6.2707 0"));
ProtoInstance105
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.6772 0.0834 0"));
ProtoInstance106
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.4826 1.6129 0"));
ProtoInstance107
              .addFieldValue(new fieldValueObject().setName("position").setValue("11.3735 8.6344 0"));
ProtoInstance108
              .addFieldValue(new fieldValueObject().setName("position").setValue("11.2067 0.1529 0"));
ProtoInstance109
              .addFieldValue(new fieldValueObject().setName("position").setValue("12.3746 9.8024 0"));
ProtoInstance110
              .addFieldValue(new fieldValueObject().setName("position").setValue("11.9158 1.5155 0"));
ProtoInstance111
              .addFieldValue(new fieldValueObject().setName("position").setValue("12.0409 -1.1262 0"));
ProtoInstance112
              .addFieldValue(new fieldValueObject().setName("position").setValue("13.8902 9.5382 0"));
ProtoInstance113
              .addFieldValue(new fieldValueObject().setName("position").setValue("11.8463 11.2484 0"));
ProtoInstance114
              .addFieldValue(new fieldValueObject().setName("position").setValue("14.8774 10.7061 0"));
ProtoInstance115
              .addFieldValue(new fieldValueObject().setName("position").setValue("14.4185 8.0922 0"));
ProtoInstance116
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-12.2078 -4.5188 0 -10.7479 -4.0461 0"));
ProtoInstance117
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-12.2278 -4.5188 0 -12.2278 -6.0483 0"));
ProtoInstance118
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-12.187800000000001 -4.5188 0 -12.187800000000001 -6.0483 0"));
ProtoInstance119
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-12.2078 -4.5188 0 -13.5565 -3.7541 0"));
ProtoInstance120
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-10.7479 -4.0461 0 -10.2751 -2.5862 0"));
ProtoInstance121
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-10.7679 -4.0461 0 -9.864099999999999 -5.2836 0"));
ProtoInstance122
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-10.7279 -4.0461 0 -9.8241 -5.2836 0"));
ProtoInstance123
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-12.2078 -6.0483 0 -10.7479 -6.5349 0"));
ProtoInstance124
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-12.2078 -6.0483 0 -13.5565 -6.8269 0"));
ProtoInstance125
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-13.5765 -3.7541 0 -14.8974 -4.5188 0"));
ProtoInstance126
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-13.5365 -3.7541 0 -14.8574 -4.5188 0"));
ProtoInstance127
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-10.2751 -2.5862 0 -8.7735 -2.2525 0"));
ProtoInstance128
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-13.5765 -6.8269 0 -14.8974 -6.0483 0"));
ProtoInstance129
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-13.5365 -6.8269 0 -14.8574 -6.0483 0"));
ProtoInstance130
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.7735 -2.2525 0 -8.9681 -0.723 0"));
ProtoInstance131
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.7735 -2.2525 0 -8.3285 -3.7263 0"));
ProtoInstance132
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.9681 -0.723 0 -8.8986 0.8064 0"));
ProtoInstance133
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.3285 -3.7263 0 -7.6472 -5.1167 0"));
ProtoInstance134
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.3485 -3.7263 0 -9.7807 -4.2964 0"));
ProtoInstance135
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.3085 -3.7263 0 -9.7407 -4.2964 0"));
ProtoInstance136
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.8986 0.8064 0 -8.5927 2.3081 0"));
ProtoInstance137
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.9186 0.8064 0 -10.4481 0.9872 0"));
ProtoInstance138
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.8786 0.8064 0 -10.408100000000001 0.9872 0"));
ProtoInstance139
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-7.6472 -5.1167 0 -6.7296 -6.3542 0"));
ProtoInstance140
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.5927 2.3081 0 -10.0666 2.753 0"));
ProtoInstance141
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.5927 2.3081 0 -8.0366 3.7541 0"));
ProtoInstance142
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-6.7296 -6.3542 0 -5.6451 -7.4526 0"));
ProtoInstance143
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-6.7296 -6.3542 0 -7.9253 -7.3692 0"));
ProtoInstance144
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-10.0666 2.753 0 -10.4281 4.2546 0"));
ProtoInstance145
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.0366 3.7541 0 -7.244 5.075 0"));
ProtoInstance146
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-5.6451 -7.4526 0 -4.3937 -8.3425 0"));
ProtoInstance147
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-5.6651 -7.4526 0 -6.6522 -8.6344 0"));
ProtoInstance148
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-5.625100000000001 -7.4526 0 -6.6122000000000005 -8.6344 0"));
ProtoInstance149
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-7.9253 -7.3692 0 -9.3714 -6.8408 0"));
ProtoInstance150
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-10.4481 4.2546 0 -11.921899999999999 4.6857 0"));
ProtoInstance151
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-10.408100000000001 4.2546 0 -11.8819 4.6857 0"));
ProtoInstance152
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-10.4281 4.2546 0 -9.3157 5.3114 0"));
ProtoInstance153
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-7.244 5.075 0 -6.2568 6.2568 0"));
ProtoInstance154
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-7.263999999999999 5.075 0 -8.5293 5.9649 0"));
ProtoInstance155
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-7.224 5.075 0 -8.4893 5.9649 0"));
ProtoInstance156
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.3937 -8.3425 0 -3.0172 -9.0238 0"));
ProtoInstance157
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-9.3714 -6.8408 0 -10.5393 -7.8558 0"));
ProtoInstance158
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-11.9019 4.6857 0 -12.2634 6.1734 0"));
ProtoInstance159
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-9.3357 5.3114 0 -9.697199999999999 6.7991 0"));
ProtoInstance160
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-9.2957 5.3114 0 -9.6572 6.7991 0"));
ProtoInstance161
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-6.2568 6.2568 0 -7.3414 7.3275 0"));
ProtoInstance162
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-6.2568 6.2568 0 -5.075 7.244 0"));
ProtoInstance163
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.0172 -9.0238 0 -1.5294 -9.4548 0"));
ProtoInstance164
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.0172 -9.0238 0 -3.5594 -10.4559 0"));
ProtoInstance165
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-10.5393 -7.8558 0 -11.9853 -7.3275 0"));
ProtoInstance166
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-12.2834 6.1734 0 -11.1711 7.2301 0"));
ProtoInstance167
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-12.243400000000001 6.1734 0 -11.1311 7.2301 0"));
ProtoInstance168
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-7.3414 7.3275 0 -6.952 8.8291 0"));
ProtoInstance169
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-5.075 7.244 0 -3.768 8.0505 0"));
ProtoInstance170
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.5294 -9.4548 0 0 -9.6355 0"));
ProtoInstance171
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.5494 -9.4548 0 -1.8553 -10.9564 0"));
ProtoInstance172
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.5094 -9.4548 0 -1.8153 -10.9564 0"));
ProtoInstance173
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.5594 -10.4559 0 -5.0889 -10.6922 0"));
ProtoInstance174
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.5594 -10.4559 0 -3.6151 -12.5554 0"));
ProtoInstance175
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-11.9853 -7.3275 0 -13.1672 -8.3285 0"));
ProtoInstance176
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-6.9719999999999995 8.8291 0 -8.0705 9.9136 0"));
ProtoInstance177
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-6.932 8.8291 0 -8.0305 9.9136 0"));
ProtoInstance178
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-6.952 8.8291 0 -5.4643 9.2323 0"));
ProtoInstance179
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.768 8.0505 0 -2.322 8.6205 0"));
ProtoInstance180
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.788 8.0505 0 -4.455399999999999 9.427 0"));
ProtoInstance181
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.7479999999999998 8.0505 0 -4.4154 9.427 0"));
ProtoInstance182
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0 -9.6355 0 1.5294 -9.566 0"));
ProtoInstance183
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.0505 9.9136 0 -7.6611 11.4013 0"));
ProtoInstance184
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-5.484299999999999 9.2323 0 -5.095 10.72 0"));
ProtoInstance185
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-5.4443 9.2323 0 -5.055000000000001 10.72 0"));
ProtoInstance186
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.322 8.6205 0 -0.8203 8.9403 0"));
ProtoInstance187
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.322 8.6205 0 -2.7808 10.0805 0"));
ProtoInstance188
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.5294 -9.566 0 1.7241 -11.0955 0"));
ProtoInstance189
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.5294 -9.566 0 3.045 -9.2462 0"));
ProtoInstance190
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-7.6811 11.4013 0 -6.1795 11.8046 0"));
ProtoInstance191
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-7.641100000000001 11.4013 0 -6.139500000000001 11.8046 0"));
ProtoInstance192
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.8203 8.9403 0 0.7091 8.9959 0"));
ProtoInstance193
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.7808 10.0805 0 -1.7102 11.2067 0"));
ProtoInstance194
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.7241 -11.0955 0 0.5005 -12.027 0"));
ProtoInstance195
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.045 -9.2462 0 4.4771 -8.6901 0"));
ProtoInstance196
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.025 -9.2462 0 3.4699 -10.72 0"));
ProtoInstance197
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.065 -9.2462 0 3.5099 -10.72 0"));
ProtoInstance198
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.7091 8.9959 0 2.2386 8.8152 0"));
ProtoInstance199
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.6890999999999999 8.9959 0 0.7447 10.5393 0"));
ProtoInstance200
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.7291 8.9959 0 0.7847000000000001 10.5393 0"));
ProtoInstance201
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.7102 11.2067 0 -2.1551 12.6944 0"));
ProtoInstance202
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.7302 11.2067 0 0.007799999999999998 12.027 0"));
ProtoInstance203
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.6902 11.2067 0 0.047799999999999995 12.027 0"));
ProtoInstance204
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.4804999999999999 -12.027 0 0.6752 -13.5704 0"));
ProtoInstance205
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.5205 -12.027 0 0.7152000000000001 -13.5704 0"));
ProtoInstance206
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.5005 -12.027 0 -0.9038 -11.4292 0"));
ProtoInstance207
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("4.4771 -8.6901 0 5.7841 -7.8975 0"));
ProtoInstance208
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.2386 8.8152 0 3.7263 8.3842 0"));
ProtoInstance209
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.2386 8.8152 0 2.5584 10.3168 0"));
ProtoInstance210
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.6952 -13.5704 0 -0.5145 -14.4881 0"));
ProtoInstance211
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.9238000000000001 -11.4292 0 -2.1473 -12.3746 0"));
ProtoInstance212
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.8838 -11.4292 0 -2.1073 -12.3746 0"));
ProtoInstance213
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.7841 -7.8975 0 6.9659 -6.8825 0"));
ProtoInstance214
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.7841 -7.8975 0 6.6879 -9.1489 0"));
ProtoInstance215
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.7263 8.3842 0 5.1028 7.7029 0"));
ProtoInstance216
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.5584 10.3168 0 4.0183 10.8035 0"));
ProtoInstance217
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.5345 -14.4881 0 -1.9527 -13.9041 0"));
ProtoInstance218
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.49449999999999994 -14.4881 0 -1.9127 -13.9041 0"));
ProtoInstance219
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("6.9659 -6.8825 0 7.967 -5.7146 0"));
ProtoInstance220
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("6.945900000000001 -6.8825 0 8.0444 -7.9809 0"));
ProtoInstance221
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("6.9859 -6.8825 0 8.084399999999999 -7.9809 0"));
ProtoInstance222
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("6.6879 -9.1489 0 6.0483 -10.5532 0"));
ProtoInstance223
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("6.6879 -9.1489 0 8.6066 -10.2473 0"));
ProtoInstance224
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.1028 7.7029 0 6.3542 6.7991 0"));
ProtoInstance225
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.082800000000001 7.7029 0 5.861400000000001 9.0377 0"));
ProtoInstance226
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.1228 7.7029 0 5.9014 9.0377 0"));
ProtoInstance227
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("4.0183 10.8035 0 4.3242 12.3051 0"));
ProtoInstance228
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("7.967 -5.7146 0 8.7457 -4.3937 0"));
ProtoInstance229
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("6.3542 6.7991 0 7.4665 5.7285 0"));
ProtoInstance230
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("6.3542 6.7991 0 7.3414 7.9948 0"));
ProtoInstance231
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("4.3242 12.3051 0 5.7841 12.8057 0"));
ProtoInstance232
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.7457 -4.3937 0 9.3018 -2.9616 0"));
ProtoInstance233
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.7457 -4.3937 0 10.1361 -5.0611 0"));
ProtoInstance234
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("7.4665 5.7285 0 8.3564 4.4771 0"));
ProtoInstance235
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("7.3414 7.9948 0 8.8708 7.7307 0"));
ProtoInstance236
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.7841 12.8057 0 6.1039 14.3073 0"));
ProtoInstance237
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.3018 -2.9616 0 9.6077 -1.4321 0"));
ProtoInstance238
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.2818 -2.9616 0 10.755700000000001 -3.3926 0"));
ProtoInstance239
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.3218 -2.9616 0 10.7957 -3.3926 0"));
ProtoInstance240
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("10.1361 -5.0611 0 10.2334 -6.5905 0"));
ProtoInstance241
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.3564 4.4771 0 9.0377 3.1006 0"));
ProtoInstance242
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.8708 7.7307 0 9.858 8.8986 0"));
ProtoInstance243
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.8508 7.7307 0 9.3792 6.2707 0"));
ProtoInstance244
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.890799999999999 7.7307 0 9.4192 6.2707 0"));
ProtoInstance245
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.6077 -1.4321 0 9.6772 0.0834 0"));
ProtoInstance246
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.0377 3.1006 0 9.4826 1.6129 0"));
ProtoInstance247
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.858 8.8986 0 11.3735 8.6344 0"));
ProtoInstance248
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.6772 0.0834 0 11.2067 0.1529 0"));
ProtoInstance249
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("11.3735 8.6344 0 12.3746 9.8024 0"));
ProtoInstance250
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("11.2067 0.1529 0 11.9158 1.5155 0"));
ProtoInstance251
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("11.1867 0.1529 0 12.020900000000001 -1.1262 0"));
ProtoInstance252
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("11.2267 0.1529 0 12.0609 -1.1262 0"));
ProtoInstance253
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("12.3746 9.8024 0 13.8902 9.5382 0"));
ProtoInstance254
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("12.3546 9.8024 0 11.8263 11.2484 0"));
ProtoInstance255
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("12.394599999999999 9.8024 0 11.866299999999999 11.2484 0"));
ProtoInstance256
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("13.8902 9.5382 0 14.8774 10.7061 0"));
ProtoInstance257
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("13.8902 9.5382 0 14.4185 8.0922 0"));
ProtoInstance258
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-9.8441 -5.2836 0 -10.7479 -6.5349 0"));
ProtoInstance259
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-14.8774 -4.5188 0 -14.8774 -6.0483 0"));
ProtoInstance260
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-9.6772 6.7991 0 -11.1511 7.2301 0"));
ProtoInstance261
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-5.075 10.72 0 -6.1595 11.8046 0"));
ProtoInstance262
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.1273 -12.3746 0 -1.9327 -13.9041 0"));
ProtoInstance263
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.6772 0.0834 0 9.4826 1.6129 0"));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"C"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"H"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"N"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"O"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Si"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"P"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"S"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Cl"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Br"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"I"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"?"});
  }
}
protected class MFInt3212 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,-1});
  }
}
protected class MFFloat13 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1.309f,1.570796f});
  }
}
protected class MFColor14 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.5f,0.7f,0f,0.4f,0.7f,0.6f,0.5f,0.7f});
  }
}
protected class MFFloat15 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1.309f,1.570796f});
  }
}
protected class MFColor16 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.5f,0.8f,0f,0.6f,0.7f,0.6f,0.6f,0.7f});
  }
}
}
