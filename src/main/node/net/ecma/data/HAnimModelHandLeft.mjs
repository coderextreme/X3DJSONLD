'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { component } from './x3d.mjs';
import { SFInt32 } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { HAnimHumanoid } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { MetadataSet } from './x3d.mjs';
import { MetadataString } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { HAnimJoint } from './x3d.mjs';
import { HAnimSegment } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { IndexedLineSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
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
              content : new SFString("HAnimModelHandLeft.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Left hand, using high-fidelity definitions for HAnim version 2.0")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Kwan-Hee YOO, Don Brutzman and Joe Williams")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("26 January 2015")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("14 March 2021")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("HAnimModelHandRightSegmentVisualizationError.png")}),

            new meta({
              name : new SFString("error"),
              content : new SFString("not yet to scale, also relatively flat")}),

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
              content : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints")}),

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
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d")}),

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
              title : new SFString("HAnimModelHandLeft.x3d")}),

            new HAnimHumanoid({
              name : new SFString("Hand_Left"),
              DEF : new SFString("hanim_Hand_Left"),
              loa : new SFInt32(4),
              version : new SFString("2.0"),
              { "#comment" : new CommentsBlock("HAnimHumanoid original info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'") },
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("HAnimHumanoid.info"),
                  reference : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorName"),
                      value : new MFString(["Kwan-Hee YOO, Don Brutzman and Joe Williams"])}))}),
              joints : new SFNode(
                new HAnimJoint({
                  name : new SFString("humanoid_root"),
                  DEF : new SFString("hanim_humanoid_root"),
                  { "#comment" : new CommentsBlock("Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model") },
                  children : new MFNode([
                    new HAnimJoint({
                      name : new SFString("l_radiocarpal"),
                      DEF : new SFString("hanim_l_radiocarpal"),
                      description : new SFString("connection joint of hand to leg above"),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("l_carpal"),
                          DEF : new SFString("hanim_l_carpal"),
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
                                      DEF : new SFString("HAnimJointAppearanceBlue"),
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
                                  DEF : new SFString("RCToMC12"),
                                  coordIndex : new MFInt32([0,1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0,0,0.1,0.1,0])}))}))}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      emissiveColor : new SFColor([1,1,1])}))})),
                              geometry : new SFNode(
                                new IndexedLineSet({
                                  DEF : new SFString("RCToMC3"),
                                  coordIndex : new MFInt32([0,1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0,0,0,0.07,0])}))}))}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      emissiveColor : new SFColor([1,1,1])}))})),
                              geometry : new SFNode(
                                new IndexedLineSet({
                                  DEF : new SFString("RCToMC45"),
                                  coordIndex : new MFInt32([0,1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0,0,-0.1,0.1,0])}))}))})])}),
                      { "#comment" : new CommentsBlock("MC1") },

                        new HAnimJoint({
                          name : new SFString("l_midcarpal_1"),
                          DEF : new SFString("hanim_l_midcarpal_1"),
                          center : new SFVec3f([0.14,0.09,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_trapezium"),
                              DEF : new SFString("hanim_l_trapezium"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.14,0.09,0]),
                                  children : new MFNode([
                                    new Shape({
                                      DEF : new SFString("HAnimNewJointShape"),
                                      geometry : new SFNode(
                                        new Sphere({
                                          radius : new SFFloat(0.025)})),
                                      appearance : new SFNode(
                                        new Appearance({
                                          DEF : new SFString("HAnimJointAppearanceRed"),
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,0,0])}))}))})])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          emissiveColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("MC12toCMC1"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.1,0.1,0,0.2,0.15,0])}))}))}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          emissiveColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("MC1toCMC1"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.1,0.1,0,0.1,0.2,0])}))}))})])}),
                          { "#comment" : new CommentsBlock("thumb finger") },

                            new HAnimJoint({
                              name : new SFString("l_carpometacarpal_1"),
                              DEF : new SFString("hanim_l_carpometacarpal_1"),
                              center : new SFVec3f([0.2,0.15,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_metacarpal_1"),
                                  DEF : new SFString("hanim_l_metacarpal_1"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.2,0.15,0]),
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
                                          DEF : new SFString("CMC1toMCP1"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.2,0.15,0,0.3,0.3,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_metacarpophalangeal_1"),
                                  DEF : new SFString("hanim_l_metacarpophalangeal_1"),
                                  center : new SFVec3f([0.3,0.3,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_carpal_proximal_phalanx_1"),
                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_1"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.3,0.3,0]),
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
                                              DEF : new SFString("MCP11toIP1"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.3,0.3,0,0.35,0.4,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_carpal_interphalangeal_1"),
                                      DEF : new SFString("hanim_l_carpal_interphalangeal_1"),
                                      center : new SFVec3f([0.35,0.4,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_carpal_distal_phalanx_1"),
                                          DEF : new SFString("hanim_l_carpal_distal_phalanx_1"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.35,0.4,0]),
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
                                                  DEF : new SFString("fingertip_l_carpal_interphalangeal_1"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.35,0.4,0,0.36,0.45,0])}))}))})])})])})])})])})])}),
                      { "#comment" : new CommentsBlock("MC2") },

                        new HAnimJoint({
                          name : new SFString("l_midcarpal_2"),
                          DEF : new SFString("hanim_l_midcarpal_2"),
                          center : new SFVec3f([0.07,0.07,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_trapezoid"),
                              DEF : new SFString("hanim_l_trapezoid"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.07,0.07,0]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimNewJointShape")})])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          emissiveColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("MC2toCMC2"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.1,0.1,0,-0.1,0.2,0])}))}))})])}),
                          { "#comment" : new CommentsBlock("index finger") },

                            new HAnimJoint({
                              name : new SFString("l_carpometacarpal_2"),
                              DEF : new SFString("hanim_l_carpometacarpal_2"),
                              center : new SFVec3f([0.1,0.2,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_metacarpal_2"),
                                  DEF : new SFString("hanim_l_metacarpal_2"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.1,0.2,0]),
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
                                          DEF : new SFString("CMC2toMCP2"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.1,0.2,0,0.15,0.5,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_metacarpophalangeal_2"),
                                  DEF : new SFString("hanim_l_metacarpophalangeal_2"),
                                  center : new SFVec3f([0.15,0.5,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_carpal_proximal_phalanx_2"),
                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_2"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.15,0.5,0]),
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
                                              DEF : new SFString("MCP2toPIP2"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.15,0.5,0,0.2,0.7,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_carpal_proximal_interphalangeal_2"),
                                      DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_2"),
                                      center : new SFVec3f([0.2,0.7,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_carpal_middle_phalanx_2"),
                                          DEF : new SFString("hanim_l_carpal_middle_phalanx_2"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.2,0.7,0]),
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
                                                      point : new MFVec3f([0.2,0.7,0,0.24,0.87,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_carpal_distal_interphalangeal_2"),
                                          DEF : new SFString("hanim_l_carpal_distal_interphalangeal_2"),
                                          center : new SFVec3f([0.24,0.87,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_carpal_distal_phalanx_2"),
                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_2"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.24,0.87,0]),
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
                                                      DEF : new SFString("fingertip_l_carpal_distal_interphalangeal_2"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.24,0.87,0,0.26,0.93,0])}))}))})])})])})])})])})])})])}),
                      { "#comment" : new CommentsBlock("MC3") },

                        new HAnimJoint({
                          name : new SFString("l_midcarpal_3"),
                          DEF : new SFString("hanim_l_midcarpal_3"),
                          center : new SFVec3f([0,0.07,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_capitate"),
                              DEF : new SFString("hanim_l_capitate"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0,0.07,0]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimNewJointShape")})])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          emissiveColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("MC3toCMC3"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.07,0,0,0.2,0])}))}))})])}),
                          { "#comment" : new CommentsBlock("Middle fingle") },

                            new HAnimJoint({
                              name : new SFString("l_carpometacarpal_3"),
                              DEF : new SFString("hanim_l_carpometacarpal_3"),
                              center : new SFVec3f([0,0.2,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_metacarpal_3"),
                                  DEF : new SFString("hanim_l_metacarpal_3"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0,0.2,0]),
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
                                          DEF : new SFString("CMC3toMCP3"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0.2,0,0.03,0.5,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_metacarpophalangeal_3"),
                                  DEF : new SFString("hanim_l_metacarpophalangeal_3"),
                                  center : new SFVec3f([0.03,0.5,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_carpal_proximal_phalanx_3"),
                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_3"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.03,0.5,0]),
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
                                              DEF : new SFString("MCP3toPIP3"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.03,0.5,0,0.05,0.75,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_carpal_proximal_interphalangeal_3"),
                                      DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_3"),
                                      center : new SFVec3f([0.05,0.75,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_carpal_middle_phalanx_3"),
                                          DEF : new SFString("hanim_l_carpal_middle_phalanx_3"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.05,0.75,0]),
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
                                                      point : new MFVec3f([0.05,0.75,0,0.08,0.96,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_carpal_distal_interphalangeal_3"),
                                          DEF : new SFString("hanim_l_carpal_distal_interphalangeal_3"),
                                          center : new SFVec3f([0.08,0.96,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_carpal_distal_phalanx_3"),
                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_3"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.08,0.96,0]),
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
                                                      DEF : new SFString("fingertip_l_carpal_distal_interphalangeal_3"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.08,0.96,0,0.09,1.05,0])}))}))})])})])})])})])})])})])}),
                      { "#comment" : new CommentsBlock("MC45") },

                        new HAnimJoint({
                          name : new SFString("l_midcarpal_4_5"),
                          DEF : new SFString("hanim_l_midcarpal_4_5"),
                          center : new SFVec3f([-0.1,0.1,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_hamate"),
                              DEF : new SFString("hanim_l_hamate"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-0.1,0.1,0]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimNewJointShape")})])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          emissiveColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("MC45toCMC4"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.1,0.1,0,-0.1,0.2,0])}))}))}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          emissiveColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("MC45toCMC5"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.1,0.1,0,-0.15,0.17,0])}))}))})])}),
                          { "#comment" : new CommentsBlock("ring finger") },

                            new HAnimJoint({
                              name : new SFString("l_carpometacarpal_4"),
                              DEF : new SFString("hanim_l_carpometacarpal_4"),
                              center : new SFVec3f([-0.1,0.2,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_metacarpal_4"),
                                  DEF : new SFString("hanim_l_metacarpal_4"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.1,0.2,0]),
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
                                          DEF : new SFString("CMC4toMCP4"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.1,0.2,0,-0.1,0.47,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_metacarpophalangeal_4"),
                                  DEF : new SFString("hanim_l_metacarpophalangeal_4"),
                                  center : new SFVec3f([-0.1,0.47,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_carpal_proximal_phalanx_4"),
                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_4"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.1,0.47,0]),
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
                                              DEF : new SFString("MCP4toPIP4"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1,0.47,0,-0.1,0.7,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_carpal_proximal_interphalangeal_4"),
                                      DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_4"),
                                      center : new SFVec3f([-0.1,0.7,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_carpal_middle_phalanx_4"),
                                          DEF : new SFString("hanim_l_carpal_middle_phalanx_4"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([-0.1,0.7,0]),
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
                                                      point : new MFVec3f([-0.1,0.7,0,-0.1,0.93,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_carpal_distal_interphalangeal_4"),
                                          DEF : new SFString("hanim_l_carpal_distal_interphalangeal_4"),
                                          center : new SFVec3f([-0.1,0.93,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_carpal_distal_phalanx_4"),
                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_4"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.1,0.93,0]),
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
                                                      DEF : new SFString("fingertip_l_carpal_distal_interphalangeal_4"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.1,0.93,0,-0.1,1,0])}))}))})])})])})])})])})])}),
                          { "#comment" : new CommentsBlock("pinky finger") },

                            new HAnimJoint({
                              name : new SFString("l_carpometacarpal_5"),
                              DEF : new SFString("hanim_l_carpometacarpal_5"),
                              center : new SFVec3f([-0.15,0.17,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_metacarpal_5"),
                                  DEF : new SFString("hanim_l_metacarpal_5"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.15,0.17,0]),
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
                                          DEF : new SFString("CMC5toMCP5"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.15,0.17,0,-0.2,0.4,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_metacarpophalangeal_5"),
                                  DEF : new SFString("hanim_l_metacarpophalangeal_5"),
                                  center : new SFVec3f([-0.2,0.4,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_carpal_proximal_phalanx_5"),
                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_5"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.2,0.4,0]),
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
                                              DEF : new SFString("MCP5toPIP5"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.2,0.4,0,-0.23,0.63,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_carpal_proximal_interphalangeal_5"),
                                      DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_5"),
                                      center : new SFVec3f([-0.23,0.63,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_carpal_middle_phalanx_5"),
                                          DEF : new SFString("hanim_l_carpal_middle_phalanx_5"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([-0.23,0.63,0]),
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
                                                      point : new MFVec3f([-0.23,0.63,0,-0.25,0.79,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_carpal_distal_interphalangeal_5"),
                                          DEF : new SFString("hanim_l_carpal_distal_interphalangeal_5"),
                                          center : new SFVec3f([-0.25,0.79,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_carpal_distal_phalanx_5"),
                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_5"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.25,0.79,0]),
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
                                                      DEF : new SFString("fingertip_l_carpal_distal_interphalangeal_5"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.25,0.79,0,-0.26,0.85,0])}))}))})])})])})])})])})])})])})])})])})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_humanoid_root")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_interphalangeal_1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_midcarpal_1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_midcarpal_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_midcarpal_3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_midcarpal_4_5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_l_radiocarpal")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_capitate")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_hamate")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_trapezium")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("hanim_l_trapezoid")}))])})])}))});
console.log(X3D0.toXMLNode());
