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
    meta(content='Alupis.x3d',name='title'),
    meta(content='Alupis Autonomous Underwater Vehicle (AUV) with acoustic modem and side-looking sonar.',name='description'),
    meta(content='Jeffrey D Weekley',name='creator'),
    meta(content='25 October 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='Alupis.jpg',name='Image'),
    meta(content='PerryLogo.png',name='Image'),
    meta(content='Alupis AUV with Acoustic Modem and Side Looking Sonar',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/Alupis.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Alupis AUV by Perry Corp.',position=(0,0,3)),
    Background(skyColor=[(0.25,0.4,0.8)]),
    Transform(translation=(0.3,0,0),
      children=[
      Group(DEF='AlupisAUV',
        children=[
        Group(DEF='MainBody',
          children=[
          Transform(DEF='Hull',
            children=[
            Transform(DEF='Body',rotation=(0,0,1,-1.57),scale=(0.1,1,0.1),translation=(0.65,0,0),
              children=[
              Shape(
                appearance=Appearance(DEF='AlupisBlack',
                  material=Material(diffuseColor=(0.25,0.25,0.33),shininess=0.75,specularColor=(0.6,0.75,0.75))),
                geometry=Extrusion(creaseAngle=1.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(1,1),(1,1),(1,1),(0.7,0.7),(0.4,0.4)],spine=[(0,-1.95,0),(0,0,0),(0,0.1,0),(0,0.175,0),(0,0.2,0)]))])])])]),
      Group(DEF='TailSection',
        children=[
        Transform(DEF='TailFin',scale=(0.4,0.4,0.4),translation=(-1.3,0,0),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(0,0,0.3),(-0.3,0,0.46),(-0.36,0,0.485),(-0.4,0,0.49),(-0.8,0,0.4575),(-0.84,0,0.45),(-0.88,0,0.43),(-0.9,0,0.4),(-0.9,0,0.115),(-0.845,0,0),(0,0,0)])),
            appearance=Appearance(DEF='AlupisOrange',
              material=Material(diffuseColor=(0.9,0.45,0.45)))),
          Transform(scale=(1.25,1.25,1.25),translation=(-0.6,0.15,0.15),
            children=[
            Inline(DEF='PropulsionThruster',url=["ThrusterTechnadyne.x3d","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/ThrusterTechnadyne.x3d","ThrusterTechnadyne.wrl","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/ThrusterTechnadyne.wrl"])]),
          Transform(
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(-0.3,-0.005,0.45),(-0.5,-0.005,0.45),(-0.5,-0.005,0.25),(-0.3,-0.005,0.25),(-0.3,-0.005,0.45)])),
              appearance=Appearance(
                texture=ImageTexture(url=["PerryLogo.png","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/PerryLogo.png"])))])]),
        Transform(rotation=(1,0,0,1.57),
          children=[
          Transform(USE='TailFin')]),
        Transform(rotation=(1,0,0,-1.57),
          children=[
          Transform(USE='TailFin')]),
        Transform(rotation=(1,0,0,3.14),
          children=[
          Transform(USE='TailFin')])]),
      Group(DEF='SideLookingSonar',
        children=[
        Transform(rotation=(1,0,0,1.57),translation=(-0.25,0,0),
          children=[
          Transform(
            children=[
            Shape(
              geometry=Box(size=(0.5,0.25,0.03)),
              appearance=Appearance(USE='AlupisOrange'))]),
          Transform(
            children=[
            Shape(
              geometry=Box(size=(0.575,0.24,0.04)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.25,0.25,0.33))))])])]),
      Group(DEF='Modem',
        children=[
        Transform(
          children=[
          Transform(scale=(0.05,0.55,0.05),translation=(0.65,0,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.25,0.25,0.33))),
              geometry=Extrusion(creaseAngle=1.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(1,1),(1,1),(1,1),(0.95,0.95)],spine=[(0,0,0),(0,0.1,0),(0,0.175,0),(0,0.2,0)]))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Alupis.py")
