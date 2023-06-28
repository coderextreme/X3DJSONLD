'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var component = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var HAnimSegment = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HAnimModelFootLeft.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Left foot, using high-fidelity definitions for HAnim version 2.0")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Kwan-Hee YOO, Don Brutzman and Joe Williams")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("26 January 2015")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("23 December 2021")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("not yet to scale")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/working-groups/humanoid-animation-HAnim")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("X3D HAnim humanoid animation")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("Integrate and confirm Segment/Joint names, Viewpoints.")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("HAnimModelFootLeft.x3d")}),

            new HAnimHumanoid({
              name : new SFString("Foot_Left"),
              DEF : new SFString("hanim_Foot_Left"),
              loa : new SFInt32(4),
              version : new SFString("2.0"),
              /*original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'*/
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("HAnimHumanoid.info"),
                  reference : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorName"),
                      value : new MFString(["Kwan-Hee YOO, Don Brutzman and Joe Williams"])}))}),
              joints : new MFNode([
                new HAnimJoint({
                  name : new SFString("humanoid_root"),
                  DEF : new SFString("hanim_humanoid_root"),
                  ulimit : new MFFloat([0,0,0]),
                  llimit : new MFFloat([0,0,0]),
                  /*Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model*/
                  children : new MFNode([
                    new HAnimJoint({
                      name : new SFString("l_talocrural"),
                      DEF : new SFString("hanim_l_talocrural"),
                      description : new SFString("connection joint of foot to leg above"),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("l_talus"),
                          DEF : new SFString("hanim_l_talus"),
                          children : new MFNode([
                            new Transform({
                              children : new MFNode([
                                new Shape({
                                  DEF : new SFString("HAnimJointShape"),
                                  geometry : new SFNode(
                                    new Sphere({
                                      radius : new SFFloat(0.025)})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      DEF : new SFString("HAnimJointAppearance"),
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0,0,1])}))}))})])}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      emissiveColor : new SFColor([1,1,1])}))})),
                              geometry : new SFNode(
                                new IndexedLineSet({
                                  DEF : new SFString("TCtoTCN"),
                                  coordIndex : new MFInt32([0,1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0,0,0,-0.3,0])}))}))}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      emissiveColor : new SFColor([1,1,1])}))})),
                              geometry : new SFNode(
                                new IndexedLineSet({
                                  DEF : new SFString("TCtoCC"),
                                  coordIndex : new MFInt32([0,1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0,0,0.2,0.3,0])}))}))})])}),
                      /*TCN*/

                        new HAnimJoint({
                          name : new SFString("l_talocalcaneonavicular"),
                          DEF : new SFString("hanim_l_talocalcaneonavicular"),
                          center : new SFVec3f([0,-0.3,0]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_navicular"),
                              DEF : new SFString("hanim_l_navicular"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0,-0.3,0]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          emissiveColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("TCNtoCN1"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,-0.3,0,-0.1,-0.45,0])}))}))}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          emissiveColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("TCNtoCN2"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,-0.3,0,0,-0.45,0])}))}))}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          emissiveColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("TCNtoCN3"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,-0.3,0,0.1,-0.4,0])}))}))})])}),
                          /*CN1*/

                            new HAnimJoint({
                              name : new SFString("l_cuneonavicular_1"),
                              DEF : new SFString("hanim_l_cuneonavicular_1"),
                              center : new SFVec3f([-0.1,-0.45,0]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_cuneiform_1"),
                                  DEF : new SFString("hanim_l_cuneiform_1"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.1,-0.45,0]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              emissiveColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("CN1toTMT1"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.1,-0.45,0,-0.1,-0.6,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_tarsometatarsal_1"),
                                  DEF : new SFString("hanim_l_tarsometatarsal_1"),
                                  center : new SFVec3f([-0.1,-0.6,0]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_metatarsal_1"),
                                      DEF : new SFString("hanim_l_metatarsal_1"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.1,-0.6,0]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  emissiveColor : new SFColor([1,1,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("TMT1toMTP1"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1,-0.6,0,-0.1,-0.9,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_metatarsophalangeal_1"),
                                      DEF : new SFString("hanim_l_metatarsophalangeal_1"),
                                      center : new SFVec3f([-0.1,-0.9,0]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_tarsal_proximal_phalanx_1"),
                                          DEF : new SFString("hanim_l_tarsal_proximal_phalanx_1"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([-0.1,-0.9,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      emissiveColor : new SFColor([1,1,1])}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("MTP1toIP1"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.1,-0.9,0,-0.1,-1.05,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_tarsal_interphalangeal_1"),
                                          DEF : new SFString("hanim_l_tarsal_interphalangeal_1"),
                                          center : new SFVec3f([-0.1,-1.05,0]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_tarsal_distal_phalanx_1"),
                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_1"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.1,-1.05,0]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          emissiveColor : new SFColor([1,1,1])}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("tiptoe_l_tarsal_distal_interphalangeal_1"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.1,-1.05,0,-0.1,-1.1,0])}))}))})])})])})])})])})])}),
                          /*CN2*/

                            new HAnimJoint({
                              name : new SFString("l_cuneonavicular_2"),
                              DEF : new SFString("hanim_l_cuneonavicular_2"),
                              center : new SFVec3f([0,-0.45,0]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_cuneiform_2"),
                                  DEF : new SFString("hanim_l_cuneiform_2"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0,-0.45,0]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              emissiveColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("CN2toTMT2"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,-0.45,0,0.05,-0.6,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_tarsometatarsal_2"),
                                  DEF : new SFString("hanim_l_tarsometatarsal_2"),
                                  center : new SFVec3f([0.05,-0.6,0]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_metatarsal_2"),
                                      DEF : new SFString("hanim_l_metatarsal_2"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.05,-0.6,0]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  emissiveColor : new SFColor([1,1,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("TMT2toMTP2"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.05,-0.6,0,0.05,-0.9,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_metatarsophalangeal_2"),
                                      DEF : new SFString("hanim_l_metatarsophalangeal_2"),
                                      center : new SFVec3f([0.05,-0.9,0]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_tarsal_proximal_phalanx_2"),
                                          DEF : new SFString("hanim_l_tarsal_proximal_phalanx_2"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.05,-0.9,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      emissiveColor : new SFColor([1,1,1])}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("MTP2toPIP2"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.05,-0.9,0,0.05,-1.05,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_tarsal_proximal_interphalangeal_2"),
                                          DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_2"),
                                          center : new SFVec3f([0.05,-1.05,0]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_tarsal_middle_phalanx_2"),
                                              DEF : new SFString("hanim_l_tarsal_middle_phalanx_2"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.05,-1.05,0]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          emissiveColor : new SFColor([1,1,1])}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("PIP2toDIP2"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.05,-1.05,0,0.05,-1.12,0])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsal_distal_interphalangeal_2"),
                                              DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_2"),
                                              center : new SFVec3f([0.05,-1.12,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_tarsal_distal_phalanx_2"),
                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.05,-1.12,0]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])}),

                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              emissiveColor : new SFColor([1,1,1])}))})),
                                                      geometry : new SFNode(
                                                        new IndexedLineSet({
                                                          DEF : new SFString("tiptoe_l_tarsal_distal_phalanx_2"),
                                                          coordIndex : new MFInt32([0,1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.05,-1.12,0,0.05,-1.16,0])}))}))})])})])})])})])})])})])}),
                          /*CN3*/

                            new HAnimJoint({
                              name : new SFString("l_cuneonavicular_3"),
                              DEF : new SFString("hanim_l_cuneonavicular_3"),
                              center : new SFVec3f([0.1,-0.4,0]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_cuneiform_3"),
                                  DEF : new SFString("hanim_l_cuneiform_3"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.1,-0.4,0]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              emissiveColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("CN3toTMT3"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.1,-0.4,0,0.15,-0.6,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_tarsometatarsal_3"),
                                  DEF : new SFString("hanim_l_tarsometatarsal_3"),
                                  center : new SFVec3f([0.15,-0.6,0]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_metatarsal_3"),
                                      DEF : new SFString("hanim_l_metatarsal_3"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.15,-0.6,0]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  emissiveColor : new SFColor([1,1,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("TMT3toMTP3"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.15,-0.6,0,0.15,-0.9,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_metatarsophalangeal_3"),
                                      DEF : new SFString("hanim_l_metatarsophalangeal_3"),
                                      center : new SFVec3f([0.15,-0.9,0]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_tarsal_proximal_phalanx_3"),
                                          DEF : new SFString("hanim_l_tarsal_proximal_phalanx_3"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.15,-0.9,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      emissiveColor : new SFColor([1,1,1])}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("MTP3toPIP3"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.15,-0.9,0,0.15,-1.05,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_tarsal_proximal_interphalangeal_3"),
                                          DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_3"),
                                          center : new SFVec3f([0.15,-1.05,0]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_tarsal_middle_phalanx_3"),
                                              DEF : new SFString("hanim_l_tarsal_middle_phalanx_3"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.15,-1.05,0]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          emissiveColor : new SFColor([1,1,1])}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("PIP3toDIP3"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.15,-1.05,0,0.15,-1.13,0])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsal_distal_interphalangeal_3"),
                                              DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_3"),
                                              center : new SFVec3f([0.15,-1.13,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_tarsal_distal_phalanx_3"),
                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_3"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.15,-1.13,0]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])}),

                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              emissiveColor : new SFColor([1,1,1])}))})),
                                                      geometry : new SFNode(
                                                        new IndexedLineSet({
                                                          DEF : new SFString("tiptoe_l_tarsal_distal_interphalangeal_3"),
                                                          coordIndex : new MFInt32([0,1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.15,-1.13,0,0.15,-1.16,0])}))}))})])})])})])})])})])})])})])}),
                      /*CC*/

                        new HAnimJoint({
                          name : new SFString("l_calcaneocuboid"),
                          DEF : new SFString("hanim_l_calcaneocuboid"),
                          center : new SFVec3f([0.2,0.3,0]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_calcaneus"),
                              DEF : new SFString("hanim_l_calcaneus"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.2,0.3,0]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          emissiveColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("CCtoTT"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.2,0.3,0,0.21,-0.3,0])}))}))})])}),
                          /*TT*/

                            new HAnimJoint({
                              name : new SFString("l_transversetarsal"),
                              DEF : new SFString("hanim_l_transversetarsal"),
                              center : new SFVec3f([0.21,-0.3,0]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_cuboid"),
                                  DEF : new SFString("hanim_l_cuboid"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.21,-0.3,0]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              emissiveColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("TTtoTMT4"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.21,-0.3,0,0.25,-0.58,0])}))}))}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              emissiveColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("TTtoTMT5"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.21,-0.3,0,0.33,-0.52,0])}))}))})])}),
                              /*TMT4*/

                                new HAnimJoint({
                                  name : new SFString("l_tarsometatarsal_4"),
                                  DEF : new SFString("hanim_l_tarsometatarsal_4"),
                                  center : new SFVec3f([0.25,-0.58,0]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_metatarsal_4"),
                                      DEF : new SFString("hanim_l_metatarsal_4"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.25,-0.58,0]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  emissiveColor : new SFColor([1,1,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("TMT4toMTP4"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.25,-0.58,0,0.25,-0.87,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_metatarsophalangeal_4"),
                                      DEF : new SFString("hanim_l_metatarsophalangeal_4"),
                                      center : new SFVec3f([0.25,-0.87,0]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_tarsal_proximal_phalanx_4"),
                                          DEF : new SFString("hanim_l_tarsal_proximal_phalanx_4"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.25,-0.87,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      emissiveColor : new SFColor([1,1,1])}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("MTP4toPIP4"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.25,-0.87,0,0.25,-1,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_tarsal_proximal_interphalangeal_4"),
                                          DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_4"),
                                          center : new SFVec3f([0.25,-1,0]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_tarsal_middle_phalanx_4"),
                                              DEF : new SFString("hanim_l_tarsal_middle_phalanx_4"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.25,-1,0]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          emissiveColor : new SFColor([1,1,1])}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("PIP4toDIP4"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.25,-1,0,0.25,-1.1,0])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsal_distal_interphalangeal_4"),
                                              DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_4"),
                                              center : new SFVec3f([0.25,-1.1,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_tarsal_distal_phalanx_4"),
                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_4"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.25,-1.1,0]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])}),

                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              emissiveColor : new SFColor([1,1,1])}))})),
                                                      geometry : new SFNode(
                                                        new IndexedLineSet({
                                                          DEF : new SFString("tiptoe_l_tarsal_distal_interphalangeal_4"),
                                                          coordIndex : new MFInt32([0,1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.25,-1.1,0,0.25,-1.15,0])}))}))})])})])})])})])})])}),
                              /*TMT5*/

                                new HAnimJoint({
                                  name : new SFString("l_tarsometatarsal_5"),
                                  DEF : new SFString("hanim_l_tarsometatarsal_5"),
                                  center : new SFVec3f([0.33,-0.52,0]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_metatarsal_5"),
                                      DEF : new SFString("hanim_l_metatarsal_5"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.33,-0.52,0]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  emissiveColor : new SFColor([1,1,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("TMT5toMTP5"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.33,-0.52,0,0.34,-0.8,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_metatarsophalangeal_5"),
                                      DEF : new SFString("hanim_l_metatarsophalangeal_5"),
                                      center : new SFVec3f([0.34,-0.8,0]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_tarsal_proximal_phalanx_5"),
                                          DEF : new SFString("hanim_l_tarsal_proximal_phalanx_5"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.34,-0.8,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      emissiveColor : new SFColor([1,1,1])}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("MTP5toPIP5"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.34,-0.8,0,0.34,-0.95,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_tarsal_proximal_interphalangeal_5"),
                                          DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_5"),
                                          center : new SFVec3f([0.34,-0.95,0]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_tarsal_middle_phalanx_5"),
                                              DEF : new SFString("hanim_l_tarsal_middle_phalanx_5"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.34,-0.95,0]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({
                                                          emissiveColor : new SFColor([1,1,1])}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("PIP5toDIP5"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.34,-0.95,0,0.34,-1.05,0])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsal_distal_interphalangeal_5"),
                                              DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_5"),
                                              center : new SFVec3f([0.34,-1.05,0]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_tarsal_distal_phalanx_5"),
                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_5"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.34,-1.05,0]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])}),

                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          material : new SFNode(
                                                            new Material({
                                                              emissiveColor : new SFColor([1,1,1])}))})),
                                                      geometry : new SFNode(
                                                        new IndexedLineSet({
                                                          DEF : new SFString("tiptoe_l_tarsal_distal_interphalangeal_5"),
                                                          coordIndex : new MFInt32([0,1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.34,-1.05,0,0.34,-1.08,0])}))}))})])})])})])})])})])})])})])})])})])}),

                new HAnimJoint({
                  USE : new SFString("hanim_humanoid_root")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_calcaneocuboid")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_cuneonavicular_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_cuneonavicular_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_cuneonavicular_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_talocalcaneonavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_talocrural")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_interphalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_proximal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_proximal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_proximal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_proximal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_transversetarsal")}),
              segments : new MFNode([
                new HAnimSegment({
                  USE : new SFString("hanim_l_calcaneus")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_cuboid")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_cuneiform_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_cuneiform_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_cuneiform_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metatarsal_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metatarsal_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metatarsal_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metatarsal_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metatarsal_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_navicular")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_talus")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_middle_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_middle_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_middle_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_middle_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_proximal_phalanx_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_proximal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_proximal_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_proximal_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_proximal_phalanx_5")})])})])}))});
console.log(X3D0.toXMLNode());
