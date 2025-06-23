// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('Trebuchet.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Working model of a 14th century Trebuchet Catapult.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('LT Joe Roth')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('20 June 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 October 2019')),

            meta(
              name_ : SFString('version'),
              content_ : SFString('7.8')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://trebuchet.com')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://members.home.net/dimona')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('trebuchet catapult Monty Python')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('Trebuchet.x3d')),

            Background(
              backUrl_ : MFString([SFString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg")]),
              bottomUrl_ : MFString([SFString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg")]),
              frontUrl_ : MFString([SFString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg")]),
              groundAngle_ : MFFloat([SFFloat(1.309), SFFloat(1.570796)]),
              groundColor_ : MFColor([SFColor(0.1), SFColor(0.1), SFColor(0), SFColor(0.4), SFColor(0.25), SFColor(0.2), SFColor(0.6), SFColor(0.6), SFColor(0.6)]),
              leftUrl_ : MFString([SFString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg")]),
              rightUrl_ : MFString([SFString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg")]),
              skyAngle_ : MFFloat([SFFloat(1.309), SFFloat(1.57079)]),
              skyColor_ : MFColor([SFColor(0), SFColor(0.2), SFColor(0.7), SFColor(0), SFColor(0.5), SFColor(1), SFColor(1), SFColor(1), SFColor(1)]),
              topUrl_ : MFString([SFString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg")])),

            Sound(
              maxBack_ : 1000,
              maxFront_ : 1000,
              source_ : 
                AudioClip(
                  DEF_ : SFString('HolyGrail'),
                  description_ : SFString('HolyGrail'),
                  loop_ : true,
                  url_ : MFString([SFString("holygral.mp3"), SFString("http://www.nps.navy.mil/code32/vrml/holygral.mp3")]))),

            Shape(
              geometry_ : 
                Box(
                  size_ : SFVec3f([SFDouble(10000), SFDouble(1), SFDouble(10000)])),
              appearance_ : 
                Appearance(
                  texture_ : 
                    ImageTexture(
                      url_ : MFString([SFString("grass.jpg"), SFString("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg")])))),

            Transform(
              rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
              translation_ : SFVec3f([SFDouble(10.5), SFDouble(6.5), SFDouble(4.5)]),
              child_ : 
                Shape(
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('TextAppearance'),
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]),
                          emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]))),
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("Click Sling to Select Projectile")]),
                      fontStyle_ : 
                        FontStyle()))),

            Transform(
              rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
              scale_ : SFVec3f([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
              translation_ : SFVec3f([SFDouble(11), SFDouble(5.5), SFDouble(6)]),
              children_ : [
                Switch(
                  DEF_ : SFString('Weight'),
                  whichChoice_ : 0,
                  children_ : [
                    Group(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('TextAppearance')),
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("Click Here to Change Counter Weight (50 lbs)")])))]),

                    Group(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('TextAppearance')),
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("Click Here to Change Counter Weight (500 lbs)")])))]),

                    Group(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('TextAppearance')),
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("Click Here to Change Counter Weight (1000 lbs)")])))]),

                    Group(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('TextAppearance')),
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("Click Here to Change Counter Weight (10000 lbs)")])))])]),

                TouchSensor(
                  DEF_ : SFString('weightselector'),
                  description_ : SFString('weight selector')),

                Transform(
                  translation_ : SFVec3f([SFDouble(8), SFDouble(0), SFDouble(0)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(20), SFDouble(1), SFDouble(1)])),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              transparency_ : 1))))]),

            Transform(
              rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
              translation_ : SFVec3f([SFDouble(10), SFDouble(0.5), SFDouble(4.5)]),
              children_ : [
                Transform(
                  DEF_ : SFString('launch'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(2), SFDouble(5)]),
                  children_ : [
                    Billboard(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))),
                          geometry_ : 
                            Text(
                              string_ : MFString([SFString("LAUNCH")]),
                              fontStyle_ : 
                                FontStyle())),

                        Transform(
                          translation_ : SFVec3f([SFDouble(2), SFDouble(0.3), SFDouble(0)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Box(
                                  size_ : SFVec3f([SFDouble(5), SFDouble(1), SFDouble(1)])),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      transparency_ : 1)))),

                        Switch(
                          DEF_ : SFString('PigdogMonk'),
                          whichChoice_ : -1,
                          children_ : [
                            Group(
                              children_ : [
                                Sound(
                                  maxBack_ : 1000,
                                  maxFront_ : 1000,
                                  source_ : 
                                    AudioClip(
                                      DEF_ : SFString('PigDogSound'),
                                      description_ : SFString('PigDogSound'),
                                      url_ : MFString([SFString("pigdog.wav"), SFString("http://www.nps.navy.mil/code32/vrml/pigdog.wav")])))]),

                            Group(
                              children_ : [
                                Sound(
                                  maxBack_ : 1000,
                                  maxFront_ : 1000,
                                  source_ : 
                                    AudioClip(
                                      DEF_ : SFString('MonkSound'),
                                      description_ : SFString('MonkSound'),
                                      url_ : MFString([SFString("monks.wav"), SFString("http://www.nps.navy.mil/code32/vrml/monks.wav")])))])])]),

                    TouchSensor(
                      DEF_ : SFString('Launch'),
                      description_ : SFString('launch!'))]),

                Transform(
                  children_ : [
                    Switch(
                      DEF_ : SFString('projectilename'),
                      whichChoice_ : 0,
                      children_ : [
                        Group(
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('TextAppearance')),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Bowling Ball (10 lbs)")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      size_ : 0.5))),

                            Sound(
                              maxBack_ : 1000,
                              maxFront_ : 1000,
                              priority_ : 1,
                              source_ : 
                                AudioClip(
                                  DEF_ : SFString('HolyHandGrenadeSound'),
                                  description_ : SFString('HolyHandGrenadeSound'),
                                  url_ : MFString([SFString("grenade.wav"), SFString("http://www.nps.navy.mil/code32/vrml/grenade.wav")])))]),

                        Group(
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('TextAppearance')),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Cow (1000 lbs)")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      size_ : 0.5))),

                            Sound(
                              maxBack_ : 1000,
                              maxFront_ : 1000,
                              source_ : 
                                AudioClip(
                                  DEF_ : SFString('CowSound'),
                                  description_ : SFString('CowSound'),
                                  url_ : MFString([SFString("lavache.wav"), SFString("http://www.nps.navy.mil/code32/vrml/lavache.wav")])))]),

                        Group(
                          children_ : [
                            Shape(
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('TextAppearance')),
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Chicken (5 lbs)")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      size_ : 0.5))),

                            Sound(
                              maxBack_ : 1000,
                              maxFront_ : 1000,
                              priority_ : 1,
                              source_ : 
                                AudioClip(
                                  DEF_ : SFString('HamsterSound'),
                                  description_ : SFString('HamsterSound'),
                                  url_ : MFString([SFString("hamster.wav"), SFString("http://www.nps.navy.mil/code32/vrml/hamster.wav")])))])])])]),

            Transform(
              rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.67)]),
              children_ : [
                Transform(
                  DEF_ : SFString('aft'),
                  translation_ : SFVec3f([SFDouble(5), SFDouble(5), SFDouble(15)]),
                  children_ : [
                    Transform(
                      translation_ : SFVec3f([SFDouble(-2.5), SFDouble(-4.5), SFDouble(-2)]),
                      children_ : [
                        Transform(
                          USE_ : SFString('launch'))])])]),

            Transform(
              translation_ : SFVec3f([SFDouble(0), SFDouble(3), SFDouble(0)]),
              child_ : 
                Shape(
                  DEF_ : SFString('plank'),
                  geometry_ : 
                    Box(
                      size_ : SFVec3f([SFDouble(25), SFDouble(1), SFDouble(1)])),
                  appearance_ : 
                    Appearance(
                      DEF_ : SFString('wood'),
                      texture_ : 
                        ImageTexture(
                          DEF_ : SFString('woodTexture'),
                          url_ : MFString([SFString("wood.gif"), SFString("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif")])))),
              children_ : [
                Transform(
                  DEF_ : SFString('angledsupport'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1)]),
                  translation_ : SFVec3f([SFDouble(-5), SFDouble(10), SFDouble(0)]),
                  child_ : 
                    Shape(
                      USE_ : SFString('plank'))),

                Transform(
                  DEF_ : SFString('angledsupport2'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-1)]),
                  translation_ : SFVec3f([SFDouble(5), SFDouble(10), SFDouble(0)]),
                  child_ : 
                    Shape(
                      USE_ : SFString('plank'))),

                Transform(
                  DEF_ : SFString('verticalsupport'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                  scale_ : SFVec3f([SFDouble(0.9), SFDouble(1), SFDouble(1)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(11), SFDouble(0)]),
                  child_ : 
                    Shape(
                      USE_ : SFString('plank')),
                  /*Main Verticle Support*/),

                Transform(
                  DEF_ : SFString('horizontalsupport'),
                  scale_ : SFVec3f([SFDouble(0.4), SFDouble(1), SFDouble(1)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(10), SFDouble(0)]),
                  child_ : 
                    Shape(
                      USE_ : SFString('plank'))),

                Transform(
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                  scale_ : SFVec3f([SFDouble(0.6), SFDouble(1), SFDouble(1)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(5), SFDouble(10)]),
                  children_ : [
                    Transform(
                      rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(0.4)]),
                      child_ : 
                        Shape(
                          USE_ : SFString('plank')))]),

                Transform(
                  DEF_ : SFString('panel'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(18.2), SFDouble(-0.3)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(5), SFDouble(5), SFDouble(0.5)])),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('wood')))),

                Transform(
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.6), SFDouble(2.5)]),
                  children_ : [
                    Transform(
                      rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                      child_ : 
                        Shape(
                          geometry_ : 
                            Extrusion(
                              beginCap_ : false,
                              crossSection_ : MFVec2f([SFVec2f([1,-0.38]),SFVec2f([0.92,-0.38]),SFVec2f([0.71,-0.71]),SFVec2f([0.38,-0.92]),SFVec2f([0,-1]),SFVec2f([-0.38,-0.92]),SFVec2f([-0.71,-0.71]),SFVec2f([-0.92,-0.38]),SFVec2f([-1,-0.38]),SFVec2f([-1,-1.1]),SFVec2f([1,-1.1]),SFVec2f([1,-0.38])]),
                              endCap_ : false,
                              solid_ : false,
                              spine_ : MFVec3f([SFVec3f([0,6,0]),SFVec3f([0,-11,0])])),
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('wood'))))]),

                Transform(
                  DEF_ : SFString('flinger'),
                  center_ : SFVec3f([SFDouble(7), SFDouble(0), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(0.82)]),
                  scale_ : SFVec3f([SFDouble(0.9), SFDouble(1), SFDouble(1)]),
                  translation_ : SFVec3f([SFDouble(-7), SFDouble(18), SFDouble(2.5)]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          geometry_ : 
                            Box(
                              size_ : SFVec3f([SFDouble(35), SFDouble(1), SFDouble(1)])),
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('wood'))),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(7), SFDouble(0), SFDouble(0)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Box(
                                  size_ : SFVec3f([SFDouble(8), SFDouble(2), SFDouble(2)])),
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('wood'))))]),

                    Transform(
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                      scale_ : SFVec3f([SFDouble(0.2), SFDouble(0.2), SFDouble(0.2)]),
                      translation_ : SFVec3f([SFDouble(-15), SFDouble(-1), SFDouble(0)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('Torus'),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  specularColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                          geometry_ : 
                            Extrusion(
                              beginCap_ : false,
                              convex_ : false,
                              creaseAngle_ : 1.57,
                              crossSection_ : MFVec2f([SFVec2f([0.9,0]),SFVec2f([0.81,-0.34]),SFVec2f([0.63,-0.63]),SFVec2f([0.34,-0.83]),SFVec2f([0,-0.9]),SFVec2f([-0.34,-0.81]),SFVec2f([-0.63,-0.63]),SFVec2f([-0.81,-0.34]),SFVec2f([-0.9,0]),SFVec2f([-0.81,0.34]),SFVec2f([-0.63,0.63]),SFVec2f([-0.34,0.81]),SFVec2f([0,0.9]),SFVec2f([0.38,0.81]),SFVec2f([0.63,0.63]),SFVec2f([0.81,0.34]),SFVec2f([0.9,0])]),
                              endCap_ : false,
                              spine_ : MFVec3f([SFVec3f([2,0,0]),SFVec3f([1.85,0,0.77]),SFVec3f([1.41,0,1.41]),SFVec3f([0.77,0,1.85]),SFVec3f([0,0,2]),SFVec3f([-0.77,0,1.85]),SFVec3f([-1.41,0,1.41]),SFVec3f([-1.85,0,0.77]),SFVec3f([-2,0,0]),SFVec3f([-1.85,0,-0.77]),SFVec3f([-1.41,0,-1.41]),SFVec3f([-0.77,0,-1.85]),SFVec3f([0,0,-2]),SFVec3f([0.77,0,-1.85]),SFVec3f([1.41,0,-1.41]),SFVec3f([1.85,0,-0.77]),SFVec3f([2,0,0])]))),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(1), SFDouble(0), SFDouble(2)]),
                          child_ : 
                            Shape(
                              appearance_ : 
                                Appearance(
                                  DEF_ : SFString('rope'),
                                  texture_ : 
                                    ImageTexture(
                                      USE_ : SFString('woodTexture'))),
                              geometry_ : 
                                Sphere(
                                  radius_ : 1.5)),
                          /*knott*/)]),
                  /*The Unicorn*/

                    Transform(
                      rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.2)]),
                      scale_ : SFVec3f([SFDouble(0.2), SFDouble(0.2), SFDouble(0.2)]),
                      translation_ : SFVec3f([SFDouble(-18.3), SFDouble(0.3), SFDouble(0)]),
                      child_ : 
                        Shape(
                          geometry_ : 
                            Cylinder(
                              height_ : 10),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  specularColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)])))),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-2.5), SFDouble(0)]),
                          /*The Unicorn*/
                          child_ : 
                            Shape(
                              USE_ : SFString('Torus')),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(-2), SFDouble(0), SFDouble(0)]),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    Sphere(
                                      radius_ : 1.5),
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('rope'))),
                              /*Knott*/)]),

                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.2)]),
                          translation_ : SFVec3f([SFDouble(15), SFDouble(55), SFDouble(-11)]),
                          children_ : [
                            Transform(
                              scale_ : SFVec3f([SFDouble(5), SFDouble(5), SFDouble(5)]),
                              child_ : 
                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('rope')),
                                  geometry_ : 
                                    Extrusion(
                                      beginCap_ : false,
                                      creaseAngle_ : 0.76,
                                      crossSection_ : MFVec2f([SFVec2f([0.1,0]),SFVec2f([0.092,-0.038]),SFVec2f([0.071,-0.071]),SFVec2f([0.038,-0.092]),SFVec2f([0,-0.1]),SFVec2f([-0.038,-0.092]),SFVec2f([-0.071,-0.071]),SFVec2f([-0.092,-0.038]),SFVec2f([-0.1,0]),SFVec2f([-0.092,0.038]),SFVec2f([-0.071,0.071]),SFVec2f([-0.038,0.092]),SFVec2f([0,0.1]),SFVec2f([0.038,0.092]),SFVec2f([0.071,0.071]),SFVec2f([0.092,0.038]),SFVec2f([0.1,0])]),
                                      endCap_ : false,
                                      solid_ : false,
                                      spine_ : MFVec3f([SFVec3f([-15.2,1.4,2.2]),SFVec3f([-12,-0.8,2.2])]))))])]),

                    Transform(
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.7)]),
                      translation_ : SFVec3f([SFDouble(-17), SFDouble(-4.5), SFDouble(0)]),
                      children_ : [
                        Transform(
                          scale_ : SFVec3f([SFDouble(0.2), SFDouble(0.2), SFDouble(0.2)]),
                          /*Knot*/
                          child_ : 
                            Shape(
                              USE_ : SFString('Torus')),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(-1), SFDouble(0), SFDouble(1.7)]),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    Sphere(
                                      radius_ : 1.5),
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('rope'))))])]),

                    Transform(
                      DEF_ : SFString('RnS'),
                      children_ : [
                        Transform(
                          DEF_ : SFString('ropes'),
                          children_ : [
                            Transform(
                              rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-0.82)]),
                              translation_ : SFVec3f([SFDouble(7), SFDouble(-26), SFDouble(-2.5)]),
                              child_ : 
                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('rope')),
                                  geometry_ : 
                                    Extrusion(
                                      beginCap_ : false,
                                      creaseAngle_ : 0.76,
                                      crossSection_ : MFVec2f([SFVec2f([0.1,0]),SFVec2f([0.092,-0.038]),SFVec2f([0.071,-0.071]),SFVec2f([0.038,-0.092]),SFVec2f([0,-0.1]),SFVec2f([-0.038,-0.092]),SFVec2f([-0.071,-0.071]),SFVec2f([-0.092,-0.038]),SFVec2f([-0.1,0]),SFVec2f([-0.092,0.038]),SFVec2f([-0.071,0.071]),SFVec2f([-0.038,0.092]),SFVec2f([0,0.1]),SFVec2f([0.038,0.092]),SFVec2f([0.071,0.071]),SFVec2f([0.092,0.038]),SFVec2f([0.1,0])]),
                                      endCap_ : false,
                                      solid_ : false,
                                      spine_ : MFVec3f([SFVec3f([-33,0.9,2.5]),SFVec3f([-18.5,1.9,2.55])]))),
                              child_ : 
                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      USE_ : SFString('rope')),
                                  geometry_ : 
                                    Extrusion(
                                      beginCap_ : false,
                                      creaseAngle_ : 0.76,
                                      crossSection_ : MFVec2f([SFVec2f([0.1,0]),SFVec2f([0.092,-0.038]),SFVec2f([0.071,-0.071]),SFVec2f([0.038,-0.092]),SFVec2f([0,-0.1]),SFVec2f([-0.038,-0.092]),SFVec2f([-0.071,-0.071]),SFVec2f([-0.092,-0.038]),SFVec2f([-0.1,0]),SFVec2f([-0.092,0.038]),SFVec2f([-0.071,0.071]),SFVec2f([-0.038,0.092]),SFVec2f([0,0.1]),SFVec2f([0.038,0.092]),SFVec2f([0.071,0.071]),SFVec2f([0.092,0.038]),SFVec2f([0.1,0])]),
                                      endCap_ : false,
                                      solid_ : false,
                                      spine_ : MFVec3f([SFVec3f([-35.7,-0.8,2.5]),SFVec3f([-18.8,-0.8,2.55])]))))]),

                        Transform(
                          DEF_ : SFString('sling'),
                          rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-0.82)]),
                          translation_ : SFVec3f([SFDouble(-4), SFDouble(-15.3), SFDouble(0)]),
                          children_ : [
                            Transform(
                              children_ : [
                                Transform(
                                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.57)]),
                                  scale_ : SFVec3f([SFDouble(1), SFDouble(1.3), SFDouble(1)]),
                                  translation_ : SFVec3f([SFDouble(0.5), SFDouble(0), SFDouble(-1)]),
                                  children_ : [
                                    Transform(
                                      rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                                      children_ : [
                                        Transform(
                                          scale_ : SFVec3f([SFDouble(0.3), SFDouble(0.3), SFDouble(0.3)]),
                                          child_ : 
                                            Shape(
                                              DEF_ : SFString('halfsling'),
                                              appearance_ : 
                                                Appearance(
                                                  DEF_ : SFString('clear'),
                                                  material_ : 
                                                    Material(
                                                      transparency_ : 0.5)),
                                              geometry_ : 
                                                Extrusion(
                                                  crossSection_ : MFVec2f([SFVec2f([0,0]),SFVec2f([0,5]),SFVec2f([0.5,7]),SFVec2f([1,8]),SFVec2f([2,9]),SFVec2f([3,11]),SFVec2f([3.5,11.2]),SFVec2f([4,11]),SFVec2f([5,9]),SFVec2f([6,8]),SFVec2f([6.5,7]),SFVec2f([6.7,5]),SFVec2f([6.7,0]),SFVec2f([0,0])]),
                                                  spine_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.1,0,0])]))),
                                          children_ : [
                                            Transform(
                                              scale_ : SFVec3f([SFDouble(0.3), SFDouble(0.3), SFDouble(0.3)]),
                                              translation_ : SFVec3f([SFDouble(0), SFDouble(-3.5), SFDouble(11.5)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('Torus')),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(2)]),
                                                  child_ : 
                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          USE_ : SFString('rope')),
                                                      geometry_ : 
                                                        Sphere(
                                                          radius_ : 1.5)))])]),

                                        Transform(
                                          scale_ : SFVec3f([SFDouble(0.3), SFDouble(0.3), SFDouble(0.3)]),
                                          translation_ : SFVec3f([SFDouble(2), SFDouble(0), SFDouble(0)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('halfsling')),
                                          children_ : [
                                            Transform(
                                              scale_ : SFVec3f([SFDouble(0.3), SFDouble(0.3), SFDouble(0.3)]),
                                              translation_ : SFVec3f([SFDouble(0), SFDouble(-3.5), SFDouble(11.3)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('Torus')),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(2)]),
                                                  child_ : 
                                                    Shape(
                                                      appearance_ : 
                                                        Appearance(
                                                          USE_ : SFString('rope')),
                                                      geometry_ : 
                                                        Sphere(
                                                          radius_ : 1.5)))])]),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(1), SFDouble(-1), SFDouble(0)]),
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                Extrusion(
                                                  beginCap_ : false,
                                                  creaseAngle_ : 0.785,
                                                  crossSection_ : MFVec2f([SFVec2f([1,0]),SFVec2f([0.92,-0.38]),SFVec2f([0.71,-0.71]),SFVec2f([0.38,-0.92]),SFVec2f([0,-1]),SFVec2f([-0.38,-0.92]),SFVec2f([-0.71,-0.71]),SFVec2f([-0.92,-0.38]),SFVec2f([-1,0])]),
                                                  endCap_ : false,
                                                  solid_ : false,
                                                  spine_ : MFVec3f([SFVec3f([0,-1,0]),SFVec3f([0,1,0])])),
                                              appearance_ : 
                                                Appearance(
                                                  USE_ : SFString('clear'))))]),

                                    TouchSensor(
                                      DEF_ : SFString('LauncheeChoice'),
                                      description_ : SFString('launcher choice'))]),

                                Transform(
                                  DEF_ : SFString('projectiletransform'),
                                  scale_ : SFVec3f([SFDouble(0.01), SFDouble(0.01), SFDouble(0.01)]),
                                  children_ : [
                                    Switch(
                                      DEF_ : SFString('projectile'),
                                      whichChoice_ : 0,
                                      children_ : [
                                        Group(
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.7), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  geometry_ : 
                                                    Sphere(
                                                      radius_ : 0.7),
                                                  appearance_ : 
                                                    Appearance(
                                                      DEF_ : SFString('black'),
                                                      material_ : 
                                                        Material(
                                                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                          specularColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)])))))]),

                                        Group(
                                          children_ : [
                                            Transform(
                                              children_ : [
                                                Inline(
                                                  url_ : MFString([SFString("cow.wrl"), SFString("http://www.uoguelph.ca/~dchiu/cow.wrl")]))])]),

                                        Group(
                                          children_ : [
                                            Transform(
                                              rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
                                              scale_ : SFVec3f([SFDouble(0.4), SFDouble(0.4), SFDouble(0.4)]),
                                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.7), SFDouble(0)]),
                                              children_ : [
                                                Inline(
                                                  url_ : MFString([SFString("vrml_ginger.wrl"), SFString("http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl")]))])])])])])])])]),

                Transform(
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(18), SFDouble(2.5)]),
                  child_ : 
                    Shape(
                      geometry_ : 
                        Cylinder(
                          height_ : 8,
                          radius_ : 0.4),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              specularColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)])))),
                  /*Top Pivot*/),

                Transform(
                  DEF_ : SFString('verticalweight'),
                  children_ : [
                    Transform(
                      translation_ : SFVec3f([SFDouble(4), SFDouble(18), SFDouble(1.8)]),
                      child_ : 
                        Shape(
                          geometry_ : 
                            Box(
                              size_ : SFVec3f([SFDouble(1), SFDouble(10), SFDouble(0.5)])),
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('wood')))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(4), SFDouble(18), SFDouble(3.2)]),
                      child_ : 
                        Shape(
                          geometry_ : 
                            Box(
                              size_ : SFVec3f([SFDouble(1), SFDouble(10), SFDouble(0.5)])),
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('wood')))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(4), SFDouble(14), SFDouble(2.5)]),
                      /*CounterWeight*/
                      child_ : 
                        Shape(
                          geometry_ : 
                            Cylinder(
                              height_ : 4,
                              radius_ : 1.5),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  specularColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))))),

                    Transform(
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                      translation_ : SFVec3f([SFDouble(4), SFDouble(22), SFDouble(2.5)]),
                      child_ : 
                        Shape(
                          geometry_ : 
                            Cylinder(
                              height_ : 2.5,
                              radius_ : 0.3),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  specularColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)])))))]),

                Transform(
                  rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(1.57)]),
                  scale_ : SFVec3f([SFDouble(0.2), SFDouble(0.2), SFDouble(0.2)]),
                  translation_ : SFVec3f([SFDouble(-11.5), SFDouble(-1), SFDouble(2)]),
                  children_ : [
                    Transform(
                      DEF_ : SFString('screw'),
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                      child_ : 
                        Shape(
                          USE_ : SFString('Torus')),
                      children_ : [
                        Transform(
                          rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(7)]),
                          child_ : 
                            Shape(
                              geometry_ : 
                                Cylinder(
                                  height_ : 10,
                                  radius_ : 0.7),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      specularColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)])))))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(7)]),
                      children_ : [
                        Transform(
                          USE_ : SFString('screw'))]),
                  /*Release Pin*/

                    Transform(
                      DEF_ : SFString('Pin'),
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(-3)]),
                      children_ : [
                        Transform(
                          USE_ : SFString('screw'))])]),

                Transform(
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(5)]),
                  child_ : 
                    Shape(
                      USE_ : SFString('plank')),
                  children_ : [
                    Transform(
                      USE_ : SFString('angledsupport')),

                    Transform(
                      USE_ : SFString('angledsupport2')),

                    Transform(
                      USE_ : SFString('verticalsupport')),

                    Transform(
                      USE_ : SFString('horizontalsupport')),

                    Transform(
                      rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
                      scale_ : SFVec3f([SFDouble(0.6), SFDouble(1), SFDouble(1)]),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(-11), SFDouble(-2.5)]),
                      children_ : [
                        Transform(
                          USE_ : SFString('horizontalsupport'))]),

                    Transform(
                      rotation_ : SFRotation([SFDouble(0), SFDouble(0), SFDouble(1), SFDouble(-1.57)]),
                      scale_ : SFVec3f([SFDouble(0.6), SFDouble(1), SFDouble(1)]),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(5), SFDouble(-10)]),
                      children_ : [
                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(0.4)]),
                          child_ : 
                            Shape(
                              USE_ : SFString('plank')))]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0.6)]),
                      children_ : [
                        Transform(
                          USE_ : SFString('panel'))])]),

                Transform(
                  translation_ : SFVec3f([SFDouble(10), SFDouble(-1), SFDouble(2.5)]),
                  child_ : 
                    Shape(
                      DEF_ : SFString('Axle'),
                      geometry_ : 
                        Box(
                          size_ : SFVec3f([SFDouble(1), SFDouble(1), SFDouble(8)])),
                      appearance_ : 
                        Appearance(
                          USE_ : SFString('wood'))),
                  children_ : [
                    Transform(
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(4.5)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('wheel'),
                          geometry_ : 
                            Cylinder(
                              radius_ : 2),
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('wood'))),
                      child_ : 
                        Shape(
                          DEF_ : SFString('tracks'),
                          geometry_ : 
                            Sphere(
                              radius_ : 1.5),
                          appearance_ : 
                            Appearance(
                              USE_ : SFString('black'))),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0.55), SFDouble(0)]),
                          child_ : 
                            Shape(
                              DEF_ : SFString('hub'),
                              geometry_ : 
                                Sphere(
                                  radius_ : 1.5),
                              appearance_ : 
                                Appearance(
                                  USE_ : SFString('black'))))]),

                    Transform(
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(-4.5)]),
                      child_ : 
                        Shape(
                          USE_ : SFString('wheel')),
                      child_ : 
                        Shape(
                          USE_ : SFString('tracks')),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-0.55), SFDouble(0)]),
                          child_ : 
                            Shape(
                              USE_ : SFString('hub')))])]),

                Transform(
                  translation_ : SFVec3f([SFDouble(-10), SFDouble(-1), SFDouble(2.5)]),
                  child_ : 
                    Shape(
                      USE_ : SFString('Axle')),
                  children_ : [
                    Transform(
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(4.5)]),
                      child_ : 
                        Shape(
                          USE_ : SFString('wheel')),
                      child_ : 
                        Shape(
                          USE_ : SFString('tracks')),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0.55), SFDouble(0)]),
                          child_ : 
                            Shape(
                              USE_ : SFString('hub')))]),

                    Transform(
                      rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(1.57)]),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(-4.5)]),
                      child_ : 
                        Shape(
                          USE_ : SFString('wheel')),
                      child_ : 
                        Shape(
                          USE_ : SFString('tracks')),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-0.55), SFDouble(0)]),
                          child_ : 
                            Shape(
                              USE_ : SFString('hub')))]),

                    Transform(
                      rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-0.6)]),
                      translation_ : SFVec3f([SFDouble(0), SFDouble(100), SFDouble(400)]),
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(1), SFDouble(3), SFDouble(0)]),
                          children_ : [
                            Viewpoint(
                              description_ : SFString('Side'))]),

                        Transform(
                          USE_ : SFString('launch')),

                        Transform(
                          children_ : [
                            TouchSensor(
                              USE_ : SFString('LauncheeChoice')),

                            Switch(
                              USE_ : SFString('projectilename')),

                            Transform(
                              translation_ : SFVec3f([SFDouble(2.5), SFDouble(0), SFDouble(0)]),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    Box(
                                      size_ : SFVec3f([SFDouble(5), SFDouble(0.5), SFDouble(0.5)])),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          transparency_ : 1))))]),

                        Transform(
                          scale_ : SFVec3f([SFDouble(0.5), SFDouble(0.5), SFDouble(0.5)]),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(-1), SFDouble(0)]),
                          children_ : [
                            TouchSensor(
                              USE_ : SFString('weightselector')),

                            Switch(
                              USE_ : SFString('Weight')),

                            Transform(
                              translation_ : SFVec3f([SFDouble(8), SFDouble(0), SFDouble(0)]),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    Box(
                                      size_ : SFVec3f([SFDouble(17), SFDouble(1), SFDouble(0.5)])),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          transparency_ : 1))))])]),

                    Transform(
                      DEF_ : SFString('ProjectileTransform'),
                      translation_ : SFVec3f([SFDouble(14.25), SFDouble(1.25), SFDouble(0)]),
                      children_ : [
                        Switch(
                          USE_ : SFString('projectile')),

                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
                          translation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                          children_ : [
                            Viewpoint(
                              description_ : SFString('Projectile Cam'),
                              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(15)]))])]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(20), SFDouble(2), SFDouble(0)]),
                      children_ : [
                        Transform(
                          DEF_ : SFString('Front'),
                          rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57)]),
                          children_ : [
                            Viewpoint(
                              description_ : SFString('Fore'))])]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(-8), SFDouble(4), SFDouble(0)]),
                      children_ : [
                        Transform(
                          rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.57)]),
                          children_ : [
                            Viewpoint(
                              description_ : SFString('Aft'))])]),

                    Script(
                      DEF_ : SFString('WeightScript'),
                      field_ : [
                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('set_boolean'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('whichchoice'),
                          accessType_ : SFString("outputOnly")),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('CounterWeight'),
                          accessType_ : SFString("outputOnly")),
                      ],
ecmascript:eval (0


, function initialize ()
{
	whichchoice =0;
	CounterWeight=100;
}

, function set_boolean ( boolean_input, eventTime)
{

	if ( boolean_input== false ) { return; } // ignore the unclick
        whichchoice = whichchoice +1;
	if (whichchoice == 0)CounterWeight=50.00;
	if (whichchoice == 1)CounterWeight=500.00;
	if (whichchoice == 2)CounterWeight=1000.00;
	if (whichchoice == 3)CounterWeight=10000.00;
        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }


        Browser.println ('CounterWeight ='+CounterWeight);
})),

                    Script(
                      DEF_ : SFString('LauncheeScript'),
                      field_ : [
                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('set_boolean'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('whichchoice'),
                          accessType_ : SFString("outputOnly")),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('ProjectileWeight'),
                          accessType_ : SFString("outputOnly")),
                      ],
ecmascript:eval (0

, function set_boolean (boolean_input, eventTime)
{
	if ( boolean_input== false ) { return; } // ignore unclick
        whichchoice = whichchoice +1;
        if (whichchoice == 0)ProjectileWeight=10.00;
        if (whichchoice == 1)ProjectileWeight=1000.00;
	if (whichchoice == 2)ProjectileWeight=5;

	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }
	Browser.println ('Projectile Weight'+ProjectileWeight);
})),

                    Script(
                      DEF_ : SFString('PigdogMonkScript'),
                      field_ : [
                        field(
                          type_ : SFString("SFBool"),
                          name_ : SFString('set_boolean'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("SFInt32"),
                          name_ : SFString('whichchoice'),
                          accessType_ : SFString("outputOnly")),
                      ],
ecmascript:eval (0

, function set_boolean (boolean_input, eventTime)
{
	if ( boolean_input== false ) { return; } // ignore unclick

        whichchoice = whichchoice +1;

        if ( whichchoice ==2 )  whichchoice = 0;


})),

                    Script(
                      DEF_ : SFString('Mover'),
                      field_ : [
                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('set_fraction'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('set_MassCounterWeight'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('set_MassProjectileWeight'),
                          accessType_ : SFString("inputOnly")),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('MassCounterWeight'),
                          accessType_ : SFString("initializeOnly"),
                          value_ : SFString('1')),

                        field(
                          type_ : SFString("SFFloat"),
                          name_ : SFString('MassProjectileWeight'),
                          accessType_ : SFString("initializeOnly"),
                          value_ : SFString('1')),

                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('transparent'),
                          accessType_ : SFString("outputOnly")),

                        field(
                          type_ : SFString("SFVec3f"),
                          name_ : SFString('value_changed'),
                          accessType_ : SFString("outputOnly")),
                      ],
ecmascript:eval (0

, function initialize ()
{
	MassCounterWeight=100;
	MassProjectileWeight=10;
	Browser.println ('MassCounterWeight =' + MassCounterWeight);
	Browser.println ('MassProjectileWeight =' + MassProjectileWeight);
}

, function set_MassProjectileWeight (value, timestamp)
{
	MassProjectileWeight = value;
	Browser.println ('new MassProjectileWeight =' + MassProjectileWeight);
}
, function set_MassCounterWeight (value2, timestamp)
{
	MassCounterWeight = value2;
	Browser.println ('new MassCounterWeight =' + MassCounterWeight);
}


, function set_fraction ( fraction, eventTime )
{
	var TrebuchetHeight=45;
	var Height =25;
      	x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;
	// start at TrebuchetHeight and keep along z axis (z=zero)
	y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);
        z = 0;
        transparent = new SFVec3f (1,1,1);
     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)
		{
		x=x-10;
		y=y+1;
		transparent = new SFVec3f(.01, .01, .01);
			}

	value_changed = new SFVec3f (x, y, z);
	Browser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);
}))])]),

            TimeSensor(
              DEF_ : SFString('clock'),
              cycleInterval_ : 10),

            PositionInterpolator(
              DEF_ : SFString('verticalweightpath'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.2), SFFloat(0.2), SFFloat(0.3), SFFloat(0.9)]),
              keyValue_ : MFVec3f([SFVec3f([1.4,1.6,0]),SFVec3f([1,-8,0]),SFVec3f([-3.5,-12,0]),SFVec3f([-3.5,-12,0]),SFVec3f([1.2,-8,0]),SFVec3f([1.4,1.6,0])])),

            OrientationInterpolator(
              DEF_ : SFString('flingerangles'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.1), SFFloat(0.2), SFFloat(0.2), SFFloat(0.3), SFFloat(0.9)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.82), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.77), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1.57), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1.57), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-0.77), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.82)])),

            PositionInterpolator(
              DEF_ : SFString('pinpath'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.01), SFFloat(0.95), SFFloat(1)]),
              keyValue_ : MFVec3f([SFVec3f([0,0,-3]),SFVec3f([0,0,-10]),SFVec3f([0,0,-10]),SFVec3f([0,0,-3])])),

            OrientationInterpolator(
              DEF_ : SFString('RnSAngels'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.7), SFFloat(1)]),
              keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-3.14), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)])),

            PositionInterpolator(
              DEF_ : SFString('invisiable'),
              key_ : MFFloat([SFFloat(0), SFFloat(0.2), SFFloat(0.98), SFFloat(0.99)]),
              keyValue_ : MFVec3f([SFVec3f([1,1,1]),SFVec3f([0.01,0.01,0.01]),SFVec3f([0.01,0.01,0.01]),SFVec3f([1,1,1])])),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('invisiable')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('invisiable'),
              toField_ : SFString('set_scale'),
              toNode_ : SFString('projectiletransform')),

            ROUTE(
              fromField_ : SFString('CounterWeight'),
              fromNode_ : SFString('WeightScript'),
              toField_ : SFString('set_MassCounterWeight'),
              toNode_ : SFString('Mover')),

            ROUTE(
              fromField_ : SFString('ProjectileWeight'),
              fromNode_ : SFString('LauncheeScript'),
              toField_ : SFString('set_MassProjectileWeight'),
              toNode_ : SFString('Mover')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('Mover')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('Mover'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('ProjectileTransform')),

            ROUTE(
              fromField_ : SFString('transparent'),
              fromNode_ : SFString('Mover'),
              toField_ : SFString('set_scale'),
              toNode_ : SFString('ProjectileTransform')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Launch'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('clock')),

            ROUTE(
              fromField_ : SFString('isActive'),
              fromNode_ : SFString('Launch'),
              toField_ : SFString('set_boolean'),
              toNode_ : SFString('PigdogMonkScript')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Launch'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('PigDogSound')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('Launch'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('MonkSound')),

            ROUTE(
              fromField_ : SFString('whichchoice'),
              fromNode_ : SFString('PigdogMonkScript'),
              toField_ : SFString('whichChoice'),
              toNode_ : SFString('PigdogMonk')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('LauncheeChoice'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('HolyHandGrenadeSound')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('LauncheeChoice'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('CowSound')),

            ROUTE(
              fromField_ : SFString('touchTime'),
              fromNode_ : SFString('LauncheeChoice'),
              toField_ : SFString('set_startTime'),
              toNode_ : SFString('HamsterSound')),

            ROUTE(
              fromField_ : SFString('isActive'),
              fromNode_ : SFString('LauncheeChoice'),
              toField_ : SFString('set_boolean'),
              toNode_ : SFString('LauncheeScript')),

            ROUTE(
              fromField_ : SFString('whichchoice'),
              fromNode_ : SFString('LauncheeScript'),
              toField_ : SFString('whichChoice'),
              toNode_ : SFString('projectile')),

            ROUTE(
              fromField_ : SFString('whichchoice'),
              fromNode_ : SFString('LauncheeScript'),
              toField_ : SFString('whichChoice'),
              toNode_ : SFString('projectilename')),

            ROUTE(
              fromField_ : SFString('isActive'),
              fromNode_ : SFString('weightselector'),
              toField_ : SFString('set_boolean'),
              toNode_ : SFString('WeightScript')),

            ROUTE(
              fromField_ : SFString('whichchoice'),
              fromNode_ : SFString('WeightScript'),
              toField_ : SFString('whichChoice'),
              toNode_ : SFString('Weight')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('flingerangles')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('flingerangles'),
              toField_ : SFString('set_rotation'),
              toNode_ : SFString('flinger')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('verticalweightpath')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('verticalweightpath'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('verticalweight')),

            ROUTE(
              fromField_ : SFString('fraction_changed'),
              fromNode_ : SFString('clock'),
              toField_ : SFString('set_fraction'),
              toNode_ : SFString('pinpath')),

            ROUTE(
              fromField_ : SFString('value_changed'),
              fromNode_ : SFString('pinpath'),
              toField_ : SFString('set_translation'),
              toNode_ : SFString('Pin'))]));
void main() { exit(0); }
