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
var ProtoInstance6 = null;
var ProtoInstance7 = null;
var ProtoInstance8 = null;
var ProtoInstance9 = null;
var ProtoInstance10 = null;
var ProtoInstance11 = null;
var ProtoInstance12 = null;
var ProtoInstance13 = null;
var ProtoInstance14 = null;
var ProtoInstance15 = null;
var ProtoInstance16 = null;
var ProtoInstance17 = null;
var ProtoInstance18 = null;
var ProtoInstance19 = null;
var ProtoInstance20 = null;
var ProtoInstance21 = null;
var ProtoInstance22 = null;
var ProtoInstance23 = null;
var ProtoInstance24 = null;
var ProtoInstance25 = null;
var ProtoInstance26 = null;
var ProtoInstance27 = null;
var ProtoInstance28 = null;
var ProtoInstance29 = null;
var ProtoInstance30 = null;
var ProtoInstance31 = null;
var ProtoInstance32 = null;
var ProtoInstance33 = null;
var ProtoInstance34 = null;
var ProtoInstance35 = null;
var ProtoInstance36 = null;
var ProtoInstance37 = null;
var ProtoInstance38 = null;
var ProtoInstance39 = null;
var ProtoInstance40 = null;
var ProtoInstance41 = null;
var ProtoInstance42 = null;
var ProtoInstance43 = null;
var ProtoInstance44 = null;
var ProtoInstance45 = null;
var ProtoInstance46 = null;
var ProtoInstance47 = null;
var ProtoInstance48 = null;
var ProtoInstance49 = null;
var ProtoInstance50 = null;
var ProtoInstance51 = null;
var ProtoInstance52 = null;
var ProtoInstance53 = null;
var ProtoInstance54 = null;
var ProtoInstance55 = null;
var ProtoInstance56 = null;
var ProtoInstance57 = null;
var ProtoInstance58 = null;
var ProtoInstance59 = null;
var ProtoInstance60 = null;
var ProtoInstance61 = null;
var ProtoInstance62 = null;
var ProtoInstance63 = null;
var ProtoInstance64 = null;
var ProtoInstance65 = null;
var ProtoInstance66 = null;
var ProtoInstance67 = null;
var ProtoInstance68 = null;
var ProtoInstance69 = null;
var ProtoInstance70 = null;
var ProtoInstance71 = null;
var ProtoInstance72 = null;
var ProtoInstance73 = null;
var ProtoInstance74 = null;
var ProtoInstance75 = null;
var ProtoInstance76 = null;
var ProtoInstance77 = null;
var ProtoInstance78 = null;
var ProtoInstance79 = null;
var ProtoInstance80 = null;
var ProtoInstance81 = null;
var ProtoInstance82 = null;
var ProtoInstance83 = null;
var ProtoInstance84 = null;
var ProtoInstance85 = null;
var ProtoInstance86 = null;
var ProtoInstance87 = null;
var ProtoInstance88 = null;
var ProtoInstance89 = null;
var ProtoInstance90 = null;
var ProtoInstance91 = null;
var ProtoInstance92 = null;
var ProtoInstance93 = null;
var ProtoInstance94 = null;
var ProtoInstance95 = null;
var ProtoInstance96 = null;
var ProtoInstance97 = null;
var ProtoInstance98 = null;
var ProtoInstance99 = null;
var ProtoInstance100 = null;
var ProtoInstance101 = null;
var ProtoInstance102 = null;
var ProtoInstance103 = null;
var ProtoInstance104 = null;
var ProtoInstance105 = null;
var ProtoInstance106 = null;
var ProtoInstance107 = null;
var ProtoInstance108 = null;
var ProtoInstance109 = null;
var ProtoInstance110 = null;
var ProtoInstance111 = null;
var ProtoInstance112 = null;
var ProtoInstance113 = null;
var ProtoInstance114 = null;
var ProtoInstance115 = null;
var ProtoInstance116 = null;
var ProtoInstance117 = null;
var ProtoInstance118 = null;
var ProtoInstance119 = null;
var ProtoInstance120 = null;
var ProtoInstance121 = null;
var ProtoInstance122 = null;
var ProtoInstance123 = null;
var ProtoInstance124 = null;
var ProtoInstance125 = null;
var ProtoInstance126 = null;
var ProtoInstance127 = null;
var ProtoInstance128 = null;
var ProtoInstance129 = null;
var ProtoInstance130 = null;
var ProtoInstance131 = null;
var ProtoInstance132 = null;
var ProtoInstance133 = null;
var ProtoInstance134 = null;
var ProtoInstance135 = null;
var ProtoInstance136 = null;
var ProtoInstance137 = null;
var ProtoInstance138 = null;
var ProtoInstance139 = null;
var ProtoInstance140 = null;
var ProtoInstance141 = null;
var ProtoInstance142 = null;
var ProtoInstance143 = null;
var ProtoInstance144 = null;
var ProtoInstance145 = null;
var ProtoInstance146 = null;
var ProtoInstance147 = null;
var ProtoInstance148 = null;
var ProtoInstance149 = null;
var ProtoInstance150 = null;
var ProtoInstance151 = null;
var ProtoInstance152 = null;
var ProtoInstance153 = null;
var ProtoInstance154 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("Oxytocin.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Autogenerated version of Oxytocin.x3d scene produced from Oxytocin.xml Chemical Markup Language (CML) version 1.0 source file."))
        .addMeta(new autoclass.meta().setName("creator").setContent("Nicholas F. Polys"))
        .addMeta(new autoclass.meta().setName("translator").setContent("Don Brutzman"))
        .addMeta(new autoclass.meta().setName("created").setContent("24 November 2005"))
        .addMeta(new autoclass.meta().setName("translated").setContent("2 JAN 2025"))
        .addMeta(new autoclass.meta().setName("modified").setContent("2 JAN 2025"))
        .addMeta(new autoclass.meta().setName("reference").setContent("Oxytocin.xml"))
        .addMeta(new autoclass.meta().setName("reference").setContent("CML sources https://www.xml-cml.org"))
        .addMeta(new autoclass.meta().setName("reference").setContent("Wikipedia https://en.wikipedia.org/wiki/Chemical_Markup_Language"))
        .addMeta(new autoclass.meta().setName("reference").setContent("JUMBO Chemical Format Conversion Tool"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://webbook.nist.gov/chemistry"))
        .addMeta(new autoclass.meta().setName("reference").setContent("Polys.StylesheetTransformationsInteractiveVisualization.Web3d2003Symposium.pdf"))
        .addMeta(new autoclass.meta().setName("reference").setContent("Originally Published in Proceedings of Web3D 2003, ACM Press"))
        .addMeta(new autoclass.meta().setName("generator").setContent("CmlToX3d.xslt"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/ChemicalMarkupLanguage/Oxytocin.x3d"))
        .addMeta(new autoclass.meta().setName("license").setContent("../license.html")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.ProtoDeclare().setName("Carbon")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("atoC")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("position")))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("atoC_mat").setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setShininess(java.newFloat(0.8)).setSpecularColor(java.newArray("float", [java.newFloat(0.29), java.newFloat(0.3), java.newFloat(0.29)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.77))))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["C"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.8)))))))))
        .addChild(new autoclass.ProtoDeclare().setName("Hydrogen")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("atoH")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("position")))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("atoH_mat").setAmbientIntensity(java.newFloat(0.0933)).setDiffuseColor(java.newArray("float", [java.newFloat(0.38), java.newFloat(0.38), java.newFloat(0.42)])).setShininess(java.newFloat(0.5)).setSpecularColor(java.newArray("float", [java.newFloat(0.53), java.newFloat(0.53), java.newFloat(0.53)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.32))))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["H"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.4)))))))))
        .addChild(new autoclass.ProtoDeclare().setName("Nitrogen")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("atoN")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("position")))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("atoN_mat").setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.72)])).setEmissiveColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.13)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.75))))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["N"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.8)))))))))
        .addChild(new autoclass.ProtoDeclare().setName("Oxygen")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("atoO")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("position")))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("atoO_mat").setAmbientIntensity(java.newFloat(0.487)).setDiffuseColor(java.newArray("float", [java.newFloat(0.54), java.newFloat(0.05), java.newFloat(0.25)])).setShininess(java.newFloat(0.2)).setSpecularColor(java.newArray("float", [java.newFloat(0.81), java.newFloat(0.77), java.newFloat(0.75)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.73))))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["O"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.8)))))))))
        .addChild(new autoclass.ProtoDeclare().setName("Fluorine")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("atoF")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("position")))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("atoF_mat").setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0.48), java.newFloat(0.79)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.09), java.newFloat(0.04), java.newFloat(0.07)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.72))))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["F"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.8)))))))))
        .addChild(new autoclass.ProtoDeclare().setName("Silicon")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("atoSi")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("position")))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("atoSi_mat").setDiffuseColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0.8), java.newFloat(0.8)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(1.18))))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["Si"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.8)))))))))
        .addChild(new autoclass.ProtoDeclare().setName("Phosphorus")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("atoP")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("position")))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("atoP_mat").setAmbientIntensity(java.newFloat(0.11)).setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.41), java.newFloat(0)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.04), java.newFloat(0)])).setShininess(java.newFloat(0.8)).setSpecularColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.1)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(1.1))))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["P"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.8)))))))))
        .addChild(new autoclass.ProtoDeclare().setName("Sulphur")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("atoS")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("position")))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("atoS_mat").setAmbientIntensity(java.newFloat(0.0467)).setDiffuseColor(java.newArray("float", [java.newFloat(0.25), java.newFloat(0.39), java.newFloat(0.25)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.05), java.newFloat(0.08), java.newFloat(0.05)])).setShininess(java.newFloat(0.6)).setSpecularColor(java.newArray("float", [java.newFloat(0.11), java.newFloat(0.12), java.newFloat(0.08)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(1.3))))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["S"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.8)))))))))
        .addChild(new autoclass.ProtoDeclare().setName("Chlorine")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("atoCl")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("position")))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("atoCl_mat").setDiffuseColor(java.newArray("float", [java.newFloat(0.28), java.newFloat(0.7), java.newFloat(0)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.06), java.newFloat(0.15), java.newFloat(0)])).setShininess(java.newFloat(0.8)).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(1.01))))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["Cl"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.8)))))))))
        .addChild(new autoclass.ProtoDeclare().setName("Bromine")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("atoBr")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("position")))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("atoBr_mat").setAmbientIntensity(java.newFloat(0.0833)).setDiffuseColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.3), java.newFloat(0.19)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.12), java.newFloat(0.13), java.newFloat(0.08)])).setShininess(java.newFloat(0.17)).setSpecularColor(java.newArray("float", [java.newFloat(0.08), java.newFloat(0.08), java.newFloat(0.05)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(1.14))))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["Br"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.8)))))))))
        .addChild(new autoclass.ProtoDeclare().setName("Iodine")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("atoI")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("position")))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("atoI_mat").setDiffuseColor(java.newArray("float", [java.newFloat(0.56), java.newFloat(0.37), java.newFloat(0.74)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.15), java.newFloat(0.1), java.newFloat(0.2)])).setShininess(java.newFloat(0.09)).setSpecularColor(java.newArray("float", [java.newFloat(0.12), java.newFloat(0.12), java.newFloat(0.12)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(1.33))))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["I"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.8)))))))))
        .addChild(new autoclass.ProtoDeclare().setName("unknown")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("position").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Transform().setDEF("ato_")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("position")))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("ato__mat").setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.15), java.newFloat(0.1), java.newFloat(0.2)])).setShininess(java.newFloat(0.09)).setSpecularColor(java.newArray("float", [java.newFloat(0.12), java.newFloat(0.12), java.newFloat(0.12)]))
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(1.001))))
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["?"]))
                    .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.8)))))))))
        .addChild(new autoclass.ProtoDeclare().setName("line")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFVEC3F).setName("bond_set").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("-1 0 0 1 0 0")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.Shape()
                .setAppearance(new autoclass.Appearance()
                  .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                .setGeometry(new autoclass.IndexedLineSet().setCoordIndex(java.newArray("int", [0,1,-1]))
                  .setCoord(new autoclass.Coordinate().setDEF("bondo")
                    .setIS(new autoclass.IS()
                      .addConnect(new autoclass.connect().setNodeField("point").setProtoField("bond_set")))))))))
        .addChild(new autoclass.ProtoDeclare().setName("title_text")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("txt").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Transform()
              .addChild(new autoclass.Group()
                .addChild(new autoclass.Transform()
                  .addChild(new autoclass.Shape()
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                    .setGeometry(new autoclass.Text().setDEF("cmpd_name")
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("string").setProtoField("txt")))
                      .setFontStyle(new autoclass.FontStyle()))))))))
        .addChild(new autoclass.ProtoDeclare().setName("ano1_text")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("txt").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Transform()
              .addChild(new autoclass.Group()
                .addChild(new autoclass.Transform()
                  .addChild(new autoclass.Shape()
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                    .setGeometry(new autoclass.Text().setDEF("cmpd_name1")
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("string").setProtoField("txt")))
                      .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.8))))))))))
        .addChild(new autoclass.ProtoDeclare().setName("ano2_text")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_MFSTRING).setName("txt").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Transform()
              .addChild(new autoclass.Group()
                .addChild(new autoclass.Transform()
                  .addChild(new autoclass.Shape()
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)]))))
                    .setGeometry(new autoclass.Text().setDEF("cmpd_name2")
                      .setIS(new autoclass.IS()
                        .addConnect(new autoclass.connect().setNodeField("string").setProtoField("txt")))
                      .setFontStyle(new autoclass.FontStyle().setSize(java.newFloat(0.6))))))))))
        .addChild(new autoclass.Background().setGroundAngle(java.newArray("float", [java.newFloat(1.309), java.newFloat(1.570796)])).setGroundColor(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(0.7), java.newFloat(0), java.newFloat(0.4), java.newFloat(0.7), java.newFloat(0.6), java.newFloat(0.5), java.newFloat(0.7)])).setSkyAngle(java.newArray("float", [java.newFloat(1.309), java.newFloat(1.570796)])).setSkyColor(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(0.8), java.newFloat(0), java.newFloat(0.6), java.newFloat(0.7), java.newFloat(0.6), java.newFloat(0.6), java.newFloat(0.7)])))
        .addChild(new autoclass.PointLight().setAmbientIntensity(java.newFloat(1)).setLocation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(5)])).setRadius(java.newFloat(30)))
        .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["EXAMINE","FLY","ANY"])))
        .addChild(new autoclass.Viewpoint().setDescription("Inspect Oxytocin").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(20)])))
        .addComments((new autoclass.CommentsBlock("Copyright by the U.S. Sec. Commerce on behalf of U.S.A. All rights reserved.")))
        .addComments((new autoclass.CommentsBlock("type=\"3D\" <date day=\"23\" month=\"11\" year=\"1995\"/>")))
        .addChild(new autoclass.Transform().setDEF("infogroupa").setTranslation(java.newArray("float", [java.newFloat(-8), java.newFloat(2), java.newFloat(-4)]))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(6), java.newFloat(0)]))
            .addChild(new autoclass.Viewpoint().setDescription("title billboard").setPosition(java.newArray("float", [java.newFloat(6), java.newFloat(-2), java.newFloat(10)])))
            .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("title_text"))))
        .addChild(new autoclass.Group()
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("Nitrogen").setDEF("a1")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance2 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a2")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance3 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a3")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance4 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a4")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance5 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a5")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance6 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a6")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance7 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a7")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance8 = new autoclass.ProtoInstance().setName("Oxygen").setDEF("a8")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance9 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a9")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance10 = new autoclass.ProtoInstance().setName("Nitrogen").setDEF("a10")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance11 = new autoclass.ProtoInstance().setName("Oxygen").setDEF("a11")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance12 = new autoclass.ProtoInstance().setName("Nitrogen").setDEF("a12")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance13 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a13")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance14 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a14")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance15 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a15")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance16 = new autoclass.ProtoInstance().setName("Sulphur").setDEF("a16")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance17 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a17")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance18 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a18")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance19 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a19")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance20 = new autoclass.ProtoInstance().setName("Oxygen").setDEF("a20")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance21 = new autoclass.ProtoInstance().setName("Sulphur").setDEF("a21")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance22 = new autoclass.ProtoInstance().setName("Nitrogen").setDEF("a22")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance23 = new autoclass.ProtoInstance().setName("Oxygen").setDEF("a23")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance24 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a24")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance25 = new autoclass.ProtoInstance().setName("Nitrogen").setDEF("a25")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance26 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a26")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance27 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a27")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance28 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a28")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance29 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a29")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance30 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a30")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance31 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a31")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance32 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a32")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance33 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a33")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance34 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a34")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance35 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a35")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance36 = new autoclass.ProtoInstance().setName("Oxygen").setDEF("a36")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance37 = new autoclass.ProtoInstance().setName("Nitrogen").setDEF("a37")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance38 = new autoclass.ProtoInstance().setName("Oxygen").setDEF("a38")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance39 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a39")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance40 = new autoclass.ProtoInstance().setName("Nitrogen").setDEF("a40")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance41 = new autoclass.ProtoInstance().setName("Nitrogen").setDEF("a41")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance42 = new autoclass.ProtoInstance().setName("Oxygen").setDEF("a42")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance43 = new autoclass.ProtoInstance().setName("Nitrogen").setDEF("a43")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance44 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a44")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance45 = new autoclass.ProtoInstance().setName("Nitrogen").setDEF("a45")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance46 = new autoclass.ProtoInstance().setName("Oxygen").setDEF("a46")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance47 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a47")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance48 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a48")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance49 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a49")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance50 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a50")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance51 = new autoclass.ProtoInstance().setName("Oxygen").setDEF("a51")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance52 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a52")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance53 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a53")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance54 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a54")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance55 = new autoclass.ProtoInstance().setName("Nitrogen").setDEF("a55")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance56 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a56")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance57 = new autoclass.ProtoInstance().setName("Nitrogen").setDEF("a57")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance58 = new autoclass.ProtoInstance().setName("Oxygen").setDEF("a58")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance59 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a59")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance60 = new autoclass.ProtoInstance().setName("Oxygen").setDEF("a60")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance61 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a61")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance62 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a62")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance63 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a63")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance64 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a64")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance65 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a65")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance66 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a66")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance67 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a67")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance68 = new autoclass.ProtoInstance().setName("Carbon").setDEF("a68")))
          .addChild(new autoclass.Transform()
            .addChild(ProtoInstance69 = new autoclass.ProtoInstance().setName("Oxygen").setDEF("a69"))))
        .addChild(new autoclass.Group()
          .addChild(ProtoInstance70 = new autoclass.ProtoInstance().setName("line").setDEF("b1"))
          .addChild(ProtoInstance71 = new autoclass.ProtoInstance().setName("line").setDEF("b2"))
          .addChild(ProtoInstance72 = new autoclass.ProtoInstance().setName("line").setDEF("b3"))
          .addChild(ProtoInstance73 = new autoclass.ProtoInstance().setName("line").setDEF("b4"))
          .addChild(ProtoInstance74 = new autoclass.ProtoInstance().setName("line").setDEF("b5"))
          .addChild(ProtoInstance75 = new autoclass.ProtoInstance().setName("line").setDEF("b6"))
          .addChild(ProtoInstance76 = new autoclass.ProtoInstance().setName("line").setDEF("b7"))
          .addChild(ProtoInstance77 = new autoclass.ProtoInstance().setName("line").setDEF("b7_2"))
          .addChild(ProtoInstance78 = new autoclass.ProtoInstance().setName("line").setDEF("b8"))
          .addChild(ProtoInstance79 = new autoclass.ProtoInstance().setName("line").setDEF("b9"))
          .addChild(ProtoInstance80 = new autoclass.ProtoInstance().setName("line").setDEF("b10"))
          .addChild(ProtoInstance81 = new autoclass.ProtoInstance().setName("line").setDEF("b10_2"))
          .addChild(ProtoInstance82 = new autoclass.ProtoInstance().setName("line").setDEF("b11"))
          .addChild(ProtoInstance83 = new autoclass.ProtoInstance().setName("line").setDEF("b12"))
          .addChild(ProtoInstance84 = new autoclass.ProtoInstance().setName("line").setDEF("b13"))
          .addChild(ProtoInstance85 = new autoclass.ProtoInstance().setName("line").setDEF("b14"))
          .addChild(ProtoInstance86 = new autoclass.ProtoInstance().setName("line").setDEF("b15"))
          .addChild(ProtoInstance87 = new autoclass.ProtoInstance().setName("line").setDEF("b16"))
          .addChild(ProtoInstance88 = new autoclass.ProtoInstance().setName("line").setDEF("b17"))
          .addChild(ProtoInstance89 = new autoclass.ProtoInstance().setName("line").setDEF("b18"))
          .addChild(ProtoInstance90 = new autoclass.ProtoInstance().setName("line").setDEF("b19"))
          .addChild(ProtoInstance91 = new autoclass.ProtoInstance().setName("line").setDEF("b19_2"))
          .addChild(ProtoInstance92 = new autoclass.ProtoInstance().setName("line").setDEF("b20"))
          .addChild(ProtoInstance93 = new autoclass.ProtoInstance().setName("line").setDEF("b21"))
          .addChild(ProtoInstance94 = new autoclass.ProtoInstance().setName("line").setDEF("b22"))
          .addChild(ProtoInstance95 = new autoclass.ProtoInstance().setName("line").setDEF("b22_2"))
          .addChild(ProtoInstance96 = new autoclass.ProtoInstance().setName("line").setDEF("b23"))
          .addChild(ProtoInstance97 = new autoclass.ProtoInstance().setName("line").setDEF("b24"))
          .addChild(ProtoInstance98 = new autoclass.ProtoInstance().setName("line").setDEF("b25"))
          .addChild(ProtoInstance99 = new autoclass.ProtoInstance().setName("line").setDEF("b26"))
          .addChild(ProtoInstance100 = new autoclass.ProtoInstance().setName("line").setDEF("b27"))
          .addChild(ProtoInstance101 = new autoclass.ProtoInstance().setName("line").setDEF("b28"))
          .addChild(ProtoInstance102 = new autoclass.ProtoInstance().setName("line").setDEF("b29"))
          .addChild(ProtoInstance103 = new autoclass.ProtoInstance().setName("line").setDEF("b30"))
          .addChild(ProtoInstance104 = new autoclass.ProtoInstance().setName("line").setDEF("b31"))
          .addChild(ProtoInstance105 = new autoclass.ProtoInstance().setName("line").setDEF("b32"))
          .addChild(ProtoInstance106 = new autoclass.ProtoInstance().setName("line").setDEF("b33"))
          .addChild(ProtoInstance107 = new autoclass.ProtoInstance().setName("line").setDEF("b34"))
          .addChild(ProtoInstance108 = new autoclass.ProtoInstance().setName("line").setDEF("b35"))
          .addChild(ProtoInstance109 = new autoclass.ProtoInstance().setName("line").setDEF("b35_2"))
          .addChild(ProtoInstance110 = new autoclass.ProtoInstance().setName("line").setDEF("b36"))
          .addChild(ProtoInstance111 = new autoclass.ProtoInstance().setName("line").setDEF("b37"))
          .addChild(ProtoInstance112 = new autoclass.ProtoInstance().setName("line").setDEF("b37_2"))
          .addChild(ProtoInstance113 = new autoclass.ProtoInstance().setName("line").setDEF("b38"))
          .addChild(ProtoInstance114 = new autoclass.ProtoInstance().setName("line").setDEF("b39"))
          .addChild(ProtoInstance115 = new autoclass.ProtoInstance().setName("line").setDEF("b40"))
          .addChild(ProtoInstance116 = new autoclass.ProtoInstance().setName("line").setDEF("b41"))
          .addChild(ProtoInstance117 = new autoclass.ProtoInstance().setName("line").setDEF("b41_2"))
          .addChild(ProtoInstance118 = new autoclass.ProtoInstance().setName("line").setDEF("b42"))
          .addChild(ProtoInstance119 = new autoclass.ProtoInstance().setName("line").setDEF("b43"))
          .addChild(ProtoInstance120 = new autoclass.ProtoInstance().setName("line").setDEF("b44"))
          .addChild(ProtoInstance121 = new autoclass.ProtoInstance().setName("line").setDEF("b45"))
          .addChild(ProtoInstance122 = new autoclass.ProtoInstance().setName("line").setDEF("b45_2"))
          .addChild(ProtoInstance123 = new autoclass.ProtoInstance().setName("line").setDEF("b46"))
          .addChild(ProtoInstance124 = new autoclass.ProtoInstance().setName("line").setDEF("b47"))
          .addChild(ProtoInstance125 = new autoclass.ProtoInstance().setName("line").setDEF("b48"))
          .addChild(ProtoInstance126 = new autoclass.ProtoInstance().setName("line").setDEF("b49"))
          .addChild(ProtoInstance127 = new autoclass.ProtoInstance().setName("line").setDEF("b50"))
          .addChild(ProtoInstance128 = new autoclass.ProtoInstance().setName("line").setDEF("b50_2"))
          .addChild(ProtoInstance129 = new autoclass.ProtoInstance().setName("line").setDEF("b51"))
          .addChild(ProtoInstance130 = new autoclass.ProtoInstance().setName("line").setDEF("b52"))
          .addChild(ProtoInstance131 = new autoclass.ProtoInstance().setName("line").setDEF("b53"))
          .addChild(ProtoInstance132 = new autoclass.ProtoInstance().setName("line").setDEF("b54"))
          .addChild(ProtoInstance133 = new autoclass.ProtoInstance().setName("line").setDEF("b55"))
          .addChild(ProtoInstance134 = new autoclass.ProtoInstance().setName("line").setDEF("b56"))
          .addChild(ProtoInstance135 = new autoclass.ProtoInstance().setName("line").setDEF("b57"))
          .addChild(ProtoInstance136 = new autoclass.ProtoInstance().setName("line").setDEF("b57_2"))
          .addChild(ProtoInstance137 = new autoclass.ProtoInstance().setName("line").setDEF("b58"))
          .addChild(ProtoInstance138 = new autoclass.ProtoInstance().setName("line").setDEF("b59"))
          .addChild(ProtoInstance139 = new autoclass.ProtoInstance().setName("line").setDEF("b59_2"))
          .addChild(ProtoInstance140 = new autoclass.ProtoInstance().setName("line").setDEF("b60"))
          .addChild(ProtoInstance141 = new autoclass.ProtoInstance().setName("line").setDEF("b61"))
          .addChild(ProtoInstance142 = new autoclass.ProtoInstance().setName("line").setDEF("b62"))
          .addChild(ProtoInstance143 = new autoclass.ProtoInstance().setName("line").setDEF("b63"))
          .addChild(ProtoInstance144 = new autoclass.ProtoInstance().setName("line").setDEF("b63_2"))
          .addChild(ProtoInstance145 = new autoclass.ProtoInstance().setName("line").setDEF("b64"))
          .addChild(ProtoInstance146 = new autoclass.ProtoInstance().setName("line").setDEF("b65"))
          .addChild(ProtoInstance147 = new autoclass.ProtoInstance().setName("line").setDEF("b65_2"))
          .addChild(ProtoInstance148 = new autoclass.ProtoInstance().setName("line").setDEF("b66"))
          .addChild(ProtoInstance149 = new autoclass.ProtoInstance().setName("line").setDEF("b67"))
          .addChild(ProtoInstance150 = new autoclass.ProtoInstance().setName("line").setDEF("b68"))
          .addChild(ProtoInstance151 = new autoclass.ProtoInstance().setName("line").setDEF("b69"))
          .addChild(ProtoInstance152 = new autoclass.ProtoInstance().setName("line").setDEF("b70"))
          .addChild(ProtoInstance153 = new autoclass.ProtoInstance().setName("line").setDEF("b71"))
          .addChild(ProtoInstance154 = new autoclass.ProtoInstance().setName("line").setDEF("b71_2"))))      ;
ProtoInstance0
              .addFieldValue(new autoclass.fieldValue().setName("txt").setValue("\"Oxytocin: \""));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-2.0514 1.8507 0"));
ProtoInstance2
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-3.601 1.9845 0"));
ProtoInstance3
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-1.2821 0.4905 0"));
ProtoInstance4
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-1.4159 3.2554 0"));
ProtoInstance5
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-4.649 0.8473 0"));
ProtoInstance6
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-3.9355 3.5341 0"));
ProtoInstance7
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("0.2341 0.4905 0"));
ProtoInstance8
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-2.0514 -0.8362 0"));
ProtoInstance9
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-2.5753 4.3034 0"));
ProtoInstance10
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-6.1764 1.1595 0"));
ProtoInstance11
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-4.1585 -0.6132 0"));
ProtoInstance12
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("0.4905 2.0402 0"));
ProtoInstance13
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("0.4905 -1.0257 0"));
ProtoInstance14
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-7.2243 0.0223 0"));
ProtoInstance15
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("1.2041 3.3892 0"));
ProtoInstance16
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("1.1706 -2.4081 0"));
ProtoInstance17
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-8.7071 0.3568 0"));
ProtoInstance18
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-6.7226 -1.4382 0"));
ProtoInstance19
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("2.3078 4.4929 0"));
ProtoInstance20
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-0.0446 4.3368 0"));
ProtoInstance21
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("2.2855 -3.5118 0"));
ProtoInstance22
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-9.7662 -0.7804 0"));
ProtoInstance23
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-9.2088 1.8507 0"));
ProtoInstance24
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-7.7483 -2.5753 0"));
ProtoInstance25
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("3.6902 5.1841 0"));
ProtoInstance26
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("1.3936 5.7416 0"));
ProtoInstance27
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("3.6568 -4.2253 0"));
ProtoInstance28
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-11.2825 -0.4459 0"));
ProtoInstance29
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-7.2243 -4.0693 0"));
ProtoInstance30
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-8.7963 -2.4081 0"));
ProtoInstance31
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("5.2064 5.4405 0"));
ProtoInstance32
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("2.0291 7.1797 0"));
ProtoInstance33
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("5.1841 -4.4818 0"));
ProtoInstance34
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-12.3304 -1.6054 0"));
ProtoInstance35
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("6.7561 5.1841 0"));
ProtoInstance36
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("5.2399 6.9791 0"));
ProtoInstance37
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("1.126 8.4507 0"));
ProtoInstance38
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("3.5787 7.3135 0"));
ProtoInstance39
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("6.7226 -4.2253 0"));
ProtoInstance40
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("5.1841 -6.0203 0"));
ProtoInstance41
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-13.8466 -1.2709 0"));
ProtoInstance42
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("-11.8622 -3.0659 0"));
ProtoInstance43
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("8.1385 4.4706 0"));
ProtoInstance44
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("7.2243 6.6781 0"));
ProtoInstance45
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("8.1051 -3.5341 0"));
ProtoInstance46
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("7.202 -5.7193 0"));
ProtoInstance47
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("9.2422 3.3669 0"));
ProtoInstance48
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("8.7406 6.9791 0"));
ProtoInstance49
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("9.2088 -2.4304 0"));
ProtoInstance50
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("9.9335 1.9845 0"));
ProtoInstance51
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("10.4797 4.3034 0"));
ProtoInstance52
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("9.2422 8.4507 0"));
ProtoInstance53
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("10.4797 -3.3446 0"));
ProtoInstance54
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("9.9335 -1.0591 0"));
ProtoInstance55
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("10.1787 0.4682 0"));
ProtoInstance56
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("11.4274 2.4862 0"));
ProtoInstance57
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("10.7585 8.774 0"));
ProtoInstance58
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("8.2166 9.6324 0"));
ProtoInstance59
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("10.3237 -4.8943 0"));
ProtoInstance60
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("11.4274 -1.5274 0"));
ProtoInstance61
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("12.5534 1.427 0"));
ProtoInstance62
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("11.7507 4.0024 0"));
ProtoInstance63
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("8.8855 -5.5297 0"));
ProtoInstance64
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("11.5612 -5.8085 0"));
ProtoInstance65
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("14.0473 1.9064 0"));
ProtoInstance66
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("8.7183 -7.0794 0"));
ProtoInstance67
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("11.3939 -7.347 0"));
ProtoInstance68
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("9.9892 -7.9824 0"));
ProtoInstance69
              .addFieldValue(new autoclass.fieldValue().setName("position").setValue("9.7885 -9.5321 0"));
ProtoInstance70
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-2.0514 1.8507 0 -3.601 1.9845 0"));
ProtoInstance71
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-2.0514 1.8507 0 -1.2821 0.4905 0"));
ProtoInstance72
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-2.0514 1.8507 0 -1.4159 3.2554 0"));
ProtoInstance73
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-3.601 1.9845 0 -4.649 0.8473 0"));
ProtoInstance74
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-3.601 1.9845 0 -3.9355 3.5341 0"));
ProtoInstance75
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-1.2821 0.4905 0 0.2341 0.4905 0"));
ProtoInstance76
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-1.3021 0.4905 0 -2.0714 -0.8362 0"));
ProtoInstance77
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-1.2621 0.4905 0 -2.0314 -0.8362 0"));
ProtoInstance78
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-1.4159 3.2554 0 -2.5753 4.3034 0"));
ProtoInstance79
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-4.649 0.8473 0 -6.1764 1.1595 0"));
ProtoInstance80
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-4.669 0.8473 0 -4.1785 -0.6132 0"));
ProtoInstance81
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-4.6290000000000004 0.8473 0 -4.1385000000000005 -0.6132 0"));
ProtoInstance82
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("0.2341 0.4905 0 0.4905 2.0402 0"));
ProtoInstance83
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("0.2341 0.4905 0 0.4905 -1.0257 0"));
ProtoInstance84
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-6.1764 1.1595 0 -7.2243 0.0223 0"));
ProtoInstance85
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("0.4905 2.0402 0 1.2041 3.3892 0"));
ProtoInstance86
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("0.4905 -1.0257 0 1.1706 -2.4081 0"));
ProtoInstance87
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-7.2243 0.0223 0 -8.7071 0.3568 0"));
ProtoInstance88
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-7.2243 0.0223 0 -6.7226 -1.4382 0"));
ProtoInstance89
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("1.2041 3.3892 0 2.3078 4.4929 0"));
ProtoInstance90
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("1.1841 3.3892 0 -0.0646 4.3368 0"));
ProtoInstance91
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("1.2241 3.3892 0 -0.0246 4.3368 0"));
ProtoInstance92
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("1.1706 -2.4081 0 2.2855 -3.5118 0"));
ProtoInstance93
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-8.7071 0.3568 0 -9.7662 -0.7804 0"));
ProtoInstance94
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-8.7271 0.3568 0 -9.2288 1.8507 0"));
ProtoInstance95
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-8.687100000000001 0.3568 0 -9.1888 1.8507 0"));
ProtoInstance96
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-6.7226 -1.4382 0 -7.7483 -2.5753 0"));
ProtoInstance97
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("2.3078 4.4929 0 3.6902 5.1841 0"));
ProtoInstance98
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("2.3078 4.4929 0 1.3936 5.7416 0"));
ProtoInstance99
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("2.2855 -3.5118 0 3.6568 -4.2253 0"));
ProtoInstance100
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-9.7662 -0.7804 0 -11.2825 -0.4459 0"));
ProtoInstance101
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-7.7483 -2.5753 0 -7.2243 -4.0693 0"));
ProtoInstance102
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-7.7483 -2.5753 0 -8.7963 -2.4081 0"));
ProtoInstance103
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("3.6902 5.1841 0 5.2064 5.4405 0"));
ProtoInstance104
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("1.3936 5.7416 0 2.0291 7.1797 0"));
ProtoInstance105
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("3.6568 -4.2253 0 5.1841 -4.4818 0"));
ProtoInstance106
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-11.2825 -0.4459 0 -12.3304 -1.6054 0"));
ProtoInstance107
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("5.2064 5.4405 0 6.7561 5.1841 0"));
ProtoInstance108
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("5.186400000000001 5.4405 0 5.2199 6.9791 0"));
ProtoInstance109
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("5.2264 5.4405 0 5.259899999999999 6.9791 0"));
ProtoInstance110
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("2.0291 7.1797 0 1.126 8.4507 0"));
ProtoInstance111
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("2.0091 7.1797 0 3.5587 7.3135 0"));
ProtoInstance112
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("2.0491 7.1797 0 3.5987 7.3135 0"));
ProtoInstance113
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("5.1841 -4.4818 0 6.7226 -4.2253 0"));
ProtoInstance114
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("5.1841 -4.4818 0 5.1841 -6.0203 0"));
ProtoInstance115
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-12.3304 -1.6054 0 -13.8466 -1.2709 0"));
ProtoInstance116
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-12.350399999999999 -1.6054 0 -11.8822 -3.0659 0"));
ProtoInstance117
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-12.3104 -1.6054 0 -11.8422 -3.0659 0"));
ProtoInstance118
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("6.7561 5.1841 0 8.1385 4.4706 0"));
ProtoInstance119
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("6.7561 5.1841 0 7.2243 6.6781 0"));
ProtoInstance120
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("6.7226 -4.2253 0 8.1051 -3.5341 0"));
ProtoInstance121
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("6.7026 -4.2253 0 7.182 -5.7193 0"));
ProtoInstance122
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("6.7425999999999995 -4.2253 0 7.2219999999999995 -5.7193 0"));
ProtoInstance123
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("8.1385 4.4706 0 9.2422 3.3669 0"));
ProtoInstance124
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("7.2243 6.6781 0 8.7406 6.9791 0"));
ProtoInstance125
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("8.1051 -3.5341 0 9.2088 -2.4304 0"));
ProtoInstance126
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.2422 3.3669 0 9.9335 1.9845 0"));
ProtoInstance127
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.2222 3.3669 0 10.4597 4.3034 0"));
ProtoInstance128
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.2622 3.3669 0 10.499699999999999 4.3034 0"));
ProtoInstance129
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("8.7406 6.9791 0 9.2422 8.4507 0"));
ProtoInstance130
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.2088 -2.4304 0 10.4797 -3.3446 0"));
ProtoInstance131
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.2088 -2.4304 0 9.9335 -1.0591 0"));
ProtoInstance132
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.9335 1.9845 0 10.1787 0.4682 0"));
ProtoInstance133
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.9335 1.9845 0 11.4274 2.4862 0"));
ProtoInstance134
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.2422 8.4507 0 10.7585 8.774 0"));
ProtoInstance135
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.2222 8.4507 0 8.1966 9.6324 0"));
ProtoInstance136
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.2622 8.4507 0 8.2366 9.6324 0"));
ProtoInstance137
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("10.4797 -3.3446 0 10.3237 -4.8943 0"));
ProtoInstance138
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.9135 -1.0591 0 11.4074 -1.5274 0"));
ProtoInstance139
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.9535 -1.0591 0 11.4474 -1.5274 0"));
ProtoInstance140
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("11.4274 2.4862 0 12.5534 1.427 0"));
ProtoInstance141
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("11.4274 2.4862 0 11.7507 4.0024 0"));
ProtoInstance142
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("10.3237 -4.8943 0 8.8855 -5.5297 0"));
ProtoInstance143
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("10.303700000000001 -4.8943 0 11.5412 -5.8085 0"));
ProtoInstance144
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("10.3437 -4.8943 0 11.581199999999999 -5.8085 0"));
ProtoInstance145
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("12.5534 1.427 0 14.0473 1.9064 0"));
ProtoInstance146
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("8.8655 -5.5297 0 8.6983 -7.0794 0"));
ProtoInstance147
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("8.9055 -5.5297 0 8.738299999999999 -7.0794 0"));
ProtoInstance148
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("11.5612 -5.8085 0 11.3939 -7.347 0"));
ProtoInstance149
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("8.7183 -7.0794 0 9.9892 -7.9824 0"));
ProtoInstance150
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.9892 -7.9824 0 9.7885 -9.5321 0"));
ProtoInstance151
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("-3.9355 3.5341 0 -2.5753 4.3034 0"));
ProtoInstance152
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("9.9335 -1.0591 0 10.1787 0.4682 0"));
ProtoInstance153
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("11.3739 -7.347 0 9.9692 -7.9824 0"));
ProtoInstance154
            .addFieldValue(new autoclass.fieldValue().setName("bond_set").setValue("11.4139 -7.347 0 10.0092 -7.9824 0"));
    X3D0.toFileX3D("../data/Oxytocin.new.node.x3d");
    X3D0.toFileJSON("../data/Oxytocin.new.node.x3dj");
    process.exit(0);
