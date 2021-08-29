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
    meta(content='RapierMissilePrototype.x3d',name='title'),
    meta(content='Oliver Tan',name='creator'),
    meta(content='14 January 2004',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='Rapier missile prototype definition.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/RapierMissilePrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='http://www.army-technology.com/projects/jernas/jernas1.html',name='reference'),
    meta(content='Rapier, Rapier missile, missile',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  This NavigationInfo node is added to many scenes, making examination of objects easier. 
    children=[
    ProtoDeclare(name='RapierMissile',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='rocketAppearance',type='SFNode',
          children=[
          Appearance(
            material=Material(DEF='RocketMetal',diffuseColor=(.3,.6,.9)))])]),
      ProtoBody=ProtoBody(
        children=[
        Viewpoint(description='Rapier missile example'),
        Viewpoint(description='Rapier missile oblique',orientation=(0.177,0.973,-0.145,0.8128),position=(7,-1.5,7.8)),
        Transform(rotation=(0,1,0,1.57),translation=(2,0,0),
          children=[
          Transform(rotation=(1,0,0,1.571),
            #  This is only a representational model. It is not created to scale. 
            children=[
            Group(
              children=[
              Transform(DEF='RocketCone',
                children=[
                Transform(translation=(0,3,0),
                  children=[
                  Shape(
                    IS=IS(
                      connect=[
                      connect(nodeField='appearance',protoField='rocketAppearance')]),
                    geometry=Cone(bottomRadius=0.5))])]),
              Transform(translation=(0,2,0),
                children=[
                Shape(
                  IS=IS(
                    connect=[
                    connect(nodeField='appearance',protoField='rocketAppearance')]),
                  geometry=Cylinder(height=0.1,radius=0.505))]),
              Transform(DEF='RocketBody',translation=(0,-4,0),
                children=[
                Transform(scale=(0.5,4,0.5),
                  children=[
                  Shape(
                    IS=IS(
                      connect=[
                      connect(nodeField='appearance',protoField='rocketAppearance')]),
                    geometry=Extrusion(creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(1.0,1.0),(1.0,1.0),(0.5,0.5)],spine=[(0,1.5,0),(0,-0.95,0),(0,-1,0)]))])]),
              Transform(DEF='BigFinsGroup',translation=(0,-3.5,0),
                children=[
                Group(
                  children=[
                  Transform(translation=(0.5,0,0),
                    children=[
                    Transform(DEF='BigFin',rotation=(1,0,0,-1.571),scale=(1,0.5,1.3),
                      children=[
                      Shape(
                        IS=IS(
                          connect=[
                          connect(nodeField='appearance',protoField='rocketAppearance')]),
                        geometry=Extrusion(creaseAngle=0.785,crossSection=[(0.0,0.0),(0.0,2.0),(1.0,0.1),(1.0,0.0),(0.0,0.0)],spine=[(0.0,-0.05,0.0),(0.0,0.05,0.0)]))])]),
                  Transform(rotation=(0,1,0,1.571),translation=(0,0,-0.5),
                    children=[
                    Transform(USE='BigFin')]),
                  Transform(rotation=(0,1,0,3.142),translation=(-0.5,0,0),
                    children=[
                    Transform(USE='BigFin')]),
                  Transform(rotation=(0,1,0,4.712),translation=(0,0,0.5),
                    children=[
                    Transform(USE='BigFin')])])]),
              Transform(DEF='SmallFinsGroup',translation=(0,-7.5,0),
                children=[
                Group(
                  children=[
                  Transform(translation=(0.5,0,0),
                    children=[
                    Transform(DEF='SmallFin',rotation=(1,0,0,-1.571),scale=(0.5,0.5,1),
                      children=[
                      Shape(
                        IS=IS(
                          connect=[
                          connect(nodeField='appearance',protoField='rocketAppearance')]),
                        geometry=Extrusion(creaseAngle=0.785,crossSection=[(0.0,0.1),(0.0,1.0),(1.0,0.0),(0.0,0.1)],spine=[(0.0,-0.05,0.0),(0.0,0.05,0.0)]))])]),
                  Transform(rotation=(0,1,0,1.571),translation=(0,0,-0.5),
                    children=[
                    Transform(USE='SmallFin')]),
                  Transform(rotation=(0,1,0,3.142),translation=(-0.5,0,0),
                    children=[
                    Transform(USE='SmallFin')]),
                  Transform(rotation=(0,1,0,4.712),translation=(0,0,0.5),
                    children=[
                    Transform(USE='SmallFin')])])])])])])])),
    Anchor(description='RapierMissileExample',url=["RapierMissileExample.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/RapierMissileExample.x3d","RapierMissileExample.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/RapierMissileExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["Rapier Missile Prototype","contains prototype definitions","","Click on text to see these models in","RapierMissileExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.6,0.6))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RapierMissilePrototype.py")
