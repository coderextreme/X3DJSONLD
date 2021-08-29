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
    meta(content='GunMount.x3d',name='title'),
    meta(content='Dual 30mm gun mount',name='description'),
    meta(content='LT Scott Rosetti, USNR',name='creator'),
    meta(content='3 September 2003',name='created'),
    meta(content='18 October 2003',name='modified'),
    meta(content='Osa-II, 30mm, patrol craft',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/MissileAttackBoatOsaII/GunMount.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundColor=[(0.8,0.8,1)],skyColor=[(0.8,0.8,1)]),
    Transform(
      children=[
      Transform(DEF='GUN_MOUNT',translation=(3.1,0,.4),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.2,.2,.2))),
          geometry=Extrusion(creaseAngle=1.5,crossSection=[(1,0),(.707,.707),(0,1),(-.707,.707),(-1,0),(-.707,-.707),(0,-1),(.707,-.707),(1,0)],scale=[(.3,.3),(.3,.3)],solid=False,spine=[(0,0,0),(0,0,.1)])),
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.2,.2,.2))),
          geometry=Extrusion(creaseAngle=0.5,crossSection=[(1,0),(.707,.707),(0,1),(-.707,.707),(-1,0),(-.707,-.707),(0,-1),(.707,-.707),(1,0)],scale=[(.3,.3),(.2,.2)],solid=False,spine=[(0,0,.1),(0,0,.2)])),
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.6,.6,.6))),
          geometry=Extrusion(creaseAngle=1.5,crossSection=[(1,0),(.707,.707),(0,1),(-.707,.707),(-1,0),(-.707,-.707),(0,-1),(.707,-.707),(1,0)],scale=[(.2,.2),(.24,.24),(.24,.24),(.2,.2),(.1,.1)],solid=False,spine=[(0,0,.2),(0,0,.24),(0,0,.36),(0,0,.4),(0,0,.43)])),
        Transform(rotation=(0,1,0,1.57),scale=(.025,.025,.8),translation=(.22,-.075,.3),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.6))),
            geometry=Extrusion(creaseAngle=1.5,crossSection=[(1,0),(.707,.707),(0,1),(-.707,.707),(-1,0),(-.707,-.707),(0,-1),(.707,-.707),(1,0)],scale=[(1.1,1.1),(1,1)],solid=False,spine=[(0,0,0),(0,0,.3)]))]),
        Transform(rotation=(0,1,0,1.57),scale=(.025,.025,.8),translation=(.22,0.075,.3),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.6))),
            geometry=Extrusion(creaseAngle=1.5,crossSection=[(1,0),(.707,.707),(0,1),(-.707,.707),(-1,0),(-.707,-.707),(0,-1),(.707,-.707),(1,0)],scale=[(1.1,1.1),(1,1)],solid=False,spine=[(0,0,0),(0,0,.3)]))])]
        #  forward gun mount 
        )]),
    Transform(rotation=(0,1,0,1.57),
      children=[
      Viewpoint(description='Gun mount',orientation=(0,0,1,1.57))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GunMount.py")
