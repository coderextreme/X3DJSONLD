load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
ConfigurationProperties.setDeleteIntermediateFiles(false);
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
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
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("Oxytocin.x3d"))
        .addMeta(new meta().setName("description").setContent("Autogenerated version of Oxytocin.x3d scene produced from Oxytocin.xml Chemical Markup Language (CML) version 1.0 source file."))
        .addMeta(new meta().setName("creator").setContent("Nicholas F. Polys"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("24 November 2005"))
        .addMeta(new meta().setName("translated").setContent("2 JAN 2025"))
        .addMeta(new meta().setName("modified").setContent("2 JAN 2025"))
        .addMeta(new meta().setName("reference").setContent("Oxytocin.xml"))
        .addMeta(new meta().setName("reference").setContent("CML sources https://www.xml-cml.org"))
        .addMeta(new meta().setName("reference").setContent("Wikipedia https://en.wikipedia.org/wiki/Chemical_Markup_Language"))
        .addMeta(new meta().setName("reference").setContent("JUMBO Chemical Format Conversion Tool"))
        .addMeta(new meta().setName("reference").setContent("https://webbook.nist.gov/chemistry"))
        .addMeta(new meta().setName("reference").setContent("Polys.StylesheetTransformationsInteractiveVisualization.Web3d2003Symposium.pdf"))
        .addMeta(new meta().setName("reference").setContent("Originally Published in Proceedings of Web3D 2003, ACM Press"))
        .addMeta(new meta().setName("generator").setContent("CmlToX3d.xslt"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/ChemicalMarkupLanguage/Oxytocin.x3d"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("Carbon")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("atoC")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("atoC_mat").setDiffuseColor(Java.to(doubleToFloat([0,0,0]), Java.type("float[]"))).setShininess(0.8).setSpecularColor(Java.to(doubleToFloat([0.29,0.3,0.29]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new Sphere().setRadius(0.77)))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                  .setGeometry(new Text().setString(Java.to(["C"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.8))))))))
        .addChild(new ProtoDeclare().setName("Hydrogen")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("atoH")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("atoH_mat").setAmbientIntensity(0.0933).setDiffuseColor(Java.to(doubleToFloat([0.38,0.38,0.42]), Java.type("float[]"))).setShininess(0.5).setSpecularColor(Java.to(doubleToFloat([0.53,0.53,0.53]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new Sphere().setRadius(0.32)))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                  .setGeometry(new Text().setString(Java.to(["H"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.4))))))))
        .addChild(new ProtoDeclare().setName("Nitrogen")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("atoN")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("atoN_mat").setDiffuseColor(Java.to(doubleToFloat([0,0,0.72]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([0,0,0.13]), Java.type("float[]"))).setSpecularColor(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new Sphere().setRadius(0.75)))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                  .setGeometry(new Text().setString(Java.to(["N"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.8))))))))
        .addChild(new ProtoDeclare().setName("Oxygen")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("atoO")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("atoO_mat").setAmbientIntensity(0.487).setDiffuseColor(Java.to(doubleToFloat([0.54,0.05,0.25]), Java.type("float[]"))).setShininess(0.2).setSpecularColor(Java.to(doubleToFloat([0.81,0.77,0.75]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new Sphere().setRadius(0.73)))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                  .setGeometry(new Text().setString(Java.to(["O"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.8))))))))
        .addChild(new ProtoDeclare().setName("Fluorine")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("atoF")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("atoF_mat").setDiffuseColor(Java.to(doubleToFloat([1,0.48,0.79]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([0.09,0.04,0.07]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new Sphere().setRadius(0.72)))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                  .setGeometry(new Text().setString(Java.to(["F"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.8))))))))
        .addChild(new ProtoDeclare().setName("Silicon")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("atoSi")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("atoSi_mat").setDiffuseColor(Java.to(doubleToFloat([0.8,0.8,0.8]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new Sphere().setRadius(1.18)))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                  .setGeometry(new Text().setString(Java.to(["Si"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.8))))))))
        .addChild(new ProtoDeclare().setName("Phosphorus")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("atoP")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("atoP_mat").setAmbientIntensity(0.11).setDiffuseColor(Java.to(doubleToFloat([0.9,0.41,0]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([0.1,0.04,0]), Java.type("float[]"))).setShininess(0.8).setSpecularColor(Java.to(doubleToFloat([0.1,0.1,0.1]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new Sphere().setRadius(1.1)))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                  .setGeometry(new Text().setString(Java.to(["P"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.8))))))))
        .addChild(new ProtoDeclare().setName("Sulphur")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("atoS")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("atoS_mat").setAmbientIntensity(0.0467).setDiffuseColor(Java.to(doubleToFloat([0.25,0.39,0.25]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([0.05,0.08,0.05]), Java.type("float[]"))).setShininess(0.6).setSpecularColor(Java.to(doubleToFloat([0.11,0.12,0.08]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new Sphere().setRadius(1.3)))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                  .setGeometry(new Text().setString(Java.to(["S"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.8))))))))
        .addChild(new ProtoDeclare().setName("Chlorine")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("atoCl")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("atoCl_mat").setDiffuseColor(Java.to(doubleToFloat([0.28,0.7,0]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([0.06,0.15,0]), Java.type("float[]"))).setShininess(0.8).setSpecularColor(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new Sphere().setRadius(1.01)))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                  .setGeometry(new Text().setString(Java.to(["Cl"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.8))))))))
        .addChild(new ProtoDeclare().setName("Bromine")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("atoBr")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("atoBr_mat").setAmbientIntensity(0.0833).setDiffuseColor(Java.to(doubleToFloat([0.5,0.3,0.19]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([0.12,0.13,0.08]), Java.type("float[]"))).setShininess(0.17).setSpecularColor(Java.to(doubleToFloat([0.08,0.08,0.05]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new Sphere().setRadius(1.14)))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                  .setGeometry(new Text().setString(Java.to(["Br"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.8))))))))
        .addChild(new ProtoDeclare().setName("Iodine")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("atoI")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("atoI_mat").setDiffuseColor(Java.to(doubleToFloat([0.56,0.37,0.74]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([0.15,0.1,0.2]), Java.type("float[]"))).setShininess(0.09).setSpecularColor(Java.to(doubleToFloat([0.12,0.12,0.12]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new Sphere().setRadius(1.33)))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                  .setGeometry(new Text().setString(Java.to(["I"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.8))))))))
        .addChild(new ProtoDeclare().setName("unknown")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("materialTransparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("ato_")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("ato__mat").setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([0.15,0.1,0.2]), Java.type("float[]"))).setShininess(0.09).setSpecularColor(Java.to(doubleToFloat([0.12,0.12,0.12]), Java.type("float[]")))
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("transparency").setProtoField("materialTransparency")))))
                  .setGeometry(new Sphere().setRadius(1.001)))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                  .setGeometry(new Text().setString(Java.to(["?"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setSize(0.8))))))))
        .addChild(new ProtoDeclare().setName("line")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_MFVEC3F).setName("bond_set").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("-1 0 0 1 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))
                .setGeometry(new IndexedLineSet().setCoordIndex(Java.to([0,1,-1], Java.type("int[]")))
                  .setCoord(new Coordinate().setDEF("bondo")
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("point").setProtoField("bond_set")))))))))
        .addChild(new ProtoDeclare().setName("title_text")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_MFSTRING).setName("txt").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Group()
                .addChild(new Transform()
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                    .setGeometry(new Text().setDEF("cmpd_name")
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("string").setProtoField("txt")))
                      .setFontStyle(new FontStyle()))))))))
        .addChild(new ProtoDeclare().setName("ano1_text")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_MFSTRING).setName("txt").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Group()
                .addChild(new Transform()
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                    .setGeometry(new Text().setDEF("cmpd_name1")
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("string").setProtoField("txt")))
                      .setFontStyle(new FontStyle().setSize(0.8)))))))))
        .addChild(new ProtoDeclare().setName("ano2_text")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_MFSTRING).setName("txt").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Group()
                .addChild(new Transform()
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.9,0.9,0.9]), Java.type("float[]")))))
                    .setGeometry(new Text().setDEF("cmpd_name2")
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("string").setProtoField("txt")))
                      .setFontStyle(new FontStyle().setSize(0.6)))))))))
        .addChild(new Background().setGroundAngle(Java.to(doubleToFloat([1.309,1.570796]), Java.type("float[]"))).setGroundColor(Java.to(doubleToFloat([0,0.5,0.7,0,0.4,0.7,0.6,0.5,0.7]), Java.type("float[]"))).setSkyAngle(Java.to(doubleToFloat([1.309,1.570796]), Java.type("float[]"))).setSkyColor(Java.to(doubleToFloat([0,0.5,0.8,0,0.6,0.7,0.6,0.6,0.7]), Java.type("float[]"))))
        .addChild(new PointLight().setAmbientIntensity(1).setLocation(Java.to(doubleToFloat([0,0,5]), Java.type("float[]"))).setRadius(30))
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE","FLY","ANY"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDescription("Inspect Oxytocin").setPosition(Java.to(doubleToFloat([0,2,20]), Java.type("float[]"))))
        .addComments(new CommentsBlock("Copyright by the U.S. Sec. Commerce on behalf of U.S.A. All rights reserved."))
        .addComments(new CommentsBlock("type=\"3D\" <date day=\"23\" month=\"11\" year=\"1995\"/>"))
        .addChild(new Transform().setDEF("infogroupa").setTranslation(Java.to(doubleToFloat([-8,2,-4]), Java.type("float[]")))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,6,0]), Java.type("float[]")))
            .addChild(new Viewpoint().setDescription("title billboard").setPosition(Java.to(doubleToFloat([6,-2,10]), Java.type("float[]"))))
            .addChild(ProtoInstance0 = new ProtoInstance().setName("title_text"))))
        .addChild(new Group()
          .addChild(new Transform()
            .addChild(ProtoInstance1 = new ProtoInstance().setName("Nitrogen").setDEF("a1")))
          .addChild(new Transform()
            .addChild(ProtoInstance2 = new ProtoInstance().setName("Carbon").setDEF("a2")))
          .addChild(new Transform()
            .addChild(ProtoInstance3 = new ProtoInstance().setName("Carbon").setDEF("a3")))
          .addChild(new Transform()
            .addChild(ProtoInstance4 = new ProtoInstance().setName("Carbon").setDEF("a4")))
          .addChild(new Transform()
            .addChild(ProtoInstance5 = new ProtoInstance().setName("Carbon").setDEF("a5")))
          .addChild(new Transform()
            .addChild(ProtoInstance6 = new ProtoInstance().setName("Carbon").setDEF("a6")))
          .addChild(new Transform()
            .addChild(ProtoInstance7 = new ProtoInstance().setName("Carbon").setDEF("a7")))
          .addChild(new Transform()
            .addChild(ProtoInstance8 = new ProtoInstance().setName("Oxygen").setDEF("a8")))
          .addChild(new Transform()
            .addChild(ProtoInstance9 = new ProtoInstance().setName("Carbon").setDEF("a9")))
          .addChild(new Transform()
            .addChild(ProtoInstance10 = new ProtoInstance().setName("Nitrogen").setDEF("a10")))
          .addChild(new Transform()
            .addChild(ProtoInstance11 = new ProtoInstance().setName("Oxygen").setDEF("a11")))
          .addChild(new Transform()
            .addChild(ProtoInstance12 = new ProtoInstance().setName("Nitrogen").setDEF("a12")))
          .addChild(new Transform()
            .addChild(ProtoInstance13 = new ProtoInstance().setName("Carbon").setDEF("a13")))
          .addChild(new Transform()
            .addChild(ProtoInstance14 = new ProtoInstance().setName("Carbon").setDEF("a14")))
          .addChild(new Transform()
            .addChild(ProtoInstance15 = new ProtoInstance().setName("Carbon").setDEF("a15")))
          .addChild(new Transform()
            .addChild(ProtoInstance16 = new ProtoInstance().setName("Sulphur").setDEF("a16")))
          .addChild(new Transform()
            .addChild(ProtoInstance17 = new ProtoInstance().setName("Carbon").setDEF("a17")))
          .addChild(new Transform()
            .addChild(ProtoInstance18 = new ProtoInstance().setName("Carbon").setDEF("a18")))
          .addChild(new Transform()
            .addChild(ProtoInstance19 = new ProtoInstance().setName("Carbon").setDEF("a19")))
          .addChild(new Transform()
            .addChild(ProtoInstance20 = new ProtoInstance().setName("Oxygen").setDEF("a20")))
          .addChild(new Transform()
            .addChild(ProtoInstance21 = new ProtoInstance().setName("Sulphur").setDEF("a21")))
          .addChild(new Transform()
            .addChild(ProtoInstance22 = new ProtoInstance().setName("Nitrogen").setDEF("a22")))
          .addChild(new Transform()
            .addChild(ProtoInstance23 = new ProtoInstance().setName("Oxygen").setDEF("a23")))
          .addChild(new Transform()
            .addChild(ProtoInstance24 = new ProtoInstance().setName("Carbon").setDEF("a24")))
          .addChild(new Transform()
            .addChild(ProtoInstance25 = new ProtoInstance().setName("Nitrogen").setDEF("a25")))
          .addChild(new Transform()
            .addChild(ProtoInstance26 = new ProtoInstance().setName("Carbon").setDEF("a26")))
          .addChild(new Transform()
            .addChild(ProtoInstance27 = new ProtoInstance().setName("Carbon").setDEF("a27")))
          .addChild(new Transform()
            .addChild(ProtoInstance28 = new ProtoInstance().setName("Carbon").setDEF("a28")))
          .addChild(new Transform()
            .addChild(ProtoInstance29 = new ProtoInstance().setName("Carbon").setDEF("a29")))
          .addChild(new Transform()
            .addChild(ProtoInstance30 = new ProtoInstance().setName("Carbon").setDEF("a30")))
          .addChild(new Transform()
            .addChild(ProtoInstance31 = new ProtoInstance().setName("Carbon").setDEF("a31")))
          .addChild(new Transform()
            .addChild(ProtoInstance32 = new ProtoInstance().setName("Carbon").setDEF("a32")))
          .addChild(new Transform()
            .addChild(ProtoInstance33 = new ProtoInstance().setName("Carbon").setDEF("a33")))
          .addChild(new Transform()
            .addChild(ProtoInstance34 = new ProtoInstance().setName("Carbon").setDEF("a34")))
          .addChild(new Transform()
            .addChild(ProtoInstance35 = new ProtoInstance().setName("Carbon").setDEF("a35")))
          .addChild(new Transform()
            .addChild(ProtoInstance36 = new ProtoInstance().setName("Oxygen").setDEF("a36")))
          .addChild(new Transform()
            .addChild(ProtoInstance37 = new ProtoInstance().setName("Nitrogen").setDEF("a37")))
          .addChild(new Transform()
            .addChild(ProtoInstance38 = new ProtoInstance().setName("Oxygen").setDEF("a38")))
          .addChild(new Transform()
            .addChild(ProtoInstance39 = new ProtoInstance().setName("Carbon").setDEF("a39")))
          .addChild(new Transform()
            .addChild(ProtoInstance40 = new ProtoInstance().setName("Nitrogen").setDEF("a40")))
          .addChild(new Transform()
            .addChild(ProtoInstance41 = new ProtoInstance().setName("Nitrogen").setDEF("a41")))
          .addChild(new Transform()
            .addChild(ProtoInstance42 = new ProtoInstance().setName("Oxygen").setDEF("a42")))
          .addChild(new Transform()
            .addChild(ProtoInstance43 = new ProtoInstance().setName("Nitrogen").setDEF("a43")))
          .addChild(new Transform()
            .addChild(ProtoInstance44 = new ProtoInstance().setName("Carbon").setDEF("a44")))
          .addChild(new Transform()
            .addChild(ProtoInstance45 = new ProtoInstance().setName("Nitrogen").setDEF("a45")))
          .addChild(new Transform()
            .addChild(ProtoInstance46 = new ProtoInstance().setName("Oxygen").setDEF("a46")))
          .addChild(new Transform()
            .addChild(ProtoInstance47 = new ProtoInstance().setName("Carbon").setDEF("a47")))
          .addChild(new Transform()
            .addChild(ProtoInstance48 = new ProtoInstance().setName("Carbon").setDEF("a48")))
          .addChild(new Transform()
            .addChild(ProtoInstance49 = new ProtoInstance().setName("Carbon").setDEF("a49")))
          .addChild(new Transform()
            .addChild(ProtoInstance50 = new ProtoInstance().setName("Carbon").setDEF("a50")))
          .addChild(new Transform()
            .addChild(ProtoInstance51 = new ProtoInstance().setName("Oxygen").setDEF("a51")))
          .addChild(new Transform()
            .addChild(ProtoInstance52 = new ProtoInstance().setName("Carbon").setDEF("a52")))
          .addChild(new Transform()
            .addChild(ProtoInstance53 = new ProtoInstance().setName("Carbon").setDEF("a53")))
          .addChild(new Transform()
            .addChild(ProtoInstance54 = new ProtoInstance().setName("Carbon").setDEF("a54")))
          .addChild(new Transform()
            .addChild(ProtoInstance55 = new ProtoInstance().setName("Nitrogen").setDEF("a55")))
          .addChild(new Transform()
            .addChild(ProtoInstance56 = new ProtoInstance().setName("Carbon").setDEF("a56")))
          .addChild(new Transform()
            .addChild(ProtoInstance57 = new ProtoInstance().setName("Nitrogen").setDEF("a57")))
          .addChild(new Transform()
            .addChild(ProtoInstance58 = new ProtoInstance().setName("Oxygen").setDEF("a58")))
          .addChild(new Transform()
            .addChild(ProtoInstance59 = new ProtoInstance().setName("Carbon").setDEF("a59")))
          .addChild(new Transform()
            .addChild(ProtoInstance60 = new ProtoInstance().setName("Oxygen").setDEF("a60")))
          .addChild(new Transform()
            .addChild(ProtoInstance61 = new ProtoInstance().setName("Carbon").setDEF("a61")))
          .addChild(new Transform()
            .addChild(ProtoInstance62 = new ProtoInstance().setName("Carbon").setDEF("a62")))
          .addChild(new Transform()
            .addChild(ProtoInstance63 = new ProtoInstance().setName("Carbon").setDEF("a63")))
          .addChild(new Transform()
            .addChild(ProtoInstance64 = new ProtoInstance().setName("Carbon").setDEF("a64")))
          .addChild(new Transform()
            .addChild(ProtoInstance65 = new ProtoInstance().setName("Carbon").setDEF("a65")))
          .addChild(new Transform()
            .addChild(ProtoInstance66 = new ProtoInstance().setName("Carbon").setDEF("a66")))
          .addChild(new Transform()
            .addChild(ProtoInstance67 = new ProtoInstance().setName("Carbon").setDEF("a67")))
          .addChild(new Transform()
            .addChild(ProtoInstance68 = new ProtoInstance().setName("Carbon").setDEF("a68")))
          .addChild(new Transform()
            .addChild(ProtoInstance69 = new ProtoInstance().setName("Oxygen").setDEF("a69"))))
        .addChild(new Group()
          .addChild(ProtoInstance70 = new ProtoInstance().setName("line").setDEF("b1"))
          .addChild(ProtoInstance71 = new ProtoInstance().setName("line").setDEF("b2"))
          .addChild(ProtoInstance72 = new ProtoInstance().setName("line").setDEF("b3"))
          .addChild(ProtoInstance73 = new ProtoInstance().setName("line").setDEF("b4"))
          .addChild(ProtoInstance74 = new ProtoInstance().setName("line").setDEF("b5"))
          .addChild(ProtoInstance75 = new ProtoInstance().setName("line").setDEF("b6"))
          .addChild(ProtoInstance76 = new ProtoInstance().setName("line").setDEF("b7"))
          .addChild(ProtoInstance77 = new ProtoInstance().setName("line").setDEF("b7_2"))
          .addChild(ProtoInstance78 = new ProtoInstance().setName("line").setDEF("b8"))
          .addChild(ProtoInstance79 = new ProtoInstance().setName("line").setDEF("b9"))
          .addChild(ProtoInstance80 = new ProtoInstance().setName("line").setDEF("b10"))
          .addChild(ProtoInstance81 = new ProtoInstance().setName("line").setDEF("b10_2"))
          .addChild(ProtoInstance82 = new ProtoInstance().setName("line").setDEF("b11"))
          .addChild(ProtoInstance83 = new ProtoInstance().setName("line").setDEF("b12"))
          .addChild(ProtoInstance84 = new ProtoInstance().setName("line").setDEF("b13"))
          .addChild(ProtoInstance85 = new ProtoInstance().setName("line").setDEF("b14"))
          .addChild(ProtoInstance86 = new ProtoInstance().setName("line").setDEF("b15"))
          .addChild(ProtoInstance87 = new ProtoInstance().setName("line").setDEF("b16"))
          .addChild(ProtoInstance88 = new ProtoInstance().setName("line").setDEF("b17"))
          .addChild(ProtoInstance89 = new ProtoInstance().setName("line").setDEF("b18"))
          .addChild(ProtoInstance90 = new ProtoInstance().setName("line").setDEF("b19"))
          .addChild(ProtoInstance91 = new ProtoInstance().setName("line").setDEF("b19_2"))
          .addChild(ProtoInstance92 = new ProtoInstance().setName("line").setDEF("b20"))
          .addChild(ProtoInstance93 = new ProtoInstance().setName("line").setDEF("b21"))
          .addChild(ProtoInstance94 = new ProtoInstance().setName("line").setDEF("b22"))
          .addChild(ProtoInstance95 = new ProtoInstance().setName("line").setDEF("b22_2"))
          .addChild(ProtoInstance96 = new ProtoInstance().setName("line").setDEF("b23"))
          .addChild(ProtoInstance97 = new ProtoInstance().setName("line").setDEF("b24"))
          .addChild(ProtoInstance98 = new ProtoInstance().setName("line").setDEF("b25"))
          .addChild(ProtoInstance99 = new ProtoInstance().setName("line").setDEF("b26"))
          .addChild(ProtoInstance100 = new ProtoInstance().setName("line").setDEF("b27"))
          .addChild(ProtoInstance101 = new ProtoInstance().setName("line").setDEF("b28"))
          .addChild(ProtoInstance102 = new ProtoInstance().setName("line").setDEF("b29"))
          .addChild(ProtoInstance103 = new ProtoInstance().setName("line").setDEF("b30"))
          .addChild(ProtoInstance104 = new ProtoInstance().setName("line").setDEF("b31"))
          .addChild(ProtoInstance105 = new ProtoInstance().setName("line").setDEF("b32"))
          .addChild(ProtoInstance106 = new ProtoInstance().setName("line").setDEF("b33"))
          .addChild(ProtoInstance107 = new ProtoInstance().setName("line").setDEF("b34"))
          .addChild(ProtoInstance108 = new ProtoInstance().setName("line").setDEF("b35"))
          .addChild(ProtoInstance109 = new ProtoInstance().setName("line").setDEF("b35_2"))
          .addChild(ProtoInstance110 = new ProtoInstance().setName("line").setDEF("b36"))
          .addChild(ProtoInstance111 = new ProtoInstance().setName("line").setDEF("b37"))
          .addChild(ProtoInstance112 = new ProtoInstance().setName("line").setDEF("b37_2"))
          .addChild(ProtoInstance113 = new ProtoInstance().setName("line").setDEF("b38"))
          .addChild(ProtoInstance114 = new ProtoInstance().setName("line").setDEF("b39"))
          .addChild(ProtoInstance115 = new ProtoInstance().setName("line").setDEF("b40"))
          .addChild(ProtoInstance116 = new ProtoInstance().setName("line").setDEF("b41"))
          .addChild(ProtoInstance117 = new ProtoInstance().setName("line").setDEF("b41_2"))
          .addChild(ProtoInstance118 = new ProtoInstance().setName("line").setDEF("b42"))
          .addChild(ProtoInstance119 = new ProtoInstance().setName("line").setDEF("b43"))
          .addChild(ProtoInstance120 = new ProtoInstance().setName("line").setDEF("b44"))
          .addChild(ProtoInstance121 = new ProtoInstance().setName("line").setDEF("b45"))
          .addChild(ProtoInstance122 = new ProtoInstance().setName("line").setDEF("b45_2"))
          .addChild(ProtoInstance123 = new ProtoInstance().setName("line").setDEF("b46"))
          .addChild(ProtoInstance124 = new ProtoInstance().setName("line").setDEF("b47"))
          .addChild(ProtoInstance125 = new ProtoInstance().setName("line").setDEF("b48"))
          .addChild(ProtoInstance126 = new ProtoInstance().setName("line").setDEF("b49"))
          .addChild(ProtoInstance127 = new ProtoInstance().setName("line").setDEF("b50"))
          .addChild(ProtoInstance128 = new ProtoInstance().setName("line").setDEF("b50_2"))
          .addChild(ProtoInstance129 = new ProtoInstance().setName("line").setDEF("b51"))
          .addChild(ProtoInstance130 = new ProtoInstance().setName("line").setDEF("b52"))
          .addChild(ProtoInstance131 = new ProtoInstance().setName("line").setDEF("b53"))
          .addChild(ProtoInstance132 = new ProtoInstance().setName("line").setDEF("b54"))
          .addChild(ProtoInstance133 = new ProtoInstance().setName("line").setDEF("b55"))
          .addChild(ProtoInstance134 = new ProtoInstance().setName("line").setDEF("b56"))
          .addChild(ProtoInstance135 = new ProtoInstance().setName("line").setDEF("b57"))
          .addChild(ProtoInstance136 = new ProtoInstance().setName("line").setDEF("b57_2"))
          .addChild(ProtoInstance137 = new ProtoInstance().setName("line").setDEF("b58"))
          .addChild(ProtoInstance138 = new ProtoInstance().setName("line").setDEF("b59"))
          .addChild(ProtoInstance139 = new ProtoInstance().setName("line").setDEF("b59_2"))
          .addChild(ProtoInstance140 = new ProtoInstance().setName("line").setDEF("b60"))
          .addChild(ProtoInstance141 = new ProtoInstance().setName("line").setDEF("b61"))
          .addChild(ProtoInstance142 = new ProtoInstance().setName("line").setDEF("b62"))
          .addChild(ProtoInstance143 = new ProtoInstance().setName("line").setDEF("b63"))
          .addChild(ProtoInstance144 = new ProtoInstance().setName("line").setDEF("b63_2"))
          .addChild(ProtoInstance145 = new ProtoInstance().setName("line").setDEF("b64"))
          .addChild(ProtoInstance146 = new ProtoInstance().setName("line").setDEF("b65"))
          .addChild(ProtoInstance147 = new ProtoInstance().setName("line").setDEF("b65_2"))
          .addChild(ProtoInstance148 = new ProtoInstance().setName("line").setDEF("b66"))
          .addChild(ProtoInstance149 = new ProtoInstance().setName("line").setDEF("b67"))
          .addChild(ProtoInstance150 = new ProtoInstance().setName("line").setDEF("b68"))
          .addChild(ProtoInstance151 = new ProtoInstance().setName("line").setDEF("b69"))
          .addChild(ProtoInstance152 = new ProtoInstance().setName("line").setDEF("b70"))
          .addChild(ProtoInstance153 = new ProtoInstance().setName("line").setDEF("b71"))
          .addChild(ProtoInstance154 = new ProtoInstance().setName("line").setDEF("b71_2"))))      ;
ProtoInstance0
              .addFieldValue(new fieldValue().setName("txt").setValue("\"Oxytocin: \""));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("position").setValue("-2.0514 1.8507 0"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("position").setValue("-3.601 1.9845 0"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("position").setValue("-1.2821 0.4905 0"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("position").setValue("-1.4159 3.2554 0"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("position").setValue("-4.649 0.8473 0"));
ProtoInstance6
              .addFieldValue(new fieldValue().setName("position").setValue("-3.9355 3.5341 0"));
ProtoInstance7
              .addFieldValue(new fieldValue().setName("position").setValue("0.2341 0.4905 0"));
ProtoInstance8
              .addFieldValue(new fieldValue().setName("position").setValue("-2.0514 -0.8362 0"));
ProtoInstance9
              .addFieldValue(new fieldValue().setName("position").setValue("-2.5753 4.3034 0"));
ProtoInstance10
              .addFieldValue(new fieldValue().setName("position").setValue("-6.1764 1.1595 0"));
ProtoInstance11
              .addFieldValue(new fieldValue().setName("position").setValue("-4.1585 -0.6132 0"));
ProtoInstance12
              .addFieldValue(new fieldValue().setName("position").setValue("0.4905 2.0402 0"));
ProtoInstance13
              .addFieldValue(new fieldValue().setName("position").setValue("0.4905 -1.0257 0"));
ProtoInstance14
              .addFieldValue(new fieldValue().setName("position").setValue("-7.2243 0.0223 0"));
ProtoInstance15
              .addFieldValue(new fieldValue().setName("position").setValue("1.2041 3.3892 0"));
ProtoInstance16
              .addFieldValue(new fieldValue().setName("position").setValue("1.1706 -2.4081 0"));
ProtoInstance17
              .addFieldValue(new fieldValue().setName("position").setValue("-8.7071 0.3568 0"));
ProtoInstance18
              .addFieldValue(new fieldValue().setName("position").setValue("-6.7226 -1.4382 0"));
ProtoInstance19
              .addFieldValue(new fieldValue().setName("position").setValue("2.3078 4.4929 0"));
ProtoInstance20
              .addFieldValue(new fieldValue().setName("position").setValue("-0.0446 4.3368 0"));
ProtoInstance21
              .addFieldValue(new fieldValue().setName("position").setValue("2.2855 -3.5118 0"));
ProtoInstance22
              .addFieldValue(new fieldValue().setName("position").setValue("-9.7662 -0.7804 0"));
ProtoInstance23
              .addFieldValue(new fieldValue().setName("position").setValue("-9.2088 1.8507 0"));
ProtoInstance24
              .addFieldValue(new fieldValue().setName("position").setValue("-7.7483 -2.5753 0"));
ProtoInstance25
              .addFieldValue(new fieldValue().setName("position").setValue("3.6902 5.1841 0"));
ProtoInstance26
              .addFieldValue(new fieldValue().setName("position").setValue("1.3936 5.7416 0"));
ProtoInstance27
              .addFieldValue(new fieldValue().setName("position").setValue("3.6568 -4.2253 0"));
ProtoInstance28
              .addFieldValue(new fieldValue().setName("position").setValue("-11.2825 -0.4459 0"));
ProtoInstance29
              .addFieldValue(new fieldValue().setName("position").setValue("-7.2243 -4.0693 0"));
ProtoInstance30
              .addFieldValue(new fieldValue().setName("position").setValue("-8.7963 -2.4081 0"));
ProtoInstance31
              .addFieldValue(new fieldValue().setName("position").setValue("5.2064 5.4405 0"));
ProtoInstance32
              .addFieldValue(new fieldValue().setName("position").setValue("2.0291 7.1797 0"));
ProtoInstance33
              .addFieldValue(new fieldValue().setName("position").setValue("5.1841 -4.4818 0"));
ProtoInstance34
              .addFieldValue(new fieldValue().setName("position").setValue("-12.3304 -1.6054 0"));
ProtoInstance35
              .addFieldValue(new fieldValue().setName("position").setValue("6.7561 5.1841 0"));
ProtoInstance36
              .addFieldValue(new fieldValue().setName("position").setValue("5.2399 6.9791 0"));
ProtoInstance37
              .addFieldValue(new fieldValue().setName("position").setValue("1.126 8.4507 0"));
ProtoInstance38
              .addFieldValue(new fieldValue().setName("position").setValue("3.5787 7.3135 0"));
ProtoInstance39
              .addFieldValue(new fieldValue().setName("position").setValue("6.7226 -4.2253 0"));
ProtoInstance40
              .addFieldValue(new fieldValue().setName("position").setValue("5.1841 -6.0203 0"));
ProtoInstance41
              .addFieldValue(new fieldValue().setName("position").setValue("-13.8466 -1.2709 0"));
ProtoInstance42
              .addFieldValue(new fieldValue().setName("position").setValue("-11.8622 -3.0659 0"));
ProtoInstance43
              .addFieldValue(new fieldValue().setName("position").setValue("8.1385 4.4706 0"));
ProtoInstance44
              .addFieldValue(new fieldValue().setName("position").setValue("7.2243 6.6781 0"));
ProtoInstance45
              .addFieldValue(new fieldValue().setName("position").setValue("8.1051 -3.5341 0"));
ProtoInstance46
              .addFieldValue(new fieldValue().setName("position").setValue("7.202 -5.7193 0"));
ProtoInstance47
              .addFieldValue(new fieldValue().setName("position").setValue("9.2422 3.3669 0"));
ProtoInstance48
              .addFieldValue(new fieldValue().setName("position").setValue("8.7406 6.9791 0"));
ProtoInstance49
              .addFieldValue(new fieldValue().setName("position").setValue("9.2088 -2.4304 0"));
ProtoInstance50
              .addFieldValue(new fieldValue().setName("position").setValue("9.9335 1.9845 0"));
ProtoInstance51
              .addFieldValue(new fieldValue().setName("position").setValue("10.4797 4.3034 0"));
ProtoInstance52
              .addFieldValue(new fieldValue().setName("position").setValue("9.2422 8.4507 0"));
ProtoInstance53
              .addFieldValue(new fieldValue().setName("position").setValue("10.4797 -3.3446 0"));
ProtoInstance54
              .addFieldValue(new fieldValue().setName("position").setValue("9.9335 -1.0591 0"));
ProtoInstance55
              .addFieldValue(new fieldValue().setName("position").setValue("10.1787 0.4682 0"));
ProtoInstance56
              .addFieldValue(new fieldValue().setName("position").setValue("11.4274 2.4862 0"));
ProtoInstance57
              .addFieldValue(new fieldValue().setName("position").setValue("10.7585 8.774 0"));
ProtoInstance58
              .addFieldValue(new fieldValue().setName("position").setValue("8.2166 9.6324 0"));
ProtoInstance59
              .addFieldValue(new fieldValue().setName("position").setValue("10.3237 -4.8943 0"));
ProtoInstance60
              .addFieldValue(new fieldValue().setName("position").setValue("11.4274 -1.5274 0"));
ProtoInstance61
              .addFieldValue(new fieldValue().setName("position").setValue("12.5534 1.427 0"));
ProtoInstance62
              .addFieldValue(new fieldValue().setName("position").setValue("11.7507 4.0024 0"));
ProtoInstance63
              .addFieldValue(new fieldValue().setName("position").setValue("8.8855 -5.5297 0"));
ProtoInstance64
              .addFieldValue(new fieldValue().setName("position").setValue("11.5612 -5.8085 0"));
ProtoInstance65
              .addFieldValue(new fieldValue().setName("position").setValue("14.0473 1.9064 0"));
ProtoInstance66
              .addFieldValue(new fieldValue().setName("position").setValue("8.7183 -7.0794 0"));
ProtoInstance67
              .addFieldValue(new fieldValue().setName("position").setValue("11.3939 -7.347 0"));
ProtoInstance68
              .addFieldValue(new fieldValue().setName("position").setValue("9.9892 -7.9824 0"));
ProtoInstance69
              .addFieldValue(new fieldValue().setName("position").setValue("9.7885 -9.5321 0"));
ProtoInstance70
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-2.0514 1.8507 0 -3.601 1.9845 0"));
ProtoInstance71
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-2.0514 1.8507 0 -1.2821 0.4905 0"));
ProtoInstance72
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-2.0514 1.8507 0 -1.4159 3.2554 0"));
ProtoInstance73
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-3.601 1.9845 0 -4.649 0.8473 0"));
ProtoInstance74
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-3.601 1.9845 0 -3.9355 3.5341 0"));
ProtoInstance75
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-1.2821 0.4905 0 0.2341 0.4905 0"));
ProtoInstance76
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-1.3021 0.4905 0 -2.0714 -0.8362 0"));
ProtoInstance77
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-1.2621 0.4905 0 -2.0314 -0.8362 0"));
ProtoInstance78
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-1.4159 3.2554 0 -2.5753 4.3034 0"));
ProtoInstance79
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-4.649 0.8473 0 -6.1764 1.1595 0"));
ProtoInstance80
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-4.669 0.8473 0 -4.1785 -0.6132 0"));
ProtoInstance81
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-4.6290000000000004 0.8473 0 -4.1385000000000005 -0.6132 0"));
ProtoInstance82
            .addFieldValue(new fieldValue().setName("bond_set").setValue("0.2341 0.4905 0 0.4905 2.0402 0"));
ProtoInstance83
            .addFieldValue(new fieldValue().setName("bond_set").setValue("0.2341 0.4905 0 0.4905 -1.0257 0"));
ProtoInstance84
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-6.1764 1.1595 0 -7.2243 0.0223 0"));
ProtoInstance85
            .addFieldValue(new fieldValue().setName("bond_set").setValue("0.4905 2.0402 0 1.2041 3.3892 0"));
ProtoInstance86
            .addFieldValue(new fieldValue().setName("bond_set").setValue("0.4905 -1.0257 0 1.1706 -2.4081 0"));
ProtoInstance87
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-7.2243 0.0223 0 -8.7071 0.3568 0"));
ProtoInstance88
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-7.2243 0.0223 0 -6.7226 -1.4382 0"));
ProtoInstance89
            .addFieldValue(new fieldValue().setName("bond_set").setValue("1.2041 3.3892 0 2.3078 4.4929 0"));
ProtoInstance90
            .addFieldValue(new fieldValue().setName("bond_set").setValue("1.1841 3.3892 0 -0.0646 4.3368 0"));
ProtoInstance91
            .addFieldValue(new fieldValue().setName("bond_set").setValue("1.2241 3.3892 0 -0.0246 4.3368 0"));
ProtoInstance92
            .addFieldValue(new fieldValue().setName("bond_set").setValue("1.1706 -2.4081 0 2.2855 -3.5118 0"));
ProtoInstance93
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-8.7071 0.3568 0 -9.7662 -0.7804 0"));
ProtoInstance94
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-8.7271 0.3568 0 -9.2288 1.8507 0"));
ProtoInstance95
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-8.687100000000001 0.3568 0 -9.1888 1.8507 0"));
ProtoInstance96
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-6.7226 -1.4382 0 -7.7483 -2.5753 0"));
ProtoInstance97
            .addFieldValue(new fieldValue().setName("bond_set").setValue("2.3078 4.4929 0 3.6902 5.1841 0"));
ProtoInstance98
            .addFieldValue(new fieldValue().setName("bond_set").setValue("2.3078 4.4929 0 1.3936 5.7416 0"));
ProtoInstance99
            .addFieldValue(new fieldValue().setName("bond_set").setValue("2.2855 -3.5118 0 3.6568 -4.2253 0"));
ProtoInstance100
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-9.7662 -0.7804 0 -11.2825 -0.4459 0"));
ProtoInstance101
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-7.7483 -2.5753 0 -7.2243 -4.0693 0"));
ProtoInstance102
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-7.7483 -2.5753 0 -8.7963 -2.4081 0"));
ProtoInstance103
            .addFieldValue(new fieldValue().setName("bond_set").setValue("3.6902 5.1841 0 5.2064 5.4405 0"));
ProtoInstance104
            .addFieldValue(new fieldValue().setName("bond_set").setValue("1.3936 5.7416 0 2.0291 7.1797 0"));
ProtoInstance105
            .addFieldValue(new fieldValue().setName("bond_set").setValue("3.6568 -4.2253 0 5.1841 -4.4818 0"));
ProtoInstance106
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-11.2825 -0.4459 0 -12.3304 -1.6054 0"));
ProtoInstance107
            .addFieldValue(new fieldValue().setName("bond_set").setValue("5.2064 5.4405 0 6.7561 5.1841 0"));
ProtoInstance108
            .addFieldValue(new fieldValue().setName("bond_set").setValue("5.186400000000001 5.4405 0 5.2199 6.9791 0"));
ProtoInstance109
            .addFieldValue(new fieldValue().setName("bond_set").setValue("5.2264 5.4405 0 5.259899999999999 6.9791 0"));
ProtoInstance110
            .addFieldValue(new fieldValue().setName("bond_set").setValue("2.0291 7.1797 0 1.126 8.4507 0"));
ProtoInstance111
            .addFieldValue(new fieldValue().setName("bond_set").setValue("2.0091 7.1797 0 3.5587 7.3135 0"));
ProtoInstance112
            .addFieldValue(new fieldValue().setName("bond_set").setValue("2.0491 7.1797 0 3.5987 7.3135 0"));
ProtoInstance113
            .addFieldValue(new fieldValue().setName("bond_set").setValue("5.1841 -4.4818 0 6.7226 -4.2253 0"));
ProtoInstance114
            .addFieldValue(new fieldValue().setName("bond_set").setValue("5.1841 -4.4818 0 5.1841 -6.0203 0"));
ProtoInstance115
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-12.3304 -1.6054 0 -13.8466 -1.2709 0"));
ProtoInstance116
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-12.350399999999999 -1.6054 0 -11.8822 -3.0659 0"));
ProtoInstance117
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-12.3104 -1.6054 0 -11.8422 -3.0659 0"));
ProtoInstance118
            .addFieldValue(new fieldValue().setName("bond_set").setValue("6.7561 5.1841 0 8.1385 4.4706 0"));
ProtoInstance119
            .addFieldValue(new fieldValue().setName("bond_set").setValue("6.7561 5.1841 0 7.2243 6.6781 0"));
ProtoInstance120
            .addFieldValue(new fieldValue().setName("bond_set").setValue("6.7226 -4.2253 0 8.1051 -3.5341 0"));
ProtoInstance121
            .addFieldValue(new fieldValue().setName("bond_set").setValue("6.7026 -4.2253 0 7.182 -5.7193 0"));
ProtoInstance122
            .addFieldValue(new fieldValue().setName("bond_set").setValue("6.7425999999999995 -4.2253 0 7.2219999999999995 -5.7193 0"));
ProtoInstance123
            .addFieldValue(new fieldValue().setName("bond_set").setValue("8.1385 4.4706 0 9.2422 3.3669 0"));
ProtoInstance124
            .addFieldValue(new fieldValue().setName("bond_set").setValue("7.2243 6.6781 0 8.7406 6.9791 0"));
ProtoInstance125
            .addFieldValue(new fieldValue().setName("bond_set").setValue("8.1051 -3.5341 0 9.2088 -2.4304 0"));
ProtoInstance126
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.2422 3.3669 0 9.9335 1.9845 0"));
ProtoInstance127
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.2222 3.3669 0 10.4597 4.3034 0"));
ProtoInstance128
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.2622 3.3669 0 10.499699999999999 4.3034 0"));
ProtoInstance129
            .addFieldValue(new fieldValue().setName("bond_set").setValue("8.7406 6.9791 0 9.2422 8.4507 0"));
ProtoInstance130
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.2088 -2.4304 0 10.4797 -3.3446 0"));
ProtoInstance131
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.2088 -2.4304 0 9.9335 -1.0591 0"));
ProtoInstance132
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.9335 1.9845 0 10.1787 0.4682 0"));
ProtoInstance133
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.9335 1.9845 0 11.4274 2.4862 0"));
ProtoInstance134
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.2422 8.4507 0 10.7585 8.774 0"));
ProtoInstance135
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.2222 8.4507 0 8.1966 9.6324 0"));
ProtoInstance136
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.2622 8.4507 0 8.2366 9.6324 0"));
ProtoInstance137
            .addFieldValue(new fieldValue().setName("bond_set").setValue("10.4797 -3.3446 0 10.3237 -4.8943 0"));
ProtoInstance138
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.9135 -1.0591 0 11.4074 -1.5274 0"));
ProtoInstance139
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.9535 -1.0591 0 11.4474 -1.5274 0"));
ProtoInstance140
            .addFieldValue(new fieldValue().setName("bond_set").setValue("11.4274 2.4862 0 12.5534 1.427 0"));
ProtoInstance141
            .addFieldValue(new fieldValue().setName("bond_set").setValue("11.4274 2.4862 0 11.7507 4.0024 0"));
ProtoInstance142
            .addFieldValue(new fieldValue().setName("bond_set").setValue("10.3237 -4.8943 0 8.8855 -5.5297 0"));
ProtoInstance143
            .addFieldValue(new fieldValue().setName("bond_set").setValue("10.303700000000001 -4.8943 0 11.5412 -5.8085 0"));
ProtoInstance144
            .addFieldValue(new fieldValue().setName("bond_set").setValue("10.3437 -4.8943 0 11.581199999999999 -5.8085 0"));
ProtoInstance145
            .addFieldValue(new fieldValue().setName("bond_set").setValue("12.5534 1.427 0 14.0473 1.9064 0"));
ProtoInstance146
            .addFieldValue(new fieldValue().setName("bond_set").setValue("8.8655 -5.5297 0 8.6983 -7.0794 0"));
ProtoInstance147
            .addFieldValue(new fieldValue().setName("bond_set").setValue("8.9055 -5.5297 0 8.738299999999999 -7.0794 0"));
ProtoInstance148
            .addFieldValue(new fieldValue().setName("bond_set").setValue("11.5612 -5.8085 0 11.3939 -7.347 0"));
ProtoInstance149
            .addFieldValue(new fieldValue().setName("bond_set").setValue("8.7183 -7.0794 0 9.9892 -7.9824 0"));
ProtoInstance150
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.9892 -7.9824 0 9.7885 -9.5321 0"));
ProtoInstance151
            .addFieldValue(new fieldValue().setName("bond_set").setValue("-3.9355 3.5341 0 -2.5753 4.3034 0"));
ProtoInstance152
            .addFieldValue(new fieldValue().setName("bond_set").setValue("9.9335 -1.0591 0 10.1787 0.4682 0"));
ProtoInstance153
            .addFieldValue(new fieldValue().setName("bond_set").setValue("11.3739 -7.347 0 9.9692 -7.9824 0"));
ProtoInstance154
            .addFieldValue(new fieldValue().setName("bond_set").setValue("11.4139 -7.347 0 10.0092 -7.9824 0"));
    X3D0.toFileX3D("../data/Oxytocin.new.graal.x3d");
    X3D0.toFileJSON("../data/Oxytocin.new.graal.x3dj");
