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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("Trebuchet.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Working model of a 14th century Trebuchet Catapult."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("LT Joe Roth"))
        .addMeta((new autoclass.meta()).setName("created").setContent("20 June 2001"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
        .addMeta((new autoclass.meta()).setName("version").setContent("7.8"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://trebuchet.com"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://members.home.net/dimona"))
        .addMeta((new autoclass.meta()).setName("subject").setContent("trebuchet catapult Monty Python"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("Trebuchet.x3d"))
        .addChild((new autoclass.Background()).setBackUrl(java.newArray("java.lang.String", ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"])).setBottomUrl(java.newArray("java.lang.String", ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"])).setFrontUrl(java.newArray("java.lang.String", ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"])).setGroundAngle(java.newArray("float", [java.newFloat(1.309), java.newFloat(1.570796)])).setGroundColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0), java.newFloat(0.4), java.newFloat(0.25), java.newFloat(0.2), java.newFloat(0.6), java.newFloat(0.6), java.newFloat(0.6)])).setLeftUrl(java.newArray("java.lang.String", ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"])).setRightUrl(java.newArray("java.lang.String", ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"])).setSkyAngle(java.newArray("float", [java.newFloat(1.309), java.newFloat(1.57079)])).setSkyColor(java.newArray("float", [java.newFloat(0), java.newFloat(0.2), java.newFloat(0.7), java.newFloat(0), java.newFloat(0.5), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setTopUrl(java.newArray("java.lang.String", ["https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"])))
        .addChild((new autoclass.Sound()).setMaxBack(java.newFloat(1000)).setMaxFront(java.newFloat(1000))
          .setSource((new autoclass.AudioClip()).setDEF("HolyGrail").setDescription("HolyGrail").setLoop(true).setUrl(java.newArray("java.lang.String", ["holygral.mp3","http://www.nps.navy.mil/code32/vrml/holygral.mp3"]))))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(10000), java.newFloat(1), java.newFloat(10000)])))
          .setAppearance((new autoclass.Appearance())
            .setTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"])))))
        .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57)])).setScale(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])).setTranslation(java.newArray("float", [java.newFloat(10.5), java.newFloat(6.5), java.newFloat(4.5)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance()).setDEF("TextAppearance")
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)])).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0)]))))
            .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Click Sling to Select Projectile"]))
              .setFontStyle((new autoclass.FontStyle())))))
        .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57)])).setScale(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])).setTranslation(java.newArray("float", [java.newFloat(11), java.newFloat(5.5), java.newFloat(6)]))
          .addChild((new autoclass.Switch()).setDEF("Weight").setWhichChoice(0)
            .addChild((new autoclass.Group())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
                .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Click Here to Change Counter Weight (50 lbs)"])))))
            .addChild((new autoclass.Group())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
                .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Click Here to Change Counter Weight (500 lbs)"])))))
            .addChild((new autoclass.Group())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
                .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Click Here to Change Counter Weight (1000 lbs)"])))))
            .addChild((new autoclass.Group())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
                .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Click Here to Change Counter Weight (10000 lbs)"]))))))
          .addChild((new autoclass.TouchSensor()).setDEF("weightselector").setDescription("weight selector"))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(8), java.newFloat(0), java.newFloat(0)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(20), java.newFloat(1), java.newFloat(1)])))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(1)))))))
        .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57)])).setTranslation(java.newArray("float", [java.newFloat(10), java.newFloat(0.5), java.newFloat(4.5)]))
          .addChild((new autoclass.Transform()).setDEF("launch").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(5)]))
            .addChild((new autoclass.Billboard())
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))
                .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["LAUNCH"]))
                  .setFontStyle((new autoclass.FontStyle()))))
              .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(2), java.newFloat(0.3), java.newFloat(0)]))
                .addChild((new autoclass.Shape())
                  .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(5), java.newFloat(1), java.newFloat(1)])))
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(1))))))
              .addChild((new autoclass.Switch()).setDEF("PigdogMonk").setWhichChoice(-1)
                .addChild((new autoclass.Group())
                  .addChild((new autoclass.Sound()).setMaxBack(java.newFloat(1000)).setMaxFront(java.newFloat(1000))
                    .setSource((new autoclass.AudioClip()).setDEF("PigDogSound").setDescription("PigDogSound").setUrl(java.newArray("java.lang.String", ["pigdog.wav","http://www.nps.navy.mil/code32/vrml/pigdog.wav"])))))
                .addChild((new autoclass.Group())
                  .addChild((new autoclass.Sound()).setMaxBack(java.newFloat(1000)).setMaxFront(java.newFloat(1000))
                    .setSource((new autoclass.AudioClip()).setDEF("MonkSound").setDescription("MonkSound").setUrl(java.newArray("java.lang.String", ["monks.wav","http://www.nps.navy.mil/code32/vrml/monks.wav"])))))))
            .addChild((new autoclass.TouchSensor()).setDEF("Launch").setDescription("launch!")))
          .addChild((new autoclass.Transform())
            .addChild((new autoclass.Switch()).setDEF("projectilename").setWhichChoice(0)
              .addChild((new autoclass.Group())
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
                  .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Bowling Ball (10 lbs)"]))
                    .setFontStyle((new autoclass.FontStyle()).setSize(java.newFloat(0.5)))))
                .addChild((new autoclass.Sound()).setMaxBack(java.newFloat(1000)).setMaxFront(java.newFloat(1000)).setPriority(java.newFloat(1))
                  .setSource((new autoclass.AudioClip()).setDEF("HolyHandGrenadeSound").setDescription("HolyHandGrenadeSound").setUrl(java.newArray("java.lang.String", ["grenade.wav","http://www.nps.navy.mil/code32/vrml/grenade.wav"])))))
              .addChild((new autoclass.Group())
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
                  .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Cow (1000 lbs)"]))
                    .setFontStyle((new autoclass.FontStyle()).setSize(java.newFloat(0.5)))))
                .addChild((new autoclass.Sound()).setMaxBack(java.newFloat(1000)).setMaxFront(java.newFloat(1000))
                  .setSource((new autoclass.AudioClip()).setDEF("CowSound").setDescription("CowSound").setUrl(java.newArray("java.lang.String", ["lavache.wav","http://www.nps.navy.mil/code32/vrml/lavache.wav"])))))
              .addChild((new autoclass.Group())
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance()).setUSE("TextAppearance"))
                  .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Chicken (5 lbs)"]))
                    .setFontStyle((new autoclass.FontStyle()).setSize(java.newFloat(0.5)))))
                .addChild((new autoclass.Sound()).setMaxBack(java.newFloat(1000)).setMaxFront(java.newFloat(1000)).setPriority(java.newFloat(1))
                  .setSource((new autoclass.AudioClip()).setDEF("HamsterSound").setDescription("HamsterSound").setUrl(java.newArray("java.lang.String", ["hamster.wav","http://www.nps.navy.mil/code32/vrml/hamster.wav"]))))))))
        .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(-1.67)]))
          .addChild((new autoclass.Transform()).setDEF("aft").setTranslation(java.newArray("float", [java.newFloat(5), java.newFloat(5), java.newFloat(15)]))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-2.5), java.newFloat(-4.5), java.newFloat(-2)]))
              .addChild((new autoclass.Transform()).setUSE("launch")))))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(3), java.newFloat(0)]))
          .addChild((new autoclass.Shape()).setDEF("plank")
            .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(25), java.newFloat(1), java.newFloat(1)])))
            .setAppearance((new autoclass.Appearance()).setDEF("wood")
              .setTexture((new autoclass.ImageTexture()).setDEF("woodTexture").setUrl(java.newArray("java.lang.String", ["wood.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"])))))
          .addChild((new autoclass.Transform()).setDEF("angledsupport").setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(-5), java.newFloat(10), java.newFloat(0)]))
            .addChild((new autoclass.Shape()).setUSE("plank")))
          .addChild((new autoclass.Transform()).setDEF("angledsupport2").setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(-1)])).setTranslation(java.newArray("float", [java.newFloat(5), java.newFloat(10), java.newFloat(0)]))
            .addChild((new autoclass.Shape()).setUSE("plank")))
          .addChild((new autoclass.Transform()).setDEF("verticalsupport").setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)])).setScale(java.newArray("float", [java.newFloat(0.9), java.newFloat(1), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(11), java.newFloat(0)]))
            .addChild((new autoclass.Shape()).setUSE("plank"))
            .addComments((new autoclass.CommentsBlock("Main Verticle Support"))))
          .addChild((new autoclass.Transform()).setDEF("horizontalsupport").setScale(java.newArray("float", [java.newFloat(0.4), java.newFloat(1), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(10), java.newFloat(0)]))
            .addChild((new autoclass.Shape()).setUSE("plank")))
          .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)])).setScale(java.newArray("float", [java.newFloat(0.6), java.newFloat(1), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(5), java.newFloat(10)]))
            .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0.4)]))
              .addChild((new autoclass.Shape()).setUSE("plank"))))
          .addChild((new autoclass.Transform()).setDEF("panel").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(18.2), java.newFloat(-0.3)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(5), java.newFloat(5), java.newFloat(0.5)])))
              .setAppearance((new autoclass.Appearance()).setUSE("wood"))))
          .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.6), java.newFloat(2.5)]))
            .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)]))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Extrusion()).setBeginCap(false).setCrossSection(java.newArray("float", [java.newFloat(1), java.newFloat(-0.38), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(-1.1), java.newFloat(1), java.newFloat(-1.1), java.newFloat(1), java.newFloat(-0.38)])).setEndCap(false).setSolid(false).setSpine(java.newArray("float", [java.newFloat(0), java.newFloat(6), java.newFloat(0), java.newFloat(0), java.newFloat(-11), java.newFloat(0)])))
                .setAppearance((new autoclass.Appearance()).setUSE("wood")))))
          .addChild((new autoclass.Transform()).setDEF("flinger").setCenter(java.newArray("float", [java.newFloat(7), java.newFloat(0), java.newFloat(0)])).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0.82)])).setScale(java.newArray("float", [java.newFloat(0.9), java.newFloat(1), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(-7), java.newFloat(18), java.newFloat(2.5)]))
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(35), java.newFloat(1), java.newFloat(1)])))
                .setAppearance((new autoclass.Appearance()).setUSE("wood")))
              .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(7), java.newFloat(0), java.newFloat(0)]))
                .addChild((new autoclass.Shape())
                  .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(8), java.newFloat(2), java.newFloat(2)])))
                  .setAppearance((new autoclass.Appearance()).setUSE("wood")))))
            .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setScale(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.2), java.newFloat(0.2)])).setTranslation(java.newArray("float", [java.newFloat(-15), java.newFloat(-1), java.newFloat(0)]))
              .addChild((new autoclass.Shape()).setDEF("Torus")
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setSpecularColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                .setGeometry((new autoclass.Extrusion()).setBeginCap(false).setConvex(false).setCreaseAngle(java.newFloat(1.57)).setCrossSection(java.newArray("float", [java.newFloat(0.9), java.newFloat(0), java.newFloat(0.81), java.newFloat(-0.34), java.newFloat(0.63), java.newFloat(-0.63), java.newFloat(0.34), java.newFloat(-0.83), java.newFloat(0), java.newFloat(-0.9), java.newFloat(-0.34), java.newFloat(-0.81), java.newFloat(-0.63), java.newFloat(-0.63), java.newFloat(-0.81), java.newFloat(-0.34), java.newFloat(-0.9), java.newFloat(0), java.newFloat(-0.81), java.newFloat(0.34), java.newFloat(-0.63), java.newFloat(0.63), java.newFloat(-0.34), java.newFloat(0.81), java.newFloat(0), java.newFloat(0.9), java.newFloat(0.38), java.newFloat(0.81), java.newFloat(0.63), java.newFloat(0.63), java.newFloat(0.81), java.newFloat(0.34), java.newFloat(0.9), java.newFloat(0)])).setEndCap(false).setSpine(java.newArray("float", [java.newFloat(2), java.newFloat(0), java.newFloat(0), java.newFloat(1.85), java.newFloat(0), java.newFloat(0.77), java.newFloat(1.41), java.newFloat(0), java.newFloat(1.41), java.newFloat(0.77), java.newFloat(0), java.newFloat(1.85), java.newFloat(0), java.newFloat(0), java.newFloat(2), java.newFloat(-0.77), java.newFloat(0), java.newFloat(1.85), java.newFloat(-1.41), java.newFloat(0), java.newFloat(1.41), java.newFloat(-1.85), java.newFloat(0), java.newFloat(0.77), java.newFloat(-2), java.newFloat(0), java.newFloat(0), java.newFloat(-1.85), java.newFloat(0), java.newFloat(-0.77), java.newFloat(-1.41), java.newFloat(0), java.newFloat(-1.41), java.newFloat(-0.77), java.newFloat(0), java.newFloat(-1.85), java.newFloat(0), java.newFloat(0), java.newFloat(-2), java.newFloat(0.77), java.newFloat(0), java.newFloat(-1.85), java.newFloat(1.41), java.newFloat(0), java.newFloat(-1.41), java.newFloat(1.85), java.newFloat(0), java.newFloat(-0.77), java.newFloat(2), java.newFloat(0), java.newFloat(0)]))))
              .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(2)]))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance()).setDEF("rope")
                    .setTexture((new autoclass.ImageTexture()).setUSE("woodTexture")))
                  .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(1.5))))
                .addComments((new autoclass.CommentsBlock("knott")))))
            .addComments((new autoclass.CommentsBlock("The Unicorn")))
            .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.2)])).setScale(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.2), java.newFloat(0.2)])).setTranslation(java.newArray("float", [java.newFloat(-18.3), java.newFloat(0.3), java.newFloat(0)]))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Cylinder()).setHeight(java.newFloat(10)))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setSpecularColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))))
              .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2.5), java.newFloat(0)]))
                .addComments((new autoclass.CommentsBlock("The Unicorn")))
                .addChild((new autoclass.Shape()).setUSE("Torus"))
                .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-2), java.newFloat(0), java.newFloat(0)]))
                  .addChild((new autoclass.Shape())
                    .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(1.5)))
                    .setAppearance((new autoclass.Appearance()).setUSE("rope")))
                  .addComments((new autoclass.CommentsBlock("Knott")))))
              .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.2)])).setTranslation(java.newArray("float", [java.newFloat(15), java.newFloat(55), java.newFloat(-11)]))
                .addChild((new autoclass.Transform()).setScale(java.newArray("float", [java.newFloat(5), java.newFloat(5), java.newFloat(5)]))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance()).setUSE("rope"))
                    .setGeometry((new autoclass.Extrusion()).setBeginCap(false).setCreaseAngle(java.newFloat(0.76)).setCrossSection(java.newArray("float", [java.newFloat(0.1), java.newFloat(0), java.newFloat(0.092), java.newFloat(-0.038), java.newFloat(0.071), java.newFloat(-0.071), java.newFloat(0.038), java.newFloat(-0.092), java.newFloat(0), java.newFloat(-0.1), java.newFloat(-0.038), java.newFloat(-0.092), java.newFloat(-0.071), java.newFloat(-0.071), java.newFloat(-0.092), java.newFloat(-0.038), java.newFloat(-0.1), java.newFloat(0), java.newFloat(-0.092), java.newFloat(0.038), java.newFloat(-0.071), java.newFloat(0.071), java.newFloat(-0.038), java.newFloat(0.092), java.newFloat(0), java.newFloat(0.1), java.newFloat(0.038), java.newFloat(0.092), java.newFloat(0.071), java.newFloat(0.071), java.newFloat(0.092), java.newFloat(0.038), java.newFloat(0.1), java.newFloat(0)])).setEndCap(false).setSolid(false).setSpine(java.newArray("float", [java.newFloat(-15.2), java.newFloat(1.4), java.newFloat(2.2), java.newFloat(-12), java.newFloat(-0.8), java.newFloat(2.2)])))))))
            .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.7)])).setTranslation(java.newArray("float", [java.newFloat(-17), java.newFloat(-4.5), java.newFloat(0)]))
              .addChild((new autoclass.Transform()).setScale(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.2), java.newFloat(0.2)]))
                .addComments((new autoclass.CommentsBlock("Knot")))
                .addChild((new autoclass.Shape()).setUSE("Torus"))
                .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-1), java.newFloat(0), java.newFloat(1.7)]))
                  .addChild((new autoclass.Shape())
                    .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(1.5)))
                    .setAppearance((new autoclass.Appearance()).setUSE("rope"))))))
            .addChild((new autoclass.Transform()).setDEF("RnS")
              .addChild((new autoclass.Transform()).setDEF("ropes")
                .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(-0.82)])).setTranslation(java.newArray("float", [java.newFloat(7), java.newFloat(-26), java.newFloat(-2.5)]))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance()).setUSE("rope"))
                    .setGeometry((new autoclass.Extrusion()).setBeginCap(false).setCreaseAngle(java.newFloat(0.76)).setCrossSection(java.newArray("float", [java.newFloat(0.1), java.newFloat(0), java.newFloat(0.092), java.newFloat(-0.038), java.newFloat(0.071), java.newFloat(-0.071), java.newFloat(0.038), java.newFloat(-0.092), java.newFloat(0), java.newFloat(-0.1), java.newFloat(-0.038), java.newFloat(-0.092), java.newFloat(-0.071), java.newFloat(-0.071), java.newFloat(-0.092), java.newFloat(-0.038), java.newFloat(-0.1), java.newFloat(0), java.newFloat(-0.092), java.newFloat(0.038), java.newFloat(-0.071), java.newFloat(0.071), java.newFloat(-0.038), java.newFloat(0.092), java.newFloat(0), java.newFloat(0.1), java.newFloat(0.038), java.newFloat(0.092), java.newFloat(0.071), java.newFloat(0.071), java.newFloat(0.092), java.newFloat(0.038), java.newFloat(0.1), java.newFloat(0)])).setEndCap(false).setSolid(false).setSpine(java.newArray("float", [java.newFloat(-33), java.newFloat(0.9), java.newFloat(2.5), java.newFloat(-18.5), java.newFloat(1.9), java.newFloat(2.55)]))))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance()).setUSE("rope"))
                    .setGeometry((new autoclass.Extrusion()).setBeginCap(false).setCreaseAngle(java.newFloat(0.76)).setCrossSection(java.newArray("float", [java.newFloat(0.1), java.newFloat(0), java.newFloat(0.092), java.newFloat(-0.038), java.newFloat(0.071), java.newFloat(-0.071), java.newFloat(0.038), java.newFloat(-0.092), java.newFloat(0), java.newFloat(-0.1), java.newFloat(-0.038), java.newFloat(-0.092), java.newFloat(-0.071), java.newFloat(-0.071), java.newFloat(-0.092), java.newFloat(-0.038), java.newFloat(-0.1), java.newFloat(0), java.newFloat(-0.092), java.newFloat(0.038), java.newFloat(-0.071), java.newFloat(0.071), java.newFloat(-0.038), java.newFloat(0.092), java.newFloat(0), java.newFloat(0.1), java.newFloat(0.038), java.newFloat(0.092), java.newFloat(0.071), java.newFloat(0.071), java.newFloat(0.092), java.newFloat(0.038), java.newFloat(0.1), java.newFloat(0)])).setEndCap(false).setSolid(false).setSpine(java.newArray("float", [java.newFloat(-35.7), java.newFloat(-0.8), java.newFloat(2.5), java.newFloat(-18.8), java.newFloat(-0.8), java.newFloat(2.55)]))))))
              .addChild((new autoclass.Transform()).setDEF("sling").setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(-0.82)])).setTranslation(java.newArray("float", [java.newFloat(-4), java.newFloat(-15.3), java.newFloat(0)]))
                .addChild((new autoclass.Transform())
                  .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(-1.57)])).setScale(java.newArray("float", [java.newFloat(1), java.newFloat(1.3), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(0.5), java.newFloat(0), java.newFloat(-1)]))
                    .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)]))
                      .addChild((new autoclass.Transform()).setScale(java.newArray("float", [java.newFloat(0.3), java.newFloat(0.3), java.newFloat(0.3)]))
                        .addChild((new autoclass.Shape()).setDEF("halfsling")
                          .setAppearance((new autoclass.Appearance()).setDEF("clear")
                            .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(0.5))))
                          .setGeometry((new autoclass.Extrusion()).setCrossSection(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(5), java.newFloat(0.5), java.newFloat(7), java.newFloat(1), java.newFloat(8), java.newFloat(2), java.newFloat(9), java.newFloat(3), java.newFloat(11), java.newFloat(3.5), java.newFloat(11.2), java.newFloat(4), java.newFloat(11), java.newFloat(5), java.newFloat(9), java.newFloat(6), java.newFloat(8), java.newFloat(6.5), java.newFloat(7), java.newFloat(6.7), java.newFloat(5), java.newFloat(6.7), java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setSpine(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0), java.newFloat(0)]))))
                        .addChild((new autoclass.Transform()).setScale(java.newArray("float", [java.newFloat(0.3), java.newFloat(0.3), java.newFloat(0.3)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-3.5), java.newFloat(11.5)]))
                          .addChild((new autoclass.Shape()).setUSE("Torus"))
                          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(2)]))
                            .addChild((new autoclass.Shape())
                              .setAppearance((new autoclass.Appearance()).setUSE("rope"))
                              .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(1.5)))))))
                      .addChild((new autoclass.Transform()).setScale(java.newArray("float", [java.newFloat(0.3), java.newFloat(0.3), java.newFloat(0.3)])).setTranslation(java.newArray("float", [java.newFloat(2), java.newFloat(0), java.newFloat(0)]))
                        .addChild((new autoclass.Shape()).setUSE("halfsling"))
                        .addChild((new autoclass.Transform()).setScale(java.newArray("float", [java.newFloat(0.3), java.newFloat(0.3), java.newFloat(0.3)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-3.5), java.newFloat(11.3)]))
                          .addChild((new autoclass.Shape()).setUSE("Torus"))
                          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(2)]))
                            .addChild((new autoclass.Shape())
                              .setAppearance((new autoclass.Appearance()).setUSE("rope"))
                              .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(1.5)))))))
                      .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(-1), java.newFloat(0)]))
                        .addChild((new autoclass.Shape())
                          .setGeometry((new autoclass.Extrusion()).setBeginCap(false).setCreaseAngle(java.newFloat(0.785)).setCrossSection(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0.92), java.newFloat(-0.38), java.newFloat(0.71), java.newFloat(-0.71), java.newFloat(0.38), java.newFloat(-0.92), java.newFloat(0), java.newFloat(-1), java.newFloat(-0.38), java.newFloat(-0.92), java.newFloat(-0.71), java.newFloat(-0.71), java.newFloat(-0.92), java.newFloat(-0.38), java.newFloat(-1), java.newFloat(0)])).setEndCap(false).setSolid(false).setSpine(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)])))
                          .setAppearance((new autoclass.Appearance()).setUSE("clear")))))
                    .addChild((new autoclass.TouchSensor()).setDEF("LauncheeChoice").setDescription("launcher choice")))
                  .addChild((new autoclass.Transform()).setDEF("projectiletransform").setScale(java.newArray("float", [java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01)]))
                    .addChild((new autoclass.Switch()).setDEF("projectile").setWhichChoice(0)
                      .addChild((new autoclass.Group())
                        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.7), java.newFloat(0)]))
                          .addChild((new autoclass.Shape())
                            .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.7)))
                            .setAppearance((new autoclass.Appearance()).setDEF("black")
                              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setSpecularColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))))))
                      .addChild((new autoclass.Group())
                        .addChild((new autoclass.Transform())
                          .addChild((new autoclass.Inline()).setUrl(java.newArray("java.lang.String", ["cow.wrl","http://www.uoguelph.ca/~dchiu/cow.wrl"])))))
                      .addChild((new autoclass.Group())
                        .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57)])).setScale(java.newArray("float", [java.newFloat(0.4), java.newFloat(0.4), java.newFloat(0.4)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.7), java.newFloat(0)]))
                          .addChild((new autoclass.Inline()).setUrl(java.newArray("java.lang.String", ["vrml_ginger.wrl","http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"])))))))))))
          .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(18), java.newFloat(2.5)]))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()).setHeight(java.newFloat(8)).setRadius(java.newFloat(0.4)))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setSpecularColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))))
            .addComments((new autoclass.CommentsBlock("Top Pivot"))))
          .addChild((new autoclass.Transform()).setDEF("verticalweight")
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(4), java.newFloat(18), java.newFloat(1.8)]))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(1), java.newFloat(10), java.newFloat(0.5)])))
                .setAppearance((new autoclass.Appearance()).setUSE("wood"))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(4), java.newFloat(18), java.newFloat(3.2)]))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(1), java.newFloat(10), java.newFloat(0.5)])))
                .setAppearance((new autoclass.Appearance()).setUSE("wood"))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(4), java.newFloat(14), java.newFloat(2.5)]))
              .addComments((new autoclass.CommentsBlock("CounterWeight")))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Cylinder()).setHeight(java.newFloat(4)).setRadius(java.newFloat(1.5)))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setSpecularColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))))
            .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setTranslation(java.newArray("float", [java.newFloat(4), java.newFloat(22), java.newFloat(2.5)]))
              .addChild((new autoclass.Shape())
                .setGeometry((new autoclass.Cylinder()).setHeight(java.newFloat(2.5)).setRadius(java.newFloat(0.3)))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setSpecularColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))))))
          .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)])).setScale(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.2), java.newFloat(0.2)])).setTranslation(java.newArray("float", [java.newFloat(-11.5), java.newFloat(-1), java.newFloat(2)]))
            .addChild((new autoclass.Transform()).setDEF("screw").setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)]))
              .addChild((new autoclass.Shape()).setUSE("Torus"))
              .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(7)]))
                .addChild((new autoclass.Shape())
                  .setGeometry((new autoclass.Cylinder()).setHeight(java.newFloat(10)).setRadius(java.newFloat(0.7)))
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setSpecularColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(7)]))
              .addChild((new autoclass.Transform()).setUSE("screw")))
            .addComments((new autoclass.CommentsBlock("Release Pin")))
            .addChild((new autoclass.Transform()).setDEF("Pin").setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-3)]))
              .addChild((new autoclass.Transform()).setUSE("screw"))))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(5)]))
            .addChild((new autoclass.Shape()).setUSE("plank"))
            .addChild((new autoclass.Transform()).setUSE("angledsupport"))
            .addChild((new autoclass.Transform()).setUSE("angledsupport2"))
            .addChild((new autoclass.Transform()).setUSE("verticalsupport"))
            .addChild((new autoclass.Transform()).setUSE("horizontalsupport"))
            .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57)])).setScale(java.newArray("float", [java.newFloat(0.6), java.newFloat(1), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-11), java.newFloat(-2.5)]))
              .addChild((new autoclass.Transform()).setUSE("horizontalsupport")))
            .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(-1.57)])).setScale(java.newArray("float", [java.newFloat(0.6), java.newFloat(1), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(5), java.newFloat(-10)]))
              .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0.4)]))
                .addChild((new autoclass.Shape()).setUSE("plank"))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.6)]))
              .addChild((new autoclass.Transform()).setUSE("panel"))))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(10), java.newFloat(-1), java.newFloat(2.5)]))
            .addChild((new autoclass.Shape()).setDEF("Axle")
              .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(8)])))
              .setAppearance((new autoclass.Appearance()).setUSE("wood")))
            .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(4.5)]))
              .addChild((new autoclass.Shape()).setDEF("wheel")
                .setGeometry((new autoclass.Cylinder()).setRadius(java.newFloat(2)))
                .setAppearance((new autoclass.Appearance()).setUSE("wood")))
              .addChild((new autoclass.Shape()).setDEF("tracks")
                .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(1.5)))
                .setAppearance((new autoclass.Appearance()).setUSE("black")))
              .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.55), java.newFloat(0)]))
                .addChild((new autoclass.Shape()).setDEF("hub")
                  .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(1.5)))
                  .setAppearance((new autoclass.Appearance()).setUSE("black")))))
            .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-4.5)]))
              .addChild((new autoclass.Shape()).setUSE("wheel"))
              .addChild((new autoclass.Shape()).setUSE("tracks"))
              .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-0.55), java.newFloat(0)]))
                .addChild((new autoclass.Shape()).setUSE("hub")))))
          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-10), java.newFloat(-1), java.newFloat(2.5)]))
            .addChild((new autoclass.Shape()).setUSE("Axle"))
            .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(4.5)]))
              .addChild((new autoclass.Shape()).setUSE("wheel"))
              .addChild((new autoclass.Shape()).setUSE("tracks"))
              .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.55), java.newFloat(0)]))
                .addChild((new autoclass.Shape()).setUSE("hub"))))
            .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-4.5)]))
              .addChild((new autoclass.Shape()).setUSE("wheel"))
              .addChild((new autoclass.Shape()).setUSE("tracks"))
              .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-0.55), java.newFloat(0)]))
                .addChild((new autoclass.Shape()).setUSE("hub"))))
            .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(-0.6)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(100), java.newFloat(400)]))
              .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(3), java.newFloat(0)]))
                .addChild((new autoclass.Viewpoint()).setDescription("Side")))
              .addChild((new autoclass.Transform()).setUSE("launch"))
              .addChild((new autoclass.Transform())
                .addChild((new autoclass.TouchSensor()).setUSE("LauncheeChoice"))
                .addChild((new autoclass.Switch()).setUSE("projectilename"))
                .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(2.5), java.newFloat(0), java.newFloat(0)]))
                  .addChild((new autoclass.Shape())
                    .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(5), java.newFloat(0.5), java.newFloat(0.5)])))
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(1)))))))
              .addChild((new autoclass.Transform()).setScale(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(0)]))
                .addChild((new autoclass.TouchSensor()).setUSE("weightselector"))
                .addChild((new autoclass.Switch()).setUSE("Weight"))
                .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(8), java.newFloat(0), java.newFloat(0)]))
                  .addChild((new autoclass.Shape())
                    .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(17), java.newFloat(1), java.newFloat(0.5)])))
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(1))))))))
            .addChild((new autoclass.Transform()).setDEF("ProjectileTransform").setTranslation(java.newArray("float", [java.newFloat(14.25), java.newFloat(1.25), java.newFloat(0)]))
              .addChild((new autoclass.Switch()).setUSE("projectile"))
              .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .addChild((new autoclass.Viewpoint()).setDescription("Projectile Cam").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(15)])))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(20), java.newFloat(2), java.newFloat(0)]))
              .addChild((new autoclass.Transform()).setDEF("Front").setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57)]))
                .addChild((new autoclass.Viewpoint()).setDescription("Fore"))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-8), java.newFloat(4), java.newFloat(0)]))
              .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(-1.57)]))
                .addChild((new autoclass.Viewpoint()).setDescription("Aft"))))
            .addChild((new autoclass.Script()).setDEF("WeightScript")
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("set_boolean").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setName("whichchoice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("CounterWeight").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	whichchoice =0;\n"+
"	CounterWeight=100;\n"+
"}\n"+
"\n"+
"function set_boolean ( boolean_input, eventTime)\n"+
"{\n"+
"\n"+
"	if ( boolean_input== false ) { return; } // ignore the unclick\n"+
"        whichchoice = whichchoice +1;\n"+
"	if (whichchoice == 0)CounterWeight=50.00;\n"+
"	if (whichchoice == 1)CounterWeight=500.00;\n"+
"	if (whichchoice == 2)CounterWeight=1000.00;\n"+
"	if (whichchoice == 3)CounterWeight=10000.00;\n"+
"        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }\n"+
"\n"+
"\n"+
"        Browser.println ('CounterWeight ='+CounterWeight);\n"+
"}"))
            .addChild((new autoclass.Script()).setDEF("LauncheeScript")
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("set_boolean").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setName("whichchoice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("ProjectileWeight").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function set_boolean (boolean_input, eventTime)\n"+
"{\n"+
"	if ( boolean_input== false ) { return; } // ignore unclick\n"+
"        whichchoice = whichchoice +1;\n"+
"        if (whichchoice == 0)ProjectileWeight=10.00;\n"+
"        if (whichchoice == 1)ProjectileWeight=1000.00;\n"+
"	if (whichchoice == 2)ProjectileWeight=5;\n"+
"\n"+
"	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }\n"+
"	Browser.println ('Projectile Weight'+ProjectileWeight);\n"+
"}"))
            .addChild((new autoclass.Script()).setDEF("PigdogMonkScript")
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("set_boolean").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setName("whichchoice").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function set_boolean (boolean_input, eventTime)\n"+
"{\n"+
"	if ( boolean_input== false ) { return; } // ignore unclick\n"+
"\n"+
"        whichchoice = whichchoice +1;\n"+
"\n"+
"        if ( whichchoice ==2 )  whichchoice = 0;\n"+
"\n"+
"\n"+
"}"))
            .addChild((new autoclass.Script()).setDEF("Mover")
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("set_MassCounterWeight").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("set_MassProjectileWeight").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("MassCounterWeight").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("1"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("MassProjectileWeight").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("1"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("transparent").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("value_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	MassCounterWeight=100;\n"+
"	MassProjectileWeight=10;\n"+
"	Browser.println ('MassCounterWeight =' + MassCounterWeight);\n"+
"	Browser.println ('MassProjectileWeight =' + MassProjectileWeight);\n"+
"}\n"+
"\n"+
"function set_MassProjectileWeight (value, timestamp)\n"+
"{\n"+
"	MassProjectileWeight = value;\n"+
"	Browser.println ('new MassProjectileWeight =' + MassProjectileWeight);\n"+
"}\n"+
"function set_MassCounterWeight (value2, timestamp)\n"+
"{\n"+
"	MassCounterWeight = value2;\n"+
"	Browser.println ('new MassCounterWeight =' + MassCounterWeight);\n"+
"}\n"+
"\n"+
"\n"+
"function set_fraction ( fraction, eventTime )\n"+
"{\n"+
"	var TrebuchetHeight=45;\n"+
"	var Height =25;\n"+
"      	x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;\n"+
"	// start at TrebuchetHeight and keep along z axis (z=zero)\n"+
"	y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);\n"+
"        z = 0;\n"+
"        transparent = new SFVec3f (1,1,1);\n"+
"     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)\n"+
"		{\n"+
"		x=x-10;\n"+
"		y=y+1;\n"+
"		transparent = new SFVec3f(.01, .01, .01);\n"+
"			}\n"+
"\n"+
"	value_changed = new SFVec3f (x, y, z);\n"+
"	Browser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);\n"+
"}"))))
        .addChild((new autoclass.TimeSensor()).setDEF("clock").setCycleInterval(10))
        .addChild((new autoclass.PositionInterpolator()).setDEF("verticalweightpath").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.1), java.newFloat(0.2), java.newFloat(0.2), java.newFloat(0.3), java.newFloat(0.9)])).setKeyValue(java.newArray("float", [java.newFloat(1.4), java.newFloat(1.6), java.newFloat(0), java.newFloat(1), java.newFloat(-8), java.newFloat(0), java.newFloat(-3.5), java.newFloat(-12), java.newFloat(0), java.newFloat(-3.5), java.newFloat(-12), java.newFloat(0), java.newFloat(1.2), java.newFloat(-8), java.newFloat(0), java.newFloat(1.4), java.newFloat(1.6), java.newFloat(0)])))
        .addChild((new autoclass.OrientationInterpolator()).setDEF("flingerangles").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.1), java.newFloat(0.2), java.newFloat(0.2), java.newFloat(0.3), java.newFloat(0.9)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0.82), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(-0.77), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(-1.57), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(-1.57), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(-0.77), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0.82)])))
        .addChild((new autoclass.PositionInterpolator()).setDEF("pinpath").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.01), java.newFloat(0.95), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-3), java.newFloat(0), java.newFloat(0), java.newFloat(-10), java.newFloat(0), java.newFloat(0), java.newFloat(-10), java.newFloat(0), java.newFloat(0), java.newFloat(-3)])))
        .addChild((new autoclass.OrientationInterpolator()).setDEF("RnSAngels").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.7), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(-3.14), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)])))
        .addChild((new autoclass.PositionInterpolator()).setDEF("invisiable").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.2), java.newFloat(0.98), java.newFloat(0.99)])).setKeyValue(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01), java.newFloat(1), java.newFloat(1), java.newFloat(1)])))
        .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("clock").setToField("set_fraction").setToNode("invisiable"))
        .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("invisiable").setToField("set_scale").setToNode("projectiletransform"))
        .addChild((new autoclass.ROUTE()).setFromField("CounterWeight").setFromNode("WeightScript").setToField("set_MassCounterWeight").setToNode("Mover"))
        .addChild((new autoclass.ROUTE()).setFromField("ProjectileWeight").setFromNode("LauncheeScript").setToField("set_MassProjectileWeight").setToNode("Mover"))
        .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("clock").setToField("set_fraction").setToNode("Mover"))
        .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("Mover").setToField("set_translation").setToNode("ProjectileTransform"))
        .addChild((new autoclass.ROUTE()).setFromField("transparent").setFromNode("Mover").setToField("set_scale").setToNode("ProjectileTransform"))
        .addChild((new autoclass.ROUTE()).setFromField("touchTime").setFromNode("Launch").setToField("set_startTime").setToNode("clock"))
        .addChild((new autoclass.ROUTE()).setFromField("isActive").setFromNode("Launch").setToField("set_boolean").setToNode("PigdogMonkScript"))
        .addChild((new autoclass.ROUTE()).setFromField("touchTime").setFromNode("Launch").setToField("set_startTime").setToNode("PigDogSound"))
        .addChild((new autoclass.ROUTE()).setFromField("touchTime").setFromNode("Launch").setToField("set_startTime").setToNode("MonkSound"))
        .addChild((new autoclass.ROUTE()).setFromField("whichchoice").setFromNode("PigdogMonkScript").setToField("whichChoice").setToNode("PigdogMonk"))
        .addChild((new autoclass.ROUTE()).setFromField("touchTime").setFromNode("LauncheeChoice").setToField("set_startTime").setToNode("HolyHandGrenadeSound"))
        .addChild((new autoclass.ROUTE()).setFromField("touchTime").setFromNode("LauncheeChoice").setToField("set_startTime").setToNode("CowSound"))
        .addChild((new autoclass.ROUTE()).setFromField("touchTime").setFromNode("LauncheeChoice").setToField("set_startTime").setToNode("HamsterSound"))
        .addChild((new autoclass.ROUTE()).setFromField("isActive").setFromNode("LauncheeChoice").setToField("set_boolean").setToNode("LauncheeScript"))
        .addChild((new autoclass.ROUTE()).setFromField("whichchoice").setFromNode("LauncheeScript").setToField("whichChoice").setToNode("projectile"))
        .addChild((new autoclass.ROUTE()).setFromField("whichchoice").setFromNode("LauncheeScript").setToField("whichChoice").setToNode("projectilename"))
        .addChild((new autoclass.ROUTE()).setFromField("isActive").setFromNode("weightselector").setToField("set_boolean").setToNode("WeightScript"))
        .addChild((new autoclass.ROUTE()).setFromField("whichchoice").setFromNode("WeightScript").setToField("whichChoice").setToNode("Weight"))
        .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("clock").setToField("set_fraction").setToNode("flingerangles"))
        .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("flingerangles").setToField("set_rotation").setToNode("flinger"))
        .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("clock").setToField("set_fraction").setToNode("verticalweightpath"))
        .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("verticalweightpath").setToField("set_translation").setToNode("verticalweight"))
        .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("clock").setToField("set_fraction").setToNode("pinpath"))
        .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("pinpath").setToField("set_translation").setToNode("Pin")))      ;
    X3D0.toFileX3D("../data/Trebuchet.new.node.x3d");
    X3D0.toFileJSON("../data/Trebuchet.new.node.json");
    process.exit(0);
