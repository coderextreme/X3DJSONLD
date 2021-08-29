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
    meta(content='Fin.x3d',name='title'),
    meta(content='1 September 2004',name='created'),
    meta(content='26 October 2004',name='modified'),
    meta(content='Tay Yeong Kiang Winston',name='creator'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/Fin.x3d',name='identifier'),
    meta(content='Creates the rear fin section of the hovercraft',name='description'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='Fin',
      children=[
      Transform(DEF='RFin',translation=(3,0,0),
        children=[
        Shape(DEF='RightFin',
          geometry=Extrusion(crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],orientation=[(1,0,0,0.245),(1,0,0,0.245),(1,0,0,0.245)],scale=[(0.1,1),(0.1,0.75),(0.1,0.5)],spine=[(0,0,0),(0,3,-0.75),(0,6,-1.5)]),
          appearance=Appearance(
            material=Material(ambientIntensity=0.25641,diffuseColor=(0.222308,0.15428,0.0),shininess=0.020408,specularColor=(0.678571,0.661796,0.528818))))]),
      Transform(DEF='LFin',translation=(-3,0,0),
        children=[
        Shape(USE='RightFin')]),
      Shape(DEF='LowerFin',
        geometry=Extrusion(crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.1,1.5),(0.1,1.5),(0.1,1.5)],spine=[(-3,1.5,-1),(0,1.5,-1),(3,1.5,-1)]),
        appearance=Appearance(
          material=Material(ambientIntensity=0.25641,diffuseColor=(0.222308,0.15428,0.0),shininess=0.020408,specularColor=(0.678571,0.661796,0.528818)))),
      Shape(DEF='UpperFin',
        geometry=Extrusion(crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.1,1.5),(0.1,1.5),(0.1,1.5)],spine=[(-3,4,-1.8),(0,4,-1.8),(3,4,-1.8)]),
        appearance=Appearance(
          material=Material(ambientIntensity=0.25641,diffuseColor=(0.222308,0.15428,0.0),shininess=0.020408,specularColor=(0.678571,0.661796,0.528818))))]),
    Viewpoint(description='Side View',orientation=(0,1,0,1.57),position=(10,4,0))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Fin.py")
