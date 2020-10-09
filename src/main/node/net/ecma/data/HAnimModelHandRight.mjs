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
import { CommentsBlock } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("H-Anim"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HAnimModelHandRight.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Right hand using high-fidelity definitions for H-Anim version 2.2")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("YOO Kwan Hee and Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("26 January 2015")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("20 October 2019")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("not yet to scale")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/working-groups/humanoid-animation-h-anim")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/files/specifications/19774/V1.0")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("X3D H-Anim humanoid animation")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("scene, DOCTYPE and Schema under development.")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("Integrate and confirm Segment/Joint names, Viewpoints.")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.x3d")}),

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
              title : new SFString("HAnimModelHandRight.x3d")}),

            new HAnimHumanoid({
              name : new SFString("Humanoid_Right_hand"),
              DEF : new SFString("Humanoid_Right_hand"),
              version : new SFString("2.0"),
              joints : new SFNode(
                new HAnimJoint({
                  name : new SFString("humanoid_root"),
                  DEF : new SFString("hanim_HumanoidRoot"),
                  children : new MFNode([
                    new HAnimJoint({
                      name : new SFString("r_radiocarpal_joint"),
                      DEF : new SFString("r_radiocarpal_joint"),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("r_wrist"),
                          DEF : new SFString("r_wrist"),
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
                                    new Material({}))})),
                              geometry : new SFNode(
                                new IndexedLineSet({
                                  DEF : new SFString("RCToMC12"),
                                  coordIndex : new MFInt32([0,1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0,0,-0.1,0.1,0])}))}))}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({}))})),
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
                                    new Material({}))})),
                              geometry : new SFNode(
                                new IndexedLineSet({
                                  DEF : new SFString("RCToMC45"),
                                  coordIndex : new MFInt32([0,1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0,0,0.1,0.1,0])}))}))})])}),
                      { "#comment" : new CommentsBlock("MC12") },

                        new HAnimJoint({
                          name : new SFString("r_midcarpal_joint_12"),
                          DEF : new SFString("r_midcarpal_joint_12"),
                          center : new SFVec3f([-0.1,0.1,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("r_trapezoid"),
                              DEF : new SFString("r_trapezoid"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-0.1,0.1,0]),
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
                                        new Material({}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("MC12toCMC1"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.1,0.1,0,-0.2,0.15,0])}))}))}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("MC12toCMC2"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.1,0.1,0,-0.1,0.2,0])}))}))})])}),
                          { "#comment" : new CommentsBlock("thumb finger") },

                            new HAnimJoint({
                              name : new SFString("r_carpometacarpal_joint_1"),
                              DEF : new SFString("r_carpometacarpal_joint_1"),
                              center : new SFVec3f([-0.2,0.15,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_metacarpal_1"),
                                  DEF : new SFString("r_metacarpal_1"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.2,0.15,0]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("CMC1toMCP1"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.2,0.15,0,-0.3,0.3,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("r_metacarpophalangeal_joint_1"),
                                  DEF : new SFString("r_metacarpophalangeal_joint_1"),
                                  center : new SFVec3f([-0.3,0.3,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_proximal_phalanges1"),
                                      DEF : new SFString("r_proximal_phalanges1"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.3,0.3,0]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("MCP11toIP1"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.3,0.3,0,-0.35,0.4,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_interphalangeal_joint_1"),
                                      DEF : new SFString("r_interphalangeal_joint_1"),
                                      center : new SFVec3f([-0.35,0.4,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_distal_phalanges1"),
                                          DEF : new SFString("r_distal_phalanges1"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([-0.35,0.4,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("fingertip_r_interphalangeal_joint_1"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.35,0.4,0,-0.36,0.45,0])}))}))})])})])})])})])}),
                          { "#comment" : new CommentsBlock("index finger") },

                            new HAnimJoint({
                              name : new SFString("r_carpometacarpal_joint_2"),
                              DEF : new SFString("r_carpometacarpal_joint_2"),
                              center : new SFVec3f([-0.1,0.2,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_metacarpal_2"),
                                  DEF : new SFString("r_metacarpal_2"),
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
                                            new Material({}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("CMC2toMCP2"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.1,0.2,0,-0.15,0.5,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("r_metacarpophalangeal_joint_2"),
                                  DEF : new SFString("r_metacarpophalangeal_joint_2"),
                                  center : new SFVec3f([-0.15,0.5,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_proximal_phalanges2"),
                                      DEF : new SFString("r_proximal_phalanges2"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.15,0.5,0]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("MCP2toPIP2"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.15,0.5,0,-0.2,0.7,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_proximal_interphalangeal_joint_2"),
                                      DEF : new SFString("r_proximal_interphalangeal_joint_2"),
                                      center : new SFVec3f([-0.2,0.7,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_middle_phalanges2"),
                                          DEF : new SFString("r_middle_phalanges2"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([-0.2,0.7,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("PIP2toDIP2"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.2,0.7,0,-0.24,0.87,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_distal_interphalangeal_joint_2"),
                                          DEF : new SFString("r_distal_interphalangeal_joint_2"),
                                          center : new SFVec3f([-0.24,0.87,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_distal_phalanges2"),
                                              DEF : new SFString("r_distal_phalanges2"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.24,0.87,0]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("fingertip_r_distal_interphalangeal_joint_2"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.24,0.87,0,-0.26,0.93,0])}))}))})])})])})])})])})])})])}),
                      { "#comment" : new CommentsBlock("MC3") },

                        new HAnimJoint({
                          name : new SFString("r_midcarpal_joint_3"),
                          DEF : new SFString("r_midcarpal_joint_3"),
                          center : new SFVec3f([0,0.07,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("r_capitate"),
                              DEF : new SFString("r_capitate"),
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
                                        new Material({}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("MC3toCMC3"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.07,0,0,0.2,0])}))}))})])}),
                          { "#comment" : new CommentsBlock("Middle fingle") },

                            new HAnimJoint({
                              name : new SFString("r_carpometacarpal_joint_3"),
                              DEF : new SFString("r_carpometacarpal_joint_3"),
                              center : new SFVec3f([0,0.2,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_metacarpal_3"),
                                  DEF : new SFString("r_metacarpal_3"),
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
                                            new Material({}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("CMC3toMCP3"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0.2,0,-0.03,0.5,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("r_metacarpophalangeal_joint_3"),
                                  DEF : new SFString("r_metacarpophalangeal_joint_3"),
                                  center : new SFVec3f([-0.03,0.5,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_proximal_phalanges3"),
                                      DEF : new SFString("r_proximal_phalanges3"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.03,0.5,0]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("MCP3toPIP3"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.03,0.5,0,-0.05,0.75,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_proximal_interphalangeal_joint_3"),
                                      DEF : new SFString("r_proximal_interphalangeal_joint_3"),
                                      center : new SFVec3f([-0.05,0.75,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_middle_phalanges3"),
                                          DEF : new SFString("r_middle_phalanges3"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([-0.05,0.75,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("PIP3toDIP3"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.05,0.75,0,-0.08,0.96,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_distal_interphalangeal_joint_3"),
                                          DEF : new SFString("r_distal_interphalangeal_joint_3"),
                                          center : new SFVec3f([-0.08,0.96,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_distal_phalanges3"),
                                              DEF : new SFString("r_distal_phalanges3"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.08,0.96,0]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("fingertip_r_distal_interphalangeal_joint_3"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.08,0.96,0,-0.09,1.05,0])}))}))})])})])})])})])})])})])}),
                      { "#comment" : new CommentsBlock("MC45") },

                        new HAnimJoint({
                          name : new SFString("r_midcarpal_joint_45"),
                          DEF : new SFString("r_midcarpal_joint_45"),
                          center : new SFVec3f([0.1,0.1,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("r_hamate"),
                              DEF : new SFString("r_hamate"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.1,0.1,0]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimNewJointShape")})])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("MC45toCMC4"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.1,0.1,0,0.1,0.2,0])}))}))}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("MC45toCMC5"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.1,0.1,0,0.15,0.17,0])}))}))})])}),
                          { "#comment" : new CommentsBlock("ring finger") },

                            new HAnimJoint({
                              name : new SFString("r_carpometacarpal_joint_4"),
                              DEF : new SFString("r_carpometacarpal_joint_4"),
                              center : new SFVec3f([0.1,0.2,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_metacarpal_4"),
                                  DEF : new SFString("r_metacarpal_4"),
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
                                            new Material({}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("CMC4toMCP4"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.1,0.2,0,0.1,0.47,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("r_metacarpophalangeal_joint_4"),
                                  DEF : new SFString("r_metacarpophalangeal_joint_4"),
                                  center : new SFVec3f([0.1,0.47,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_proximal_phalanges4"),
                                      DEF : new SFString("r_proximal_phalanges4"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.1,0.47,0]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("MCP4toPIP4"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1,0.47,0,0.1,0.7,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_proximal_interphalangeal_joint_4"),
                                      DEF : new SFString("r_proximal_interphalangeal_joint_4"),
                                      center : new SFVec3f([0.1,0.7,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_middle_phalanges4"),
                                          DEF : new SFString("r_middle_phalanges4"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.1,0.7,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("PIP4toDIP4"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.1,0.7,0,0.1,0.93,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_distal_interphalangeal_joint_4"),
                                          DEF : new SFString("r_distal_interphalangeal_joint_4"),
                                          center : new SFVec3f([0.1,0.93,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_distal_phalanx4"),
                                              DEF : new SFString("r_distal_phalanx4"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.1,0.93,0]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("fingertip_r_distal_interphalangeal_joint_4"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.1,0.93,0,0.1,1,0])}))}))})])})])})])})])})])}),
                          { "#comment" : new CommentsBlock("pinky finger") },

                            new HAnimJoint({
                              name : new SFString("r_carpometacarpal_joint_5"),
                              DEF : new SFString("r_carpometacarpal_joint_5"),
                              center : new SFVec3f([0.15,0.17,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_metacarpal_5"),
                                  DEF : new SFString("r_metacarpal_5"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.15,0.17,0]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("CMC5toMCP5"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.15,0.17,0,0.2,0.4,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("r_metacarpophalangeal_joint_5"),
                                  DEF : new SFString("r_metacarpophalangeal_joint_5"),
                                  center : new SFVec3f([0.2,0.4,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_proximal_phalanges2"),
                                      DEF : new SFString("r_proximal_phalanges5"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.2,0.4,0]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("MCP5toPIP5"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.2,0.4,0,0.23,0.63,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_proximal_interphalangeal_joint_5"),
                                      DEF : new SFString("r_proximal_interphalangeal_joint_5"),
                                      center : new SFVec3f([0.23,0.63,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_middle_phalanges5"),
                                          DEF : new SFString("r_middle_phalanges5"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.23,0.63,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("PIP5toDIP5"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.23,0.63,0,0.25,0.79,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_distal_interphalangeal_joint_5"),
                                          DEF : new SFString("r_distal_interphalangeal_joint_5"),
                                          center : new SFVec3f([0.25,0.79,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_distal_phalanges5"),
                                              DEF : new SFString("r_distal_phalanges5"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.25,0.79,0]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      material : new SFNode(
                                                        new Material({}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("fingertip_r_distal_interphalangeal_joint_5"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.25,0.79,0,0.26,0.85,0])}))}))})])})])})])})])})])})])})])})])})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_HumanoidRoot")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_radiocarpal_joint")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_midcarpal_joint_12")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_carpometacarpal_joint_1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_metacarpophalangeal_joint_1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_interphalangeal_joint_1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_carpometacarpal_joint_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_metacarpophalangeal_joint_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_proximal_interphalangeal_joint_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_distal_interphalangeal_joint_2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_midcarpal_joint_3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_carpometacarpal_joint_3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_metacarpophalangeal_joint_3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_proximal_interphalangeal_joint_3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_distal_interphalangeal_joint_3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_midcarpal_joint_45")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_carpometacarpal_joint_4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_metacarpophalangeal_joint_4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_proximal_interphalangeal_joint_4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_distal_interphalangeal_joint_4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_carpometacarpal_joint_5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_metacarpophalangeal_joint_5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_proximal_interphalangeal_joint_5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("r_distal_interphalangeal_joint_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_wrist")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_trapezoid")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_metacarpal_1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_proximal_phalanges1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_distal_phalanges1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_metacarpal_2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_proximal_phalanges2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_middle_phalanges2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_distal_phalanges2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_capitate")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_metacarpal_3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_proximal_phalanges3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_middle_phalanges3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_distal_phalanges3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_hamate")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_metacarpal_4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_proximal_phalanges4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_middle_phalanges4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_distal_phalanx4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_metacarpal_5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_proximal_phalanges5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_middle_phalanges5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("r_distal_phalanges5")}))})])}))});
console.log(X3D0.toXMLNode());
