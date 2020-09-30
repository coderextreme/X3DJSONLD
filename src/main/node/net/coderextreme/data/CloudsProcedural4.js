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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.2")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("CloudsProcedural4.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Capt Darren W. Murphy"))
        .addMeta((new autoclass.meta()).setName("created").setContent("1 November 2007"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("14 January 2014"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../../license.html"))
        .addMeta((new autoclass.meta()).setName("TODO").setContent("fix links")))
      .setScene((new autoclass.Scene())
        .addComments((new autoclass.CommentsBlock("A png image file for the cloud texture must be designated in the ecmascript node.")))
        .addChild((new autoclass.Viewpoint()).setDescription("Main").setJump(false).setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57)])).setPosition(java.newArray("float", [java.newFloat(50000), java.newFloat(1000), java.newFloat(42000)])))
        .addChild((new autoclass.Viewpoint()).setDescription("Light House Tower").setJump(false).setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.3)])).setPosition(java.newArray("float", [java.newFloat(45000), java.newFloat(1290), java.newFloat(44000)])))
        .addChild((new autoclass.Viewpoint()).setDescription("centerWest").setJump(false).setOrientation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(2.5)])).setPosition(java.newArray("float", [java.newFloat(48000), java.newFloat(1000), java.newFloat(20000)])))
        .addChild((new autoclass.Background()).setGroundColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)])).setSkyColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)])).setTransparency(java.newFloat(0)))
        .addChild((new autoclass.DirectionalLight()).setAmbientIntensity(java.newFloat(1)).setDirection(java.newArray("float", [java.newFloat(-1), java.newFloat(0), java.newFloat(0)])).setGlobal(true))
        .addChild((new autoclass.Group()).setDEF("Terrain").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.Transform()).setScale(java.newArray("float", [java.newFloat(50), java.newFloat(50), java.newFloat(50)])).setTranslation(java.newArray("float", [java.newFloat(25000), java.newFloat(0), java.newFloat(25000)])).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
            .addChild((new autoclass.Inline()).setUrl(java.newArray("java.lang.String", ["MontereyBayLargeMesh.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d","MontereyBayLargeMesh.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl"])).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))))
          .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setTranslation(java.newArray("float", [java.newFloat(25000), java.newFloat(0), java.newFloat(25000)])).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
            .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
              .setGeometry((new autoclass.Rectangle2D()).setSize(java.newArray("float", [java.newFloat(77000), java.newFloat(55000)])))
              .setAppearance((new autoclass.Appearance())
                .setTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["ocean.png","https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png"])))))))
        .addChild((new autoclass.Group()).setDEF("Placemarks").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.Transform()).setScale(java.newArray("float", [java.newFloat(50), java.newFloat(50), java.newFloat(50)])).setTranslation(java.newArray("float", [java.newFloat(45000), java.newFloat(30), java.newFloat(44000)])).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
            .addChild((new autoclass.Inline()).setUrl(java.newArray("java.lang.String", ["Lighthouse.x3d","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d","Lighthouse.wrl","https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl"])).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)])))))
        .addChild((new autoclass.Group()).setDEF("Clouds").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.Transform()).setDEF("Cumulus").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)])))
          .addChild((new autoclass.Transform()).setDEF("Cirrus").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)])))
          .addChild((new autoclass.Transform()).setDEF("Fog").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)])))
          .addChild((new autoclass.DirectionalLight()).setAmbientIntensity(java.newFloat(1)).setColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])).setDirection(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(0)])).setGlobal(true))
          .addX3DScript((new autoclass.X3DScript()).setDEF("PixelScript").setDirectOutput(true)
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("Cumulus").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
              .addChild((new autoclass.Transform()).setUSE("Cumulus")))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("Cirrus").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
              .addChild((new autoclass.Transform()).setUSE("Cirrus")))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("Fog").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)))))      ;
    X3D0.toFileX3D("../data/CloudsProcedural4.new.x3d");
