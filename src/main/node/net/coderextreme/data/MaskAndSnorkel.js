var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("MaskAndSnorkel.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Diving mask and snorkel tube."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Etsuko Lippi"))
        .addMeta((new autoclass.meta()).setName("created").setContent("January 24, 2001"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("23 May 2020"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("MaskAndSnorkel.x3d"))
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.9)])))
        .addChild((new autoclass.Transform()).setDEF("maskAndSnorkel")
          .addChild((new autoclass.Transform())
            .addChild((new autoclass.Shape()).setDEF("maskFrame")
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDEF("frameColor").setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))))
              .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(java.newArray("int", [0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1])).setCreaseAngle(java.newFloat(1.45)).setSolid(false)
                .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0.08), java.newFloat(0), java.newFloat(0.02), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.06), java.newFloat(0.06), java.newFloat(0), java.newFloat(0.06), java.newFloat(0.09), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.1), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.06), java.newFloat(0.09), java.newFloat(0), java.newFloat(-0.06), java.newFloat(0.06), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.05), java.newFloat(0), java.newFloat(-0.02), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.005), java.newFloat(0.08), java.newFloat(0), java.newFloat(0.02), java.newFloat(0.055), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.055), java.newFloat(0), java.newFloat(0.055), java.newFloat(0.06), java.newFloat(0), java.newFloat(0.055), java.newFloat(0.09), java.newFloat(0), java.newFloat(0.045), java.newFloat(0.095), java.newFloat(0), java.newFloat(0.005), java.newFloat(0.095), java.newFloat(0), java.newFloat(-0.005), java.newFloat(0.08), java.newFloat(0), java.newFloat(-0.02), java.newFloat(0.055), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.055), java.newFloat(0), java.newFloat(-0.055), java.newFloat(0.06), java.newFloat(0), java.newFloat(-0.055), java.newFloat(0.09), java.newFloat(0), java.newFloat(-0.045), java.newFloat(0.095), java.newFloat(0), java.newFloat(-0.005), java.newFloat(0.095), java.newFloat(0)]))))))
          .addChild((new autoclass.Transform()).setDEF("snorkelHoldRing").setTranslation(java.newArray("float", [java.newFloat(0.075), java.newFloat(0.075), java.newFloat(-0.02)]))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("frameColor")))
              .setGeometry((new autoclass.Cylinder()).setHeight(java.newFloat(0.003)).setRadius(java.newFloat(0.015)))))
          .addChild((new autoclass.Group()).setDEF("snorkel")
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-0.02), java.newFloat(0)]))
              .addChild((new autoclass.Transform()).setScale(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)])).setTranslation(java.newArray("float", [java.newFloat(0.035), java.newFloat(-0.07), java.newFloat(-0.02)]))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setDEF("snorkelTube").setDiffuseColor(java.newArray("float", [java.newFloat(0.678), java.newFloat(1), java.newFloat(0.184)])).setTransparency(java.newFloat(0.4))))
                  .setGeometry((new autoclass.Extrusion()).setCrossSection(java.newArray("float", [java.newFloat(0), java.newFloat(0.013), java.newFloat(0.00494), java.newFloat(0.01196), java.newFloat(0.00923), java.newFloat(0.00923), java.newFloat(0.01196), java.newFloat(0.00494), java.newFloat(0.013), java.newFloat(0), java.newFloat(0.01196), java.newFloat(-0.00494), java.newFloat(0.00923), java.newFloat(-0.00923), java.newFloat(0.00494), java.newFloat(-0.01196), java.newFloat(0), java.newFloat(0.013), java.newFloat(-0.00494), java.newFloat(-0.01196), java.newFloat(-0.00923), java.newFloat(-0.00923), java.newFloat(-0.01196), java.newFloat(-0.00494), java.newFloat(-0.013), java.newFloat(0), java.newFloat(-0.01196), java.newFloat(0.00494), java.newFloat(-0.00923), java.newFloat(0.00923), java.newFloat(-0.00494), java.newFloat(0.01196), java.newFloat(0), java.newFloat(0.013)])).setSpine(java.newArray("float", [java.newFloat(-0.01), java.newFloat(-0.04), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.03), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.2), java.newFloat(0), java.newFloat(0.03), java.newFloat(0.4), java.newFloat(0.03)])))))
              .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)])).setScale(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)])).setTranslation(java.newArray("float", [java.newFloat(0.01), java.newFloat(-0.04), java.newFloat(-0.02)]))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setDEF("Mouthpiece").setDiffuseColor(java.newArray("float", [java.newFloat(0.678), java.newFloat(1), java.newFloat(0.8)])).setTransparency(java.newFloat(0.4))))
                  .setGeometry((new autoclass.Extrusion()).setCrossSection(java.newArray("float", [java.newFloat(0), java.newFloat(0.013), java.newFloat(0.00494), java.newFloat(0.01196), java.newFloat(0.00923), java.newFloat(0.00923), java.newFloat(0.01196), java.newFloat(0.00494), java.newFloat(0.013), java.newFloat(0), java.newFloat(0.01196), java.newFloat(-0.00494), java.newFloat(0.00923), java.newFloat(-0.00923), java.newFloat(0.00494), java.newFloat(-0.01196), java.newFloat(0), java.newFloat(0.013), java.newFloat(-0.00494), java.newFloat(-0.01196), java.newFloat(-0.00923), java.newFloat(-0.00923), java.newFloat(-0.01196), java.newFloat(-0.00494), java.newFloat(-0.013), java.newFloat(0), java.newFloat(-0.01196), java.newFloat(0.00494), java.newFloat(-0.00923), java.newFloat(0.00923), java.newFloat(-0.00494), java.newFloat(0.01196), java.newFloat(0), java.newFloat(0.013)])).setSpine(java.newArray("float", [java.newFloat(-0.01), java.newFloat(-0.03), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.02), java.newFloat(0.01), java.newFloat(0)])))))
              .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(-0.85)])).setScale(java.newArray("float", [java.newFloat(0.9), java.newFloat(0.9), java.newFloat(0.9)])).setTranslation(java.newArray("float", [java.newFloat(0.005), java.newFloat(-0.01), java.newFloat(-0.02)]))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setUSE("Mouthpiece")))
                  .setGeometry((new autoclass.Extrusion()).setCrossSection(java.newArray("float", [java.newFloat(0), java.newFloat(0.013), java.newFloat(0.00494), java.newFloat(0.01196), java.newFloat(0.00923), java.newFloat(0.00923), java.newFloat(0.01196), java.newFloat(0.00494), java.newFloat(0.013), java.newFloat(0), java.newFloat(0.01196), java.newFloat(-0.00494), java.newFloat(0.00923), java.newFloat(-0.00923), java.newFloat(0.00494), java.newFloat(-0.01196), java.newFloat(0), java.newFloat(0.013)])).setSpine(java.newArray("float", [java.newFloat(-0.02), java.newFloat(-0.03), java.newFloat(0), java.newFloat(-0.01), java.newFloat(-0.03), java.newFloat(0), java.newFloat(0), java.newFloat(-0.0175), java.newFloat(0), java.newFloat(0), java.newFloat(-0.0135), java.newFloat(0), java.newFloat(-0.01), java.newFloat(0), java.newFloat(0), java.newFloat(-0.02), java.newFloat(0), java.newFloat(0)])))))))
          .addChild((new autoclass.Transform())
            .addChild((new autoclass.Shape()).setDEF("maskLensR")
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDEF("plastic").setDiffuseColor(java.newArray("float", [java.newFloat(0.941), java.newFloat(0.973), java.newFloat(1)])).setTransparency(java.newFloat(0.8))))
              .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(java.newArray("int", [12,13,14,15,16,17,18,12,-1])).setCreaseAngle(java.newFloat(1.45)).setSolid(false)
                .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0.08), java.newFloat(0), java.newFloat(0.02), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.06), java.newFloat(0.06), java.newFloat(0), java.newFloat(0.06), java.newFloat(0.09), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.1), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.06), java.newFloat(0.09), java.newFloat(0), java.newFloat(-0.06), java.newFloat(0.06), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.05), java.newFloat(0), java.newFloat(-0.02), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.005), java.newFloat(0.08), java.newFloat(0), java.newFloat(0.02), java.newFloat(0.055), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.055), java.newFloat(0), java.newFloat(0.055), java.newFloat(0.06), java.newFloat(0), java.newFloat(0.055), java.newFloat(0.09), java.newFloat(0), java.newFloat(0.045), java.newFloat(0.095), java.newFloat(0), java.newFloat(0.005), java.newFloat(0.095), java.newFloat(0), java.newFloat(-0.005), java.newFloat(0.08), java.newFloat(0), java.newFloat(-0.02), java.newFloat(0.055), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.055), java.newFloat(0), java.newFloat(-0.055), java.newFloat(0.06), java.newFloat(0), java.newFloat(-0.055), java.newFloat(0.09), java.newFloat(0), java.newFloat(-0.045), java.newFloat(0.095), java.newFloat(0), java.newFloat(-0.005), java.newFloat(0.095), java.newFloat(0)]))))))
          .addChild((new autoclass.Transform())
            .addChild((new autoclass.Shape()).setDEF("maskLensL")
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("plastic")))
              .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(java.newArray("int", [19,20,21,22,23,24,25,19,-1])).setCreaseAngle(java.newFloat(1.45)).setSolid(false)
                .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0.08), java.newFloat(0), java.newFloat(0.02), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.06), java.newFloat(0.06), java.newFloat(0), java.newFloat(0.06), java.newFloat(0.09), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.1), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.06), java.newFloat(0.09), java.newFloat(0), java.newFloat(-0.06), java.newFloat(0.06), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.05), java.newFloat(0), java.newFloat(-0.02), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.005), java.newFloat(0.08), java.newFloat(0), java.newFloat(0.02), java.newFloat(0.055), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.055), java.newFloat(0), java.newFloat(0.055), java.newFloat(0.06), java.newFloat(0), java.newFloat(0.055), java.newFloat(0.09), java.newFloat(0), java.newFloat(0.045), java.newFloat(0.095), java.newFloat(0), java.newFloat(0.005), java.newFloat(0.095), java.newFloat(0), java.newFloat(-0.005), java.newFloat(0.08), java.newFloat(0), java.newFloat(-0.02), java.newFloat(0.055), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.055), java.newFloat(0), java.newFloat(-0.055), java.newFloat(0.06), java.newFloat(0), java.newFloat(-0.055), java.newFloat(0.09), java.newFloat(0), java.newFloat(-0.045), java.newFloat(0.095), java.newFloat(0), java.newFloat(-0.005), java.newFloat(0.095), java.newFloat(0)]))))))
          .addChild((new autoclass.Transform())
            .addChild((new autoclass.Shape()).setDEF("nose")
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDEF("plasticFit").setDiffuseColor(java.newArray("float", [java.newFloat(0.678), java.newFloat(1), java.newFloat(0.184)])).setTransparency(java.newFloat(0.7))))
              .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(java.newArray("int", [0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1])).setCreaseAngle(java.newFloat(1.45)).setSolid(false)
                .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0.08), java.newFloat(0), java.newFloat(0.02), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.06), java.newFloat(0.06), java.newFloat(0), java.newFloat(0.06), java.newFloat(0.09), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.1), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.06), java.newFloat(0.09), java.newFloat(0), java.newFloat(-0.06), java.newFloat(0.06), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.05), java.newFloat(0), java.newFloat(-0.02), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.005), java.newFloat(0.08), java.newFloat(0), java.newFloat(0.02), java.newFloat(0.055), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.055), java.newFloat(0), java.newFloat(0.055), java.newFloat(0.06), java.newFloat(0), java.newFloat(0.055), java.newFloat(0.09), java.newFloat(0), java.newFloat(0.045), java.newFloat(0.095), java.newFloat(0), java.newFloat(0.005), java.newFloat(0.095), java.newFloat(0), java.newFloat(-0.005), java.newFloat(0.08), java.newFloat(0), java.newFloat(-0.02), java.newFloat(0.055), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.055), java.newFloat(0), java.newFloat(-0.055), java.newFloat(0.06), java.newFloat(0), java.newFloat(-0.055), java.newFloat(0.09), java.newFloat(0), java.newFloat(-0.045), java.newFloat(0.095), java.newFloat(0), java.newFloat(-0.005), java.newFloat(0.095), java.newFloat(0), java.newFloat(0), java.newFloat(0.04), java.newFloat(0.015), java.newFloat(0.05), java.newFloat(0.04), java.newFloat(-0.03), java.newFloat(0.06), java.newFloat(0.05), java.newFloat(-0.03), java.newFloat(0.07), java.newFloat(0.095), java.newFloat(-0.03), java.newFloat(0.055), java.newFloat(0.11), java.newFloat(-0.03), java.newFloat(0), java.newFloat(0.11), java.newFloat(-0.02), java.newFloat(-0.055), java.newFloat(0.11), java.newFloat(-0.03), java.newFloat(-0.07), java.newFloat(0.095), java.newFloat(-0.03), java.newFloat(-0.06), java.newFloat(0.05), java.newFloat(-0.03), java.newFloat(-0.05), java.newFloat(0.04), java.newFloat(-0.03), java.newFloat(-0.02), java.newFloat(0.04), java.newFloat(-0.02), java.newFloat(0.02), java.newFloat(0.04), java.newFloat(-0.02)]))))))
          .addChild((new autoclass.Transform())
            .addChild((new autoclass.Shape()).setDEF("faceFit")
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("plasticFit")))
              .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(java.newArray("int", [1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1])).setCreaseAngle(java.newFloat(1.45)).setSolid(false)
                .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0.08), java.newFloat(0), java.newFloat(0.02), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.06), java.newFloat(0.06), java.newFloat(0), java.newFloat(0.06), java.newFloat(0.09), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.1), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.06), java.newFloat(0.09), java.newFloat(0), java.newFloat(-0.06), java.newFloat(0.06), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.05), java.newFloat(0), java.newFloat(-0.02), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.005), java.newFloat(0.08), java.newFloat(0), java.newFloat(0.02), java.newFloat(0.055), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.055), java.newFloat(0), java.newFloat(0.055), java.newFloat(0.06), java.newFloat(0), java.newFloat(0.055), java.newFloat(0.09), java.newFloat(0), java.newFloat(0.045), java.newFloat(0.095), java.newFloat(0), java.newFloat(0.005), java.newFloat(0.095), java.newFloat(0), java.newFloat(-0.005), java.newFloat(0.08), java.newFloat(0), java.newFloat(-0.02), java.newFloat(0.055), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.055), java.newFloat(0), java.newFloat(-0.055), java.newFloat(0.06), java.newFloat(0), java.newFloat(-0.055), java.newFloat(0.09), java.newFloat(0), java.newFloat(-0.045), java.newFloat(0.095), java.newFloat(0), java.newFloat(-0.005), java.newFloat(0.095), java.newFloat(0), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.015), java.newFloat(0.05), java.newFloat(0.04), java.newFloat(-0.03), java.newFloat(0.06), java.newFloat(0.05), java.newFloat(-0.03), java.newFloat(0.07), java.newFloat(0.095), java.newFloat(-0.03), java.newFloat(0.055), java.newFloat(0.11), java.newFloat(-0.03), java.newFloat(0), java.newFloat(0.11), java.newFloat(-0.02), java.newFloat(-0.055), java.newFloat(0.11), java.newFloat(-0.03), java.newFloat(-0.07), java.newFloat(0.095), java.newFloat(-0.03), java.newFloat(-0.06), java.newFloat(0.05), java.newFloat(-0.03), java.newFloat(-0.05), java.newFloat(0.04), java.newFloat(-0.03), java.newFloat(-0.02), java.newFloat(0.04), java.newFloat(-0.02), java.newFloat(0.02), java.newFloat(0.04), java.newFloat(-0.02)]))))))
          .addChild((new autoclass.Transform())
            .addChild((new autoclass.Shape()).setDEF("belt")
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("plastic")))
              .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(java.newArray("int", [3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1])).setCreaseAngle(java.newFloat(1.45)).setSolid(false)
                .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0.08), java.newFloat(0), java.newFloat(0.02), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.06), java.newFloat(0.06), java.newFloat(0), java.newFloat(0.06), java.newFloat(0.09), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.1), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.06), java.newFloat(0.09), java.newFloat(0), java.newFloat(-0.06), java.newFloat(0.06), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.05), java.newFloat(0), java.newFloat(-0.02), java.newFloat(0.05), java.newFloat(0), java.newFloat(0.005), java.newFloat(0.08), java.newFloat(0), java.newFloat(0.02), java.newFloat(0.055), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.055), java.newFloat(0), java.newFloat(0.055), java.newFloat(0.06), java.newFloat(0), java.newFloat(0.055), java.newFloat(0.09), java.newFloat(0), java.newFloat(0.045), java.newFloat(0.095), java.newFloat(0), java.newFloat(0.005), java.newFloat(0.095), java.newFloat(0), java.newFloat(-0.005), java.newFloat(0.08), java.newFloat(0), java.newFloat(-0.02), java.newFloat(0.055), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.055), java.newFloat(0), java.newFloat(-0.055), java.newFloat(0.06), java.newFloat(0), java.newFloat(-0.055), java.newFloat(0.09), java.newFloat(0), java.newFloat(-0.045), java.newFloat(0.095), java.newFloat(0), java.newFloat(-0.005), java.newFloat(0.095), java.newFloat(0), java.newFloat(0), java.newFloat(0.05), java.newFloat(0.015), java.newFloat(0.05), java.newFloat(0.04), java.newFloat(-0.03), java.newFloat(0.06), java.newFloat(0.05), java.newFloat(-0.03), java.newFloat(0.07), java.newFloat(0.095), java.newFloat(-0.03), java.newFloat(0.055), java.newFloat(0.11), java.newFloat(-0.03), java.newFloat(0), java.newFloat(0.11), java.newFloat(-0.02), java.newFloat(-0.055), java.newFloat(0.11), java.newFloat(-0.03), java.newFloat(-0.07), java.newFloat(0.095), java.newFloat(-0.03), java.newFloat(-0.06), java.newFloat(0.05), java.newFloat(-0.03), java.newFloat(-0.05), java.newFloat(0.04), java.newFloat(-0.03), java.newFloat(-0.02), java.newFloat(0.04), java.newFloat(-0.02), java.newFloat(0.02), java.newFloat(0.04), java.newFloat(-0.02), java.newFloat(0.075), java.newFloat(0.06), java.newFloat(-0.135), java.newFloat(0.075), java.newFloat(0.09), java.newFloat(-0.135), java.newFloat(-0.075), java.newFloat(0.06), java.newFloat(-0.135), java.newFloat(-0.075), java.newFloat(0.09), java.newFloat(-0.135), java.newFloat(0.06), java.newFloat(0.09), java.newFloat(-0.165), java.newFloat(0.06), java.newFloat(0.06), java.newFloat(-0.165), java.newFloat(-0.06), java.newFloat(0.09), java.newFloat(-0.165), java.newFloat(-0.06), java.newFloat(0.06), java.newFloat(-0.165), java.newFloat(0), java.newFloat(0.09), java.newFloat(-0.2), java.newFloat(0), java.newFloat(0.06), java.newFloat(-0.175)]))))))))      ;
    X3D0.toFileX3D("../data/MaskAndSnorkel.new.x3d");