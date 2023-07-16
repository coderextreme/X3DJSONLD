// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('Networking'),
              level_ : 2),
          component_ : 
            component(
              name_ : SFString('Core'),
              level_ : 2),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('t3.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('view3dscene, https://castle-engine.io/view3dscene.php')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Andreas Plesch and John Carlson')),

            meta(
              name_ : SFString('source'),
              content_ : SFString('t1.wrl')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Test Case for Proto Expander')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/license.html')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('12 May 2020')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding'))]),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              type_ : MFString([SFString("EXAMINE"), SFString("FLY"), SFString("WALK")]),
              speed_ : 3,
              avatarSize_ : MFFloat([SFFloat(200), SFFloat(200), SFFloat(120)])),

            WorldInfo(
              title_ : SFString('Arts Mapper')),

            Viewpoint(
              description_ : SFString('looking North'),
              position_ : SFVec3f([SFDouble(0), SFDouble(60), SFDouble(110)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.699999988079071)]),
              fieldOfView_ : 0.785398125648499),

            Transform(
              translation_ : SFVec3f([SFDouble(-468), SFDouble(0), SFDouble(315)]),
              children_ : [
                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('High Peak Community Arts'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.300000011920929), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('People Express'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0.600000023841858), SFDouble(0), SFDouble(0.600000023841858)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('QArts/Studios'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0.600000023841858), SFDouble(0), SFDouble(0.600000023841858)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('First Movement'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0.200000002980232)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('City Arts'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0.600000023841858), SFDouble(0), SFDouble(0.600000023841858)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Indigo Dance Group (Salamanda Tandem)'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.300000011920929), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Watering Seeds'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.300000011920929), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Fased In The Arts'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.300000011920929), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('27a Access Artspace'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0.200000002980232)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Bamboozle Theatre Company'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.300000011920929), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Mantle Community Arts'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.300000011920929), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Artlink East'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.300000011920929), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('Creations'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.300000011920929), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('New Perspectives'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0.200000002980232)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])]),

                Anchor(
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  description_ : SFString('UKan2'),
                  children_ : [
                    Transform(
                      children_ : [
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.300000011920929), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.10000002384186))])])])]));
void main() { exit(0); }
