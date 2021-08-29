###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='fivedeepinternalroute.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='revisions'),
    meta(content='Test 5-deep EXTERNPROTO nesting. This is a test of browser ability to internal ROUTE events for 5 PROTO node nested within each other. 5 PROTO node, consisting of a "ringshaped" Extrusion geometry are nested, one within the other, within the other. Each PROTO has a TouchSensor node that routes its "isOver" SFBool event to a Background node "set_bind" field. The result should be: As the pointing device passes over each "ring" in the geometry, the corresponding background color should change to match the color of the ring.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/PROTO/fivedeepinternalroute.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='fivedeepinternalroute.x3d'),
    ProtoDeclare(name='Proto1',
      ProtoBody=ProtoBody(
        children=[
        ProtoDeclare(name='Proto2',
          ProtoBody=ProtoBody(
            children=[
            ProtoDeclare(name='Proto3',
              ProtoBody=ProtoBody(
                children=[
                ProtoDeclare(name='Proto4',
                  ProtoBody=ProtoBody(
                    children=[
                    ProtoDeclare(name='Proto5',
                      ProtoBody=ProtoBody(
                        children=[
                        Group(
                          children=[
                          TouchSensor(DEF='TOUCH5',description='touch to activate 5'),
                          Background(DEF='BACK5',groundColor=[(0.5,0,0.5)],skyColor=[(0.5,0,0.5)]),
                          Transform(scale=(1.2,1.2,1.2),translation=(0,0,1),
                            children=[
                            Shape(
                              appearance=Appearance(
                                material=Material(diffuseColor=(1,0,1))),
                              geometry=Extrusion(creaseAngle=1,crossSection=[(1,0),(0.92388,0.382683),(0.707107,0.707106),(0.382684,0.923879),(1.26759e-006,1),(-0.382682,0.92388),(-0.707105,0.707108),(-0.923879,0.382685),(-1,2.53518e-006),(-0.923881,-0.382681),(-0.707109,-0.707105),(-0.382687,-0.923878),(-3.80277e-006,-1),(0.38268,-0.923881),(0.707104,-0.70711),(0.923878,-0.382688),(1,0)],orientation=[(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0)],scale=[(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6),(0.6,0.6)],solid=False,spine=[(1,0,0),(0.92388,0.382683,0),(0.707107,0.707106,0),(0.382684,0.923879,0),(1.26759e-006,1,0),(-0.382682,0.92388,0),(-0.707105,0.707108,0),(-0.923879,0.382685,0),(-1,2.53518e-006,0),(-0.923881,-0.382681,0),(-0.707109,-0.707105,0),(-0.382687,-0.923878,0),(-3.80277e-006,-1,0),(0.38268,-0.923881,0),(0.707104,-0.70711,0),(0.923878,-0.382688,0),(1,0,0)]))])]),
                        ROUTE(fromField='isOver',fromNode='TOUCH5',toField='set_bind',toNode='BACK5')])),
                    Group(
                      children=[
                      TouchSensor(DEF='TOUCH4',description='touch to activate 4'),
                      Background(DEF='BACK4',groundColor=[(0.5,0.5,0)],skyColor=[(0.5,0.5,0)]),
                      Transform(scale=(1.2,1.2,1.2),translation=(0,0,0.75),
                        children=[
                        Shape(
                          appearance=Appearance(
                            material=Material(diffuseColor=(1,1,0))),
                          geometry=Extrusion(creaseAngle=1,crossSection=[(1,0),(0.92388,0.382683),(0.707107,0.707106),(0.382684,0.923879),(1.26759e-006,1),(-0.382682,0.92388),(-0.707105,0.707108),(-0.923879,0.382685),(-1,2.53518e-006),(-0.923881,-0.382681),(-0.707109,-0.707105),(-0.382687,-0.923878),(-3.80277e-006,-1),(0.38268,-0.923881),(0.707104,-0.70711),(0.923878,-0.382688),(1,0)],orientation=[(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0)],scale=[(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4)],solid=False,spine=[(1,0,0),(0.92388,0.382683,0),(0.707107,0.707106,0),(0.382684,0.923879,0),(1.26759e-006,1,0),(-0.382682,0.92388,0),(-0.707105,0.707108,0),(-0.923879,0.382685,0),(-1,2.53518e-006,0),(-0.923881,-0.382681,0),(-0.707109,-0.707105,0),(-0.382687,-0.923878,0),(-3.80277e-006,-1,0),(0.38268,-0.923881,0),(0.707104,-0.70711,0),(0.923878,-0.382688,0),(1,0,0)])),
                        ProtoInstance(name='Proto5')])]),
                    ROUTE(fromField='isOver',fromNode='TOUCH4',toField='set_bind',toNode='BACK4')])),
                Group(
                  children=[
                  TouchSensor(DEF='TOUCH3',description='touch to activate 3'),
                  Background(DEF='BACK3',groundColor=[(0,0,0.5)],skyColor=[(0,0,0.5)]),
                  Transform(scale=(1.2,1.2,1.2),translation=(0,0,0.75),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0,0,1))),
                      geometry=Extrusion(creaseAngle=1,crossSection=[(1,0),(0.92388,0.382683),(0.707107,0.707106),(0.382684,0.923879),(1.26759e-006,1),(-0.382682,0.92388),(-0.707105,0.707108),(-0.923879,0.382685),(-1,2.53518e-006),(-0.923881,-0.382681),(-0.707109,-0.707105),(-0.382687,-0.923878),(-3.80277e-006,-1),(0.38268,-0.923881),(0.707104,-0.70711),(0.923878,-0.382688),(1,0)],orientation=[(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0)],scale=[(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4)],solid=False,spine=[(1,0,0),(0.92388,0.382683,0),(0.707107,0.707106,0),(0.382684,0.923879,0),(1.26759e-006,1,0),(-0.382682,0.92388,0),(-0.707105,0.707108,0),(-0.923879,0.382685,0),(-1,2.53518e-006,0),(-0.923881,-0.382681,0),(-0.707109,-0.707105,0),(-0.382687,-0.923878,0),(-3.80277e-006,-1,0),(0.38268,-0.923881,0),(0.707104,-0.70711,0),(0.923878,-0.382688,0),(1,0,0)])),
                    ProtoInstance(name='Proto4')])]),
                ROUTE(fromField='isOver',fromNode='TOUCH3',toField='set_bind',toNode='BACK3')])),
            Group(
              children=[
              TouchSensor(DEF='TOUCH2',description='touch to activate 2'),
              Background(DEF='BACK2',groundColor=[(0,0.5,0)],skyColor=[(0,0.5,0)]),
              Transform(scale=(1.2,1.2,1.2),translation=(0,0,0.75),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,1,0))),
                  geometry=Extrusion(creaseAngle=1,crossSection=[(1,0),(0.92388,0.382683),(0.707107,0.707106),(0.382684,0.923879),(1.26759e-006,1),(-0.382682,0.92388),(-0.707105,0.707108),(-0.923879,0.382685),(-1,2.53518e-006),(-0.923881,-0.382681),(-0.707109,-0.707105),(-0.382687,-0.923878),(-3.80277e-006,-1),(0.38268,-0.923881),(0.707104,-0.70711),(0.923878,-0.382688),(1,0)],orientation=[(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0)],scale=[(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4)],solid=False,spine=[(1,0,0),(0.92388,0.382683,0),(0.707107,0.707106,0),(0.382684,0.923879,0),(1.26759e-006,1,0),(-0.382682,0.92388,0),(-0.707105,0.707108,0),(-0.923879,0.382685,0),(-1,2.53518e-006,0),(-0.923881,-0.382681,0),(-0.707109,-0.707105,0),(-0.382687,-0.923878,0),(-3.80277e-006,-1,0),(0.38268,-0.923881,0),(0.707104,-0.70711,0),(0.923878,-0.382688,0),(1,0,0)])),
                ProtoInstance(name='Proto3')])]),
            ROUTE(fromField='isOver',fromNode='TOUCH2',toField='set_bind',toNode='BACK2')])),
        Group(
          children=[
          TouchSensor(DEF='TOUCH1',description='touch to activate 1'),
          Background(DEF='BACK1',groundColor=[(0.5,0,0)],skyColor=[(0.5,0,0)]),
          Transform(scale=(1.2,1.2,1.2),translation=(0,0,0.75),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0))),
              geometry=Extrusion(creaseAngle=1,crossSection=[(1,0),(0.92388,0.382683),(0.707107,0.707106),(0.382684,0.923879),(1.26759e-006,1),(-0.382682,0.92388),(-0.707105,0.707108),(-0.923879,0.382685),(-1,2.53518e-006),(-0.923881,-0.382681),(-0.707109,-0.707105),(-0.382687,-0.923878),(-3.80277e-006,-1),(0.38268,-0.923881),(0.707104,-0.70711),(0.923878,-0.382688),(1,0)],orientation=[(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0)],scale=[(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4)],solid=False,spine=[(1,0,0),(0.92388,0.382683,0),(0.707107,0.707106,0),(0.382684,0.923879,0),(1.26759e-006,1,0),(-0.382682,0.92388,0),(-0.707105,0.707108,0),(-0.923879,0.382685,0),(-1,2.53518e-006,0),(-0.923881,-0.382681,0),(-0.707109,-0.707105,0),(-0.382687,-0.923878,0),(-3.80277e-006,-1,0),(0.38268,-0.923881,0),(0.707104,-0.70711,0),(0.923878,-0.382688,0),(1,0,0)])),
            ProtoInstance(name='Proto2')])]),
        ROUTE(fromField='isOver',fromNode='TOUCH1',toField='set_bind',toNode='BACK1')])),
    Group(
      children=[
      NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
      Viewpoint(description='Front View',position=(0,0,25)),
      Background(groundColor=[(0,0,0)]),
      Transform(translation=(0,-3,0),
        children=[
        Transform(translation=(0,5,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='_0'),
              texture=ImageTexture(DEF='OAK',url=["oak.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/PROTO/oak.jpg"])),
            geometry=Cylinder(height=10,radius=0.75))]),
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(USE='OAK')),
            geometry=Box(size=(10,2,10)))]),
        Transform(rotation=(1,0,0,1.57),translation=(0,8.5,0),
          children=[
          ProtoInstance(name='Proto1')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for fivedeepinternalroute.py")
