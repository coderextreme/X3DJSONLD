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
    meta(content='Mk46Torpedo.x3d',name='title'),
    meta(content='U.S. Navy Mk46 torpedo',name='description'),
    meta(content='7 April 2003',name='created'),
    meta(content='27 February 2016',name='modified'),
    meta(content='Jeffrey Weekley and UW3303 course',name='creator'),
    meta(content='http://www.chinfo.navy.mil/navpalib/factfile/weapons/wep-torp.html',name='photo'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/weaps/mk-46.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Torpedoes/Mk46Torpedo.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Only unclassified open resources were used to create this model."]),
    Inline(url=["../../Tools/Authoring/GridXZ_20x20Movable.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Movable.x3d","../../Tools/Authoring/GridXZ_20x20Movable.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Movable.wrl"]),
    Viewpoint(description='Mk46 Torpedo',position=(0,0,5)),
    Group(
      children=[
      Transform(DEF='torpedo',rotation=(0.0,0.0,1.0,1.57079),translation=(2.66,0,0),
        children=[
        Transform(DEF='torpedoband1',translation=(0.0,2.53,0.0),
          children=[
          Shape(
            geometry=Cylinder(bottom=False,height=2.13,radius=0.163,top=False),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.2,0.1),specularColor=(0.15,0.25,0.15))))]),
        Transform(DEF='torpedonose',rotation=(1.0,0.0,0.0,3.1416),scale=(0.613,0.3,0.613),translation=(0.0,1.485,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.05,0.05,0.075),specularColor=(0.1,0.1,0.15))),
            geometry=Extrusion(creaseAngle=1.785,crossSection=[(0.267,0.000),(0.231,-0.134),(0.134,-0.231),(0.0,-0.267),(-0.134,-0.231),(-0.231,-0.134),(-0.267,0.000),(-0.231,0.134),(-0.134,0.231),(0.0,0.267),(0.134,0.231),(0.231,0.134),(0.267,0.0)],scale=[(1.00,1.00),(0.95,0.95),(0.88,0.88),(0.76,0.76),(0.48,0.48)],spine=[(0.00,0.00,0.00),(0.00,0.10,0.00),(0.00,0.20,0.00),(0.00,0.30,0.00),(0.00,0.40,0.00)]))]),
        Transform(scale=(0.613,0.25,0.613),translation=(0,1.95,0),
          children=[
          Group(DEF='controlfins',
            children=[
            Transform(rotation=(0,-1,0,5.27),translation=(0.0,0.125,0.0),
              children=[
              Transform(DEF='ControlFin1'),
              Transform(DEF='ControlFin2',rotation=(0,1,0,3.17)),
              Transform(DEF='ControlFin3',rotation=(0,1,0,1.57)),
              Transform(DEF='ControlFin4',rotation=(0.0,1.0,0.0,4.74))])]),
          Group(DEF='stabilzerfins',
            children=[
            Transform(translation=(0.0,8.15,0.0),
              children=[
              Transform(DEF='stabilizerfin1',translation=(0.19,-0.625,0.0),
                children=[
                Shape(
                  geometry=Box(size=(0.175,0.75,0.02)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.1,0.2,0.1))))]),
              Transform(DEF='stabilizerfin2',rotation=(0.0,1.0,0.0,1.57),translation=(0.0,-0.625,0.19),
                children=[
                Shape(
                  geometry=Box(size=(0.175,0.75,0.02)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.1,0.2,0.1))))]),
              Transform(DEF='stabilizerfin3',rotation=(0.0,1.0,0.0,3.1416),
                children=[
                Transform(USE='stabilizerfin1')]),
              Transform(DEF='stabilizerfin4',rotation=(0.0,1.0,0.0,3.1416),
                children=[
                Transform(USE='stabilizerfin2')])])]),
          Group(DEF='TailSection',
            children=[
            Transform(DEF='torpedotail',rotation=(1.0,0.0,0.0,3.1416),translation=(0.0,7.9375,0.0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.05,0.05,0.075),specularColor=(0.1,0.1,0.15))),
                geometry=Extrusion(creaseAngle=2.0,crossSection=[(0.267,0.000),(0.231,-0.134),(0.134,-0.231),(0.0,-0.267),(-0.134,-0.231),(-0.231,-0.134),(-0.267,0.000),(-0.231,0.134),(-0.134,0.231),(0.0,0.267),(0.134,0.231),(0.231,0.134),(0.267,0.0)],endCap=False,scale=[(0.342,0.342),(0.500,0.500),(0.643,0.643),(0.766,0.766),(0.866,0.866),(0.940,0.940),(0.985,0.985),(1.0,1.0)],spine=[(0.0,0.0,0.000),(0.0,0.114,0.000),(0.0,0.266,0.000),(0.0,0.453,0.000),(0.0,0.670,0.000),(0.0,0.910,0.000),(0.0,1.166,0.000),(0.0,1.431,0.0)])),
              Transform(scale=(1,1.5,1),translation=(0,0.125,0),
                children=[
                Shape(DEF='torpedoshroud',
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.05,0.05,0.075),specularColor=(0.1,0.1,0.15))),
                  geometry=Extrusion(creaseAngle=.785,crossSection=[(0.00,0.00),(-0.02,0.00),(-0.02,-0.10),(-0.06,-0.20),(-0.04,-0.20),(0.00,-0.10),(0.00,0.00)],solid=False,spine=[(0.20,0.00,0.00),(0.19,0.00,-0.07),(0.15,0.00,-0.13),(0.10,0.00,-0.17),(0.03,0.00,-0.20),(-0.03,0.00,-0.20),(-0.10,0.00,-0.17),(-0.15,0.00,-0.13),(-0.19,0.00,-0.07),(-0.20,0.00,0.00),(-0.19,0.00,0.07),(-0.15,0.00,0.13),(-0.10,0.00,0.17),(-0.03,0.00,0.20),(0.03,0.00,0.20),(0.10,0.00,0.17),(0.15,0.00,0.13),(0.19,0.00,0.07),(0.20,0.00,0.00)]))]),
              Group(DEF='torpedostator',
                children=[
                Transform(DEF='propeller',translation=(0.0,-0.15,0.0),
                  children=[
                  Group(DEF='statorblade1',
                    children=[
                    Transform(DEF='torpedostatorblade1',
                      children=[
                      Transform(rotation=(-1.0,0.0,0.0,3.43),translation=(0.075,0.0,0.0),
                        children=[
                        Shape(
                          geometry=Box(size=(0.125,0.09,0.015)),
                          appearance=Appearance(
                            material=Material(diffuseColor=(0.05,0.05,0.075))))])]),
                    Transform(DEF='torpedostatorblade1A',
                      children=[
                      Transform(rotation=(1,0,0,3.43),translation=(-0.075,0.0,0.0),
                        children=[
                        Shape(
                          geometry=Box(size=(0.125,0.09,0.015)),
                          appearance=Appearance(
                            material=Material(diffuseColor=(0.05,0.05,0.075))))])])]),
                  Group(DEF='statorblade2',
                    children=[
                    Transform(rotation=(0,1,0,2.04),
                      children=[
                      Group(USE='statorblade1')])]),
                  Group(DEF='statorblade3',
                    children=[
                    Transform(rotation=(0,-1,0,5.27),
                      children=[
                      Group(USE='statorblade1')])]),
                  Transform(DEF='statorbladeshaft',translation=(0.0,0,0.0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.05,0.05,0.075))),
                      geometry=Cylinder(height=0.1,radius=0.05))]),
                  Transform(DEF='statorcrankshaft',translation=(0.0,0.1,0.0),
                    children=[
                    Shape(
                      geometry=Cylinder(height=.125,radius=.025),
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.0,0.0,0.75))))])]),
                OrientationInterpolator(DEF='PropSpin',key=[0.0,0.5,1.0],keyValue=[(0.0,1.0,0.0,0.00),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,6.28)]),
                TimeSensor(DEF='Clock',cycleInterval=0.5,loop=True)]
                #  Spins the propellor and stator once every 4 seconds 
                )])])])])]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='PropSpin'),
    ROUTE(fromField='value_changed',fromNode='PropSpin',toField='rotation',toNode='propeller')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Mk46Torpedo.py")
