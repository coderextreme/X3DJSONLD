load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_nativeJava;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.2")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("xj3d_RigidBodyPhysics").setLevel(2))
        .addComponent(new componentObject().setName("xj3d_IODevice").setLevel(2))
        .addComments(new CommentsBlock("TODO: upgrade component <component level='2' name='RigidBodyPhysics'/>"))
        .addMeta(new metaObject().setName("title").setContent("CarDemoMain.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Example scene for RigidBodyPhysics component, runnable as Xj3D application and invoked using shell script runogl"))
        .addMeta(new metaObject().setName("creator").setContent("Alan Hudson and Justin Couch"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("1 January 2008"))
        .addMeta(new metaObject().setName("translated").setContent("30 December 2008"))
        .addMeta(new metaObject().setName("modified").setContent("2 May 2017"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.xj3d.org/extensions/index.html#Physics"))
        .addMeta(new metaObject().setName("warning").setContent("Test scene includes custom Xj3D components and elements, will not validate"))
        .addMeta(new metaObject().setName("warning").setContent("Test scene under development, runogl fails http://bugzilla.xj3d.org/show_bug.cgi?id=556"))
        .addMeta(new metaObject().setName("reference").setContent("originals/car/runogl"))
        .addMeta(new metaObject().setName("reference").setContent("originals/car/main.x3dv"))
        .addMeta(new metaObject().setName("reference").setContent("originals/car/worldModel.x3dv"))
        .addMeta(new metaObject().setName("reference").setContent("originals/car/CameraControl.java"))
        .addMeta(new metaObject().setName("reference").setContent("originals/car/CarControlScript.java"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.xj3d.org/extensions/rigid_physics_examples.html"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/rigid_physics.html"))
        .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/CarDemoMain.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("generator").setContent("Xj3D converter, http://www.xj3d.org"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addChild(new GroupObject()
          .addChild(new GroupObject().setDEF("CAR-CONTAINER")
            .addChild(new SwitchObject().setDEF("DEBUG-GEOM").setWhichChoice(0)
              .addChild(new GroupObject()
                .addChild(new TransformObject().setDEF("ACTIVE-SECTOR-INDICATOR")
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(Java.to([1,1,0], Java.type("float[]"))).setTransparency(0.5)))))
                .addChild(new TransformObject().setDEF("FRONT-LEFT-WHEEL-TX-DEBUG-HINGE").setTranslation(Java.to([-1.1,0.5,-1.5], Java.type("float[]")))
                  .addChild(new ShapeObject().setDEF("FRONT-LEFT-DEBUG-POINTER")
                    .setAppearance(new AppearanceObject().setDEF("DEBUG-POINTER-APP")
                      .setMaterial(new MaterialObject())
                      .setLineProperties(new LinePropertiesObject().setLinetype(2)))
                    .setGeometry(new LineSetObject().setVertexCount(Java.to([2], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(Java.to([0,0,0,1,0,0], Java.type("float[]"))))
                      .setColor(new ColorObject().setColor(Java.to([1,1,1,1,1,1], Java.type("float[]")))))))
                .addChild(new TransformObject().setDEF("FRONT-RIGHT-WHEEL-TX-DEBUG-HINGE").setTranslation(Java.to([-1.1,0.5,-1.5], Java.type("float[]")))
                  .addChild(new ShapeObject().setDEF("FRONT-RIGHT-DEBUG-POINTER")
                    .setAppearance(new AppearanceObject().setUSE("DEBUG-POINTER-APP"))
                    .setGeometry(new LineSetObject().setVertexCount(Java.to([2], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(Java.to([0,0,0,-1,0,0], Java.type("float[]"))))
                      .setColor(new ColorObject().setColor(Java.to([1,1,1,1,1,1], Java.type("float[]")))))))
                .addChild(new TransformObject().setDEF("FRONT-LEFT-WHEEL-TX-DEBUG-MIN").setTranslation(Java.to([-1.1,0.5,-1.5], Java.type("float[]")))
                  .addChild(new ShapeObject().setDEF("FRONT-LEFT-TX-DEBUG-POINTER")
                    .setAppearance(new AppearanceObject().setUSE("DEBUG-POINTER-APP"))
                    .setGeometry(new LineSetObject().setVertexCount(Java.to([2], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(Java.to([0,0,0,1,0,0], Java.type("float[]"))))
                      .setColor(new ColorObject().setColor(Java.to([1,1,0,1,1,0], Java.type("float[]")))))))
                .addChild(new TransformObject().setDEF("FRONT-RIGHT-WHEEL-TX-DEBUG-MIN").setTranslation(Java.to([-1.1,0.5,-1.5], Java.type("float[]")))
                  .addChild(new ShapeObject().setDEF("FRONT-RIGHT-TX-DEBUG-POINTER")
                    .setAppearance(new AppearanceObject().setUSE("DEBUG-POINTER-APP"))
                    .setGeometry(new LineSetObject().setVertexCount(Java.to([2], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(Java.to([0,0,0,-1,0,0], Java.type("float[]"))))
                      .setColor(new ColorObject().setColor(Java.to([0,0,1,0,0,1], Java.type("float[]")))))))
                .addChild(new TransformObject().setDEF("FRONT-LEFT-WHEEL-TX-DEBUG-MAX").setTranslation(Java.to([-1.1,0.5,-1.5], Java.type("float[]")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject().setUSE("DEBUG-POINTER-APP"))
                    .setGeometry(new LineSetObject().setVertexCount(Java.to([2], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(Java.to([0,0,0,1,0,0], Java.type("float[]"))))
                      .setColor(new ColorObject().setColor(Java.to([0,0,1,0,0,1], Java.type("float[]")))))))
                .addChild(new TransformObject().setDEF("FRONT-RIGHT-WHEEL-TX-DEBUG-MAX").setTranslation(Java.to([-1.1,0.5,-1.5], Java.type("float[]")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject().setUSE("DEBUG-POINTER-APP"))
                    .setGeometry(new LineSetObject().setVertexCount(Java.to([2], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(Java.to([0,0,0,-1,0,0], Java.type("float[]"))))
                      .setColor(new ColorObject().setColor(Java.to([1,1,1,1,1,1], Java.type("float[]")))))))))
            .addChild(new TransformObject().setDEF("FRONT-LEFT-WHEEL-TX").setTranslation(Java.to([-1.1,0.5,-1.5], Java.type("float[]")))
              .addChild(new TransformObject().setDEF("WHEEL-SHAPE").setRotation(Java.to([0,0,1,1.572], Java.type("float[]")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(Java.to([1,0,1], Java.type("float[]")))))
                  .setGeometry(new CylinderObject().setHeight(0.1).setRadius(0.5))))
              .addChild(new GroupObject().setDEF("JOINT-INDICATOR-LEFT")
                .addChild(new ShapeObject()
                  .setGeometry(new LineSetObject().setVertexCount(Java.to([2,2], Java.type("int[]")))
                    .setCoord(new CoordinateObject().setPoint(Java.to([0,0,0,-1,0,0,0,0,0,0,1,0], Java.type("float[]"))))
                    .setColor(new ColorObject().setColor(Java.to([1,1,0,1,1,0,1,1,1,1,1,1], Java.type("float[]"))))))
                .addChild(new ShapeObject().setDEF("JOINT-SPHERE")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(Java.to([0,1,1], Java.type("float[]")))))
                  .setGeometry(new SphereObject().setRadius(0.1)))))
            .addChild(new TransformObject().setDEF("FRONT-RIGHT-WHEEL-TX").setTranslation(Java.to([1.1,0.5,-1.5], Java.type("float[]")))
              .addChild(new TransformObject().setUSE("WHEEL-SHAPE"))
              .addChild(new GroupObject().setDEF("JOINT-INDICATOR-RIGHT")
                .addChild(new ShapeObject()
                  .setGeometry(new LineSetObject().setVertexCount(Java.to([2,2], Java.type("int[]")))
                    .setCoord(new CoordinateObject().setPoint(Java.to([0,0,0,1,0,0,0,0,0,0,1,0], Java.type("float[]"))))
                    .setColor(new ColorObject().setColor(Java.to([1,1,0,1,1,0,1,1,1,1,1,1], Java.type("float[]"))))))
                .addChild(new ShapeObject().setUSE("JOINT-SPHERE"))))
            .addChild(new TransformObject().setDEF("BACK-LEFT-WHEEL-TX").setTranslation(Java.to([-1.1,0.5,1.5], Java.type("float[]")))
              .addChild(new TransformObject().setUSE("WHEEL-SHAPE"))
              .addChild(new GroupObject().setUSE("JOINT-INDICATOR-LEFT")))
            .addChild(new TransformObject().setDEF("BACK-RIGHT-WHEEL-TX").setTranslation(Java.to([1.1,0.5,1.5], Java.type("float[]")))
              .addChild(new TransformObject().setUSE("WHEEL-SHAPE"))
              .addChild(new GroupObject().setUSE("JOINT-INDICATOR-RIGHT")))
            .addChild(new TransformObject().setDEF("CAR-BODY-TX")
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(Java.to([0.8,0.8,0], Java.type("float[]")))))
                .setGeometry(new BoxObject().setDEF("CHASSIS-BOX").setSize(Java.to([2.2,0.05,5], Java.type("float[]")))))
              .addChild(new TransformObject().setDEF("SPEED-INDICATOR").setTranslation(Java.to([1.2,1,0], Java.type("float[]")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("SPEED-INDICATOR-COLOR")))
                  .setGeometry(new BoxObject().setSize(Java.to([0.1,1,0.1], Java.type("float[]"))))))
              .addChild(new TransformObject().setTranslation(Java.to([0,0.4,0], Java.type("float[]")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(Java.to([0,0,0.8], Java.type("float[]"))).setTransparency(0.5)))
                  .setGeometry(new BoxObject().setDEF("CHASSIS-PROXY-GEOM").setSize(Java.to([2.25,0.4,5.1], Java.type("float[]")))))
                .addChild(new TransformObject().setTranslation(Java.to([1,0.1,2.65], Java.type("float[]")))
                  .addChild(new ShapeObject().setDEF("BRAKE-LIGHT-GEOM")
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDEF("BRAKE-LIGHT-COLOR").setDiffuseColor(Java.to([0.1,0,0], Java.type("float[]"))).setEmissiveColor(Java.to([0.1,0,0], Java.type("float[]")))))
                    .setGeometry(new BoxObject().setSize(Java.to([0.1,0.2,0.1], Java.type("float[]"))))))
                .addChild(new TransformObject().setTranslation(Java.to([-1,0.1,2.65], Java.type("float[]")))
                  .addChild(new ShapeObject().setUSE("BRAKE-LIGHT-GEOM")))
                .addChild(new TransformObject().setTranslation(Java.to([0.9,0.1,2.65], Java.type("float[]")))
                  .addChild(new ShapeObject().setDEF("REVERSE-LIGHT-GEOM")
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDEF("REVERSE-LIGHT-COLOR").setDiffuseColor(Java.to([0.1,0.1,0.1], Java.type("float[]"))).setEmissiveColor(Java.to([0.1,0.1,0.1], Java.type("float[]")))))
                    .setGeometry(new BoxObject().setSize(Java.to([0.1,0.1,0.1], Java.type("float[]"))))))
                .addChild(new TransformObject().setTranslation(Java.to([-0.9,0.1,2.65], Java.type("float[]")))
                  .addChild(new ShapeObject().setUSE("REVERSE-LIGHT-GEOM")))))
            .addChild(new TransformObject().setDEF("CAMERA-TX")
              .addChild(new TransformObject()
                .addChild(new ViewpointObject().setDEF("Camera03").setDescription("AutoCam").setPosition(Java.to([0,0,0], Java.type("float[]"))))))))
        .addChild(new NavigationInfoObject().setType(Java.to(["NONE"], Java.type("java.lang.String[]"))).setSpeed(10))
        .addChild(new InlineObject())
        .addChild(new ShapeObject().setDEF("ENEMY-GEOM"))
        .addChild(new TransformObject().setDEF("carGroup").setRotation(Java.to([0.006813,-0.9999,0.01227,-4.155], Java.type("float[]"))).setTranslation(Java.to([-82.59,6.8,-48.1], Java.type("float[]")))
          .addChild(new TransformObject().setDEF("carCamTransform").setTranslation(Java.to([0,1,5], Java.type("float[]")))
            .addChild(new ViewpointObject().setDEF("Camera03-OLD").setDescription("Car 3rd Person").setPosition(Java.to([0,0,5], Java.type("float[]"))))))
        .addChild(new TimeSensorObject().setDEF("cam_car_chase-TIMER").setCycleInterval(120).setEnabled(false).setLoop(true))
        .addChild(new PositionInterpolatorObject().setDEF("cam_car_chase-POS-INTERP").setKey(Java.to([0,0.005,0.01,0.015,0.02,0.025,0.03,0.035,0.04,0.045,0.05,0.055,0.06,0.065,0.07,0.075,0.08,0.085,0.09,0.095,0.1,0.105,0.11,0.115,0.12,0.125,0.13,0.135,0.14,0.145,0.15,0.155,0.16,0.165,0.17,0.175,0.18,0.185,0.19,0.195,0.2,0.205,0.21,0.215,0.22,0.225,0.23,0.235,0.24,0.245,0.25,0.255,0.26,0.265,0.27,0.275,0.28,0.285,0.29,0.295,0.3,0.305,0.31,0.315,0.32,0.325,0.33,0.335,0.34,0.345,0.35,0.355,0.36,0.365,0.37,0.375,0.38,0.385,0.39,0.395,0.4,0.405,0.41,0.415,0.42,0.425,0.43,0.435,0.44,0.445,0.45,0.455,0.46,0.465,0.47,0.475,0.48,0.485,0.49,0.495,0.5,0.505,0.51,0.515,0.52,0.525,0.53,0.535,0.54,0.545,0.55,0.555,0.56,0.565,0.57,0.575,0.58,0.585,0.59,0.595,0.6,0.605,0.61,0.615,0.62,0.625,0.63,0.635,0.64,0.645,0.65,0.655,0.66,0.665,0.67,0.675,0.68,0.685,0.69,0.695,0.7,0.705,0.71,0.715,0.72,0.725,0.73,0.735,0.74,0.745,0.75,0.755,0.76,0.765,0.77,0.775,0.78,0.785,0.79,0.795,0.8,0.805,0.81,0.815,0.82,0.825,0.83,0.835,0.84,0.845,0.85,0.855,0.86,0.865,0.87,0.875,0.88,0.885,0.89,0.895,0.9,0.905,0.91,0.915,0.92,0.925,0.93,0.935,0.94,0.945,0.95,0.955,0.96,0.965,0.97,0.975,0.98,0.985,0.99,0.995,1], Java.type("float[]"))).setKeyValue(Java.to([-82.59,6.8,-46.1,-62.37,7.482,-34.12,-45.75,8.077,-24.49,-30.63,8.902,-15.22,-14.28,9.772,-7.022,2.577,10.66,0.2272,19.5,11.58,7.357,36.34,12.33,14.35,53.06,12.96,21.47,69.88,13.31,28.19,86.65,13.45,34.39,103,13.08,41.36,120.3,12.53,47.38,137.9,11.52,53.08,156,11.13,55.74,174.3,10.82,56.99,192.6,10.72,59.23,210.8,10.17,59.67,229.1,9.332,58.07,247.3,7.655,57.25,265.2,6.045,56.14,283.9,3.88,56.28,305.8,3.112,54.26,324.5,3.111,54.26,340.3,3.338,51.85,353.7,3.376,40.25,367,2.986,24.67,368.9,2.698,4.603,367,2.426,-16.23,352.9,2.476,-24.65,333,2.496,-27.47,313.1,2.5,-26.23,296.2,2.472,-22.66,278.8,2.428,-17.45,260.8,2.399,-12.16,243,2.371,-7.717,225,2.348,-3.115,206.7,2.312,-2.477,188.5,2.288,-3.483,169.7,2.239,-1.287,149.8,2.275,-3.75,131.7,2.358,-8.071,114.9,2.463,-14.18,100.4,2.562,-25.71,90.72,2.614,-41.85,86.37,2.654,-60.62,85.63,2.678,-79.14,89.62,2.695,-96.48,93.92,2.706,-114.4,98.32,2.705,-132.4,102.4,2.704,-150,106.6,2.701,-168.2,109.9,2.699,-186.9,113.2,2.697,-205,116.3,2.703,-223.3,119.5,2.677,-242.2,124.6,2.671,-260.7,136,2.586,-274.3,147.6,2.655,-286.3,162.2,2.934,-297,180.1,3.192,-305.3,198,3.424,-311.6,216.3,3.605,-313.4,234.2,3.771,-315.6,252.3,3.92,-317.4,270.7,4.05,-318.9,289.1,4.156,-319.6,307.5,4.109,-319.7,325.9,4.208,-318.6,344.3,4.346,-316.6,362.7,4.906,-314.4,380.4,5.254,-311.4,397.7,5.339,-306.8,415.4,5.254,-302.2,432.7,5.108,-297.5,449.9,4.975,-292.7,467.4,4.904,-287.6,485.2,4.894,-282,503.5,4.918,-276.8,521.7,4.979,-272.2,539.2,5.025,-264.4,559.5,5.217,-261.1,577.1,5.521,-259.7,592.7,5.536,-260,609.2,5.673,-266.6,625.8,5.681,-275.3,637.2,5.98,-287.9,643.5,6.524,-304.4,647.8,7.731,-322.9,649.2,8.83,-341.2,645.5,9.758,-359.2,641.8,10.57,-377.1,637.5,11.32,-394.9,633.8,12.09,-413,630.2,12.87,-431.1,626.9,13.65,-449.2,623.2,14.43,-467.1,619.5,15.2,-484.9,615.9,15.99,-502.7,612.4,16.78,-520.8,609.1,17.56,-538.7,606.3,18.33,-556.6,603.1,19.09,-574.6,600.8,19.84,-592.7,596.6,20.53,-610,590.4,21.21,-626.5,586.1,21.66,-643.9,578.2,22.27,-660.2,565.8,23.26,-673.1,551.5,23.85,-684.5,537.3,24.29,-693.4,522.5,24.88,-701.2,502.6,26.11,-708.5,483.1,27.4,-715,465.6,28.76,-718.8,447.7,30.48,-721,429.6,32.79,-721.6,411.5,35.32,-721.8,393.4,38.14,-721.8,375.3,41.01,-721.1,357.2,43.63,-720.4,338.9,45.85,-719.5,320.6,47.65,-720,302.5,49.12,-721.8,284.2,49.91,-722,266.1,50.75,-721.8,248,51.6,-721.1,229.9,52.98,-719.5,211.4,54.62,-717.8,193.6,55.88,-716.9,181,56.93,-715.5,170.3,57.06,-717.5,159.7,57.14,-721,147.3,57.03,-725.2,134,56.99,-730.3,119.9,57.01,-733.3,106.6,57.88,-737.3,93.7,58.32,-738.9,79.87,57.82,-736.2,79.41,56.84,-725.4,77.53,54.88,-714.7,76.89,51.27,-700.9,68.47,48.1,-691.1,59.62,45.34,-683.6,47.72,44.12,-676.4,30.01,41.79,-672.2,11.54,39.43,-669.3,-6.463,36.79,-672.5,-24.68,34.26,-675.1,-42.89,31.75,-677.3,-61.71,29.48,-681.1,-85.61,27.17,-677.3,-108.9,25.76,-662.8,-126.4,24.6,-648,-139.1,23.79,-629.3,-144.8,22.49,-606.4,-147.4,21.33,-586.7,-145.9,20.34,-568.9,-142.3,19.44,-553.3,-130.3,18,-528.6,-113.8,15.9,-492.6,-104.1,14.73,-472.3,-97.49,13.85,-457.7,-91.04,12.82,-440.9,-86.09,11.67,-422.3,-85.55,10.82,-402.1,-87.88,10.06,-383.9,-95.84,9.198,-368.4,-107.3,8.613,-354.6,-121.1,8.209,-342.7,-137,8.053,-333.2,-153.3,7.908,-324.3,-170,7.788,-316.4,-186.6,7.674,-308.6,-203.2,7.56,-300.9,-220.1,7.47,-293.7,-236.8,7.35,-285.5,-253,7.234,-276.5,-269.2,6.995,-268.4,-284.8,6.757,-259.6,-300.1,6.612,-253.3,-313.8,6.511,-248.3,-327.9,6.508,-238.7,-328.8,6.546,-225.6,-324,6.535,-213,-314,6.51,-201.5,-299.1,6.324,-190.4,-283.3,6.095,-180.7,-267.9,5.805,-170.6,-252.8,5.539,-160.5,-237.7,5.251,-150.2,-222.7,5.056,-139.5,-207.9,4.936,-128.7,-192.7,4.93,-118.5,-177.7,4.997,-108.3,-162.6,5.143,-97.98,-147.5,5.369,-87.61,-132.3,5.653,-77.38,-116.4,6.003,-67.74,-100.5,6.361,-57.64,-82.59,6.8,-46.1], Java.type("float[]"))))
        .addChild(new OrientationInterpolatorObject().setDEF("cam_car_chase-ROT-INTERP").setKey(Java.to([0,0.005,0.01,0.015,0.02,0.025,0.03,0.035,0.04,0.045,0.05,0.055,0.06,0.065,0.07,0.075,0.08,0.085,0.09,0.095,0.1,0.105,0.11,0.115,0.12,0.125,0.13,0.135,0.14,0.145,0.15,0.155,0.16,0.165,0.17,0.175,0.18,0.185,0.19,0.195,0.2,0.205,0.21,0.215,0.22,0.225,0.23,0.235,0.24,0.245,0.25,0.255,0.26,0.265,0.27,0.275,0.28,0.285,0.29,0.295,0.3,0.305,0.31,0.315,0.32,0.325,0.33,0.335,0.34,0.345,0.35,0.355,0.36,0.365,0.37,0.375,0.38,0.385,0.39,0.395,0.4,0.405,0.41,0.415,0.42,0.425,0.43,0.435,0.44,0.445,0.45,0.455,0.46,0.465,0.47,0.475,0.48,0.485,0.49,0.495,0.5,0.505,0.51,0.515,0.52,0.525,0.53,0.535,0.54,0.545,0.55,0.555,0.56,0.565,0.57,0.575,0.58,0.585,0.59,0.595,0.6,0.605,0.61,0.615,0.62,0.625,0.63,0.635,0.64,0.645,0.65,0.655,0.66,0.665,0.67,0.675,0.68,0.685,0.69,0.695,0.7,0.705,0.71,0.715,0.72,0.725,0.73,0.735,0.74,0.745,0.75,0.755,0.76,0.765,0.77,0.775,0.78,0.785,0.79,0.795,0.8,0.805,0.81,0.815,0.82,0.825,0.83,0.835,0.84,0.845,0.85,0.855,0.86,0.865,0.87,0.875,0.88,0.885,0.89,0.895,0.9,0.905,0.91,0.915,0.92,0.925,0.93,0.935,0.94,0.945,0.95,0.955,0.96,0.965,0.97,0.975,0.98,0.985,0.99,0.995,1], Java.type("float[]"))).setKeyValue(Java.to([0.006813,-0.9999,0.01227,-4.155,0.008468,-0.9999,0.01499,-4.17,0.0112,-0.9997,0.01951,-4.184,0.012,-0.9997,0.01954,-4.243,0.01241,-0.9997,0.01934,-4.282,0.0113,-0.9998,0.01751,-4.287,0.00833,-0.9999,0.01283,-4.293,0.005032,-1,0.007728,-4.296,0.0001064,-1,0.00016,-4.315,-0.004939,-1,-0.007298,-4.331,-0.01123,-0.9998,-0.01653,-4.335,-0.01465,-0.9997,-0.0202,-4.396,-0.01819,-0.9996,-0.02355,-4.457,-0.01259,-0.9998,-0.01455,-4.568,-0.01216,-0.9998,-0.01333,-4.621,-0.01397,-0.9998,-0.01528,-4.623,0.02539,0.9993,0.02583,-1.589,0.0371,0.9987,0.0355,-1.528,0.04743,0.9978,0.04625,-1.548,0.04668,0.9979,0.04507,-1.538,0.04263,0.9982,0.04123,-1.539,0.01831,0.9997,0.01608,-1.442,0.002981,1,0.002377,-1.346,0.003686,1,0.002119,-1.044,0.0197,0.9998,0.006598,-0.6466,0.06883,0.9976,0.01236,-0.3561,0.1277,-0.9918,-0.009755,-0.1537,0.0265,-0.9996,-0.007593,-0.5582,0.00428,-1,-0.002994,-1.221,0.003623,-1,-0.003378,-1.501,0.003552,-1,-0.003945,-1.676,0.003677,-1,-0.004492,-1.77,0.003642,-1,-0.004669,-1.817,0.003532,-1,-0.004394,-1.787,0.003678,-1,-0.004347,-1.737,0.003838,-1,-0.004295,-1.683,0.00444,-1,-0.004325,-1.545,0.004366,-1,-0.004015,-1.487,0.003943,-1,-0.003682,-1.502,0.002829,-1,-0.002169,-1.308,0.001765,-1,-0.001138,-1.145,0.001966,-1,-0.000992,-0.9346,0.004464,-1,-0.001472,-0.6368,0.01489,-0.9999,-0.002438,-0.3246,0.0684,-0.9977,-0.002774,-0.08126,0.05839,0.9983,0.003113,-0.1067,0.02621,0.9997,0.003279,-0.249,0.02607,0.9997,0.003471,-0.2649,0.02794,0.9996,0.003665,-0.261,0.02929,0.9996,0.003668,-0.2492,0.03071,0.9995,0.003686,-0.239,0.03326,0.9994,0.003678,-0.2204,0.03103,0.9995,0.00367,-0.2355,0.02881,0.9996,0.00366,-0.2528,0.02226,0.9997,0.00383,-0.3409,0.01283,0.9999,0.003359,-0.5122,0.006523,1,0.002811,-0.8137,-0.001283,1,-0.0006491,-0.9365,-0.005889,1,-0.003555,-1.086,-0.003506,1,-0.002509,-1.242,-0.002375,1,-0.001917,-1.358,-0.00105,1,-0.000975,-1.497,-0.0005828,1,-0.0005423,-1.499,0,1,0,-1.523,0.0006321,1,0.000621,-1.553,-0.001247,-1,-0.001276,-4.689,-0.002221,-1,-0.002371,-4.647,0.0006834,-1,0.0007693,-4.594,0.002608,-1,0.003065,-4.552,0.005679,-1,0.00685,-4.526,0.001657,-1,0.002102,-4.476,-0.002623,-1,-0.003525,-4.421,-0.004588,-1,-0.006159,-4.422,-0.005234,-1,-0.007088,-4.414,-0.004443,-1,-0.006067,-4.406,-0.003333,-1,-0.004585,-4.399,-0.002337,-1,-0.003232,-4.394,-0.001732,-1,-0.002339,-4.417,-0.001067,-1,-0.001414,-4.434,-0.0004932,-1,-0.0006638,-4.42,0.00133,-1,0.001463,-4.617,-0.002762,1,-0.002598,-1.51,0.0001712,1,0.0001324,-1.317,-0.003318,1,-0.001938,-1.057,-0.008097,1,-0.003699,-0.857,-0.04174,0.9991,-0.01169,-0.5467,-0.1274,0.9917,-0.01805,-0.2839,-0.3406,0.9399,-0.0244,-0.1521,-0.9828,-0.1844,0.004405,-0.04859,-0.2223,-0.9748,0.01955,-0.18,-0.1959,-0.9805,0.01769,-0.1837,-0.1755,-0.9843,0.01672,-0.1929,-0.2006,-0.9795,0.01711,-0.1737,-0.2069,-0.9782,0.01709,-0.1686,-0.213,-0.9769,0.01709,-0.1639,-0.2005,-0.9796,0.01736,-0.1764,-0.2025,-0.9791,0.01743,-0.1754,-0.2127,-0.977,0.01741,-0.1671,-0.222,-0.9749,0.01722,-0.1588,-0.2296,-0.9731,0.01704,-0.1522,-0.2331,-0.9723,0.01676,-0.1476,-0.2018,-0.9793,0.01638,-0.1654,-0.1775,-0.984,0.01591,-0.1816,-0.1088,-0.9939,0.01501,-0.2757,-0.07828,-0.9968,0.01412,-0.3581,-0.0632,-0.9979,0.01267,-0.3964,-0.05145,-0.9986,0.01578,-0.5959,-0.04383,-0.9989,0.01929,-0.8299,-0.02789,-0.9995,0.01431,-0.9485,-0.02498,-0.9996,0.01456,-1.056,-0.03264,-0.9993,0.02078,-1.135,-0.04034,-0.9988,0.02832,-1.225,-0.04472,-0.9984,0.03358,-1.29,-0.05088,-0.9978,0.04226,-1.388,-0.05779,-0.997,0.05194,-1.467,-0.06605,-0.9958,0.06289,-1.526,-0.06953,-0.9953,0.06736,-1.544,-0.07211,-0.9949,0.07119,-1.563,-0.0676,-0.9954,0.06765,-1.576,-0.06018,-0.9964,0.05985,-1.569,-0.0499,-0.9976,0.049,-1.555,-0.04129,-0.9984,0.03873,-1.509,-0.03193,-0.9991,0.02935,-1.488,-0.02117,-0.9996,0.02068,-1.548,-0.02214,-0.9995,0.02215,-1.572,-0.02553,-0.9993,0.02612,-1.594,-0.03197,-0.9989,0.03307,-1.606,-0.03325,-0.9989,0.0339,-1.591,-0.0253,-0.9994,0.02416,-1.525,-0.01739,-0.9997,0.0154,-1.45,0.002328,-1,-0.001778,-1.304,0.005608,-1,-0.00414,-1.272,0.0096,-0.9999,-0.007223,-1.29,0.007995,-0.9999,-0.006446,-1.357,0.008529,-0.9999,-0.007984,-1.505,0.009671,-0.9999,-0.01052,-1.655,0.02633,-0.9989,-0.03954,-1.968,0.02941,-0.9971,-0.0705,-2.353,0.01406,-0.9956,-0.09264,-2.842,0.02508,-0.993,-0.1156,-2.717,0.03637,-0.9909,-0.1293,-2.598,0.05382,-0.993,-0.105,-2.2,0.05445,-0.9947,-0.08679,-2.026,0.04423,-0.9972,-0.06055,-1.882,0.06106,-0.9958,-0.06866,-1.692,0.06938,-0.9952,-0.06964,-1.579,0.08475,-0.9938,-0.07195,-1.414,0.07884,-0.9945,-0.06865,-1.438,0.07166,-0.9953,-0.06499,-1.478,0.05672,-0.9968,-0.05656,-1.571,0.0359,-0.9983,-0.04621,-1.822,0.01567,-0.9994,-0.02997,-2.178,0.01129,-0.9995,-0.02859,-2.39,0.006174,-0.9997,-0.02543,-2.665,0.003213,-0.9995,-0.03158,-2.939,0.0004052,-0.9995,-0.03242,-3.117,-0.002454,-0.9995,-0.03144,-3.297,-0.004565,-0.9995,-0.03087,-3.435,-0.006414,-0.9995,-0.02982,-3.565,-0.006017,-0.9995,-0.03018,-3.535,-0.005782,-0.9995,-0.03043,-3.517,-0.004953,-0.9995,-0.03145,-3.454,-0.00336,-0.9995,-0.03152,-3.354,-0.001179,-0.9995,-0.03065,-3.218,0.001952,-0.9997,-0.02531,-2.988,0.004557,-0.9997,-0.02433,-2.771,0.007829,-0.9997,-0.02317,-2.49,0.007298,-0.9998,-0.0166,-2.313,0.006208,-0.9999,-0.01167,-2.164,0.004698,-1,-0.007807,-2.058,0.00454,-1,-0.007213,-2.018,0.004463,-1,-0.006813,-1.982,0.00443,-1,-0.006738,-1.978,0.004412,-1,-0.006705,-1.978,0.004378,-1,-0.006671,-1.98,0.004624,-1,-0.007342,-2.018,0.004843,-1,-0.007982,-2.051,0.005715,-0.9999,-0.00945,-2.054,0.005056,-0.9999,-0.008898,-2.108,0.003634,-1,-0.006937,-2.177,0.002201,-1,-0.005743,-2.41,0.0006766,-1,-0.00403,-2.809,-0.0006182,-1,-0.004311,-3.426,-0.001735,-1,-0.005669,-3.736,-0.002944,-1,-0.00691,-3.947,-0.004618,-0.9999,-0.009269,-4.066,-0.005489,-0.9999,-0.01031,-4.12,-0.005622,-0.9999,-0.01089,-4.094,-0.005248,-0.9999,-0.01027,-4.086,-0.004855,-0.9999,-0.00961,-4.077,-0.003567,-1,-0.007168,-4.065,-0.002444,-1,-0.004901,-4.067,-0.001167,-1,-0.002277,-4.089,-0.0001237,-1,-0.0002417,-4.088,0.0009202,-1,0.001799,-4.087,0.001855,-1,0.003596,-4.094,0.002665,-1,0.005084,-4.107,0.003413,-1,0.006335,-4.13,0.003873,-1,0.00724,-4.124,0.004619,-1,0.008618,-4.126,0.006813,-0.9999,0.01227,-4.155], Java.type("float[]"))))
        .addChild(new KeySensorObject().setDEF("keysensor"))
        .addChild(new SwitchObject().setDEF("DEBUG_TERRAIN").setWhichChoice(0)
          .addChild(new GroupObject().setDEF("TERRAIN-CONTAINER")
            .addChild(new CollidableShapeObject().setDEF("Road-v-001").setTranslation(Java.to([124.936,-0.5,-461.607], Java.type("float[]")))
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setDEF("ROAD-APP")
                  .setMaterial(new MaterialObject().setEmissiveColor(Java.to([1,0,0], Java.type("float[]")))))
                .setGeometry(new BoxObject().setSize(Java.to([1250,1,800], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("Road-v-002").setTranslation(Java.to([-417.631,-0.5,24.7947], Java.type("float[]")))
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("ROAD-APP"))
                .setGeometry(new BoxObject().setSize(Java.to([200,1,250], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("Road-v-003").setTranslation(Java.to([675.143,-0.5,17.6217], Java.type("float[]")))
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("ROAD-APP"))
                .setGeometry(new BoxObject().setSize(Java.to([200,1,250], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("Road-v-004").setTranslation(Java.to([138.008,-0.5,23.1087], Java.type("float[]")))
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("ROAD-APP"))
                .setGeometry(new BoxObject().setSize(Java.to([1000,1,60], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("Road-v-006").setRotation(Java.to([0,0,-1,0.135494], Java.type("float[]"))).setTranslation(Java.to([347.056,4.87479,-376.17], Java.type("float[]")))
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setDEF("RAMP_APP")
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,0,1], Java.type("float[]"))))
                  .setTexture(new ImageTextureObject().setUrl(Java.to(["originals/car/textures/wall-stone-001.jpg","http://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/textures/wall-stone-001.jpg"], Java.type("java.lang.String[]")))))
                .setGeometry(new BoxObject().setSize(Java.to([90,1,70], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("Road-v-007").setTranslation(Java.to([301.193,1.4,-376.315], Java.type("float[]")))
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("ROAD-APP"))
                .setGeometry(new BoxObject().setSize(Java.to([3,20,70], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("Sand-v-001").setTranslation(Java.to([101.232,-0.55,-31.8107], Java.type("float[]")))
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setDEF("SAND-APP")
                  .setMaterial(new MaterialObject().setAmbientIntensity(0.258621).setDiffuseColor(Java.to([0.58,0.27,0.01], Java.type("float[]"))).setShininess(0.07).setSpecularColor(Java.to([0.43,0.2,0], Java.type("float[]"))))
                  .setTexture(new ImageTextureObject()))
                .setGeometry(new BoxObject().setSize(Java.to([1000,1,60], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("Sand-v-002").setTranslation(Java.to([108.906,-0.55,93.8712], Java.type("float[]")))
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("SAND-APP"))
                .setGeometry(new BoxObject().setSize(Java.to([1000,1,100], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("WALL-v-001a").setTranslation(Java.to([750,10,-360], Java.type("float[]")))
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setDEF("WALL-APP")
                  .setMaterial(new MaterialObject().setEmissiveColor(Java.to([0.5,0.5,0.5], Java.type("float[]"))).setTransparency(0.2)))
                .setGeometry(new BoxObject().setSize(Java.to([1,20,1000], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("WALL-v-001b").setTranslation(Java.to([-500,10,-360], Java.type("float[]")))
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("WALL-APP"))
                .setGeometry(new BoxObject().setSize(Java.to([1,20,1000], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("WALL-v-001c").setTranslation(Java.to([125,10,140.99], Java.type("float[]")))
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("WALL-APP"))
                .setGeometry(new BoxObject().setSize(Java.to([1250,20,1], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("WALL-v-001d").setTranslation(Java.to([125,10,-859.733], Java.type("float[]")))
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("WALL-APP"))
                .setGeometry(new BoxObject().setSize(Java.to([1250,20,1], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-002").setTranslation(Java.to([-163.362,24,-589.528], Java.type("float[]")))
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("WALL-APP"))
                .setGeometry(new BoxObject().setSize(Java.to([40,48,40], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-003").setTranslation(Java.to([-100.093,19,-587.841], Java.type("float[]")))
              .setShape(new ShapeObject().setDEF("SmallBulding")
                .setAppearance(new AppearanceObject().setUSE("WALL-APP"))
                .setGeometry(new BoxObject().setSize(Java.to([40,38,40], Java.type("float[]"))))))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-004").setTranslation(Java.to([-314.972,19,-656.376], Java.type("float[]")))
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-005").setTranslation(Java.to([-314.723,19,-580.647], Java.type("float[]")))
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-006").setTranslation(Java.to([-269.737,19,-452.626], Java.type("float[]")))
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-007").setTranslation(Java.to([-217.782,19,-450.082], Java.type("float[]")))
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-008").setTranslation(Java.to([-83.8395,19,-351.859], Java.type("float[]")))
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-009").setTranslation(Java.to([-348.799,19,-511.969], Java.type("float[]")))
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-010").setTranslation(Java.to([-23.9812,19,-501.768], Java.type("float[]")))
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-011").setTranslation(Java.to([-101.759,19,-451.126], Java.type("float[]")))
              .setShape(new ShapeObject().setUSE("SmallBulding")))))
        .addChild(new ScriptObject().setDEF("physicsSectorScript")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("sector1").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("sector2").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("sector3").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("sector4").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("sector5").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("sector6").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("sector7").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("sector8").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("sector9").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("sector1Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("sector2Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("sector3Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("sector4Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("sector5Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("sector6Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("sector7Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("sector8Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("sector9Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .setSourceCode("ecmascript:\n"+
"    function sector1(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector1');\n"+
"        sector1Enabled = true;\n"+
"        sector2Enabled = true;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = false;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector2(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector2');\n"+
"        sector1Enabled = true;\n"+
"        sector2Enabled = true;\n"+
"        sector3Enabled = true;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = false;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector3(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector3');\n"+
"        sector1Enabled = false;\n"+
"        sector2Enabled = true;\n"+
"        sector3Enabled = true;\n"+
"        sector4Enabled = true;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = false;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector4(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector4');\n"+
"        sector1Enabled = false;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = true;\n"+
"        sector4Enabled = true;\n"+
"        sector5Enabled = true;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = false;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector5(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector5');\n"+
"        sector1Enabled = false;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = true;\n"+
"        sector5Enabled = true;\n"+
"        sector6Enabled = true;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = false;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector6(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector6');\n"+
"        sector1Enabled = false;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = true;\n"+
"        sector6Enabled = true;\n"+
"        sector7Enabled = true;\n"+
"        sector8Enabled = false;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector7(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector7');\n"+
"        sector1Enabled = false;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = true;\n"+
"        sector7Enabled = true;\n"+
"        sector8Enabled = true;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector8(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector8');\n"+
"\n"+
"        sector1Enabled = false;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = true;\n"+
"        sector8Enabled = true;\n"+
"        sector9Enabled = true;\n"+
"       }\n"+
"    }\n"+
"    function sector9(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector9');\n"+
"\n"+
"        sector1Enabled = true;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = true;\n"+
"        sector9Enabled = true;\n"+
"       }\n"+
"    }\n"+
"\n"+
"    function sector9(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector9');\n"+
"\n"+
"        sector1Enabled = true;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = true;\n"+
"        sector9Enabled = true;\n"+
"       }\n"+
"    }\n"+
""))
        .addChild(new RigidBodyCollectionObject().setDEF("BODY-COLLECTION").setConstantForceMix(0.005).setContactSurfaceThickness(0.001).setEnabled(false).setIterations(20)
          .addBodies(new RigidBodyObject().setDEF("CAR-BODY").setAutoDamp(true).setEnabled(false).setMass(900).setPosition(Java.to([0,1.25,0], Java.type("float[]")))
            .setMassDensityModel(new BoxObject().setUSE("CHASSIS-BOX"))
            .setGeometry(new CollidableShapeObject().setDEF("CAR-BODY-GEOM")
              .setShape(new ShapeObject()
                .setGeometry(new BoxObject().setUSE("CHASSIS-BOX")))))
          .addBodies(new RigidBodyObject().setDEF("FRONT-LEFT-WHEEL-BODY").setAngularDampingFactor(0).setAutoDamp(true).setEnabled(false).setMass(20).setPosition(Java.to([-0.9,1.5,-2.5], Java.type("float[]"))).setUseFiniteRotation(true)
            .setMassDensityModel(new SphereObject().setUSE("WHEEL-MASS"))
            .setGeometry(new CollidableShapeObject().setDEF("FRONT-LEFT-WHEEL-GEOM")
              .setShape(new ShapeObject().setDEF("WHEEL-GEOM")
                .setGeometry(new SphereObject().setDEF("WHEEL-MASS").setRadius(0.5)))))
          .addBodies(new RigidBodyObject().setDEF("FRONT-RIGHT-WHEEL-BODY").setAngularDampingFactor(0).setAutoDamp(true).setEnabled(false).setMass(20).setPosition(Java.to([0.9,1.5,-2.5], Java.type("float[]"))).setUseFiniteRotation(true)
            .setMassDensityModel(new SphereObject().setUSE("WHEEL-MASS"))
            .setGeometry(new CollidableShapeObject().setDEF("FRONT-RIGHT-WHEEL-GEOM")
              .setShape(new ShapeObject().setUSE("WHEEL-GEOM"))))
          .addBodies(new RigidBodyObject().setDEF("BACK-LEFT-WHEEL-BODY").setAngularDampingFactor(0).setAutoDamp(true).setEnabled(false).setMass(20).setPosition(Java.to([-0.9,1.5,2.5], Java.type("float[]"))).setUseFiniteRotation(true)
            .setMassDensityModel(new SphereObject().setUSE("WHEEL-MASS"))
            .setGeometry(new CollidableShapeObject().setDEF("BACK-LEFT-WHEEL-GEOM")
              .setShape(new ShapeObject().setUSE("WHEEL-GEOM"))))
          .addBodies(new RigidBodyObject().setDEF("BACK-RIGHT-WHEEL-BODY").setAngularDampingFactor(0).setAutoDamp(true).setEnabled(false).setMass(20).setPosition(Java.to([0.9,1.5,2.5], Java.type("float[]"))).setUseFiniteRotation(true)
            .setMassDensityModel(new SphereObject().setUSE("WHEEL-MASS"))
            .setGeometry(new CollidableShapeObject().setDEF("BACK-RIGHT-WHEEL-GEOM")
              .setShape(new ShapeObject().setUSE("WHEEL-GEOM")))))
        .addChild(new CollisionSensorObject().setDEF("COLLISION-OUTPUT")
          .setCollider(new CollisionCollectionObject().setDEF("COLLISION-GROUP").setBounce(0.3).setEnabled(false).setFrictionCoefficients(Java.to([500,500], Java.type("float[]"))).setMinBounceSpeed(0.3).setSoftnessConstantForceMix(0.001)
            .addCollidables(new CollidableShapeObject().setUSE("FRONT-LEFT-WHEEL-GEOM"))
            .addCollidables(new CollidableShapeObject().setUSE("FRONT-RIGHT-WHEEL-GEOM"))
            .addCollidables(new CollidableShapeObject().setUSE("BACK-LEFT-WHEEL-GEOM"))
            .addCollidables(new CollidableShapeObject().setUSE("BACK-RIGHT-WHEEL-GEOM"))
            .addCollidables(new CollidableShapeObject().setUSE("CAR-BODY-GEOM"))
            .addCollidables(new CollidableShapeObject().setUSE("Road-v-001"))
            .addCollidables(new CollidableShapeObject().setUSE("Road-v-002"))
            .addCollidables(new CollidableShapeObject().setUSE("Road-v-003"))
            .addCollidables(new CollidableShapeObject().setUSE("Road-v-004"))
            .addCollidables(new CollidableShapeObject().setUSE("Road-v-006"))
            .addCollidables(new CollidableShapeObject().setUSE("Road-v-007"))
            .addCollidables(new CollidableShapeObject().setUSE("Sand-v-001"))
            .addCollidables(new CollidableShapeObject().setUSE("Sand-v-002"))
            .addCollidables(new CollidableShapeObject().setUSE("WALL-v-001a"))
            .addCollidables(new CollidableShapeObject().setUSE("WALL-v-001b"))
            .addCollidables(new CollidableShapeObject().setUSE("WALL-v-001c"))
            .addCollidables(new CollidableShapeObject().setUSE("WALL-v-001d"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-002"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-003"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-004"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-005"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-006"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-007"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-008"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-009"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-010"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-011"))))
        .addChild(new ScriptObject().setDEF("CAR-CONTROL-SCRIPT").setDirectOutput(true).setUrl(Java.to(["originals/car/CarControlScript.class","http://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/CarControlScript.class"], Java.type("java.lang.String[]")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("resetRequest").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("startingPosition").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("startingOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("wheelBodyRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chassisBodyDimensions").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("speedLimit").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("steeringLimitAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("steeringDeadspot").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("maxEngineTorque").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("maxBrakingTorque").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("maxEngineRevs").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("roadFrictionCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("wallFrictionCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("sandFrictionCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("grassFrictionCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("otherFrictionCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("sideSlipCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("brakeBias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("engineFrontPercentage").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("engineRearPercentage").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("dragCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("downforceCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("reverseSelected").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("carVelocity").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("carOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("currentSteeringAngle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("wheelAcceleratorInput").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("wheelDirectionInput").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("frontWheelOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("rearWheelOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("correctedChassisOrientation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("frontWheelMinStop").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("frontWheelMaxStop").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("frontLeftWheelSpeed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("frontRightWheelSpeed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("rearLeftWheelSpeed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("rearRightWheelSpeed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("frontWheelTorque").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("rearWheelTorque").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("frontLeftAxleAxis").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("frontRightAxleAxis").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("rearLeftAxleAxis").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("rearRightAxleAxis").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("frictionForces").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("chassisPosition_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("chassisOrientation_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("frontLeftWheelPosition_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("frontLeftWheelOrientation_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("frontRightWheelPosition_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("frontRightWheelOrientation_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("backLeftWheelPosition_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("backLeftWheelOrientation_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("backRightWheelPosition_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("backRightWheelOrientation_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("enablePhysics").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("speed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("revs").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("brakesApplied").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("reversing").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("chassis").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("CAR-BODY-GEOM")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("frontLeftWheel").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("FRONT-LEFT-WHEEL-GEOM")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("frontRightWheel").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("FRONT-RIGHT-WHEEL-GEOM")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("backLeftWheel").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("BACK-LEFT-WHEEL-GEOM")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("backRightWheel").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("BACK-RIGHT-WHEEL-GEOM")))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("bigTerrainBox").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("roadTerrain").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("Road-v-001"))
            .addChild(new CollidableShapeObject().setUSE("Road-v-002"))
            .addChild(new CollidableShapeObject().setUSE("Road-v-003"))
            .addChild(new CollidableShapeObject().setUSE("Road-v-004"))
            .addChild(new CollidableShapeObject().setUSE("Road-v-006"))
            .addChild(new CollidableShapeObject().setUSE("Road-v-007")))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("sandTerrain").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("Sand-v-001"))
            .addChild(new CollidableShapeObject().setUSE("Sand-v-002")))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("grassTerrain").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("wallTerrain").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("WALL-v-001a"))
            .addChild(new CollidableShapeObject().setUSE("WALL-v-001b"))
            .addChild(new CollidableShapeObject().setUSE("WALL-v-001c"))
            .addChild(new CollidableShapeObject().setUSE("WALL-v-001d"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-002"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-003"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-004"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-005"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-006"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-007"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-008"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-009"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-010"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-011")))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("bodies").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new RigidBodyObject().setUSE("CAR-BODY"))
            .addChild(new RigidBodyObject().setUSE("FRONT-LEFT-WHEEL-BODY"))
            .addChild(new RigidBodyObject().setUSE("FRONT-RIGHT-WHEEL-BODY"))
            .addChild(new RigidBodyObject().setUSE("BACK-LEFT-WHEEL-BODY"))
            .addChild(new RigidBodyObject().setUSE("BACK-RIGHT-WHEEL-BODY")))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("joints").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new DoubleAxisHingeJointObject().setDEF("FRONT-LEFT-JOINT").setAnchorPoint(Java.to([-0.9,1.5,-2.5], Java.type("float[]"))).setAxis1(Java.to([0,1,0], Java.type("float[]"))).setAxis2(Java.to([-1,0,0], Java.type("float[]"))).setForceOutput(Java.to(["body2Axis","hinge1Angle"], Java.type("java.lang.String[]"))).setMaxAngle1(0).setMaxTorque2(100).setMinAngle1(0).setStop1ErrorCorrection(0.98).setSuspensionErrorCorrection(0.9).setSuspensionForce(0.003)
              .setBody1(new RigidBodyObject().setUSE("CAR-BODY"))
              .setBody2(new RigidBodyObject().setUSE("FRONT-LEFT-WHEEL-BODY")))
            .addChild(new DoubleAxisHingeJointObject().setDEF("FRONT-RIGHT-JOINT").setAnchorPoint(Java.to([0.9,1.5,-2.5], Java.type("float[]"))).setAxis1(Java.to([0,1,0], Java.type("float[]"))).setAxis2(Java.to([1,0,0], Java.type("float[]"))).setForceOutput(Java.to(["body2Axis","hinge1Angle"], Java.type("java.lang.String[]"))).setMaxAngle1(0).setMaxTorque2(100).setMinAngle1(0).setStop1ErrorCorrection(0.98).setSuspensionErrorCorrection(0.9).setSuspensionForce(0.003)
              .setBody1(new RigidBodyObject().setUSE("CAR-BODY"))
              .setBody2(new RigidBodyObject().setUSE("FRONT-RIGHT-WHEEL-BODY")))
            .addChild(new DoubleAxisHingeJointObject().setDEF("BACK-LEFT-JOINT").setAnchorPoint(Java.to([-0.9,1.5,2.5], Java.type("float[]"))).setAxis1(Java.to([0,1,0], Java.type("float[]"))).setAxis2(Java.to([-1,0,0], Java.type("float[]"))).setForceOutput(Java.to(["body2Axis"], Java.type("java.lang.String[]"))).setMaxAngle1(0).setMaxTorque2(100).setMinAngle1(0).setStop1ErrorCorrection(0.98).setSuspensionErrorCorrection(0.9).setSuspensionForce(0.003)
              .setBody1(new RigidBodyObject().setUSE("CAR-BODY"))
              .setBody2(new RigidBodyObject().setUSE("BACK-LEFT-WHEEL-BODY")))
            .addChild(new DoubleAxisHingeJointObject().setDEF("BACK-RIGHT-JOINT").setAnchorPoint(Java.to([0.9,1.5,2.5], Java.type("float[]"))).setAxis1(Java.to([0,1,0], Java.type("float[]"))).setAxis2(Java.to([1,0,0], Java.type("float[]"))).setForceOutput(Java.to(["body2Axis"], Java.type("java.lang.String[]"))).setMaxAngle1(0).setMaxTorque2(100).setMinAngle1(0).setStop1ErrorCorrection(0.98).setSuspensionErrorCorrection(0.9).setSuspensionForce(0.003)
              .setBody1(new RigidBodyObject().setUSE("CAR-BODY"))
              .setBody2(new RigidBodyObject().setUSE("BACK-RIGHT-WHEEL-BODY"))))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("collisionContacts").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("correctedContacts").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFNODE).setName("connectJoints").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new KeySensorObject().setDEF("KEYS"))
        .addChild(new TimeSensorObject().setDEF("KEYTIMER").setLoop(true))
        .addChild(new ScriptObject().setDEF("KEYSC")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("actionKeyPress").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("decay").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("dir").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("accel").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("reverse").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .setSourceCode("ecmascript:\n"+
"    var accelVar = 0;\n"+
"    var dirVar = 0;\n"+
"    var accelFactor = 0.1;\n"+
"    var dirFactor = 0.5;\n"+
"    var decayVar = 0.1;\n"+
"    var applyDecay = false;\n"+
"    \n"+
"    function decay(val) {\n"+
"       if (!applyDecay)\n"+
"          return;\n"+
"          \n"+
"       if (dir >= decayVar) {\n"+
"          dir = dir - decayVar;          \n"+
"          if (dir < -1)\n"+
"             dir = -1;\n"+
"       } else if (dir <= -decayVar) {\n"+
"          dir = dir + decayVar;\n"+
"          \n"+
"          if (dir > 1)\n"+
"             dir = 1;\n"+
"       } else {\n"+
"          dir = 0;\n"+
"          \n"+
"          applyDecay = false;\n"+
"       }   \n"+
"    }\n"+
"    \n"+
"    function actionKeyPress(val) {\n"+
"        applyDecay = true;\n"+
"        \n"+
"    	if (val == 17) {\n"+
"    	   accelVar = accelVar + accelFactor;\n"+
"    	   \n"+
"    	   if (accelVar > 1)\n"+
"    	      accelVar = 1.0;\n"+
"    	      \n"+
"    	   accel = accelVar;\n"+
"    	} else if (val == 18) {\n"+
"    	   accelVar = accelVar - accelFactor;\n"+
"    	   \n"+
"    	   if (accelVar < -1)\n"+
"    	      accelVar = -1.0;\n"+
"    	      \n"+
"    	   accel = accelVar;\n"+
"    	} else if (val == 19) {\n"+
"    	   dirVar = dirVar - dirFactor;\n"+
"    	   \n"+
"    	   if (dirVar < -1)\n"+
"    	      dirVar = -1.0;\n"+
"    	      \n"+
"    	   dir = dirVar;\n"+
"    	} else if (val == 20) {\n"+
"    	   dirVar = dirVar + dirFactor;\n"+
"    	   \n"+
"    	   if (dirVar > 1)\n"+
"    	      dirVar = 1.0;\n"+
"    	      \n"+
"    	   dir = dirVar;\n"+
"    	} else {\n"+
"    	   dir = 0;\n"+
"    	   accel = 0;\n"+
"    	}\n"+
"    }\n"+
""))
        .addChild(new ScriptObject().setDEF("UI-CONTROL-SCRIPT")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("speed").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("revs").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("brakesApplied").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("reversing").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("maxSpeed").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFCOLOR).setName("brakeLightColor").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFCOLOR).setName("reverseLightColor").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("speedScale").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("speedFraction").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .setSourceCode("ecmascript:\n"+
"    function brakesApplied(val) {\n"+
"      if(val)\n"+
"        brakeLightColor.r = 1;\n"+
"      else\n"+
"        brakeLightColor.r = 0.1;\n"+
"    }\n"+
"\n"+
"    function reversing(val) {\n"+
"      if(val) {\n"+
"        reverseLightColor.r = 1;\n"+
"        reverseLightColor.g = 1;\n"+
"        reverseLightColor.b = 1;\n"+
"      } else {\n"+
"        reverseLightColor.r = 0.1;\n"+
"        reverseLightColor.g = 0.1;\n"+
"        reverseLightColor.b = 0.1;\n"+
"      }\n"+
"    }\n"+
"\n"+
"    function speed(val) {\n"+
"      speedScale.x = 1;\n"+
"      speedScale.y = val / maxSpeed;\n"+
"      speedScale.z = 1;\n"+
"      speedFraction = val / maxSpeed;\n"+
"    }\n"+
""))
        .addChild(new ColorInterpolatorObject().setDEF("SPEED-COLOR").setKey(Java.to([0,0.8,0.9,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,0,1,1,0,1,0,0,0,0,1], Java.type("float[]"))))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-LEFT-HINGE-WHEEL-INTERP").setKey(Java.to([-1,0,1], Java.type("float[]"))).setKeyValue(Java.to([0,1,0,0.5236,0,1,0,0,0,1,0,-0.5236], Java.type("float[]"))))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-RIGHT-HINGE-WHEEL-INTERP").setKey(Java.to([-1,0,1], Java.type("float[]"))).setKeyValue(Java.to([0,1,0,0.5236,0,1,0,0,0,1,0,-0.5236], Java.type("float[]"))))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-LEFT-HINGE-ANGLE-INTERP").setKey(Java.to([-0.5236,0,0.5236], Java.type("float[]"))).setKeyValue(Java.to([0,1,0,0.5236,0,1,0,0,0,1,0,-0.5236], Java.type("float[]"))))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-RIGHT-HINGE-ANGLE-INTERP").setKey(Java.to([-0.5236,0,0.5236], Java.type("float[]"))).setKeyValue(Java.to([0,1,0,0.5236,0,1,0,0,0,1,0,-0.5236], Java.type("float[]"))))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-LEFT-MAXSTOP-ANGLE-INTERP").setKey(Java.to([-0.5236,0,0.5236], Java.type("float[]"))).setKeyValue(Java.to([0,1,0,0.5236,0,1,0,0,0,1,0,-0.5236], Java.type("float[]"))))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-RIGHT-MAXSTOP-ANGLE-INTERP").setKey(Java.to([-0.5236,0,0.5236], Java.type("float[]"))).setKeyValue(Java.to([0,1,0,0.5236,0,1,0,0,0,1,0,-0.5236], Java.type("float[]"))))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-LEFT-MINSTOP-ANGLE-INTERP").setKey(Java.to([-0.5236,0,0.5236], Java.type("float[]"))).setKeyValue(Java.to([0,1,0,0.5236,0,1,0,0,0,1,0,-0.5236], Java.type("float[]"))))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-RIGHT-MINSTOP-ANGLE-INTERP").setKey(Java.to([-0.5236,0,0.5236], Java.type("float[]"))).setKeyValue(Java.to([0,1,0,0.5236,0,1,0,0,0,1,0,-0.5236], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDescription("Other position").setPosition(Java.to([0,2,10], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDescription("Top down view of starting position").setOrientation(Java.to([1,0,0,-1.5712], Java.type("float[]"))).setPosition(Java.to([-114.86,20,-66.1922], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDEF("CHASSIS-VIEW").setDescription("Chassis starting position").setPosition(Java.to([0,0,0], Java.type("float[]"))))
        .addChild(new BackgroundObject().setSkyAngle(Java.to([1.5712,3.1416], Java.type("float[]"))).setSkyColor(Java.to([0,1,0,0,0,1,0,0,0], Java.type("float[]"))))
        .addChild(new NavigationInfoObject().setType(Java.to(["NONE"], Java.type("java.lang.String[]"))))
        .addChild(new ScriptObject().setDEF("CAMERA-CONTROL-SCRIPT").setUrl(Java.to(["originals/car/CameraControl.class","http://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/CameraControl.class"], Java.type("java.lang.String[]")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("carPosition").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("resetPosition").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("resetOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("cameraTranslation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFROTATION).setName("cameraRotation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("height").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("chainLength").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("cam_car_chase-TIMER").setToField("set_fraction").setToNode("cam_car_chase-POS-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("cam_car_chase-POS-INTERP").setToField("translation").setToNode("carGroup"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("cam_car_chase-TIMER").setToField("set_fraction").setToNode("cam_car_chase-ROT-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("cam_car_chase-ROT-INTERP").setToField("rotation").setToNode("carGroup"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("cam_car_chase-POS-INTERP").setToField("translation").setToNode("CAR-BODY-TX"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("cam_car_chase-ROT-INTERP").setToField("rotation").setToNode("CAR-BODY-TX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-LEFT-WHEEL-BODY").setToField("translation").setToNode("FRONT-LEFT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("orientation").setFromNode("FRONT-LEFT-WHEEL-BODY").setToField("rotation").setToNode("FRONT-LEFT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-RIGHT-WHEEL-BODY").setToField("translation").setToNode("FRONT-RIGHT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("orientation").setFromNode("FRONT-RIGHT-WHEEL-BODY").setToField("rotation").setToNode("FRONT-RIGHT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("BACK-LEFT-WHEEL-BODY").setToField("translation").setToNode("BACK-LEFT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("orientation").setFromNode("BACK-LEFT-WHEEL-BODY").setToField("rotation").setToNode("BACK-LEFT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("BACK-RIGHT-WHEEL-BODY").setToField("translation").setToNode("BACK-RIGHT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("orientation").setFromNode("BACK-RIGHT-WHEEL-BODY").setToField("rotation").setToNode("BACK-RIGHT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("CAR-BODY").setToField("translation").setToNode("CAR-BODY-TX"))
        .addChild(new ROUTEObject().setFromField("orientation").setFromNode("CAR-BODY").setToField("rotation").setToNode("CAR-BODY-TX"))
        .addChild(new ROUTEObject().setFromField("wheelX").setFromNode("WHEEL").setToField("wheelDirectionInput").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("throttleSlider").setFromNode("WHEEL").setToField("wheelAcceleratorInput").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("button2").setFromNode("WHEEL").setToField("reverseSelected").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("button3").setFromNode("WHEEL").setToField("resetRequest").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("leftStickX").setFromNode("GAMEPAD").setToField("wheelDirectionInput").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("rightStickY").setFromNode("GAMEPAD").setToField("wheelAcceleratorInput").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("l1Button").setFromNode("GAMEPAD").setToField("reverseSelected").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("r1Button").setFromNode("GAMEPAD").setToField("resetRequest").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("actionKeyPress").setFromNode("KEYS").setToField("actionKeyPress").setToNode("KEYSC"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KEYTIMER").setToField("decay").setToNode("KEYSC"))
        .addChild(new ROUTEObject().setFromField("dir").setFromNode("KEYSC").setToField("wheelDirectionInput").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("accel").setFromNode("KEYSC").setToField("wheelAcceleratorInput").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("reverse").setFromNode("KEYSC").setToField("reverseSelected").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("reset").setFromNode("KEYSC").setToField("resetRequest").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("contacts").setFromNode("COLLISION-OUTPUT").setToField("collisionContacts").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("linearVelocity").setFromNode("CAR-BODY").setToField("carVelocity").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("orientation").setFromNode("CAR-BODY").setToField("carOrientation").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("body2Axis").setFromNode("FRONT-LEFT-JOINT").setToField("frontWheelOrientation").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("body2Axis").setFromNode("BACK-LEFT-JOINT").setToField("rearWheelOrientation").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("hinge1Angle").setFromNode("FRONT-LEFT-JOINT").setToField("currentSteeringAngle").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("body2Axis").setFromNode("FRONT-LEFT-JOINT").setToField("finiteRotationAxis").setToNode("FRONT-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("body2Axis").setFromNode("FRONT-RIGHT-JOINT").setToField("finiteRotationAxis").setToNode("FRONT-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("body2Axis").setFromNode("BACK-LEFT-JOINT").setToField("finiteRotationAxis").setToNode("BACK-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("body2Axis").setFromNode("BACK-RIGHT-JOINT").setToField("finiteRotationAxis").setToNode("BACK-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("BODY-COLLECTION"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("COLLISION-GROUP"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("CAR-BODY"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("FRONT-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("FRONT-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("BACK-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("BACK-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("chassisPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("position").setToNode("CAR-BODY"))
        .addChild(new ROUTEObject().setFromField("chassisOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("CAR-BODY"))
        .addChild(new ROUTEObject().setFromField("frontLeftWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("position").setToNode("FRONT-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("frontLeftWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("anchorPoint").setToNode("FRONT-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontLeftWheelOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("FRONT-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("frontRightWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("position").setToNode("FRONT-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("frontRightWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("anchorPoint").setToNode("FRONT-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontRightWheelOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("FRONT-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("backLeftWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("position").setToNode("BACK-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("backLeftWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("anchorPoint").setToNode("BACK-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("backLeftWheelOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("BACK-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("backRightWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("position").setToNode("BACK-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("backRightWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("anchorPoint").setToNode("BACK-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("backRightWheelOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("BACK-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("frontWheelMinStop").setFromNode("CAR-CONTROL-SCRIPT").setToField("minAngle1").setToNode("FRONT-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontWheelMinStop").setFromNode("CAR-CONTROL-SCRIPT").setToField("minAngle1").setToNode("FRONT-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontWheelMaxStop").setFromNode("CAR-CONTROL-SCRIPT").setToField("maxAngle1").setToNode("FRONT-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontWheelMaxStop").setFromNode("CAR-CONTROL-SCRIPT").setToField("maxAngle1").setToNode("FRONT-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontLeftWheelSpeed").setFromNode("CAR-CONTROL-SCRIPT").setToField("desiredAngularVelocity2").setToNode("FRONT-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontRightWheelSpeed").setFromNode("CAR-CONTROL-SCRIPT").setToField("desiredAngularVelocity2").setToNode("FRONT-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("rearLeftWheelSpeed").setFromNode("CAR-CONTROL-SCRIPT").setToField("desiredAngularVelocity2").setToNode("BACK-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("rearRightWheelSpeed").setFromNode("CAR-CONTROL-SCRIPT").setToField("desiredAngularVelocity2").setToNode("BACK-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontWheelTorque").setFromNode("CAR-CONTROL-SCRIPT").setToField("maxTorque2").setToNode("FRONT-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontWheelTorque").setFromNode("CAR-CONTROL-SCRIPT").setToField("maxTorque2").setToNode("FRONT-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("rearWheelTorque").setFromNode("CAR-CONTROL-SCRIPT").setToField("maxTorque2").setToNode("BACK-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("rearWheelTorque").setFromNode("CAR-CONTROL-SCRIPT").setToField("maxTorque2").setToNode("BACK-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontLeftAxleAxis").setFromNode("CAR-CONTROL-SCRIPT").setToField("axis2").setToNode("FRONT-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontRightAxleAxis").setFromNode("CAR-CONTROL-SCRIPT").setToField("axis2").setToNode("FRONT-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("rearLeftAxleAxis").setFromNode("CAR-CONTROL-SCRIPT").setToField("axis2").setToNode("BACK-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("rearRightAxleAxis").setFromNode("CAR-CONTROL-SCRIPT").setToField("axis2").setToNode("BACK-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frictionForces").setFromNode("CAR-CONTROL-SCRIPT").setToField("forces").setToNode("CAR-BODY"))
        .addChild(new ROUTEObject().setFromField("correctedContacts").setFromNode("CAR-CONTROL-SCRIPT").setToField("set_contacts").setToNode("BODY-COLLECTION"))
        .addChild(new ROUTEObject().setFromField("correctedChassisOrientation").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("CAR-BODY"))
        .addChild(new ROUTEObject().setFromField("connectJoints").setFromNode("CAR-CONTROL-SCRIPT").setToField("joints").setToNode("BODY-COLLECTION"))
        .addChild(new ROUTEObject().setFromField("speed").setFromNode("CAR-CONTROL-SCRIPT").setToField("speed").setToNode("UI-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("revs").setFromNode("CAR-CONTROL-SCRIPT").setToField("revs").setToNode("UI-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("brakesApplied").setFromNode("CAR-CONTROL-SCRIPT").setToField("brakesApplied").setToNode("UI-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("reversing").setFromNode("CAR-CONTROL-SCRIPT").setToField("reversing").setToNode("UI-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("brakeLightColor").setFromNode("UI-CONTROL-SCRIPT").setToField("emissiveColor").setToNode("BRAKE-LIGHT-COLOR"))
        .addChild(new ROUTEObject().setFromField("reverseLightColor").setFromNode("UI-CONTROL-SCRIPT").setToField("emissiveColor").setToNode("REVERSE-LIGHT-COLOR"))
        .addChild(new ROUTEObject().setFromField("speedScale").setFromNode("UI-CONTROL-SCRIPT").setToField("scale").setToNode("SPEED-INDICATOR"))
        .addChild(new ROUTEObject().setFromField("speedFraction").setFromNode("UI-CONTROL-SCRIPT").setToField("set_fraction").setToNode("SPEED-COLOR"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("SPEED-COLOR").setToField("emissiveColor").setToNode("SPEED-INDICATOR-COLOR"))
        .addChild(new ROUTEObject().setFromField("wheelX").setFromNode("WHEEL").setToField("set_fraction").setToNode("FRONT-LEFT-HINGE-WHEEL-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-LEFT-HINGE-WHEEL-INTERP").setToField("rotation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-HINGE"))
        .addChild(new ROUTEObject().setFromField("wheelX").setFromNode("WHEEL").setToField("set_fraction").setToNode("FRONT-RIGHT-HINGE-WHEEL-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-RIGHT-HINGE-WHEEL-INTERP").setToField("rotation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-HINGE"))
        .addChild(new ROUTEObject().setFromField("hinge1Angle").setFromNode("FRONT-LEFT-JOINT").setToField("set_fraction").setToNode("FRONT-LEFT-HINGE-ANGLE-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-LEFT-HINGE-ANGLE-INTERP").setToField("rotation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-HINGE"))
        .addChild(new ROUTEObject().setFromField("hinge1Angle").setFromNode("FRONT-RIGHT-JOINT").setToField("set_fraction").setToNode("FRONT-RIGHT-HINGE-ANGLE-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-RIGHT-HINGE-ANGLE-INTERP").setToField("rotation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-HINGE"))
        .addChild(new ROUTEObject().setFromField("maxAngle1").setFromNode("FRONT-LEFT-JOINT").setToField("set_fraction").setToNode("FRONT-LEFT-MAXSTOP-ANGLE-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-LEFT-MAXSTOP-ANGLE-INTERP").setToField("rotation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-MAX"))
        .addChild(new ROUTEObject().setFromField("maxAngle1").setFromNode("FRONT-RIGHT-JOINT").setToField("set_fraction").setToNode("FRONT-RIGHT-MAXSTOP-ANGLE-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-RIGHT-MAXSTOP-ANGLE-INTERP").setToField("rotation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-MAX"))
        .addChild(new ROUTEObject().setFromField("minAngle1").setFromNode("FRONT-LEFT-JOINT").setToField("set_fraction").setToNode("FRONT-LEFT-MINSTOP-ANGLE-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-LEFT-MINSTOP-ANGLE-INTERP").setToField("rotation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-MIN"))
        .addChild(new ROUTEObject().setFromField("minAngle1").setFromNode("FRONT-RIGHT-JOINT").setToField("set_fraction").setToNode("FRONT-RIGHT-MINSTOP-ANGLE-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-RIGHT-MINSTOP-ANGLE-INTERP").setToField("rotation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-MIN"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-LEFT-WHEEL-BODY").setToField("translation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-HINGE"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-RIGHT-WHEEL-BODY").setToField("translation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-HINGE"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-LEFT-WHEEL-BODY").setToField("translation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-MAX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-RIGHT-WHEEL-BODY").setToField("translation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-MAX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-LEFT-WHEEL-BODY").setToField("translation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-MIN"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-RIGHT-WHEEL-BODY").setToField("translation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-MIN"))
        .addChild(new ROUTEObject().setFromField("chassisPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("position").setToNode("CHASSIS-VIEW"))
        .addChild(new ROUTEObject().setFromField("chassisOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("CHASSIS-VIEW"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("CAR-BODY").setToField("carPosition").setToNode("CAMERA-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("chassisPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("resetPosition").setToNode("CAMERA-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("chassisOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("resetOrientation").setToNode("CAMERA-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("cameraTranslation").setFromNode("CAMERA-CONTROL-SCRIPT").setToField("translation").setToNode("CAMERA-TX"))
        .addChild(new ROUTEObject().setFromField("cameraRotation").setFromNode("CAMERA-CONTROL-SCRIPT").setToField("rotation").setToNode("CAMERA-TX")))      ;
    X3D0.toFileX3D("../new/json/CarDemoMain.new.x3d");
