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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='Propeller.x3d',name='title'),
    meta(content='Brazilian Naval Academy Training Ship',name='description'),
    meta(content='Claudio Coreixas',name='creator'),
    meta(content='20 October 2009',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.en.mar.mil.br',name='reference'),
    meta(content='ships parts',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/Propeller.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='propeller',
      children=[
      Transform(
        children=[
        Group(DEF='blade',
          children=[
          Transform(rotation=(0,0,1,0.2745),
            children=[
            Shape(DEF='propBlades',
              geometry=Extrusion(ccw=False,convex=False,crossSection=[(0,0),(0.2,0.35),(0.4,0.65),(1,0.98),(1.27,1.4),(1.3,1.7),(1.29,1.9),(1.2,2.1),(1,2.35),(0.6,2.5),(0.2,2.5),(-0.2,2.3),(-0.4,2.2),(-0.6,2),(-0.8,1.7),(-0.83,1.4),(-0.8,1.1),(-0.7,0.8),(0,0)],solid=False,spine=[(0,0,0),(0.005,0,0)]),
              appearance=Appearance(
                material=Material(ambientIntensity=0.022727,diffuseColor=(0.314286,0.074365,0),shininess=0.040816,specularColor=(0.760204,0.582954,0))))])]),
        Transform(rotation=(1,0,0,1.57079),
          children=[
          Shape(USE='blade')]),
        Transform(rotation=(1,0,0,3.1416),
          children=[
          Shape(USE='blade')]),
        Transform(rotation=(1,0,0,-1.57079),
          children=[
          Shape(USE='blade')]),
        Transform(
          children=[
          Shape(DEF='propAxis',
            geometry=Extrusion(ccw=False,convex=False,crossSection=[(0.000,0.450),(0.225,0.390),(0.390,0.225),(0.450,0.000),(0.390,-0.225),(0.225,-0.390),(0.000,-0.450),(-0.225,-0.390),(-0.390,-0.225),(-0.450,0.000),(-0.390,0.225),(-0.225,0.390),(0.000,0.450)],solid=False,spine=[(-0.42,0,0),(0.42,0,0)]),
            appearance=Appearance(
              material=Material(ambientIntensity=0.022727,diffuseColor=(0.314286,0.074365,0),shininess=0.040816,specularColor=(0.760204,0.582954,0))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Propeller.py")
