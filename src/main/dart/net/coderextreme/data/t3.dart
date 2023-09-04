// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
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
              name_ : SFString('generator'),
              content_ : SFString('DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js')),

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
          component_ : 
            component(
              name_ : SFString('Networking'),
              level_ : 2)],
          component_ : 
            component(
              name_ : SFString('Core'),
              level_ : 2)),
      Scene_ : 
        Scene(
          children_ : [
            NavigationInfo(
              type_ : MFString([SFString("EXAMINE"), SFString("FLY"), SFString("WALK")]),
              avatarSize_ : MFFloat([SFFloat(200), SFFloat(200), SFFloat(120)]),
              speed_ : 3),

            WorldInfo(
              title_ : SFString('Arts Mapper')),

            Viewpoint(
              description_ : SFString('looking North'),
              position_ : SFVec3f([SFDouble(0), SFDouble(60), SFDouble(110)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-0.699999988079071)]),
              fieldOfView_ : 0.7853981),

            Transform(
              translation_ : SFVec3f([SFDouble(-468), SFDouble(0), SFDouble(315)]),
              children_ : [
                Anchor(
                  description_ : SFString('High Peak Community Arts'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.3), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('People Express'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0.6), SFDouble(0), SFDouble(0.6)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('QArts/Studios'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0.6), SFDouble(0), SFDouble(0.6)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('First Movement'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0.2)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('City Arts'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0.6), SFDouble(0), SFDouble(0.6)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('Indigo Dance Group (Salamanda Tandem)'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.3), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('Watering Seeds'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.3), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('Fased In The Arts'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.3), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('27a Access Artspace'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0.2)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('Bamboozle Theatre Company'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.3), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('Mantle Community Arts'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.3), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('Artlink East'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.3), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('Creations'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.3), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('New Perspectives'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0.2)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))]),

                Anchor(
                  description_ : SFString('UKan2'),
                  url_ : MFString([SFString("javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"), SFString("javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');")]),
                  children_ : [
                    Transform(
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]),
                                  emissiveColor_ : SFColor([SFDouble(0), SFDouble(0.3), SFDouble(1)]))),
                          geometry_ : 
                            Sphere(
                              radius_ : 5.1)))])])]));
void main() { exit(0); }
