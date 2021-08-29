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
    meta(content='CondominiumName.x3d',name='title'),
    meta(content='Ms Ng, Hwee Ping',name='creator'),
    meta(content='7 September 2004',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/ZenCondominium/CondominiumName.x3d',name='identifier'),
    meta(content='Name of Condominium Created Using Extrusion',name='description'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(rotation=(1,0,0,4.34),
      children=[
      Shape(DEF='T',
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.7,1))),
        geometry=Extrusion(creaseAngle=0.785,crossSection=[(0,0),(0.2,0),(0.2,0.5),(0.4,0.5),(0.4,0.7),(-0.2,0.7),(-0.2,0.5),(0,0.5),(0,0)],spine=[(0,0,0),(0,0.15,0)]))]),
    Transform(rotation=(1,0,0,4.34),translation=(0.5,0,0),
      children=[
      Shape(DEF='H',
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.7,1))),
        geometry=Extrusion(creaseAngle=0.785,crossSection=[(0,0),(0.2,0),(0.2,0.2),(0.4,0.2),(0.4,0),(0.6,0),(0.6,0.7),(0.4,0.7),(0.4,0.5),(0.2,0.5),(0.2,0.7),(0,0.7),(0,0)],spine=[(0,0,0),(0,0.15,0)]))]),
    Transform(rotation=(1,0,0,4.34),translation=(1.2,0,0),
      children=[
      Shape(DEF='E',
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.7,1))),
        geometry=Extrusion(creaseAngle=0.785,crossSection=[(0,0),(0.6,0),(0.6,0.2),(0.2,0.2),(0.2,0.3),(0.6,0.3),(0.6,0.4),(0.2,0.4),(0.2,0.5),(0.6,0.5),(0.6,0.7),(0,0.7),(0,0)],spine=[(0,0,0),(0,0.15,0)]))]),
    Transform(rotation=(1,0,0,4.34),translation=(2.3,0,0),
      children=[
      Shape(DEF='Z',
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.7,1))),
        geometry=Extrusion(creaseAngle=0.785,crossSection=[(0,0),(0.6,0),(0.6,0.2),(0.3,0.2),(0.6,0.5),(0.6,0.7),(0,0.7),(0,0.5),(0.3,0.5),(0,0.2),(0,0)],spine=[(0,0,0),(0,0.15,0)]))]),
    Transform(rotation=(1,0,0,4.34),translation=(3.05,0,0),
      children=[
      Shape(USE='E')]),
    Transform(rotation=(1,0,0,4.34),translation=(3.8,0,0),
      children=[
      Shape(DEF='N',
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.7,1))),
        geometry=Extrusion(creaseAngle=0.785,crossSection=[(0,0),(0.2,0),(0.2,0.2),(0.4,0),(0.6,0),(0.6,0.7),(0.4,0.7),(0.4,0.5),(0.2,0.7),(0,0.7),(0,0)],spine=[(0,0,0),(0,0.15,0)]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CondominiumName.py")
