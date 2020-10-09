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
              content : new SFString("HAnimModelFootLeft.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Left foot, using high-fidelity definitions for H-Anim version 2.2")}),

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
              content : new SFString("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d")}),

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
              name : new SFString("Humanoid_Left_Foot"),
              DEF : new SFString("Humanoid_Left_Foot"),
              info : new MFString(["humanoidVersion=2.0"]),
              version : new SFString("2.0"),
              joints : new SFNode(
                new HAnimJoint({
                  name : new SFString("humanoid_root"),
                  DEF : new SFString("hanim_HumanoidRoot"),
                  children : new MFNode([
                    new HAnimJoint({
                      name : new SFString("l_talocrural_joint"),
                      DEF : new SFString("l_talocrural_joint"),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("l_talus"),
                          DEF : new SFString("l_talus"),
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
                                    new Material({}))})),
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
                                    new Material({}))})),
                              geometry : new SFNode(
                                new IndexedLineSet({
                                  DEF : new SFString("TCtoCC"),
                                  coordIndex : new MFInt32([0,1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0,0,0.2,0.3,0])}))}))})])}),
                      { "#comment" : new CommentsBlock("TCN") },

                        new HAnimJoint({
                          name : new SFString("l_talocalcaneonavicular_joint"),
                          DEF : new SFString("l_talocalcaneonavicular_joint"),
                          center : new SFVec3f([0,-0.3,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_navicular"),
                              DEF : new SFString("l_navicular"),
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
                                        new Material({}))})),
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
                                        new Material({}))})),
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
                                        new Material({}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("TCNtoCN3"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,-0.3,0,0.1,-0.4,0])}))}))})])}),
                          { "#comment" : new CommentsBlock("CN1") },

                            new HAnimJoint({
                              name : new SFString("l_cuneonavicular_joint1"),
                              DEF : new SFString("l_cuneonavicular_joint1"),
                              center : new SFVec3f([-0.1,-0.45,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_cuneiform1"),
                                  DEF : new SFString("l_cuneiform1"),
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
                                            new Material({}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("CN1toTMT1"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.1,-0.45,0,-0.1,-0.6,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_tarsometatarsal_joint1"),
                                  DEF : new SFString("l_tarsometatarsal_joint1"),
                                  center : new SFVec3f([-0.1,-0.6,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_metatarsal1"),
                                      DEF : new SFString("l_metatarsal1"),
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
                                                new Material({}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("TMT1toMTP1"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1,-0.6,0,-0.1,-0.9,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_metatarsophalangeal_joint1"),
                                      DEF : new SFString("l_metatarsophalangeal_joint1"),
                                      center : new SFVec3f([-0.1,-0.9,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_proximal_phalanges1"),
                                          DEF : new SFString("l_proximal_phalanges1"),
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
                                                    new Material({}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("MTP1toIP1"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.1,-0.9,0,-0.1,-1.05,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_f_Interphalangeal_joint"),
                                          DEF : new SFString("l_f_Interphalangeal_joint"),
                                          center : new SFVec3f([-0.1,-1.05,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_distal_phalanges1"),
                                              DEF : new SFString("l_distal_phalanges1"),
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
                                                        new Material({}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("tiptoe_l_distal_phalanges1"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.1,-1.05,0,-0.1,-1.1,0])}))}))})])})])})])})])})])}),
                          { "#comment" : new CommentsBlock("CN2") },

                            new HAnimJoint({
                              name : new SFString("l_cuneonavicular_joint2"),
                              DEF : new SFString("l_cuneonavicular_joint2"),
                              center : new SFVec3f([0,-0.45,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_cuneiform2"),
                                  DEF : new SFString("l_cuneiform2"),
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
                                            new Material({}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("CN2toTMT2"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,-0.45,0,0.05,-0.6,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_tarsometatarsal_joint2"),
                                  DEF : new SFString("l_tarsometatarsal_joint2"),
                                  center : new SFVec3f([0.05,-0.6,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_metatarsal2"),
                                      DEF : new SFString("l_metatarsal2"),
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
                                                new Material({}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("TMT2toMTP2"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.05,-0.6,0,0.05,-0.9,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_metatarsophalangeal_joint2"),
                                      DEF : new SFString("l_metatarsophalangeal_joint2"),
                                      center : new SFVec3f([0.05,-0.9,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_proximal_phalanges2"),
                                          DEF : new SFString("l_proximal_phalanges2"),
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
                                                    new Material({}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("MTP2toPIP2"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.05,-0.9,0,0.05,-1.05,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_f_proximal_Interphalangeal_joint2"),
                                          DEF : new SFString("l_f_proximal_Interphalangeal_joint2"),
                                          center : new SFVec3f([0.05,-1.05,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_middle_phalanges2"),
                                              DEF : new SFString("l_middle_phalanges2"),
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
                                                        new Material({}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("PIP2toDIP2"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.05,-1.05,0,0.05,-1.12,0])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_f_distal_Interphalangeal_joint2"),
                                              DEF : new SFString("l_f_distal_Interphalangeal_joint2"),
                                              center : new SFVec3f([0.05,-1.12,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_distal_phalanges2"),
                                                  DEF : new SFString("l_distal_phalanges2"),
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
                                                            new Material({}))})),
                                                      geometry : new SFNode(
                                                        new IndexedLineSet({
                                                          DEF : new SFString("tiptoe_l_f_distal_Interphalangeal_joint2"),
                                                          coordIndex : new MFInt32([0,1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.05,-1.12,0,0.05,-1.16,0])}))}))})])})])})])})])})])})])}),
                          { "#comment" : new CommentsBlock("CN3") },

                            new HAnimJoint({
                              name : new SFString("l_cuneonavicular_joint3"),
                              DEF : new SFString("l_cuneonavicular_joint3"),
                              center : new SFVec3f([0.1,-0.4,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_cuneiform3"),
                                  DEF : new SFString("l_cuneiform3"),
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
                                            new Material({}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("CN3toTMT3"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.1,-0.4,0,0.15,-0.6,0])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_tarsometatarsal_joint3"),
                                  DEF : new SFString("l_tarsometatarsal_joint3"),
                                  center : new SFVec3f([0.15,-0.6,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_metatarsal3"),
                                      DEF : new SFString("l_metatarsal3"),
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
                                                new Material({}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("TMT3toMTP3"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.15,-0.6,0,0.15,-0.9,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_metatarsophalangeal_joint3"),
                                      DEF : new SFString("l_metatarsophalangeal_joint3"),
                                      center : new SFVec3f([0.15,-0.9,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_proximal_phalanges3"),
                                          DEF : new SFString("l_proximal_phalanges3"),
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
                                                    new Material({}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("MTP3toPIP3"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.15,-0.9,0,0.15,-1.05,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_f_proximal_Interphalangeal_joint3"),
                                          DEF : new SFString("l_f_proximal_Interphalangeal_joint3"),
                                          center : new SFVec3f([0.15,-1.05,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_middle_phalanges3"),
                                              DEF : new SFString("l_middle_phalanges3"),
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
                                                        new Material({}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("PIP3toDIP3"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.15,-1.05,0,0.15,-1.13,0])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_f_distal_Interphalangeal_joint3"),
                                              DEF : new SFString("l_f_distal_Interphalangeal_joint3"),
                                              center : new SFVec3f([0.15,-1.13,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_distal_phalanges3"),
                                                  DEF : new SFString("l_distal_phalanges3"),
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
                                                            new Material({}))})),
                                                      geometry : new SFNode(
                                                        new IndexedLineSet({
                                                          DEF : new SFString("tiptoe_l_f_distal_Interphalangeal_joint3"),
                                                          coordIndex : new MFInt32([0,1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.15,-1.13,0,0.15,-1.16,0])}))}))})])})])})])})])})])})])})])}),
                      { "#comment" : new CommentsBlock("CC") },

                        new HAnimJoint({
                          name : new SFString("l_calcaneuscuboid_joint"),
                          DEF : new SFString("l_calcaneuscuboid_joint"),
                          center : new SFVec3f([0.2,0.3,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_calcaneus"),
                              DEF : new SFString("l_calcaneus"),
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
                                        new Material({}))})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      DEF : new SFString("CCtoTT"),
                                      coordIndex : new MFInt32([0,1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.2,0.3,0,0.21,-0.3,0])}))}))})])}),
                          { "#comment" : new CommentsBlock("TT") },

                            new HAnimJoint({
                              name : new SFString("l_transverse_tarsal_joint"),
                              DEF : new SFString("l_transverse_tarsal_joint"),
                              center : new SFVec3f([0.21,-0.3,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_cuboid"),
                                  DEF : new SFString("l_cuboid"),
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
                                            new Material({}))})),
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
                                            new Material({}))})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          DEF : new SFString("TTtoTMT5"),
                                          coordIndex : new MFInt32([0,1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.21,-0.3,0,0.33,-0.52,0])}))}))})])}),
                              { "#comment" : new CommentsBlock("TMT4") },

                                new HAnimJoint({
                                  name : new SFString("l_tarsometatarsal_joint4"),
                                  DEF : new SFString("l_tarsometatarsal_joint4"),
                                  center : new SFVec3f([0.25,-0.58,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_metatarsal4"),
                                      DEF : new SFString("l_metatarsal4"),
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
                                                new Material({}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("TMT4toMTP4"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.25,-0.58,0,0.25,-0.87,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_metatarsophalangeal_joint4"),
                                      DEF : new SFString("l_metatarsophalangeal_joint4"),
                                      center : new SFVec3f([0.25,-0.87,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_proximal_phalanges4"),
                                          DEF : new SFString("l_proximal_phalanges4"),
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
                                                    new Material({}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("MTP4toPIP4"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.25,-0.87,0,0.25,-1,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_f_proximal_Interphalangeal_joint4"),
                                          DEF : new SFString("l_f_proximal_Interphalangeal_joint4"),
                                          center : new SFVec3f([0.25,-1,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_middle_phalanges4"),
                                              DEF : new SFString("l_middle_phalanges4"),
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
                                                        new Material({}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("PIP4toDIP4"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.25,-1,0,0.25,-1.1,0])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_f_distal_Interphalangeal_joint4"),
                                              DEF : new SFString("l_f_distal_Interphalangeal_joint4"),
                                              center : new SFVec3f([0.25,-1.1,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_distal_phalanges4"),
                                                  DEF : new SFString("l_distal_phalanges4"),
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
                                                            new Material({}))})),
                                                      geometry : new SFNode(
                                                        new IndexedLineSet({
                                                          DEF : new SFString("tiptoe_l_f_distal_Interphalangeal_joint4"),
                                                          coordIndex : new MFInt32([0,1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.25,-1.1,0,0.25,-1.15,0])}))}))})])})])})])})])})])}),
                              { "#comment" : new CommentsBlock("TMT5") },

                                new HAnimJoint({
                                  name : new SFString("l_tarsometatarsal_joint5"),
                                  DEF : new SFString("l_tarsometatarsal_joint5"),
                                  center : new SFVec3f([0.33,-0.52,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_metatarsal5"),
                                      DEF : new SFString("l_metatarsal5"),
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
                                                new Material({}))})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              DEF : new SFString("TMT5toMTP5"),
                                              coordIndex : new MFInt32([0,1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.33,-0.52,0,0.34,-0.8,0])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_metatarsophalangeal_joint5"),
                                      DEF : new SFString("l_metatarsophalangeal_joint5"),
                                      center : new SFVec3f([0.34,-0.8,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_proximal_phalanges5"),
                                          DEF : new SFString("l_proximal_phalanges5"),
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
                                                    new Material({}))})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  DEF : new SFString("MTP5toPIP5"),
                                                  coordIndex : new MFInt32([0,1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.34,-0.8,0,0.34,-0.95,0])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_f_proximal_Interphalangeal_joint5"),
                                          DEF : new SFString("l_f_proximal_Interphalangeal_joint5"),
                                          center : new SFVec3f([0.34,-0.95,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_middle_phalanges5"),
                                              DEF : new SFString("l_middle_phalanges5"),
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
                                                        new Material({}))})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      DEF : new SFString("PIP5toDIP5"),
                                                      coordIndex : new MFInt32([0,1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.34,-0.95,0,0.34,-1.05,0])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_f_distal_Interphalangeal_joint5"),
                                              DEF : new SFString("l_f_distal_Interphalangeal_joint5"),
                                              center : new SFVec3f([0.34,-1.05,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_distal_phalanges5"),
                                                  DEF : new SFString("l_distal_phalanges5"),
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
                                                            new Material({}))})),
                                                      geometry : new SFNode(
                                                        new IndexedLineSet({
                                                          DEF : new SFString("tiptoe_l_f_distal_Interphalangeal_joint5"),
                                                          coordIndex : new MFInt32([0,1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.34,-1.05,0,0.34,-1.08,0])}))}))})])})])})])})])})])})])})])})])})])})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("hanim_HumanoidRoot")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_talocrural_joint")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_talocalcaneonavicular_joint")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_cuneonavicular_joint1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_tarsometatarsal_joint1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_metatarsophalangeal_joint1")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_f_Interphalangeal_joint")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_cuneonavicular_joint2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_tarsometatarsal_joint2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_metatarsophalangeal_joint2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_f_proximal_Interphalangeal_joint2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_f_distal_Interphalangeal_joint2")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_cuneonavicular_joint3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_tarsometatarsal_joint3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_metatarsophalangeal_joint3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_f_proximal_Interphalangeal_joint3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_f_distal_Interphalangeal_joint3")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_calcaneuscuboid_joint")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_transverse_tarsal_joint")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_tarsometatarsal_joint4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_metatarsophalangeal_joint4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_f_proximal_Interphalangeal_joint4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_f_distal_Interphalangeal_joint4")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_tarsometatarsal_joint5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_metatarsophalangeal_joint5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_f_proximal_Interphalangeal_joint5")})),
              joints : new SFNode(
                new HAnimJoint({
                  USE : new SFString("l_f_distal_Interphalangeal_joint5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_talus")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_navicular")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_cuneiform1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_metatarsal1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_proximal_phalanges1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_distal_phalanges1")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_cuneiform2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_metatarsal2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_proximal_phalanges2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_middle_phalanges2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_distal_phalanges2")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_cuneiform3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_metatarsal3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_proximal_phalanges3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_middle_phalanges3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_distal_phalanges3")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_calcaneus")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_cuboid")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_metatarsal4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_proximal_phalanges4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_middle_phalanges4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_distal_phalanges4")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_metatarsal5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_proximal_phalanges5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_middle_phalanges5")})),
              segments : new SFNode(
                new HAnimSegment({
                  USE : new SFString("l_distal_phalanges5")}))})])}))});
console.log(X3D0.toXMLNode());
