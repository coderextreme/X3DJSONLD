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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addComponent((new autoclass.component()).setLevel(1).setName("H-Anim"))
        .addMeta((new autoclass.meta()).setContent("HAnimModelHandRight.x3d").setName("title"))
        .addMeta((new autoclass.meta()).setContent("Right hand using high-fidelity definitions for H-Anim version 2.2").setName("description"))
        .addMeta((new autoclass.meta()).setContent("YOO Kwan Hee and Don Brutzman").setName("creator"))
        .addMeta((new autoclass.meta()).setContent("26 January 2015").setName("created"))
        .addMeta((new autoclass.meta()).setContent("20 October 2019").setName("modified"))
        .addMeta((new autoclass.meta()).setContent("not yet to scale").setName("warning"))
        .addMeta((new autoclass.meta()).setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?").setName("warning"))
        .addMeta((new autoclass.meta()).setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("https://www.web3d.org/files/specifications/19774/V1.0").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("X3D H-Anim humanoid animation").setName("subject"))
        .addMeta((new autoclass.meta()).setContent("scene, DOCTYPE and Schema under development.").setName("warning"))
        .addMeta((new autoclass.meta()).setContent("Integrate and confirm Segment/Joint names, Viewpoints.").setName("TODO"))
        .addMeta((new autoclass.meta()).setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.x3d").setName("identifier"))
        .addMeta((new autoclass.meta()).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta((new autoclass.meta()).setContent("../license.html").setName("license")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("HAnimModelHandRight.x3d"))
        .addChild((new autoclass.HAnimHumanoid()).setDEF("Humanoid_Right_hand").setJointBindingPositions(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setJointBindingRotations(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)])).setJointBindingScales(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setLoa(-1).setName("Humanoid_Right_hand").setSkeletalConfiguration("BASIC").setVersion("2.0")
          .addJoints((new autoclass.HAnimJoint()).setDEF("hanim_HumanoidRoot").setName("humanoid_root")
            .addChild((new autoclass.HAnimJoint()).setDEF("r_radiocarpal_joint").setName("r_radiocarpal_joint")
              .addChild((new autoclass.HAnimSegment()).setDEF("r_wrist").setName("r_wrist")
                .addChild((new autoclass.Transform())
                  .addChild((new autoclass.Shape()).setDEF("HAnimJointShape")
                    .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.025)))
                    .setAppearance((new autoclass.Appearance()).setDEF("HAnimJointAppearanceBlue")
                      .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                  .setGeometry((new autoclass.IndexedLineSet()).setDEF("RCToMC12").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-0.1), java.newFloat(0.1), java.newFloat(0)])))))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                  .setGeometry((new autoclass.IndexedLineSet()).setDEF("RCToMC3").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.07), java.newFloat(0)])))))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                  .setGeometry((new autoclass.IndexedLineSet()).setDEF("RCToMC45").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0)]))))))
              .addComments((new autoclass.CommentsBlock(" MC12 ")))
              .addChild((new autoclass.HAnimJoint()).setDEF("r_midcarpal_joint_12").setCenter(java.newArray("float", [java.newFloat(-0.1), java.newFloat(0.1), java.newFloat(0)])).setName("r_midcarpal_joint_12")
                .addChild((new autoclass.HAnimSegment()).setDEF("r_trapezoid").setName("r_trapezoid")
                  .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-0.1), java.newFloat(0.1), java.newFloat(0)]))
                    .addChild((new autoclass.Shape()).setDEF("HAnimNewJointShape")
                      .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.025)))
                      .setAppearance((new autoclass.Appearance()).setDEF("HAnimJointAppearanceRed")
                        .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                    .setGeometry((new autoclass.IndexedLineSet()).setDEF("MC12toCMC1").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.1), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.2), java.newFloat(0.15), java.newFloat(0)])))))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                    .setGeometry((new autoclass.IndexedLineSet()).setDEF("MC12toCMC2").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.1), java.newFloat(0.1), java.newFloat(0), java.newFloat(-0.1), java.newFloat(0.2), java.newFloat(0)]))))))
                .addComments((new autoclass.CommentsBlock(" thumb finger ")))
                .addChild((new autoclass.HAnimJoint()).setDEF("r_carpometacarpal_joint_1").setCenter(java.newArray("float", [java.newFloat(-0.2), java.newFloat(0.15), java.newFloat(0)])).setName("r_carpometacarpal_joint_1")
                  .addChild((new autoclass.HAnimSegment()).setDEF("r_metacarpal_1").setName("r_metacarpal_1")
                    .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-0.2), java.newFloat(0.15), java.newFloat(0)]))
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                      .setGeometry((new autoclass.IndexedLineSet()).setDEF("CMC1toMCP1").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.2), java.newFloat(0.15), java.newFloat(0), java.newFloat(-0.3), java.newFloat(0.3), java.newFloat(0)]))))))
                  .addChild((new autoclass.HAnimJoint()).setDEF("r_metacarpophalangeal_joint_1").setCenter(java.newArray("float", [java.newFloat(-0.3), java.newFloat(0.3), java.newFloat(0)])).setName("r_metacarpophalangeal_joint_1")
                    .addChild((new autoclass.HAnimSegment()).setDEF("r_proximal_phalanges1").setName("r_proximal_phalanges1")
                      .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-0.3), java.newFloat(0.3), java.newFloat(0)]))
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                        .setGeometry((new autoclass.IndexedLineSet()).setDEF("MCP11toIP1").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.3), java.newFloat(0.3), java.newFloat(0), java.newFloat(-0.35), java.newFloat(0.4), java.newFloat(0)]))))))
                    .addChild((new autoclass.HAnimJoint()).setDEF("r_interphalangeal_joint_1").setCenter(java.newArray("float", [java.newFloat(-0.35), java.newFloat(0.4), java.newFloat(0)])).setName("r_interphalangeal_joint_1")
                      .addChild((new autoclass.HAnimSegment()).setDEF("r_distal_phalanges1").setName("r_distal_phalanges1")
                        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-0.35), java.newFloat(0.4), java.newFloat(0)]))
                          .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance())
                            .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                          .setGeometry((new autoclass.IndexedLineSet()).setDEF("fingertip_r_interphalangeal_joint_1").setCoordIndex(java.newArray("int", [0,1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.35), java.newFloat(0.4), java.newFloat(0), java.newFloat(-0.36), java.newFloat(0.45), java.newFloat(0)])))))))))
                .addComments((new autoclass.CommentsBlock(" index finger ")))
                .addChild((new autoclass.HAnimJoint()).setDEF("r_carpometacarpal_joint_2").setCenter(java.newArray("float", [java.newFloat(-0.1), java.newFloat(0.2), java.newFloat(0)])).setName("r_carpometacarpal_joint_2")
                  .addChild((new autoclass.HAnimSegment()).setDEF("r_metacarpal_2").setName("r_metacarpal_2")
                    .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-0.1), java.newFloat(0.2), java.newFloat(0)]))
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                      .setGeometry((new autoclass.IndexedLineSet()).setDEF("CMC2toMCP2").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.1), java.newFloat(0.2), java.newFloat(0), java.newFloat(-0.15), java.newFloat(0.5), java.newFloat(0)]))))))
                  .addChild((new autoclass.HAnimJoint()).setDEF("r_metacarpophalangeal_joint_2").setCenter(java.newArray("float", [java.newFloat(-0.15), java.newFloat(0.5), java.newFloat(0)])).setName("r_metacarpophalangeal_joint_2")
                    .addChild((new autoclass.HAnimSegment()).setDEF("r_proximal_phalanges2").setName("r_proximal_phalanges2")
                      .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-0.15), java.newFloat(0.5), java.newFloat(0)]))
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                        .setGeometry((new autoclass.IndexedLineSet()).setDEF("MCP2toPIP2").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.15), java.newFloat(0.5), java.newFloat(0), java.newFloat(-0.2), java.newFloat(0.7), java.newFloat(0)]))))))
                    .addChild((new autoclass.HAnimJoint()).setDEF("r_proximal_interphalangeal_joint_2").setCenter(java.newArray("float", [java.newFloat(-0.2), java.newFloat(0.7), java.newFloat(0)])).setName("r_proximal_interphalangeal_joint_2")
                      .addChild((new autoclass.HAnimSegment()).setDEF("r_middle_phalanges2").setName("r_middle_phalanges2")
                        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-0.2), java.newFloat(0.7), java.newFloat(0)]))
                          .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance())
                            .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                          .setGeometry((new autoclass.IndexedLineSet()).setDEF("PIP2toDIP2").setCoordIndex(java.newArray("int", [0,1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.2), java.newFloat(0.7), java.newFloat(0), java.newFloat(-0.24), java.newFloat(0.87), java.newFloat(0)]))))))
                      .addChild((new autoclass.HAnimJoint()).setDEF("r_distal_interphalangeal_joint_2").setCenter(java.newArray("float", [java.newFloat(-0.24), java.newFloat(0.87), java.newFloat(0)])).setName("r_distal_interphalangeal_joint_2")
                        .addChild((new autoclass.HAnimSegment()).setDEF("r_distal_phalanges2").setName("r_distal_phalanges2")
                          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-0.24), java.newFloat(0.87), java.newFloat(0)]))
                            .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                          .addChild((new autoclass.Shape())
                            .setAppearance((new autoclass.Appearance())
                              .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                            .setGeometry((new autoclass.IndexedLineSet()).setDEF("fingertip_r_distal_interphalangeal_joint_2").setCoordIndex(java.newArray("int", [0,1]))
                              .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.24), java.newFloat(0.87), java.newFloat(0), java.newFloat(-0.26), java.newFloat(0.93), java.newFloat(0)])))))))))))
              .addComments((new autoclass.CommentsBlock(" MC3 ")))
              .addChild((new autoclass.HAnimJoint()).setDEF("r_midcarpal_joint_3").setCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0.07), java.newFloat(0)])).setName("r_midcarpal_joint_3")
                .addChild((new autoclass.HAnimSegment()).setDEF("r_capitate").setName("r_capitate")
                  .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.07), java.newFloat(0)]))
                    .addChild((new autoclass.Shape()).setUSE("HAnimNewJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                    .setGeometry((new autoclass.IndexedLineSet()).setDEF("MC3toCMC3").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0.07), java.newFloat(0), java.newFloat(0), java.newFloat(0.2), java.newFloat(0)]))))))
                .addComments((new autoclass.CommentsBlock(" Middle fingle ")))
                .addChild((new autoclass.HAnimJoint()).setDEF("r_carpometacarpal_joint_3").setCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0.2), java.newFloat(0)])).setName("r_carpometacarpal_joint_3")
                  .addChild((new autoclass.HAnimSegment()).setDEF("r_metacarpal_3").setName("r_metacarpal_3")
                    .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.2), java.newFloat(0)]))
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                      .setGeometry((new autoclass.IndexedLineSet()).setDEF("CMC3toMCP3").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0.2), java.newFloat(0), java.newFloat(-0.03), java.newFloat(0.5), java.newFloat(0)]))))))
                  .addChild((new autoclass.HAnimJoint()).setDEF("r_metacarpophalangeal_joint_3").setCenter(java.newArray("float", [java.newFloat(-0.03), java.newFloat(0.5), java.newFloat(0)])).setName("r_metacarpophalangeal_joint_3")
                    .addChild((new autoclass.HAnimSegment()).setDEF("r_proximal_phalanges3").setName("r_proximal_phalanges3")
                      .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-0.03), java.newFloat(0.5), java.newFloat(0)]))
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                        .setGeometry((new autoclass.IndexedLineSet()).setDEF("MCP3toPIP3").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.03), java.newFloat(0.5), java.newFloat(0), java.newFloat(-0.05), java.newFloat(0.75), java.newFloat(0)]))))))
                    .addChild((new autoclass.HAnimJoint()).setDEF("r_proximal_interphalangeal_joint_3").setCenter(java.newArray("float", [java.newFloat(-0.05), java.newFloat(0.75), java.newFloat(0)])).setName("r_proximal_interphalangeal_joint_3")
                      .addChild((new autoclass.HAnimSegment()).setDEF("r_middle_phalanges3").setName("r_middle_phalanges3")
                        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-0.05), java.newFloat(0.75), java.newFloat(0)]))
                          .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance())
                            .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                          .setGeometry((new autoclass.IndexedLineSet()).setDEF("PIP3toDIP3").setCoordIndex(java.newArray("int", [0,1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.05), java.newFloat(0.75), java.newFloat(0), java.newFloat(-0.08), java.newFloat(0.96), java.newFloat(0)]))))))
                      .addChild((new autoclass.HAnimJoint()).setDEF("r_distal_interphalangeal_joint_3").setCenter(java.newArray("float", [java.newFloat(-0.08), java.newFloat(0.96), java.newFloat(0)])).setName("r_distal_interphalangeal_joint_3")
                        .addChild((new autoclass.HAnimSegment()).setDEF("r_distal_phalanges3").setName("r_distal_phalanges3")
                          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-0.08), java.newFloat(0.96), java.newFloat(0)]))
                            .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                          .addChild((new autoclass.Shape())
                            .setAppearance((new autoclass.Appearance())
                              .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                            .setGeometry((new autoclass.IndexedLineSet()).setDEF("fingertip_r_distal_interphalangeal_joint_3").setCoordIndex(java.newArray("int", [0,1]))
                              .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(-0.08), java.newFloat(0.96), java.newFloat(0), java.newFloat(-0.09), java.newFloat(1.05), java.newFloat(0)])))))))))))
              .addComments((new autoclass.CommentsBlock(" MC45 ")))
              .addChild((new autoclass.HAnimJoint()).setDEF("r_midcarpal_joint_45").setCenter(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0)])).setName("r_midcarpal_joint_45")
                .addChild((new autoclass.HAnimSegment()).setDEF("r_hamate").setName("r_hamate")
                  .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0)]))
                    .addChild((new autoclass.Shape()).setUSE("HAnimNewJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                    .setGeometry((new autoclass.IndexedLineSet()).setDEF("MC45toCMC4").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0), java.newFloat(0.1), java.newFloat(0.2), java.newFloat(0)])))))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                    .setGeometry((new autoclass.IndexedLineSet()).setDEF("MC45toCMC5").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0), java.newFloat(0.15), java.newFloat(0.17), java.newFloat(0)]))))))
                .addComments((new autoclass.CommentsBlock(" ring finger ")))
                .addChild((new autoclass.HAnimJoint()).setDEF("r_carpometacarpal_joint_4").setCenter(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.2), java.newFloat(0)])).setName("r_carpometacarpal_joint_4")
                  .addChild((new autoclass.HAnimSegment()).setDEF("r_metacarpal_4").setName("r_metacarpal_4")
                    .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.2), java.newFloat(0)]))
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                      .setGeometry((new autoclass.IndexedLineSet()).setDEF("CMC4toMCP4").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.2), java.newFloat(0), java.newFloat(0.1), java.newFloat(0.47), java.newFloat(0)]))))))
                  .addChild((new autoclass.HAnimJoint()).setDEF("r_metacarpophalangeal_joint_4").setCenter(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.47), java.newFloat(0)])).setName("r_metacarpophalangeal_joint_4")
                    .addChild((new autoclass.HAnimSegment()).setDEF("r_proximal_phalanges4").setName("r_proximal_phalanges4")
                      .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.47), java.newFloat(0)]))
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                        .setGeometry((new autoclass.IndexedLineSet()).setDEF("MCP4toPIP4").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.47), java.newFloat(0), java.newFloat(0.1), java.newFloat(0.7), java.newFloat(0)]))))))
                    .addChild((new autoclass.HAnimJoint()).setDEF("r_proximal_interphalangeal_joint_4").setCenter(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.7), java.newFloat(0)])).setName("r_proximal_interphalangeal_joint_4")
                      .addChild((new autoclass.HAnimSegment()).setDEF("r_middle_phalanges4").setName("r_middle_phalanges4")
                        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.7), java.newFloat(0)]))
                          .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance())
                            .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                          .setGeometry((new autoclass.IndexedLineSet()).setDEF("PIP4toDIP4").setCoordIndex(java.newArray("int", [0,1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.7), java.newFloat(0), java.newFloat(0.1), java.newFloat(0.93), java.newFloat(0)]))))))
                      .addChild((new autoclass.HAnimJoint()).setDEF("r_distal_interphalangeal_joint_4").setCenter(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.93), java.newFloat(0)])).setName("r_distal_interphalangeal_joint_4")
                        .addChild((new autoclass.HAnimSegment()).setDEF("r_distal_phalanx4").setName("r_distal_phalanx4")
                          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.93), java.newFloat(0)]))
                            .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                          .addChild((new autoclass.Shape())
                            .setAppearance((new autoclass.Appearance())
                              .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                            .setGeometry((new autoclass.IndexedLineSet()).setDEF("fingertip_r_distal_interphalangeal_joint_4").setCoordIndex(java.newArray("int", [0,1]))
                              .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.93), java.newFloat(0), java.newFloat(0.1), java.newFloat(1), java.newFloat(0)]))))))))))
                .addComments((new autoclass.CommentsBlock(" pinky finger ")))
                .addChild((new autoclass.HAnimJoint()).setDEF("r_carpometacarpal_joint_5").setCenter(java.newArray("float", [java.newFloat(0.15), java.newFloat(0.17), java.newFloat(0)])).setName("r_carpometacarpal_joint_5")
                  .addChild((new autoclass.HAnimSegment()).setDEF("r_metacarpal_5").setName("r_metacarpal_5")
                    .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0.15), java.newFloat(0.17), java.newFloat(0)]))
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                      .setGeometry((new autoclass.IndexedLineSet()).setDEF("CMC5toMCP5").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0.15), java.newFloat(0.17), java.newFloat(0), java.newFloat(0.2), java.newFloat(0.4), java.newFloat(0)]))))))
                  .addChild((new autoclass.HAnimJoint()).setDEF("r_metacarpophalangeal_joint_5").setCenter(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.4), java.newFloat(0)])).setName("r_metacarpophalangeal_joint_5")
                    .addChild((new autoclass.HAnimSegment()).setDEF("r_proximal_phalanges5").setName("r_proximal_phalanges2")
                      .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.4), java.newFloat(0)]))
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                        .setGeometry((new autoclass.IndexedLineSet()).setDEF("MCP5toPIP5").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.4), java.newFloat(0), java.newFloat(0.23), java.newFloat(0.63), java.newFloat(0)]))))))
                    .addChild((new autoclass.HAnimJoint()).setDEF("r_proximal_interphalangeal_joint_5").setCenter(java.newArray("float", [java.newFloat(0.23), java.newFloat(0.63), java.newFloat(0)])).setName("r_proximal_interphalangeal_joint_5")
                      .addChild((new autoclass.HAnimSegment()).setDEF("r_middle_phalanges5").setName("r_middle_phalanges5")
                        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0.23), java.newFloat(0.63), java.newFloat(0)]))
                          .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance())
                            .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                          .setGeometry((new autoclass.IndexedLineSet()).setDEF("PIP5toDIP5").setCoordIndex(java.newArray("int", [0,1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0.23), java.newFloat(0.63), java.newFloat(0), java.newFloat(0.25), java.newFloat(0.79), java.newFloat(0)]))))))
                      .addChild((new autoclass.HAnimJoint()).setDEF("r_distal_interphalangeal_joint_5").setCenter(java.newArray("float", [java.newFloat(0.25), java.newFloat(0.79), java.newFloat(0)])).setName("r_distal_interphalangeal_joint_5")
                        .addChild((new autoclass.HAnimSegment()).setDEF("r_distal_phalanges5").setName("r_distal_phalanges5")
                          .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0.25), java.newFloat(0.79), java.newFloat(0)]))
                            .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                          .addChild((new autoclass.Shape())
                            .setAppearance((new autoclass.Appearance())
                              .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))
                            .setGeometry((new autoclass.IndexedLineSet()).setDEF("fingertip_r_distal_interphalangeal_joint_5").setCoordIndex(java.newArray("int", [0,1]))
                              .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0.25), java.newFloat(0.79), java.newFloat(0), java.newFloat(0.26), java.newFloat(0.85), java.newFloat(0)])))))))))))))
          .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_HumanoidRoot"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_radiocarpal_joint"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_midcarpal_joint_12"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_carpometacarpal_joint_1"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_metacarpophalangeal_joint_1"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_interphalangeal_joint_1"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_carpometacarpal_joint_2"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_metacarpophalangeal_joint_2"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_proximal_interphalangeal_joint_2"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_distal_interphalangeal_joint_2"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_midcarpal_joint_3"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_carpometacarpal_joint_3"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_metacarpophalangeal_joint_3"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_proximal_interphalangeal_joint_3"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_distal_interphalangeal_joint_3"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_midcarpal_joint_45"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_carpometacarpal_joint_4"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_metacarpophalangeal_joint_4"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_proximal_interphalangeal_joint_4"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_distal_interphalangeal_joint_4"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_carpometacarpal_joint_5"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_metacarpophalangeal_joint_5"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_proximal_interphalangeal_joint_5"))
          .addJoints((new autoclass.HAnimJoint()).setUSE("r_distal_interphalangeal_joint_5"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_wrist"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_trapezoid"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_metacarpal_1"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_proximal_phalanges1"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_distal_phalanges1"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_metacarpal_2"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_proximal_phalanges2"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_middle_phalanges2"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_distal_phalanges2"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_capitate"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_metacarpal_3"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_proximal_phalanges3"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_middle_phalanges3"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_distal_phalanges3"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_hamate"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_metacarpal_4"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_proximal_phalanges4"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_middle_phalanges4"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_distal_phalanx4"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_metacarpal_5"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_proximal_phalanges5"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_middle_phalanges5"))
          .addSegments((new autoclass.HAnimSegment()).setUSE("r_distal_phalanges5"))))      ;
    X3D0.toFileX3D("../data/HAnimModelHandRight.new.x3d");